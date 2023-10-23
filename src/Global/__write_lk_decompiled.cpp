
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __write_lk(uint param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  int *piVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  uint unaff_retaddr;
  char local_424 [1028];
  DWORD local_20;
  int local_1c;
  DWORD local_18;
  char *local_14;
  int local_10;
  DWORD local_c;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  local_18 = 0;
  local_1c = 0;
  if (param_3 == 0) goto LAB_004639ed;
  piVar5 = (int *)(&DAT_006e68a0 + ((int)param_1 >> 5) * 4);
  iVar8 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*piVar5 + 4 + iVar8) & 0x20) != 0) {
    __lseeki64_lk(param_1,0,0,2);
  }
  if ((*(byte *)((HANDLE *)(*piVar5 + iVar8) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar5 + iVar8),param_2,param_3,&local_20,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      local_c = GetLastError();
    }
    else {
      local_c = 0;
      local_18 = local_20;
    }
LAB_00463958:
    if (local_18 != 0) goto LAB_004639ed;
    if (local_c != 0) {
      if (local_c == 5) {
        piVar5 = __errno();
        *piVar5 = 9;
        puVar6 = ___doserrno();
        *puVar6 = 5;
      }
      else {
        __dosmaperr(local_c);
      }
      goto LAB_004639ed;
    }
  }
  else {
    local_14 = param_2;
    local_c = 0;
    if (param_3 != 0) {
      do {
        uVar7 = (int)local_14 - (int)param_2;
        pcVar3 = local_424;
        local_10 = 0;
        do {
          if (param_3 <= uVar7) break;
          pcVar1 = local_14 + 1;
          cVar2 = *local_14;
          uVar7 = uVar7 + 1;
          local_14 = pcVar1;
          if (cVar2 == '\n') {
            local_1c = local_1c + 1;
            *pcVar3 = '\r';
            pcVar3 = pcVar3 + 1;
            local_10 = local_10 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
          local_10 = local_10 + 1;
        } while (local_10 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)(*piVar5 + iVar8),local_424,(int)pcVar3 - (int)local_424,
                          &local_20,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          local_c = GetLastError();
          goto LAB_00463958;
        }
        local_18 = local_18 + local_20;
        if (((int)local_20 < (int)pcVar3 - (int)local_424) ||
           (param_3 <= (uint)((int)local_14 - (int)param_2))) goto LAB_00463958;
      } while( true );
    }
  }
  if (((*(byte *)(*piVar5 + 4 + iVar8) & 0x40) == 0) || (*param_2 != '\x1a')) {
    piVar5 = __errno();
    *piVar5 = 0x1c;
    puVar6 = ___doserrno();
    *puVar6 = 0;
  }
LAB_004639ed:
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

