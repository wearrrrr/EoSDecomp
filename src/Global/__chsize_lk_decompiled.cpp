
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __chsize_lk(uint param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  int *piVar5;
  HANDLE hFile;
  BOOL BVar6;
  uint uVar7;
  uint unaff_retaddr;
  char local_1010 [4096];
  int local_10;
  DWORD local_c;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  local_c = __lseek_lk(param_1,0,1);
  if ((local_c != 0xffffffff) && (DVar1 = __lseek_lk(param_1,0,2), DVar1 != 0xffffffff)) {
    uVar7 = param_2 - DVar1;
    if ((int)uVar7 < 1) {
      if ((int)uVar7 < 0) {
        __lseek_lk(param_1,param_2,0);
        hFile = (HANDLE)__get_osfhandle(param_1);
        BVar6 = SetEndOfFile(hFile);
        if (BVar6 == 0) {
          piVar5 = __errno();
          *piVar5 = 0xd;
          puVar4 = ___doserrno();
          DVar1 = GetLastError();
          *puVar4 = DVar1;
        }
      }
    }
    else {
      _memset(local_1010,0,0x1000);
      local_10 = __setmode_lk(param_1,0x8000);
      do {
        uVar2 = 0x1000;
        if ((int)uVar7 < 0x1000) {
          uVar2 = uVar7;
        }
        iVar3 = __write_lk(param_1,local_1010,uVar2);
        if (iVar3 == -1) {
          puVar4 = ___doserrno();
          if (*puVar4 == 5) {
            piVar5 = __errno();
            *piVar5 = 0xd;
          }
          break;
        }
        uVar7 = uVar7 - iVar3;
      } while (0 < (int)uVar7);
      __setmode_lk(param_1,local_10);
    }
    __lseek_lk(param_1,local_c,0);
  }
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

