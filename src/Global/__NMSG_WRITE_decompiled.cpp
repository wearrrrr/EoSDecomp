
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __NMSG_WRITE(DWORD param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  size_t sVar4;
  size_t sVar5;
  HANDLE hFile;
  int iVar6;
  CHAR *_Dest;
  uint unaff_retaddr;
  undefined4 uStackY_14c;
  LPCSTR pCStackY_148;
  char *pcStackY_144;
  UINT UStackY_140;
  char *apcStackY_13c [2];
  char *pcStackY_134;
  char *lpBuffer;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_110 [260];
  undefined local_c;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  uVar2 = 0;
  do {
    if (param_1 == *(DWORD *)(&DAT_0047b118 + uVar2 * 8)) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x12);
  iVar6 = uVar2 * 8;
  if (param_1 == *(DWORD *)(&DAT_0047b118 + iVar6)) {
    if ((___error_mode == 1) || ((___error_mode == 0 && (_DAT_0047a6f4 == 1)))) {
      lpOverlapped = (LPOVERLAPPED)0x0;
      lpNumberOfBytesWritten = &param_1;
      sVar4 = _strlen(*(char **)(iVar6 + 0x47b11c));
      lpBuffer = *(char **)(iVar6 + 0x47b11c);
      pcStackY_134 = (char *)0x463d9d;
      hFile = GetStdHandle(0xfffffff4);
      pcStackY_134 = (char *)0x463da4;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      local_c = 0;
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_110,0x104);
      if (DVar3 == 0) {
        _strcpy(local_110,"<program name unknown>");
      }
      _Dest = local_110;
      sVar4 = _strlen(local_110);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_110);
        _Dest = (CHAR *)((int)&uStackY_14c + sVar4 + 1);
        _strncpy(_Dest,"...",3);
      }
      sVar4 = _strlen(_Dest);
      sVar5 = _strlen(*(char **)(iVar6 + 0x47b11c));
      iVar1 = -(sVar4 + sVar5 + 0x1f & 0xfffffffc);
      *(char **)(local_110 + iVar1 + -0x10) = "Runtime Error!\n\nProgram: ";
      *(CHAR **)(local_110 + iVar1 + -0x14) = local_110 + iVar1 + -0xc;
      *(undefined4 *)(local_110 + iVar1 + -0x18) = 0x463d4c;
      _strcpy(*(char **)(local_110 + iVar1 + -0x14),*(char **)(local_110 + iVar1 + -0x10));
      *(CHAR **)(local_110 + iVar1 + -0x18) = _Dest;
      *(CHAR **)(local_110 + iVar1 + -0x1c) = local_110 + iVar1 + -0xc;
      *(undefined4 *)(local_110 + iVar1 + -0x20) = 0x463d53;
      _strcat(*(char **)(local_110 + iVar1 + -0x1c),*(char **)(local_110 + iVar1 + -0x18));
      *(undefined **)(local_110 + iVar1 + -0x20) = &__n_n_;
      *(CHAR **)((int)&pcStackY_134 + iVar1) = local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)apcStackY_13c + iVar1 + 4) = 0x463d5e;
      _strcat(*(char **)((int)&pcStackY_134 + iVar1),*(char **)(local_110 + iVar1 + -0x20));
      *(undefined4 *)((int)apcStackY_13c + iVar1 + 4) = *(undefined4 *)(iVar6 + 0x47b11c);
      *(CHAR **)((int)apcStackY_13c + iVar1) = local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)&UStackY_140 + iVar1) = 0x463d6a;
      _strcat(*(char **)((int)apcStackY_13c + iVar1),*(char **)((int)apcStackY_13c + iVar1 + 4));
      *(undefined4 *)((int)&UStackY_140 + iVar1) = 0x12010;
      *(char **)((int)&pCStackY_148 + iVar1 + 4) = "Microsoft Visual C++ Runtime Library";
      *(CHAR **)((int)&uStackY_14c + iVar1 + 4) = local_110 + iVar1 + -0xc;
      *(undefined4 *)((int)&uStackY_14c + iVar1) = 0x463d7a;
      ___crtMessageBoxA(*(LPCSTR *)((int)&uStackY_14c + iVar1 + 4),
                        *(LPCSTR *)((int)&pCStackY_148 + iVar1 + 4),
                        *(UINT *)((int)&UStackY_140 + iVar1));
    }
  }
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

