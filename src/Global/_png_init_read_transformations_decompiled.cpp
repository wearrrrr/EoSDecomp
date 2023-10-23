
void __cdecl _png_init_read_transformations(int *param_1)

{
  char cVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  piVar2 = param_1;
  cVar1 = *(char *)((int)param_1 + 0x116);
  if ((param_1[0x18] & 0x602000U) != 0) {
    _png_build_gamma_table(param_1);
    if (cVar1 == '\x03') {
      uVar5 = (uint)*(ushort *)(param_1 + 0x42);
      if (uVar5 != 0) {
        pbVar3 = (byte *)(param_1[0x41] + 2);
        do {
          pbVar3[-2] = *(byte *)((uint)pbVar3[-2] + param_1[0x4e]);
          pbVar3[-1] = *(byte *)((uint)pbVar3[-1] + param_1[0x4e]);
          *pbVar3 = *(byte *)((uint)*pbVar3 + param_1[0x4e]);
          pbVar3 = pbVar3 + 3;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x18) & 8) != 0) && (cVar1 == '\x03')) {
    pbVar3 = (byte *)((int)param_1 + 0x152);
    iVar6 = 8 - (uint)*(byte *)(param_1 + 0x54);
    param_1 = (int *)(8 - (uint)*(byte *)((int)param_1 + 0x151));
    local_8 = 8 - (uint)*pbVar3;
    if ((iVar6 < 0) || (8 < iVar6)) {
      iVar6 = 0;
    }
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = (int *)0x0;
    }
    if ((local_8 < 0) || (8 < local_8)) {
      local_8 = 0;
    }
    if (*(ushort *)(piVar2 + 0x42) != 0) {
      iVar4 = 0;
      uVar5 = (uint)*(ushort *)(piVar2 + 0x42);
      do {
        *(byte *)(iVar4 + piVar2[0x41]) = *(byte *)(iVar4 + piVar2[0x41]) >> ((byte)iVar6 & 0x1f);
        pbVar3 = (byte *)(iVar4 + 1 + piVar2[0x41]);
        *pbVar3 = *pbVar3 >> ((byte)param_1 & 0x1f);
        pbVar3 = (byte *)(iVar4 + 2 + piVar2[0x41]);
        *pbVar3 = *pbVar3 >> ((byte)local_8 & 0x1f);
        iVar4 = iVar4 + 3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

