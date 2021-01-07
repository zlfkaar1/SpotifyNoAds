#pragma once
#include "stdafx.h"
#include <fstream>
#include <string>
#include "Config.h"

class Logger {

public:
	Logger (Config* config) {
		
		m_isEnable = config->getConfig ("Log");
		if (m_isEnable) {
			m_log.open ("blockthespot_log.txt", std::ios::out | std::ios::app);
			m_log << "BlockTheSpot - Build date: " << __TIMESTAMP__ << std::endl;
		}
	}

	~Logger () {
		if (m_isEnable) {
			m_log.flush ();
			m_log.close ();
		}
	}

	void Log (std::string_view log) {
		if (m_isEnable)
			m_log << log << std::endl;
	}

private:
	bool m_isEnable = false;
	std::ofstream m_log;

};
