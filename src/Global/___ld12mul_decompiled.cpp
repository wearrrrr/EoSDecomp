
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ___ld12mul(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  uint unaff_retaddr;
  byte local_2c;
  undefined uStack_2b;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  undefined2 uStack_22;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  ushort *local_10;
  short *local_c;
  uint local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  local_1c = 0;
  local_2c = 0;
  uStack_2b = 0;
  uStack_2a._0_2_ = 0;
  uStack_2a._2_2_ = 0;
  uStack_26._0_2_ = 0;
  uStack_26._2_2_ = 0;
  uStack_22._0_1_ = 0;
  uStack_22._1_1_ = 0;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  iVar8 = 0;
  iVar3 = 0;
  sVar2 = 0;
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, iVar8 = 0, iVar3 = 0, sVar2 = 0, uVar9 < 0x7fff)
      ) && (iVar8 = 0, iVar3 = 0, sVar2 = 0, (ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_00468d49:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      iVar8 = 0;
      iVar3 = 0;
      sVar2 = 0;
      goto LAB_00468ec1;
    }
    if (uVar6 == 0) {
      piVar1 = (int *)((int)piVar1 + 1);
      uVar6 = 0;
      if ((((param_1[2] & 0x7fffffffU) != 0) || (param_1[1] != 0)) ||
         (iVar8 = 0, iVar3 = 0, sVar2 = 0, *param_1 != 0)) goto LAB_00468d33;
    }
    else {
LAB_00468d33:
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_00468d49;
      local_18 = 0;
      local_c = (short *)((int)&uStack_2a + 2);
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_10 = (ushort *)(local_18 * 2 + (int)piVar4);
          local_14 = piVar5 + 2;
          local_20 = param_2;
          do {
            iVar8 = ___addl(*(uint *)(local_c + -2),(uint)*(ushort *)local_14 * (uint)*local_10,
                            (uint *)(local_c + -2));
            if (iVar8 != 0) {
              *local_c = *local_c + 1;
            }
            local_10 = local_10 + 1;
            local_14 = (int *)((int)local_14 + -2);
            local_20 = (int *)((int)local_20 + -1);
          } while (local_20 != (int *)0x0);
        }
        local_c = local_c + 1;
        local_18 = local_18 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_00468dfd:
        iVar8 = (int)param_1 + 0xffff;
        param_1._0_2_ = (ushort)iVar8;
        if ((short)(ushort)param_1 < 0) {
          uVar7 = -iVar8 & 0xffff;
          param_1._0_2_ = (ushort)param_1 + (short)uVar7;
          do {
            if ((local_2c & 1) != 0) {
              local_1c = local_1c + 1;
            }
            ___shr_12((uint *)&local_2c);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          if (local_1c != 0) {
            local_2c = local_2c | 1;
          }
        }
      }
      else {
        do {
          if ((uStack_22._1_1_ & 0x80) != 0) break;
          ___shl_12((uint *)&local_2c);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_00468dfd;
      }
      if ((0x8000 < CONCAT11(uStack_2b,local_2c)) ||
         (sVar2 = CONCAT11(uStack_22._1_1_,(undefined)uStack_22),
         iVar3 = CONCAT22(uStack_26._2_2_,(undefined2)uStack_26),
         iVar8 = CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a),
         (CONCAT22((undefined2)uStack_2a,CONCAT11(uStack_2b,local_2c)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a) == -1) {
          iVar8 = 0;
          if (CONCAT22(uStack_26._2_2_,(undefined2)uStack_26) == -1) {
            if (CONCAT11(uStack_22._1_1_,(undefined)uStack_22) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(uStack_22._1_1_,(undefined)uStack_22) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(uStack_22._1_1_,(undefined)uStack_22);
            iVar3 = CONCAT22(uStack_26._2_2_,(undefined2)uStack_26) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(uStack_2a._2_2_,(undefined2)uStack_2a) + 1;
          sVar2 = CONCAT11(uStack_22._1_1_,(undefined)uStack_22);
          iVar3 = CONCAT22(uStack_26._2_2_,(undefined2)uStack_26);
        }
      }
      uStack_2a._2_2_ = (undefined2)((uint)iVar8 >> 0x10);
      uStack_2a._0_2_ = (undefined2)iVar8;
      uStack_26._2_2_ = (undefined2)((uint)iVar3 >> 0x10);
      uStack_26._0_2_ = (undefined2)iVar3;
      uStack_22._1_1_ = (byte)((ushort)sVar2 >> 8);
      uStack_22._0_1_ = (undefined)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_00468ea6;
      *(undefined2 *)piVar4 = (undefined2)uStack_2a;
      *(uint *)((int)piVar4 + 2) = CONCAT22((undefined2)uStack_26,uStack_2a._2_2_);
      *(uint *)((int)piVar4 + 6) =
           CONCAT13(uStack_22._1_1_,CONCAT12((undefined)uStack_22,uStack_26._2_2_));
      uVar6 = (ushort)param_1 | uVar11;
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_00468ea6:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
LAB_00468ec1:
  uStack_2a = iVar8;
  uStack_26 = iVar3;
  uStack_22 = sVar2;
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

