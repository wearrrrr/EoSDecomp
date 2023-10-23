
/* Library Function - Single Match
    __ftell_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __ftell_lk(char **param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  int *piVar4;
  char **ppcVar5;
  long lVar6;
  char *pcVar7;
  char **ppcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  ppcVar8 = param_1;
  pcVar7 = param_1[4];
  if ((int)param_1[1] < 0) {
    param_1[1] = (char *)0x0;
  }
  local_8 = __lseek((int)pcVar7,0,1);
  if (local_8 < 0) {
LAB_0045c7d1:
    local_c = -1;
  }
  else {
    pcVar9 = param_1[3];
    if (((uint)pcVar9 & 0x108) == 0) {
      return local_8 - (int)param_1[1];
    }
    pcVar1 = *param_1;
    pcVar2 = param_1[2];
    local_c = (int)pcVar1 - (int)pcVar2;
    if (((uint)pcVar9 & 3) == 0) {
      if (-1 < (char)pcVar9) {
        piVar4 = __errno();
        *piVar4 = 0x16;
        goto LAB_0045c7d1;
      }
    }
    else if (((*(byte *)(*(int *)(&DAT_006e68a0 + ((int)pcVar7 >> 5) * 4) + 4 +
                        ((uint)pcVar7 & 0x1f) * 0x24) & 0x80) != 0) &&
            (pcVar9 = pcVar2, pcVar2 < pcVar1)) {
      do {
        if (*pcVar9 == '\n') {
          local_c = local_c + 1;
        }
        pcVar9 = pcVar9 + 1;
      } while (pcVar9 < *param_1);
    }
    if (local_8 != 0) {
      if ((*(byte *)(param_1 + 3) & 1) != 0) {
        if (param_1[1] == (char *)0x0) {
          local_c = 0;
        }
        else {
          ppcVar5 = (char **)(param_1[1] + ((int)pcVar1 - (int)pcVar2));
          iVar10 = ((uint)pcVar7 & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + *(int *)(&DAT_006e68a0 + ((int)pcVar7 >> 5) * 4)) & 0x80) != 0
             ) {
            lVar6 = __lseek((int)pcVar7,0,2);
            if (lVar6 == local_8) {
              pcVar7 = param_1[2];
              pcVar9 = (char *)((int)ppcVar5 + (int)pcVar7);
              param_1 = ppcVar5;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = (char **)((int)param_1 + 1);
                }
              }
              bVar3 = *(byte *)((int)ppcVar8 + 0xd) & 0x20;
            }
            else {
              __lseek((int)pcVar7,local_8,0);
              ppcVar8 = (char **)&DAT_00000200;
              if (((&DAT_00000200 < ppcVar5) || (((uint)param_1[3] & 8) == 0)) ||
                 (((uint)param_1[3] & 0x400) != 0)) {
                ppcVar8 = (char **)param_1[6];
              }
              bVar3 = *(byte *)(iVar10 + 4 + *(int *)(&DAT_006e68a0 + ((int)pcVar7 >> 5) * 4)) & 4;
              param_1 = ppcVar8;
            }
            ppcVar5 = param_1;
            if (bVar3 != 0) {
              ppcVar5 = (char **)((int)param_1 + 1);
            }
          }
          param_1 = ppcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}

