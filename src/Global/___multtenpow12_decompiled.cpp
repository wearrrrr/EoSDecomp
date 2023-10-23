
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ___multtenpow12(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint unaff_retaddr;
  undefined2 local_14;
  undefined4 local_12;
  undefined2 uStack_e;
  int iStack_c;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  iVar3 = 0x47b5b0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x47b710;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      iVar3 = iVar3 + 0x54;
      param_2 = uVar1;
      if (uVar2 != 0) {
        piVar4 = (int *)(iVar3 + uVar2 * 0xc);
        if (0x7fff < *(ushort *)piVar4) {
          local_14 = (undefined2)*piVar4;
          local_12._0_2_ = (undefined2)((uint)*piVar4 >> 0x10);
          local_12._2_2_ = (undefined2)piVar4[1];
          uStack_e = (undefined2)((uint)piVar4[1] >> 0x10);
          iStack_c = piVar4[2];
          local_12 = CONCAT22(local_12._2_2_,(undefined2)local_12) + -1;
          piVar4 = (int *)&local_14;
        }
        ___ld12mul(param_1,piVar4);
      }
    }
  }
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

