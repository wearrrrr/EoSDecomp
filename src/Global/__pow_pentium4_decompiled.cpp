
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __pow_pentium4
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

float10 __cdecl __pow_pentium4(double param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  double dVar9;
  double dVar10;
  undefined8 in_XMM1_Qa;
  double dVar11;
  ushort uVar17;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  ulonglong in_XMM2_Qa;
  longlong lVar18;
  longlong lVar22;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  ulonglong in_XMM3_Qa;
  ulonglong uVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  dVar9 = (double)((ulonglong)param_1 >> 0x2c);
  uVar8 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar1 = (SUB82(dVar9,0) & 0xff) + 1 & 0x1fe;
  dVar30 = (double)((ulonglong)DAT_00474320 & (ulonglong)param_1 | (ulonglong)DAT_00474330) *
           *(double *)(&DAT_00470a90 + uVar1 * 4);
  dVar27 = *(double *)(&DAT_00470a90 + uVar1 * 4);
  dVar10 = *(double *)(&DAT_00470ea0 + uVar1 * 8);
  dVar29 = *(double *)(&UNK_00470ea8 + uVar1 * 8);
  uVar5 = 0x7fef - uVar8;
  uVar1 = SUB84(param_1,0);
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  dVar28 = param_1;
  if ((uVar8 - 0x10 | uVar5) < 0x80000000) {
    uVar5 = 0;
    uVar6 = 0x3fe7f;
LAB_00464916:
    uVar2 = ((ushort)((ulonglong)dVar30 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar25 = (double)((ulonglong)dVar28 & (ulonglong)DAT_00474320 | (ulonglong)DAT_00474330);
    dVar11 = (double)(DAT_00474378 & (ulonglong)dVar25);
    in_XMM3_Qa = in_XMM3_Qa >> 0x1f;
    dVar25 = dVar25 - dVar11;
    uVar3 = ((ushort)((ulonglong)(dVar30 * *(double *)(&DAT_004716b0 + uVar2 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar26 = dVar27 * *(double *)(&DAT_004716b0 + uVar2 * 4) *
             *(double *)(&DAT_004722d0 + uVar3 * 4);
    dVar30 = dVar30 * *(double *)(&DAT_004716b0 + uVar2 * 4) *
             *(double *)(&DAT_004722d0 + uVar3 * 4);
    dVar28 = dVar10 + *(double *)(&DAT_00471ac0 + uVar2 * 8) +
             (double)(int)((longlong)dVar9 - (ulonglong)uVar6 >> 8) +
             *(double *)(&DAT_00472ae0 + uVar3 * 8);
    dVar9 = dVar29 + *(double *)(&DAT_00471ac8 + uVar2 * 8) + *(double *)(&DAT_00472ae8 + uVar3 * 8)
    ;
    dVar10 = (double)(DAT_00474378 & (ulonglong)dVar26);
    dVar26 = dVar26 - dVar10;
    dVar31 = DAT_00474380 + dVar30;
    dVar29 = dVar28 + dVar31;
    dVar27 = (double)CONCAT44(param_3,param_2);
    uVar17 = (ushort)(param_3 >> 0x10);
    dVar28 = dVar28 - dVar29;
    uVar2 = (uint)(ushort)((ulonglong)dVar29 >> 0x30);
    dVar10 = (((dVar30 - dVar10 * dVar11) - dVar11 * dVar26) - dVar10 * dVar25) - dVar25 * dVar26;
    dVar11 = dVar31 - dVar10;
    dVar30 = dVar29 - dVar10;
    uVar6 = uVar17 & 0x7ff0;
    if (uVar6 < 0x7ff0) {
      iVar4 = (uVar6 - 0x3ff0) + (uVar2 & 0x7ff0);
      if ((0x40a0U - iVar4 | iVar4 - 0x3c70U) < 0x80000000) {
LAB_00464a68:
        dVar25 = (double)(DAT_00474378 & (ulonglong)dVar27);
        dVar26 = (double)(DAT_00474378 & (ulonglong)dVar30);
        dVar10 = (dVar28 + dVar31) - (dVar10 - (dVar29 - dVar30));
        dVar29 = dVar25 * dVar26 * 128.0;
        uVar1 = (uint)ROUND(dVar29);
        dVar27 = dVar25 * (dVar30 - dVar26) + dVar26 * (dVar27 - dVar25) +
                 (dVar30 - dVar26) * (dVar27 - dVar25);
        if (0 < (int)(0x1ff7f - uVar1 | uVar1 + 0x1e1ff)) {
          iVar4 = (uVar1 & 0x7f) * 0x10;
          auVar12._0_8_ = (double)((ulonglong)((uVar5 + uVar1 & 0xffffff80) + 0x1ff80) << 0x2d);
          auVar12._8_4_ = 0;
          auVar12._12_4_ = (int)((ulonglong)auVar12._0_8_ >> 0x20);
          dVar28 = *(double *)(&DAT_00473b10 + iVar4) * auVar12._0_8_;
          dVar27 = (dVar29 - ((dVar29 + _DAT_00474310) - _DAT_00474310)) * 0.0078125 +
                   dVar27 + ((_DAT_00473af0 * dVar11 + _DAT_00473b00 * dVar11 * dVar11) *
                             dVar11 * dVar11 +
                             _UNK_00473af8 * dVar11 + _UNK_00473b08 * dVar11 * dVar11 +
                            dVar9 + dVar10) * (double)CONCAT44(param_3,param_2);
          return (float10)(dVar27 * dVar27 * dVar28 *
                           (_DAT_00474360 + _DAT_00474350 * dVar27) * dVar27 * dVar27 +
                           *(double *)(&UNK_00473b18 + iVar4) * auVar12._8_8_ +
                           (_UNK_00474368 + _UNK_00474358 * dVar27) * dVar27 * dVar27 * dVar28 +
                           DAT_00474370 * dVar27 * dVar28 + dVar28);
        }
        if ((int)uVar1 < 1) {
          if ((int)uVar1 < -0x3fdff) {
LAB_004652fa:
            dVar27 = (double)((ulonglong)(DAT_004743a8 * DAT_004743a8) | (ulonglong)uVar5 << 0x2d);
            iVar4 = 0x19;
            goto LAB_004650a1;
          }
          uVar5 = uVar5 + 0x80;
          uVar7 = (uVar1 & 0xffffff80) + 0x3fe80;
          uVar8 = 0;
        }
        else {
          if (0x3ffff < uVar1) goto LAB_0046531d;
          uVar5 = uVar5 + 0x3ff00;
          uVar7 = uVar1 - 0x80 & 0xffffff80;
          uVar8 = 0x3ff0;
        }
        iVar4 = (uVar1 & 0x7f) * 0x10;
        uVar1 = ((int)-(uVar7 - 0x1ff80) >> 7) + 2;
        auVar16._0_8_ = (double)((ulonglong)uVar7 << 0x2d);
        auVar16._8_4_ = 0;
        auVar16._12_4_ = (int)((ulonglong)auVar16._0_8_ >> 0x20);
        dVar30 = *(double *)(&DAT_00473b10 + iVar4) * auVar16._0_8_;
        dVar10 = (dVar29 - ((dVar29 + _DAT_00474310) - _DAT_00474310)) * 0.0078125 +
                 dVar27 + ((_DAT_00473af0 * dVar11 + _DAT_00473b00 * dVar11 * dVar11) *
                           dVar11 * dVar11 +
                           _UNK_00473af8 * dVar11 + _UNK_00473b08 * dVar11 * dVar11 + dVar9 + dVar10
                          ) * (double)CONCAT44(param_3,param_2);
        dVar27 = (double)((ulonglong)uVar5 << 0x2d);
        uVar23 = (ulonglong)(uVar1 + (uVar1 & 0x20));
        dVar29 = (double)(-1L << uVar23 & (ulonglong)dVar30);
        dVar10 = dVar10 * dVar10 * dVar30 *
                 (_DAT_00474360 + _DAT_00474350 * dVar10) * dVar10 * dVar10 +
                 *(double *)(&UNK_00473b18 + iVar4) * auVar16._8_8_ +
                 (_UNK_00474368 + _UNK_00474358 * dVar10) * dVar10 * dVar10 * dVar30 +
                 DAT_00474370 * dVar10 * dVar30;
        dVar28 = (double)((ulonglong)(dVar29 + dVar10) & -1L << uVar23);
        dVar10 = dVar10 + (dVar29 - dVar28) + (dVar30 - dVar29);
        if ((int)(uVar7 - 0x1ff80) < 1) {
          dVar27 = dVar10 * dVar27 + dVar28 * dVar27;
          dVar27 = dVar27 + (double)((ulonglong)uVar8 << 0x30) * dVar27;
          iVar4 = 0x18;
          if ((((ushort)((ulonglong)dVar27 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (iVar4 = 0x19, ((ulonglong)dVar27 & 0x7ff0000000000000) != 0)) {
            return (float10)dVar27;
          }
        }
        else {
          dVar27 = (dVar10 + dVar28) * dVar27;
          dVar27 = dVar27 + (double)((ulonglong)uVar8 << 0x30) * dVar27;
          iVar4 = 0x18;
          if ((((ushort)((ulonglong)dVar27 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (iVar4 = 0x19, ((ulonglong)dVar27 & 0x7ff0000000000000) != 0)) {
            return (float10)dVar27;
          }
        }
      }
      else {
        dVar29 = dVar27 * dVar30;
        uVar1 = (ushort)((ulonglong)dVar29 >> 0x30) & 0x7ff0;
        uVar7 = uVar1 - 0x3c70;
        if ((0x40a0 - uVar1 | uVar7) < 0x80000000) goto LAB_00464a68;
        if (0x7fffffff < uVar7) {
          return (float10)(double)((ulonglong)(uVar5 | 0x1ff80) << 0x2d);
        }
        if (((uVar17 ^ (uVar8 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_004652fa;
LAB_0046531d:
        iVar4 = 0x18;
        dVar27 = DAT_00474390;
        if (uVar5 != 0) {
          dVar27 = DAT_00474398;
        }
      }
      goto LAB_004650a1;
    }
    dVar27 = (double)CONCAT44(uVar5,uVar2);
    if (uVar1 != 0) goto LAB_00464fac;
    if (uVar7 == 0x3ff00000) goto LAB_0046508a;
    dVar27 = (double)CONCAT44(uVar5,uVar7);
    if (uVar7 != 0xbff00000) goto LAB_00464fac;
    uVar23 = (ulonglong)DAT_00474320 & CONCAT44(param_3,param_2);
    auVar14._0_4_ = -(uint)((int)uVar23 == 0);
    auVar14._4_4_ = -(uint)((int)(uVar23 >> 0x20) == 0);
    auVar14._8_4_ = -(uint)((int)(in_XMM3_Qa & in_XMM2_Qa) == 0);
    auVar14._12_4_ = -(uint)((int)((in_XMM3_Qa & in_XMM2_Qa) >> 0x20) == 0);
    if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar14._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar14._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar14._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar14._12_4_ >> 0x1f) << 0xf) == 0xff) {
      return (float10)1;
    }
  }
  else {
    uVar6 = param_3 & DAT_00474340._4_4_;
    uVar23 = in_XMM3_Qa >> 0x30;
    if (uVar6 < 0x7ff00000) {
      if ((param_2 | uVar6) == 0) {
        iVar4 = 0x1a;
        dVar27 = DAT_00474330;
        if ((uVar1 | uVar7 & 0x7fffffff) != 0) {
          iVar4 = 0x1d;
          if (((uVar7 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar7 & 0x7fffffff) < 0x7ff00000 || (uVar1 == 0)))) {
            return (float10)DAT_00474330;
          }
        }
        goto LAB_004650a1;
      }
      if ((int)uVar5 < 0) {
        uVar24 = in_XMM3_Qa << 0x34;
        iVar4 = (uVar6 >> 0x14) - 0x3f3;
        in_XMM3_Qa = 0;
        uVar17 = (ushort)((ushort)((ulonglong)in_XMM1_Qa >> 0x30) & (ushort)uVar23) >> 4;
        lVar18 = (CONCAT44(param_3,param_2) |
                 CONCAT44(DAT_00474340._4_4_,(undefined4)DAT_00474340) << 0x34) <<
                 (ulonglong)
                 CONCAT22((ushort)(-1 < iVar4) * (short)((uint)iVar4 >> 0x10),
                          (ushort)(-1 < (short)iVar4) * (short)iVar4);
        lVar22 = (in_XMM2_Qa | uVar24) << (ulonglong)(ushort)((-1 < (short)uVar17) * uVar17);
        auVar19._0_4_ = -(uint)((int)lVar18 == 0);
        auVar19._4_4_ = -(uint)((int)((ulonglong)lVar18 >> 0x20) == 0);
        auVar19._8_4_ = -(uint)((int)lVar22 == 0);
        auVar19._12_4_ = -(uint)((int)((ulonglong)lVar22 >> 0x20) == 0);
        uVar17 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7;
        uVar6 = 0x7fef - uVar5 & 0x7fff;
        if (0x7fef < uVar6) {
          auVar13._0_4_ = -(uint)((int)((ulonglong)DAT_00474320 & (ulonglong)param_1) == 0);
          auVar13._4_4_ =
               -(uint)((int)(((ulonglong)DAT_00474320 & (ulonglong)param_1) >> 0x20) == 0);
          auVar13._8_4_ = 0xffffffff;
          auVar13._12_4_ = 0xffffffff;
          if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7) == 0xff) {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((uVar17 != 0xff) ||
                 (lVar18 = CONCAT44(param_3,param_2) <<
                           (ulonglong)(((param_3 & DAT_00474340._4_4_) >> 0x14) - 0x3f4),
                 lVar22 = auVar19._8_8_ << (ulonglong)(_UNK_0047434c >> 0x14),
                 auVar21._0_4_ = -(uint)((int)lVar18 == 0),
                 auVar21._4_4_ = -(uint)((int)((ulonglong)lVar18 >> 0x20) == 0),
                 auVar21._8_4_ = -(uint)((int)lVar22 == 0),
                 auVar21._12_4_ = -(uint)((int)((ulonglong)lVar22 >> 0x20) == 0),
                 (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_0046501e;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)DAT_00474398;
              }
              goto LAB_00464eb9;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_0046501e;
          }
          goto LAB_00464eff;
        }
        if (uVar17 == 0xff) {
          in_XMM3_Qa = 0;
          lVar18 = CONCAT44(param_3,param_2) <<
                   (ulonglong)(((param_3 & DAT_00474340._4_4_) >> 0x14) - 0x3f4);
          auVar20._0_4_ = -(uint)((int)lVar18 == SUB84(DAT_004743a0,0));
          auVar20._4_4_ =
               -(uint)((int)((ulonglong)lVar18 >> 0x20) == (int)((ulonglong)DAT_004743a0 >> 0x20));
          auVar20._8_4_ = -(uint)(auVar19._8_4_ == 0);
          auVar20._12_4_ = -(uint)(auVar19._12_4_ == 0);
          in_XMM2_Qa = auVar20._8_8_;
          uVar5 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar6) {
            uVar6 = 0xbfe7f;
            in_XMM3_Qa = 0;
            goto LAB_00464916;
          }
          goto LAB_00464d34;
        }
        dVar27 = (double)((ulonglong)param_1 >> 0x20);
        in_XMM2_Qa = auVar19._8_8_ >> 0x20;
        uVar6 = uVar1 | uVar7 & 0x7fffffff;
        uVar5 = 0;
        if (uVar6 != 0) {
          iVar4 = 0x1c;
          dVar27 = DAT_004743b0;
          goto LAB_004650a1;
        }
LAB_00464dba:
        dVar28 = dVar9;
        if ((uVar6 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar6 & uVar5 << 0xd) == 0) {
              return (float10)0;
            }
LAB_00464eb9:
            return (float10)DAT_004743a0;
          }
          dVar27 = (double)((ulonglong)(uVar6 & uVar5 << 0xd | 0x7ff00000) << 0x20);
          iVar4 = 0x1b;
          goto LAB_004650a1;
        }
      }
      else {
        uVar5 = 0;
LAB_00464d34:
        dVar9 = param_1 * 1.844674407370955e+19;
        uVar6 = uVar7;
        dVar28 = dVar9;
        dVar30 = DAT_00474320;
        dVar27 = DAT_00474330;
        if (uVar1 == 0) goto LAB_00464dba;
      }
      dVar9 = (double)(((ulonglong)dVar28 & CONCAT44(DAT_00474340._4_4_,(undefined4)DAT_00474340))
                      >> 0x2c);
      uVar6 = (SUB82(dVar9,0) & 0xff) + 1 & 0x1fe;
      dVar30 = (double)((ulonglong)dVar30 & (ulonglong)dVar28 | (ulonglong)dVar27) *
               *(double *)(&DAT_00470a90 + uVar6 * 4);
      dVar27 = *(double *)(&DAT_00470a90 + uVar6 * 4);
      dVar10 = *(double *)(&DAT_00470ea0 + uVar6 * 8);
      dVar29 = *(double *)(&UNK_00470ea8 + uVar6 * 8);
      uVar6 = 0x43e7f;
      goto LAB_00464916;
    }
    dVar27 = param_1;
    if ((0x7fefffff < (uVar7 & 0x7fffffff)) && ((0x7ff00000 < (uVar7 & 0x7fffffff) || (uVar1 != 0)))
       ) {
LAB_00464eff:
      dVar27 = param_1 + param_1;
      iVar4 = 0x3ee;
      goto LAB_004650a1;
    }
LAB_00464fac:
    uVar23 = (ulonglong)DAT_00474320 & CONCAT44(param_3,param_2);
    auVar15._0_4_ = -(uint)((int)uVar23 == 0);
    auVar15._4_4_ = -(uint)((int)(uVar23 >> 0x20) == 0);
    auVar15._8_4_ = -(uint)((int)(in_XMM3_Qa & in_XMM2_Qa) == 0);
    auVar15._12_4_ = -(uint)((int)((in_XMM3_Qa & in_XMM2_Qa) >> 0x20) == 0);
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7) == 0xff) {
      if (dVar27 != -1.0) {
        if ((param_3 & 0x80000000) == 0) {
          if ((uVar8 & 0x7ff0) < 0x3ff0) {
            return (float10)0;
          }
        }
        else if (0x3fef < (uVar8 & 0x7ff0)) {
          return (float10)0;
        }
LAB_0046501e:
        return (float10)DAT_00474390;
      }
LAB_0046508a:
      dVar27 = (double)CONCAT44(param_3,param_2) + DAT_004743b0;
      iVar4 = 0x1c;
      goto LAB_004650a1;
    }
  }
  dVar27 = (double)CONCAT44(param_3,param_2) + (double)CONCAT44(param_3,param_2);
  iVar4 = 0x3ee;
LAB_004650a1:
  ___libm_error_support(&param_1,(undefined8 *)&param_2,(undefined8 *)&stack0xfffffff4,iVar4);
  return (float10)dVar27;
}

