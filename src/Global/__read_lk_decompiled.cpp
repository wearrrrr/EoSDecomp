
int __cdecl __read_lk(uint param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  int *piVar7;
  ulong *puVar8;
  char *pcVar9;
  int iVar10;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar7 = (int *)(&DAT_006e68a0 + ((int)param_1 >> 5) * 4);
    iVar10 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)(*piVar7 + iVar10 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar9 = param_2;
      if (((bVar4 & 0x48) != 0) && (cVar3 = *(char *)(*piVar7 + iVar10 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar9 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined *)(*piVar7 + 5 + iVar10) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar7 + iVar10),pcVar9,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          piVar7 = __errno();
          *piVar7 = 9;
          puVar8 = ___doserrno();
          *puVar8 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          __dosmaperr(DVar6);
        }
        return -1;
      }
      pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
      bVar4 = *pbVar1;
      if (-1 < (char)bVar4) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *pbVar1 = bVar4;
      local_c = param_2 + (int)local_c + local_10;
      param_3 = param_2;
      pcVar9 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar1 = (byte *)(*piVar7 + 4 + iVar10);
            bVar4 = *pbVar1;
            if ((bVar4 & 0x40) == 0) {
              *pbVar1 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                pcVar2 = param_3 + 2;
                goto LAB_00463131;
              }
LAB_0046314b:
              param_3 = param_3 + 1;
              *pcVar9 = '\r';
            }
            else {
              pcVar2 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar7 + iVar10),&local_5,1,&local_10,(LPOVERLAPPED)0x0)
              ;
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0))
              goto LAB_0046314b;
              if ((*(byte *)(*piVar7 + 4 + iVar10) & 0x48) == 0) {
                if ((pcVar9 == param_2) && (local_5 == '\n')) goto LAB_00463131;
                __lseek_lk(param_1,-1,1);
                if (local_5 == '\n') goto LAB_0046314f;
                goto LAB_0046314b;
              }
              if (local_5 == '\n') {
LAB_00463131:
                param_3 = pcVar2;
                *pcVar9 = '\n';
              }
              else {
                *pcVar9 = '\r';
                *(char *)(*piVar7 + 5 + iVar10) = local_5;
                param_3 = pcVar2;
              }
            }
            pcVar9 = pcVar9 + 1;
            pcVar2 = param_3;
          }
          else {
            *pcVar9 = cVar3;
            pcVar9 = pcVar9 + 1;
            pcVar2 = param_3 + 1;
          }
LAB_0046314f:
          param_3 = pcVar2;
        } while (param_3 < local_c);
      }
      return (int)pcVar9 - (int)param_2;
    }
  }
  return 0;
}

