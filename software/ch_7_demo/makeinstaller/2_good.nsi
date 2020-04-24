; MyCalc.nsi
;
; This script is based on example1.nsi, but it remember the directory, 
; has uninstall support and (optionally) installs start menu shortcuts.
;
; It will install MyCalc.nsi into a directory that the user selects,

;--------------------------------

; The name of the installer
Name "MyCalc"

; The file to write
OutFile "Mycalc_dif_v2.0.exe"

; Request application privileges for Windows Vista
RequestExecutionLevel admin

; Build Unicode installer
Unicode True

; The default installation directory
InstallDir $PROGRAMFILES\MyCalc

; Registry key to check for directory (so if you install again, it will 
; overwrite the old one automatically)
InstallDirRegKey HKLM "Software\MyCalc" "Install_Dir"

;--------------------------------

; Pages

Page components
Page directory
Page instfiles

UninstPage uninstConfirm
UninstPage instfiles

;--------------------------------

; The stuff to install
Section "MyCalc (required)"

  SectionIn RO
  
  ; Set output path to the installation directory.
  SetOutPath $INSTDIR
  
  ; Put file there
  File "MyCalc.exe"
  
  ; Write the installation path into the registry
  WriteRegStr HKLM SOFTWARE\MyCalc "Install_Dir" "$INSTDIR"
  
  ; Write the uninstall keys for Windows
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\MyCalc" "DisplayName" "NSIS MyCalc"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\MyCalc" "UninstallString" '"$INSTDIR\uninstall.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\MyCalc" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\MyCalc" "NoRepair" 1
  WriteUninstaller "$INSTDIR\uninstall.exe"
  
SectionEnd

; Optional section (can be disabled by the user)
Section "Start Menu Shortcuts"

  CreateDirectory "$SMPROGRAMS\MyCalc"
  CreateShortcut "$SMPROGRAMS\MyCalc\Uninstall.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
  CreateShortcut "$SMPROGRAMS\MyCalc\MyCalc (MakeNSISW).lnk" "$INSTDIR\MyCalc.exe" "" "$INSTDIR\MyCalc.exe" 0
  
SectionEnd

;--------------------------------

; Uninstaller

Section "Uninstall"
  
  ; Remove registry keys
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\MyCalc"
  DeleteRegKey HKLM SOFTWARE\MyCalc

  ; Remove files and uninstaller
  Delete $INSTDIR\MyCalc.exe
  Delete $INSTDIR\uninstall.exe

  ; Remove shortcuts, if any
  Delete "$SMPROGRAMS\MyCalc\*.*"

  ; Remove directories used
  RMDir "$SMPROGRAMS\MyCalc"
  RMDir "$INSTDIR"

SectionEnd
