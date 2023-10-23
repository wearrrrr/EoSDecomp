
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
__tsopen_lk(void *this,undefined4 *param_1,uint *param_2,LPCSTR p_fileName,uint param_4,byte param_5
           )

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  HANDLE hFile;
  int iVar6;
  DWORD flagsAndAttrs;
  int iVar7;
  bool bVar8;
  _SECURITY_ATTRIBUTES securityAttributes;
  undefined4 desiredAccess;
  DWORD creationDisposition;
  uint shareMode;
  char local_6;
  byte local_5;
  
  bVar8 = -1 < (char)param_4;
  securityAttributes.nLength = 0xc;
  securityAttributes.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  securityAttributes.bInheritHandle = (BOOL)bVar8;
  if (((param_4 & 0x8000) == 0) && (((param_4 & 0x4000) != 0 || (_DAT_006e6640 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar3 = param_4 & 3;
  if (uVar3 == 0) {
    desiredAccess = 0x80000000;
  }
  else if (uVar3 == 1) {
    desiredAccess = 0x40000000;
  }
  else {
    if (uVar3 != 2) goto LAB_004676a4;
    desiredAccess = 0xc0000000;
  }
  if (this == (void *)0x10) {
    shareMode = 0;
  }
  else if (this == (void *)0x20) {
    shareMode = 1;
  }
  else if (this == (void *)0x30) {
    shareMode = 2;
  }
  else {
    if (this != (void *)0x40) {
LAB_004676a4:
      piVar4 = __errno();
      *piVar4 = 0x16;
      puVar5 = ___doserrno();
      *puVar5 = 0;
      return 0xffffffff;
    }
    shareMode = 3;
  }
  uVar3 = param_4 & 0x700;
  if (uVar3 < 0x401) {
    if ((uVar3 == 0x400) || (uVar3 == 0)) {
      creationDisposition = 3;
    }
    else if (uVar3 == 0x100) {
      creationDisposition = 4;
    }
    else {
      if (uVar3 == 0x200) goto LAB_0046774b;
      if (uVar3 != 0x300) goto LAB_00467731;
      creationDisposition = 2;
    }
  }
  else {
    if (uVar3 != 0x500) {
      if (uVar3 == 0x600) {
LAB_0046774b:
        creationDisposition = 5;
        goto LAB_0046775b;
      }
      if (uVar3 != 0x700) {
LAB_00467731:
        piVar4 = __errno();
        *piVar4 = 0x16;
        puVar5 = ___doserrno();
        *puVar5 = 0;
        return 0xffffffff;
      }
    }
    creationDisposition = 1;
  }
LAB_0046775b:
  flagsAndAttrs = 0x80;
  if (((param_4 & 0x100) != 0) && (-1 < (char)(~(byte)_DAT_006e61fc & param_5))) {
    flagsAndAttrs = 1;
  }
  if ((param_4 & 0x40) != 0) {
    desiredAccess = CONCAT13(desiredAccess._3_1_,0x10000);
    flagsAndAttrs = flagsAndAttrs | 0x4000000;
    if (__osplatform == 2) {
      shareMode = shareMode | 4;
    }
  }
  if ((param_4 & 0x1000) != 0) {
    flagsAndAttrs = flagsAndAttrs | 0x100;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      flagsAndAttrs = flagsAndAttrs | 0x10000000;
    }
  }
  else {
    flagsAndAttrs = flagsAndAttrs | 0x8000000;
  }
  uVar3 = __alloc_osfhnd();
  if (uVar3 == 0xffffffff) {
    piVar4 = __errno();
    *piVar4 = 0x18;
    puVar5 = ___doserrno();
    *puVar5 = 0;
  }
  else {
    *param_1 = 1;
    *param_2 = uVar3;
    hFile = CreateFileA(p_fileName,desiredAccess,shareMode,&securityAttributes,creationDisposition,
                        flagsAndAttrs,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      flagsAndAttrs = GetFileType(hFile);
      if (flagsAndAttrs != 0) {
        if (flagsAndAttrs == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (flagsAndAttrs == 3) {
          local_5 = local_5 | 8;
        }
        __set_osfhnd(uVar3,(intptr_t)hFile);
        bVar2 = local_5 | 1;
        iVar7 = (uVar3 & 0x1f) * 0x24;
        local_5 = local_5 & 0x48;
        *(byte *)(iVar7 + 4 + *(int *)(&DAT_006e68a0 + ((int)uVar3 >> 5) * 4)) = bVar2;
        if (((local_5 == 0) && ((char)bVar2 < '\0')) && ((param_4 & 2) != 0)) {
          desiredAccess = __lseek_lk(uVar3,-1,2);
          if (desiredAccess == 0xffffffff) {
            puVar5 = ___doserrno();
            if (*puVar5 == 0x83) goto LAB_0046789d;
          }
          else {
            local_6 = '\0';
            iVar6 = __read_lk(uVar3,&local_6,(char *)0x1);
            if ((((iVar6 != 0) || (local_6 != '\x1a')) ||
                (iVar6 = __chsize_lk(uVar3,desiredAccess), iVar6 != -1)) &&
               (flagsAndAttrs = __lseek_lk(uVar3,0,0), flagsAndAttrs != 0xffffffff))
            goto LAB_0046789d;
          }
          __close_lk(uVar3);
          return 0xffffffff;
        }
LAB_0046789d:
        if (local_5 != 0) {
          return uVar3;
        }
        if ((param_4 & 8) == 0) {
          return uVar3;
        }
        pbVar1 = (byte *)(iVar7 + 4 + *(int *)(&DAT_006e68a0 + ((int)uVar3 >> 5) * 4));
        *pbVar1 = *pbVar1 | 0x20;
        return uVar3;
      }
      CloseHandle(hFile);
    }
    flagsAndAttrs = GetLastError();
    __dosmaperr(flagsAndAttrs);
  }
  return 0xffffffff;
}

