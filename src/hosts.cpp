#include <array>
#include <future>
#include "hosts.h"
#include "Config.h"
#include "Logger.h"

//extern Logger g_Logger;
//extern Config g_Config;

_getaddrinfo getaddrinfo_orig;

auto *config = new Config ();
auto *logger = new Logger (config);
static constexpr std::array<std::string_view, 2> dnscheck = { "dns.google", "cloudflare" };
static constexpr std::array<std::string_view, 4> blockList = { "google", "doubleclick", "qualaroo.com", "fbsbx.com" };
static const bool wpad = config->getConfig ("Skip_wpad");

// check if ads hostname
bool is_blockhost (std::string_view nodename) {
	//static bool wpad = config->getConfig ("Skip_wpad");
	
	
	if (0 == nodename.compare ("wpad"))
		return wpad ? true : false;
	for (auto &hostname : blockList) {
		if (std::string_view::npos != nodename.find (hostname))
			return true;
	}
	return false;
}

int WSAAPI getaddrinfo_hook (
	_In_opt_	PCSTR nodename,
	_In_opt_	PCSTR servname,
	_In_opt_	const ADDRINFOA* hints,
	_Out_		PADDRINFOA* res)
{

	if (nodename == nullptr)
		return getaddrinfo_orig (nodename, servname, hints, res);

	std::string nnodename (nodename);
	
	auto isblock = std::async (std::launch::async, is_blockhost, nnodename);
	auto result = getaddrinfo_orig (nodename, servname, hints, res);
	if (0 == result) {
		if (isblock.get ()) {
			for (auto ptr = *res; nullptr != ptr; ptr = ptr->ai_next) {
				auto ipv4 = reinterpret_cast<sockaddr_in*>(ptr->ai_addr);
				ipv4->sin_addr.S_un.S_addr = INADDR_ANY;
			}
			logger->Log ("blocked - " + nnodename);
		}
		else {
			logger->Log ("allowed - " + nnodename);
		}
	}
	if (true == logger->is_active() &&
		true == wpad)
	{
		for (auto &hostname : dnscheck) {
			if (std::string_view::npos != nnodename.find (hostname))
				logger->Log ("custom dns currently in use - " + nnodename +
							 " turn on Skip_wpad in config.ini or switch to adguard dns");
		}
	}
	return result;
}

