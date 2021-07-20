@echo off
powershell -Command "& {Invoke-WebRequest -UseBasicParsing 'https://raw.githubusercontent.com/Dav-Forks-lab/BlockTheSpot/master/install.ps1' | Invoke-Expression}"
pause
exit