; MyCalcInstaller.nsi
;
; This script is perhaps one of the simplest NSIs you can make. All of the
; optional settings are left to their default settings. The installer simply 
; prompts the user asking them where to install, and drops a copy of MyCalcInstaller.nsi
; there. 

;--------------------------------

; The name of the installer
Name "MyCalcInstaller"

; The file to write
OutFile "MyCalcInstaller_1.0.exe"

; Request application privileges for Windows Vista
RequestExecutionLevel user

; Build Unicode installer
Unicode True

; The default installation directory
InstallDir $DESKTOP\mycalc

;--------------------------------

; Pages

Page directory
Page instfiles

;--------------------------------

; The stuff to install
Section "" ;No components page, name is not important

  ; Set output path to the installation directory.
  SetOutPath $INSTDIR
  
  ; Put file there
  File MyCalc.exe
  
SectionEnd ; end the section
