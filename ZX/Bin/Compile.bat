@ECHO OFF
IF NOT "%XDev%"=="" GOTO XDev
ECHO Please set system variable XDev=X:\Path\To\XDev
PAUSE
EXIT

:XDev

SET MainMod=Klad
SET Include=-I ..\Lib\C -I ..\Lib\Obj
SET Clean=FALSE

%XDev%\ZXDev\Bin\Compile.bat %1
