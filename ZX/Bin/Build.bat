@ECHO OFF
IF NOT "%XDev%"=="" GOTO XDev
ECHO Please set system variable XDev=X:\Path\To\XDev
PAUSE
EXIT

:XDev

SET MainMod=Klad
SET CodeAdr=32832
SET DataAdr=50000
SET Modules=Rsrc.rel
SET Include=-I ..\Lib\C -I ..\Lib\Obj
SET Target=TAP
SET Clean=FALSE

%XDev%\ZXDev\Bin\Build.bat %1
