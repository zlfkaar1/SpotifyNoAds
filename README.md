[![Build status](https://ci.appveyor.com/api/projects/status/31l6ynm0a1fhr2vs/branch/master?svg=true)](https://ci.appveyor.com/project/mrpond/blockthespot/branch/master)  [![Discord](https://discord.com/api/guilds/807273906872123412/widget.png)](https://discord.gg/p43cusgUPm)

<center>
    <h3 align="center"><a href="https://en.wikipedia.org/wiki/2020_Thai_protests">Support the 2020 Thai protests</a></h3>
    <h3 align="center">#WhatsHappeningInThailand</h3>
    <h3 align="center"><a href="https://twitter.com/search?q=%23ม็อบ13กุมภา">#ม็อบ13กุมภา</a></h3>
    <h3 align="center">Help me stop the dictatorship in Thailand and Myanmar!</h3>
    <h3 align="center">#CivilDisobedienceMovement</h3>
    <h3 align="center">#JusticeForMyanmar</h3>
    <h3 align="center">#Save_Myanmar</h3>
    <h3 align="center">Today 13 February 2021 police attack pro-democracy demonstrator in Thailand!</h3>
    <h3 align="center">Southeast Asia strong together!</h3>
</center>

<center>
    <h1 align="center">BlockTheSpot</h1>
    <h4 align="center">A multi-purpose adblocker and skip-bypass for the <strong>Windows</strong> Spotify desktop application.</h4>
    <h5 align="center">Please support Spotify by purchasing premium</h5>
    <p align="center">
        <strong>Last updated:</strong> 10 December 2020<br>
        <strong>Last tested version:</strong> 1.1.53.605.g2788eafc
    </p> 
</center>

#### Important checks prior to install:
0. Update Windows, Update Spotify/other software, update BlockTheSpot
1. Goto "Windows Security" -> "Virus & Threat Protection"
2. Click "Allowed threats" -> "Remove all allowed threats"

### Features:
* Blocks all banner/video/audio ads within the app
* Retains friend, vertical video and radio functionality
* Unlocks the skip function for any track

:warning: This mod is for the [**Desktop Application**](https://www.spotify.com/download/windows/) of Spotify on Windows, **not the Microsoft Store version**.

#### Installation/Update:
* Just download and run [BlockTheSpot.bat](https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/mrpond/BlockTheSpot/blob/master/BlockTheSpot.bat)
or
1. Browse to your Spotify installation folder `%APPDATA%\Spotify`
2. Download `chrome_elf.zip` from [releases](https://github.com/mrpond/BlockTheSpot/releases)
3. Unzip and replace `chrome_elf.dll` and `config.ini` 

#### Uninstall:
* Just run uninstall.bat
or
* Reinstall Spotify 

#### Known Issues:  
* BlockTheSpot will have issues blocking ads on the alpha version of Spotify. To identify this, Look into Spotify version and see if there is `-a` in the end. If so, you have an Alpha Version of Spotify. To go back and use BlockTheSpot perfectly on normal Spotify, [Click here](http://download.spotify.com/SpotifyFullSetup.exe) to download the Latest Spotify Full Setup.  
* Optional Feature "Remove Upgrade Button" will not work with Spicetify, also might have issues with alpha Spotify.  
* It will also have issues with latest Spotify where the user Avatar will be blank.   

#### Note:
* "chrome_elf.dll" gets replaced by the Spotify installer each time it updates, make sure to replace it after an update.  
* Spicetify users have to reapply BlockTheSpot after applying a Spicetify theme.  
* The ad banner may appear if your network uses [Web Proxy Auto-Discovery Protocol](https://en.wikipedia.org/wiki/Web_Proxy_Auto-Discovery_Protocol)
    * Setting `Skip_wpad = 1` in config.ini may help
* For Spotify Premium users, setting `Block_BannerOnly = 1` will only block the banner at home
* If the automatic install/uninstall scripts do not work, please contact [rednek46](https://github.com/rednek46)
* For more support and discussions, Join our [Discord Server](https://discord.gg/p43cusgUPm) 


