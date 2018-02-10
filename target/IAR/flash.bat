@REM This batch file has been generated by the IAR Embedded Workbench
@REM C-SPY Debugger, as an aid to preparing a command line for running
@REM the cspybat command line utility using the appropriate settings.
@REM
@REM Note that this file is generated every time a new debug session
@REM is initialized, so you may want to move or rename the file before
@REM making changes.
@REM
@REM You can launch cspybat by typing the name of this batch file followed
@REM by the name of the debug file (usually an ELF/DWARF or UBROF file).
@REM
@REM Read about available command line parameters in the C-SPY Debugging
@REM Guide. Hints about additional command line parameters that may be
@REM useful in specific cases:
@REM   --download_only   Downloads a code image without starting a debug
@REM                     session afterwards.
@REM   --silent          Omits the sign-on message.
@REM   --timeout         Limits the maximum allowed execution time.
@REM 


@echo off 

@echo on 

"C:\Program Files (x86)\IAR Systems\Embedded Workbench 7.5\common\bin\cspybat" "C:\Program Files (x86)\IAR Systems\Embedded Workbench 7.5\arm\bin\armproc.dll" "C:\Program Files (x86)\IAR Systems\Embedded Workbench 7.5\arm\bin\armJET.dll" "%~dp0debug\application.out" --plugin "C:\Program Files (x86)\IAR Systems\Embedded Workbench 7.5\arm\bin\armbat.dll" --device_macro "C:\Program Files (x86)\IAR Systems\Embedded Workbench 7.5\arm\config\debugger\NXP\LPC5460x.dmac" --macro "%~dp0SPIFIMAP_LPC546xx.mac" --flash_loader "C:\Program Files (x86)\IAR Systems\Embedded Workbench 7.5\arm\config\flashloader\NXP\FlashNXPLPC5460xM4F512K.board" --download_only --backend -f "%~dp0flash.driver.xcl"


@echo off 