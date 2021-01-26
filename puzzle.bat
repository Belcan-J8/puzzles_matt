start /b "" %comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\Common7\Tools\VsDevCmd.bat"
rmdir bin /s /q
cmake.exe source -Hsource -Bbin
devenv bin\puzzle.sln /Build
copy bin\debug\puzzle.exe "puzzle.exe"