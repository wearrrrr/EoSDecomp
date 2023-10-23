
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _png_build_gamma_table(int *param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  undefined uVar4;
  undefined2 uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ushort local_10;
  uint local_8;
  
  piVar3 = param_1;
  if ((float)param_1[0x4c] != (float)__0d) {
    if (*(byte *)((int)param_1 + 0x117) < 9) {
      pvVar6 = _png_malloc_D3DX__YAPAXPAUpng_struct_def_1_K_Z(param_1,0x100);
      param_1 = (int *)0x0;
      piVar3[0x4e] = (int)pvVar6;
      do {
        __CIpow();
        uVar4 = __ftol();
        piVar1 = (int *)((int)param_1 + 1);
        *(undefined *)((int)param_1 + piVar3[0x4e]) = uVar4;
        param_1 = piVar1;
      } while ((int)piVar1 < 0x100);
    }
    else {
      if ((*(byte *)((int)param_1 + 0x116) & 2) == 0) {
        local_8 = (uint)*(byte *)((int)param_1 + 0x153);
      }
      else {
        local_8 = (uint)*(byte *)(param_1 + 0x54);
        if ((uint)*(byte *)(param_1 + 0x54) < (uint)*(byte *)((int)param_1 + 0x151)) {
          local_8 = (uint)*(byte *)((int)param_1 + 0x151);
        }
        if (local_8 < *(byte *)((int)param_1 + 0x152)) {
          local_8 = (uint)*(byte *)((int)param_1 + 0x152);
        }
      }
      if (local_8 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = 0x10 - local_8;
      }
      if (((*(byte *)((int)param_1 + 0x61) & 4) != 0) && ((int)local_8 < 5)) {
        local_8 = 5;
      }
      if (8 < (int)local_8) {
        local_8 = 8;
      }
      if ((int)local_8 < 0) {
        local_8 = 0;
      }
      bVar2 = (byte)local_8;
      bVar9 = 8 - bVar2;
      iVar10 = 1 << (bVar9 & 0x1f);
      param_1[0x4b] = local_8 & 0xff;
      pvVar6 = _png_malloc_D3DX__YAPAXPAUpng_struct_def_1_K_Z(param_1,iVar10 << 2);
      piVar1 = param_1 + 0x18;
      param_1[0x51] = (int)pvVar6;
      param_1 = (int *)0x0;
      if ((*(ushort *)piVar1 & 0x480) == 0) {
        if (0 < iVar10) {
          do {
            pvVar6 = _png_malloc_D3DX__YAPAXPAUpng_struct_def_1_K_Z(piVar3,0x200);
            *(void **)(piVar3[0x51] + (int)param_1 * 4) = pvVar6;
            iVar12 = 0;
            do {
              __CIpow();
              uVar5 = __ftol();
              *(undefined2 *)(iVar12 + *(int *)(piVar3[0x51] + (int)param_1 * 4)) = uVar5;
              iVar12 = iVar12 + 2;
            } while (iVar12 < 0x200);
            param_1 = (int *)((int)param_1 + 1);
          } while ((int)param_1 < iVar10);
        }
      }
      else {
        if (0 < iVar10) {
          do {
            pvVar6 = _png_malloc_D3DX__YAPAXPAUpng_struct_def_1_K_Z(piVar3,0x200);
            piVar1 = (int *)((int)param_1 + 1);
            *(void **)(piVar3[0x51] + (int)param_1 * 4) = pvVar6;
            param_1 = piVar1;
          } while ((int)piVar1 < iVar10);
        }
        uVar13 = 0;
        param_1 = (int *)0x0;
        do {
          __CIpow();
          uVar7 = __ftol();
          if (uVar13 <= uVar7) {
            local_10 = (ushort)(((uint)param_1 & 0xff) << 8) | (ushort)param_1;
            do {
              uVar11 = uVar13 >> (bVar9 & 0x1f);
              uVar8 = 0xff >> (bVar2 & 0x1f) & uVar13;
              uVar13 = uVar13 + 1;
              *(ushort *)(*(int *)(piVar3[0x51] + uVar8 * 4) + uVar11 * 2) = local_10;
            } while (uVar13 <= uVar7);
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < 0x100);
        if (uVar13 < (uint)(iVar10 << 8)) {
          do {
            *(undefined2 *)
             (*(int *)(piVar3[0x51] + (0xff >> (bVar2 & 0x1f) & uVar13) * 4) +
             (uVar13 >> (bVar9 & 0x1f)) * 2) = 0xffff;
            uVar13 = uVar13 + 1;
          } while (uVar13 < (uint)(iVar10 << 8));
        }
      }
    }
  }
  return;
}

