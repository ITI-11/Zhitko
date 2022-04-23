@echo off
cls

set /p q="Enter the place of creation "
set /p w="Enter the extension of copied files "
set /p e="Enter the place of destination "

xcopy "%q%\*.%w%" "%e%"

pause
