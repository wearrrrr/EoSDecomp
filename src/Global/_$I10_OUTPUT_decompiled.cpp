
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
__I10_OUTPUT(int param_1,uint param_2,short *param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  uint unaff_retaddr;
  char *pcVar9;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  undefined local_25;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined local_1d;
  undefined2 local_1c;
  undefined4 local_1a;
  undefined4 local_16;
  undefined local_12;
  char cStack_11;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  uVar4 = (uint)param_3 & 0x7fff;
  local_28 = 0xcc;
  local_27 = 0xcc;
  local_26 = 0xcc;
  local_25 = 0xcc;
  local_24 = 0xcc;
  local_23 = 0xcc;
  local_22 = 0xcc;
  local_21 = 0xcc;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xfb;
  local_1d = 0x3f;
  local_c = 1;
  if (((uint)param_3 & 0x8000) == 0) {
    *(undefined *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar4 == 0) && (param_2 == 0)) && (param_1 == 0)) {
LAB_0046862f:
    *(undefined *)(param_6 + 2) = 0x30;
LAB_00468735:
    *param_6 = 0;
    *(undefined *)((int)param_6 + 5) = 0;
    *(undefined *)(param_6 + 1) = 0x20;
    *(undefined *)((int)param_6 + 3) = 1;
  }
  else {
    if ((short)uVar4 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if ((((uint)param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_004685a5;
          pcVar9 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_004685a5:
            pcVar9 = "1#QNAN";
            goto LAB_004685aa;
          }
          pcVar9 = "1#IND";
        }
        _strcpy((char *)(param_6 + 2),pcVar9);
        *(undefined *)((int)param_6 + 3) = 5;
      }
      else {
        pcVar9 = "1#SNAN";
LAB_004685aa:
        _strcpy((char *)(param_6 + 2),pcVar9);
        *(undefined *)((int)param_6 + 3) = 6;
      }
      local_c = 0;
      goto LAB_00468714;
    }
    local_1c = 0;
    sVar7 = (short)(((uVar4 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar4 * 0x4d10 >>
                   0x10);
    local_12 = (undefined)uVar4;
    cStack_11 = (char)(uVar4 >> 8);
    local_1a = param_1;
    local_16 = param_2;
    ___multtenpow12((int *)&local_1c,-(int)sVar7,1);
    if (0x3ffe < CONCAT11(cStack_11,local_12)) {
      sVar7 = sVar7 + 1;
      ___ld12mul((int *)&local_1c,(int *)&local_28);
    }
    *param_6 = sVar7;
    if (((param_5 & 1) != 0) && (param_4 = param_4 + sVar7, param_4 < 1)) goto LAB_0046862f;
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar8 = CONCAT11(cStack_11,local_12) - 0x3ffe;
    local_12 = 0;
    cStack_11 = '\0';
    param_3 = (short *)0x8;
    do {
      ___shl_12((uint *)&local_1c);
      param_3 = (short *)((int)param_3 + -1);
    } while (param_3 != (short *)0x0);
    if (iVar8 < 0) {
      for (uVar4 = -iVar8 & 0xff; uVar4 != 0; uVar4 = uVar4 - 1) {
        ___shr_12((uint *)&local_1c);
      }
    }
    psVar5 = param_6 + 2;
    param_3 = psVar5;
    iVar2 = param_4 + 1;
    iVar8 = local_1a;
    uVar4 = local_16;
    if (0 < param_4 + 1) {
      do {
        local_10 = iVar2;
        local_16._2_2_ = (undefined2)(uVar4 >> 0x10);
        local_16._0_2_ = (undefined2)uVar4;
        local_1a._2_2_ = (undefined2)((uint)iVar8 >> 0x10);
        local_1a._0_2_ = (undefined2)iVar8;
        local_34 = CONCAT22((undefined2)local_1a,local_1c);
        uStack_30 = CONCAT22((undefined2)local_16,local_1a._2_2_);
        uStack_2c = CONCAT13(cStack_11,CONCAT12(local_12,local_16._2_2_));
        local_1a = iVar8;
        local_16 = uVar4;
        ___shl_12((uint *)&local_1c);
        ___shl_12((uint *)&local_1c);
        ___add_12((uint *)&local_1c,&local_34);
        ___shl_12((uint *)&local_1c);
        cVar3 = cStack_11;
        cStack_11 = '\0';
        psVar5 = (short *)((int)param_3 + 1);
        *(char *)param_3 = cVar3 + '0';
        param_3 = psVar5;
        iVar2 = local_10 + -1;
        iVar8 = local_1a;
        uVar4 = local_16;
      } while (local_10 + -1 != 0);
      local_10 = 0;
    }
    psVar6 = psVar5 + -1;
    psVar1 = param_6 + 2;
    if (*(char *)((int)psVar5 + -1) < '5') {
      for (; (psVar1 <= psVar6 && (*(char *)psVar6 == '0')); psVar6 = (short *)((int)psVar6 + -1)) {
      }
      if (psVar6 < psVar1) {
        *(char *)psVar1 = '0';
        goto LAB_00468735;
      }
    }
    else {
      for (; (psVar1 <= psVar6 && (*(char *)psVar6 == '9')); psVar6 = (short *)((int)psVar6 + -1)) {
        *(char *)psVar6 = '0';
      }
      if (psVar6 < psVar1) {
        psVar6 = (short *)((int)psVar6 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar6 = *(char *)psVar6 + '\x01';
    }
    cVar3 = ((char)psVar6 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar3;
    *(undefined *)(cVar3 + 4 + (int)param_6) = 0;
  }
LAB_00468714:
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

