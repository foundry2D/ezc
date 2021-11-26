"./Tools/nodejs_bin/node.exe" make.js -v vs2019 --compile --dynlib
if %errorlevel%==0 exit 0
