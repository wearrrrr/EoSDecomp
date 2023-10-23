
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UINT mainCRTStartup(void)

{
  int iVar1;
  PWSTR CmdLine;
  uint ShowState;
  HMODULE hCurrInstance;
  UINT result;
  int *piVar2;
  int extraout_ECX;
  HINSTANCE hPrevInstance;
  OSVERSIONINFOA osInfoA;
  _STARTUPINFOA startupInfo;
  int local_24;
  uint local_20;
  OSVERSIONINFOA *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0046ffa0;
  uStack_c = 0x45d752;
  osInfoA.szCSDVersion[124] = '^';
  osInfoA.szCSDVersion[125] = -0x29;
  osInfoA.szCSDVersion[126] = 'E';
  osInfoA.szCSDVersion[127] = '\0';
  local_1c = &osInfoA;
  osInfoA.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&osInfoA);
                    /* "The operating system is Windows 7, Windows Server 2008, Windows Vista,
                       Windows Server 2003, Windows XP, or Windows 2000." */
  __osplatform = osInfoA.dwPlatformId;
  __winmajor = osInfoA.dwMajorVersion;
  __winminor = osInfoA.dwMinorVersion;
  __osver = osInfoA.dwBuildNumber & 0x7fff;
                    /* Set a certain flag if the platformId is not 2 */
  if (osInfoA.dwPlatformId != 2) {
    __osver = __osver | 0x8000;
  }
  __winver = osInfoA.dwMajorVersion * 256 + osInfoA.dwMinorVersion;
  hCurrInstance = GetModuleHandleA((LPCSTR)0x0);
  if ((*(short *)&hCurrInstance->unused == 0x5a4d) &&
     (piVar2 = (int *)((int)&hCurrInstance->unused + hCurrInstance[0xf].unused), *piVar2 == 0x4550))
  {
    if (*(short *)(piVar2 + 6) == 0x10b) {
      if (0xe < (uint)piVar2[0x1d]) {
        iVar1 = piVar2[0x3a];
        goto LAB_0045d807;
      }
    }
    else if ((*(short *)(piVar2 + 6) == 0x20b) && (0xe < (uint)piVar2[0x21])) {
      iVar1 = piVar2[0x3e];
LAB_0045d807:
      local_20 = (uint)(iVar1 != 0);
      goto LAB_0045d80d;
    }
  }
  local_20 = 0;
LAB_0045d80d:
  iVar1 = __heap_init();
  if (iVar1 == 0) {
    _fast_error_exit(0x1c);
  }
  iVar1 = __mtinit();
  if (iVar1 == 0) {
    _fast_error_exit(0x10);
  }
  __RTC_Initialize();
  local_8 = (undefined *)0x0;
  iVar1 = __ioinit();
  if (iVar1 < 0) {
    __amsg_exit(0x1b);
  }
  __acmdln = GetCommandLineA();
  __aenvptr = ___crtGetEnvironmentStringsA();
  iVar1 = __setargv(extraout_ECX);
  if (iVar1 < 0) {
    __amsg_exit(8);
  }
  iVar1 = __setenvp();
  if (iVar1 < 0) {
    __amsg_exit(9);
  }
  local_24 = __cinit();
  if (local_24 != 0) {
    __amsg_exit(local_24);
  }
  startupInfo.dwFlags = 0;
  GetStartupInfoA(&startupInfo);
  CmdLine = (PWSTR)__wincmdln();
  if ((startupInfo.dwFlags & 1) == 0) {
    ShowState = 10;
  }
  else {
    ShowState = (uint)startupInfo.wShowWindow;
  }
  hPrevInstance = (HINSTANCE)0x0;
  hCurrInstance = GetModuleHandleA((LPCSTR)0x0);
  result = WinMain(hCurrInstance,hPrevInstance,CmdLine,ShowState);
  if (local_20 == 0) {
    _exit(result);
  }
  __cexit();
  return result;
}

