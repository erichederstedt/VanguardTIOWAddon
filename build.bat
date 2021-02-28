@ECHO OFF

SETLOCAL

SET target_output_directory=F:\ArmaWork\#Exports\@VanguardTIOWAddonDev\addons
SET target_sign_file="F:\Steam\steamapps\common\Arma 3 Tools\DSSignFile\Dolf.biprivatekey"
SET target_exclude_directory= ^
'.git',^
'vng_terrain',^
'vng_alive',^
'vng_thunderbolt_fix'

FOR /F "usebackq tokens=*" %%d IN (`powershell.exe -NoProfile -Command "Get-ChildItem -Directory -Filter '*' -Exclude %target_exclude_directory% | ForEach-Object { $_.Name }"`) DO (
    ECHO Building directory: %%d
    armake_w64.exe build -f -k %target_sign_file% %%d "%target_output_directory%\%%d.pbo" 
)

if exist "*.tmp" (
    ECHO Removing armake tmp files.
    FOR %%G IN ("*tmp") DO DEL %%G
)

ENDLOCAL