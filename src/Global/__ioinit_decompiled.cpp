
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __ioinit(void)

{
  HANDLE *ppvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int iVar7;
  HANDLE hFile;
  int iVar8;
  uint uVar9;
  UINT UVar10;
  UINT UVar11;
  HANDLE *ppvStack_48;
  _STARTUPINFOA local_44;
  
  puVar3 = (undefined4 *)_malloc(0x480);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    ___uNumber_1 = 0x20;
    _DAT_006e68a0 = puVar3;
    for (; puVar3 < _DAT_006e68a0 + 0x120; puVar3 = puVar3 + 9) {
      *(undefined *)(puVar3 + 1) = 0;
      *puVar3 = 0xffffffff;
      puVar3[2] = 0;
      *(undefined *)((int)puVar3 + 5) = 10;
    }
    GetStartupInfoA(&local_44);
    if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
      UVar10 = *(UINT *)local_44.lpReserved2;
      local_44.lpReserved2 = (BYTE *)((int)local_44.lpReserved2 + 4);
      ppvStack_48 = (HANDLE *)(UVar10 + (int)local_44.lpReserved2);
      if (0x7ff < (int)UVar10) {
        UVar10 = 0x800;
      }
      UVar11 = UVar10;
      if ((int)___uNumber_1 < (int)UVar10) {
        puVar3 = (undefined4 *)&DAT_006e68a4;
        do {
          puVar5 = (undefined4 *)_malloc(0x480);
          UVar11 = ___uNumber_1;
          if (puVar5 == (undefined4 *)0x0) break;
          ___uNumber_1 = ___uNumber_1 + 0x20;
          *puVar3 = puVar5;
          puVar2 = puVar5;
          for (; puVar5 < puVar2 + 0x120; puVar5 = puVar5 + 9) {
            *(undefined *)(puVar5 + 1) = 0;
            *puVar5 = 0xffffffff;
            puVar5[2] = 0;
            *(undefined *)((int)puVar5 + 5) = 10;
            puVar2 = (undefined4 *)*puVar3;
          }
          puVar3 = puVar3 + 1;
          UVar11 = UVar10;
        } while ((int)___uNumber_1 < (int)UVar10);
      }
      uVar9 = 0;
      if (0 < (int)UVar11) {
        do {
          if (((*ppvStack_48 != (HANDLE)0xffffffff) && ((*local_44.lpReserved2 & 1) != 0)) &&
             (((*local_44.lpReserved2 & 8) != 0 || (DVar6 = GetFileType(*ppvStack_48), DVar6 != 0)))
             ) {
            ppvVar1 = (HANDLE *)
                      (*(int *)(&DAT_006e68a0 + ((int)uVar9 >> 5) * 4) + (uVar9 & 0x1f) * 0x24);
            *ppvVar1 = *ppvStack_48;
            *(BYTE *)(ppvVar1 + 1) = *local_44.lpReserved2;
            iVar7 = ___crtInitCritSecAndSpinCount(ppvVar1 + 3,4000);
            if (iVar7 == 0) {
              return 0xffffffff;
            }
            ppvVar1[2] = (HANDLE)((int)ppvVar1[2] + 1);
          }
          ppvStack_48 = ppvStack_48 + 1;
          uVar9 = uVar9 + 1;
          local_44.lpReserved2 = (BYTE *)((int)local_44.lpReserved2 + 1);
        } while ((int)uVar9 < (int)UVar11);
      }
    }
    iVar7 = 0;
    do {
      ppvVar1 = (HANDLE *)(_DAT_006e68a0 + iVar7 * 9);
      if (*ppvVar1 == (HANDLE)0xffffffff) {
        *(undefined *)(ppvVar1 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar6 = 0xfffffff6;
        }
        else {
          DVar6 = 0xfffffff5 - (iVar7 != 1);
        }
        hFile = GetStdHandle(DVar6);
        if ((hFile == (HANDLE)0xffffffff) || (DVar6 = GetFileType(hFile), DVar6 == 0)) {
          *(byte *)(ppvVar1 + 1) = *(byte *)(ppvVar1 + 1) | 0x40;
        }
        else {
          *ppvVar1 = hFile;
          if ((DVar6 & 0xff) == 2) {
            *(byte *)(ppvVar1 + 1) = *(byte *)(ppvVar1 + 1) | 0x40;
          }
          else if ((DVar6 & 0xff) == 3) {
            *(byte *)(ppvVar1 + 1) = *(byte *)(ppvVar1 + 1) | 8;
          }
          iVar8 = ___crtInitCritSecAndSpinCount(ppvVar1 + 3,4000);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          ppvVar1[2] = (HANDLE)((int)ppvVar1[2] + 1);
        }
      }
      else {
        *(byte *)(ppvVar1 + 1) = *(byte *)(ppvVar1 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(___uNumber_1);
    uVar4 = 0;
  }
  return uVar4;
}

