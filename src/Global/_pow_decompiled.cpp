
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall _pow(void *this,double param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  bool bVar10;
  uint in_MXCSR;
  ushort in_FPUControlWord;
  double dVar11;
  double dVar12;
  undefined8 in_XMM1_Qa;
  double dVar13;
  ushort uVar19;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  ulonglong in_XMM2_Qa;
  longlong lVar20;
  longlong lVar24;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  ulonglong in_XMM3_Qa;
  ulonglong uVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uStack_c;
  
  uVar1 = _uStack_c;
  if (_DAT_006e688c == 0) {
code_r0x0045dde4:
                    /* WARNING: Subroutine does not return */
    __fload_withFB(this,(int)&param_2);
  }
  bVar10 = (in_MXCSR & 0x1f80) == 0x1f80;
  if (bVar10) {
    uVar25 = (ulonglong)_uStack_c >> 0x30;
    bVar10 = (in_FPUControlWord & 0x7f) == 0x7f;
  }
  if (!bVar10) goto code_r0x0045dde4;
  dVar11 = (double)((ulonglong)param_1 >> 0x2c);
  uVar9 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar2 = (SUB82(dVar11,0) & 0xff) + 1 & 0x1fe;
  dVar32 = (double)((ulonglong)DAT_00474320 & (ulonglong)param_1 | (ulonglong)DAT_00474330) *
           *(double *)(&DAT_00470a90 + uVar2 * 4);
  dVar29 = *(double *)(&DAT_00470a90 + uVar2 * 4);
  dVar12 = *(double *)(&DAT_00470ea0 + uVar2 * 8);
  dVar31 = *(double *)(&UNK_00470ea8 + uVar2 * 8);
  uVar6 = 0x7fef - uVar9;
  uVar2 = SUB84(param_1,0);
  uVar8 = (uint)((ulonglong)param_1 >> 0x20);
  dVar30 = param_1;
  if ((uVar9 - 0x10 | uVar6) < 0x80000000) {
    uVar6 = 0;
    uVar7 = 0x3fe7f;
LAB_00464916:
    uVar3 = ((ushort)((ulonglong)dVar32 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar27 = (double)((ulonglong)dVar30 & (ulonglong)DAT_00474320 | (ulonglong)DAT_00474330);
    dVar13 = (double)(DAT_00474378 & (ulonglong)dVar27);
    in_XMM3_Qa = in_XMM3_Qa >> 0x1f;
    dVar27 = dVar27 - dVar13;
    uVar4 = ((ushort)((ulonglong)(dVar32 * *(double *)(&DAT_004716b0 + uVar3 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar28 = dVar29 * *(double *)(&DAT_004716b0 + uVar3 * 4) *
             *(double *)(&DAT_004722d0 + uVar4 * 4);
    dVar32 = dVar32 * *(double *)(&DAT_004716b0 + uVar3 * 4) *
             *(double *)(&DAT_004722d0 + uVar4 * 4);
    dVar30 = dVar12 + *(double *)(&DAT_00471ac0 + uVar3 * 8) +
             (double)(int)((longlong)dVar11 - (ulonglong)uVar7 >> 8) +
             *(double *)(&DAT_00472ae0 + uVar4 * 8);
    dVar11 = dVar31 + *(double *)(&DAT_00471ac8 + uVar3 * 8) +
             *(double *)(&DAT_00472ae8 + uVar4 * 8);
    dVar12 = (double)(DAT_00474378 & (ulonglong)dVar28);
    dVar28 = dVar28 - dVar12;
    dVar33 = DAT_00474380 + dVar32;
    dVar31 = dVar30 + dVar33;
    dVar29 = (double)CONCAT44(param_3,param_2);
    uVar19 = (ushort)(param_3 >> 0x10);
    dVar30 = dVar30 - dVar31;
    uVar3 = (uint)(ushort)((ulonglong)dVar31 >> 0x30);
    dVar12 = (((dVar32 - dVar12 * dVar13) - dVar13 * dVar28) - dVar12 * dVar27) - dVar27 * dVar28;
    dVar13 = dVar33 - dVar12;
    dVar32 = dVar31 - dVar12;
    uVar7 = uVar19 & 0x7ff0;
    if (uVar7 < 0x7ff0) {
      iVar5 = (uVar7 - 0x3ff0) + (uVar3 & 0x7ff0);
      if ((0x40a0U - iVar5 | iVar5 - 0x3c70U) < 0x80000000) {
LAB_00464a68:
        dVar27 = (double)(DAT_00474378 & (ulonglong)dVar29);
        dVar28 = (double)(DAT_00474378 & (ulonglong)dVar32);
        dVar12 = (dVar30 + dVar33) - (dVar12 - (dVar31 - dVar32));
        dVar31 = dVar27 * dVar28 * 128.0;
        uVar2 = (uint)ROUND(dVar31);
        dVar29 = dVar27 * (dVar32 - dVar28) + dVar28 * (dVar29 - dVar27) +
                 (dVar32 - dVar28) * (dVar29 - dVar27);
        if (0 < (int)(0x1ff7f - uVar2 | uVar2 + 0x1e1ff)) {
          iVar5 = (uVar2 & 0x7f) * 0x10;
          auVar14._0_8_ = (double)((ulonglong)((uVar6 + uVar2 & 0xffffff80) + 0x1ff80) << 0x2d);
          auVar14._8_4_ = 0;
          auVar14._12_4_ = (int)((ulonglong)auVar14._0_8_ >> 0x20);
          dVar30 = *(double *)(&DAT_00473b10 + iVar5) * auVar14._0_8_;
          dVar29 = (dVar31 - ((dVar31 + _DAT_00474310) - _DAT_00474310)) * 0.0078125 +
                   dVar29 + ((_DAT_00473af0 * dVar13 + _DAT_00473b00 * dVar13 * dVar13) *
                             dVar13 * dVar13 +
                             _UNK_00473af8 * dVar13 + _UNK_00473b08 * dVar13 * dVar13 +
                            dVar11 + dVar12) * (double)CONCAT44(param_3,param_2);
          return (float10)(dVar29 * dVar29 * dVar30 *
                           (_DAT_00474360 + _DAT_00474350 * dVar29) * dVar29 * dVar29 +
                           *(double *)(&UNK_00473b18 + iVar5) * auVar14._8_8_ +
                           (_UNK_00474368 + _UNK_00474358 * dVar29) * dVar29 * dVar29 * dVar30 +
                           DAT_00474370 * dVar29 * dVar30 + dVar30);
        }
        if ((int)uVar2 < 1) {
          if ((int)uVar2 < -0x3fdff) {
LAB_004652fa:
            _uStack_c = (double)((ulonglong)(DAT_004743a8 * DAT_004743a8) | (ulonglong)uVar6 << 0x2d
                                );
            iVar5 = 0x19;
            goto LAB_004650a1;
          }
          uVar6 = uVar6 + 0x80;
          uVar8 = (uVar2 & 0xffffff80) + 0x3fe80;
          uVar9 = 0;
        }
        else {
          if (0x3ffff < uVar2) goto LAB_0046531d;
          uVar6 = uVar6 + 0x3ff00;
          uVar8 = uVar2 - 0x80 & 0xffffff80;
          uVar9 = 0x3ff0;
        }
        iVar5 = (uVar2 & 0x7f) * 0x10;
        uVar2 = ((int)-(uVar8 - 0x1ff80) >> 7) + 2;
        auVar18._0_8_ = (double)((ulonglong)uVar8 << 0x2d);
        auVar18._8_4_ = 0;
        auVar18._12_4_ = (int)((ulonglong)auVar18._0_8_ >> 0x20);
        dVar32 = *(double *)(&DAT_00473b10 + iVar5) * auVar18._0_8_;
        dVar29 = (dVar31 - ((dVar31 + _DAT_00474310) - _DAT_00474310)) * 0.0078125 +
                 dVar29 + ((_DAT_00473af0 * dVar13 + _DAT_00473b00 * dVar13 * dVar13) *
                           dVar13 * dVar13 +
                           _UNK_00473af8 * dVar13 + _UNK_00473b08 * dVar13 * dVar13 +
                          dVar11 + dVar12) * (double)CONCAT44(param_3,param_2);
        dVar12 = (double)((ulonglong)uVar6 << 0x2d);
        uVar25 = (ulonglong)(uVar2 + (uVar2 & 0x20));
        dVar31 = (double)(-1L << uVar25 & (ulonglong)dVar32);
        dVar29 = dVar29 * dVar29 * dVar32 *
                 (_DAT_00474360 + _DAT_00474350 * dVar29) * dVar29 * dVar29 +
                 *(double *)(&UNK_00473b18 + iVar5) * auVar18._8_8_ +
                 (_UNK_00474368 + _UNK_00474358 * dVar29) * dVar29 * dVar29 * dVar32 +
                 DAT_00474370 * dVar29 * dVar32;
        dVar30 = (double)((ulonglong)(dVar31 + dVar29) & -1L << uVar25);
        dVar29 = dVar29 + (dVar31 - dVar30) + (dVar32 - dVar31);
        if ((int)(uVar8 - 0x1ff80) < 1) {
          dVar29 = dVar29 * dVar12 + dVar30 * dVar12;
          _uStack_c = dVar29 + (double)((ulonglong)uVar9 << 0x30) * dVar29;
          iVar5 = 0x18;
          if ((((ushort)((ulonglong)_uStack_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (iVar5 = 0x19, ((ulonglong)_uStack_c & 0x7ff0000000000000) != 0)) {
            return (float10)_uStack_c;
          }
        }
        else {
          dVar12 = (dVar29 + dVar30) * dVar12;
          _uStack_c = dVar12 + (double)((ulonglong)uVar9 << 0x30) * dVar12;
          iVar5 = 0x18;
          if ((((ushort)((ulonglong)_uStack_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (iVar5 = 0x19, ((ulonglong)_uStack_c & 0x7ff0000000000000) != 0)) {
            return (float10)_uStack_c;
          }
        }
      }
      else {
        dVar31 = dVar29 * dVar32;
        uVar2 = (ushort)((ulonglong)dVar31 >> 0x30) & 0x7ff0;
        uVar8 = uVar2 - 0x3c70;
        if ((0x40a0 - uVar2 | uVar8) < 0x80000000) goto LAB_00464a68;
        if (0x7fffffff < uVar8) {
          return (float10)(double)((ulonglong)(uVar6 | 0x1ff80) << 0x2d);
        }
        if (((uVar19 ^ (uVar9 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_004652fa;
LAB_0046531d:
        iVar5 = 0x18;
        _uStack_c = DAT_00474390;
        if (uVar6 != 0) {
          _uStack_c = DAT_00474398;
        }
      }
      goto LAB_004650a1;
    }
    dVar29 = (double)CONCAT44(uVar6,uVar3);
    if (uVar2 != 0) goto LAB_00464fac;
    if (uVar8 == 0x3ff00000) goto LAB_0046508a;
    dVar29 = (double)CONCAT44(uVar6,uVar8);
    if (uVar8 != 0xbff00000) goto LAB_00464fac;
    uVar25 = (ulonglong)DAT_00474320 & CONCAT44(param_3,param_2);
    auVar16._0_4_ = -(uint)((int)uVar25 == 0);
    auVar16._4_4_ = -(uint)((int)(uVar25 >> 0x20) == 0);
    auVar16._8_4_ = -(uint)((int)(in_XMM3_Qa & in_XMM2_Qa) == 0);
    auVar16._12_4_ = -(uint)((int)((in_XMM3_Qa & in_XMM2_Qa) >> 0x20) == 0);
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar16._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar16._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar16._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar16._12_4_ >> 0x1f) << 0xf) == 0xff) {
      return (float10)1;
    }
  }
  else {
    uVar7 = param_3 & DAT_00474340._4_4_;
    uVar25 = in_XMM3_Qa >> 0x30;
    if (uVar7 < 0x7ff00000) {
      if ((param_2 | uVar7) == 0) {
        iVar5 = 0x1a;
        _uStack_c = DAT_00474330;
        if ((uVar2 | uVar8 & 0x7fffffff) != 0) {
          iVar5 = 0x1d;
          if (((uVar8 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar8 & 0x7fffffff) < 0x7ff00000 || (uVar2 == 0)))) {
            return (float10)DAT_00474330;
          }
        }
        goto LAB_004650a1;
      }
      if ((int)uVar6 < 0) {
        uVar26 = in_XMM3_Qa << 0x34;
        iVar5 = (uVar7 >> 0x14) - 0x3f3;
        in_XMM3_Qa = 0;
        uVar19 = (ushort)((ushort)((ulonglong)in_XMM1_Qa >> 0x30) & (ushort)uVar25) >> 4;
        lVar20 = (CONCAT44(param_3,param_2) |
                 CONCAT44(DAT_00474340._4_4_,(undefined4)DAT_00474340) << 0x34) <<
                 (ulonglong)
                 CONCAT22((ushort)(-1 < iVar5) * (short)((uint)iVar5 >> 0x10),
                          (ushort)(-1 < (short)iVar5) * (short)iVar5);
        lVar24 = (in_XMM2_Qa | uVar26) << (ulonglong)(ushort)((-1 < (short)uVar19) * uVar19);
        auVar21._0_4_ = -(uint)((int)lVar20 == 0);
        auVar21._4_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0);
        auVar21._8_4_ = -(uint)((int)lVar24 == 0);
        auVar21._12_4_ = -(uint)((int)((ulonglong)lVar24 >> 0x20) == 0);
        uVar19 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7;
        uVar7 = 0x7fef - uVar6 & 0x7fff;
        if (0x7fef < uVar7) {
          auVar15._0_4_ = -(uint)((int)((ulonglong)DAT_00474320 & (ulonglong)param_1) == 0);
          auVar15._4_4_ =
               -(uint)((int)(((ulonglong)DAT_00474320 & (ulonglong)param_1) >> 0x20) == 0);
          auVar15._8_4_ = 0xffffffff;
          auVar15._12_4_ = 0xffffffff;
          if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7) == 0xff) {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((uVar19 != 0xff) ||
                 (lVar20 = CONCAT44(param_3,param_2) <<
                           (ulonglong)(((param_3 & DAT_00474340._4_4_) >> 0x14) - 0x3f4),
                 lVar24 = auVar21._8_8_ << (ulonglong)(_UNK_0047434c >> 0x14),
                 auVar23._0_4_ = -(uint)((int)lVar20 == 0),
                 auVar23._4_4_ = -(uint)((int)((ulonglong)lVar20 >> 0x20) == 0),
                 auVar23._8_4_ = -(uint)((int)lVar24 == 0),
                 auVar23._12_4_ = -(uint)((int)((ulonglong)lVar24 >> 0x20) == 0),
                 (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7) == 0xff)) {
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
        if (uVar19 == 0xff) {
          in_XMM3_Qa = 0;
          lVar20 = CONCAT44(param_3,param_2) <<
                   (ulonglong)(((param_3 & DAT_00474340._4_4_) >> 0x14) - 0x3f4);
          auVar22._0_4_ = -(uint)((int)lVar20 == SUB84(DAT_004743a0,0));
          auVar22._4_4_ =
               -(uint)((int)((ulonglong)lVar20 >> 0x20) == (int)((ulonglong)DAT_004743a0 >> 0x20));
          auVar22._8_4_ = -(uint)(auVar21._8_4_ == 0);
          auVar22._12_4_ = -(uint)(auVar21._12_4_ == 0);
          in_XMM2_Qa = auVar22._8_8_;
          uVar6 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar7) {
            uVar7 = 0xbfe7f;
            in_XMM3_Qa = 0;
            goto LAB_00464916;
          }
          goto LAB_00464d34;
        }
        dVar29 = (double)((ulonglong)param_1 >> 0x20);
        in_XMM2_Qa = auVar21._8_8_ >> 0x20;
        uVar7 = uVar2 | uVar8 & 0x7fffffff;
        uVar6 = 0;
        if (uVar7 != 0) {
          iVar5 = 0x1c;
          _uStack_c = DAT_004743b0;
          goto LAB_004650a1;
        }
LAB_00464dba:
        dVar30 = dVar11;
        if ((uVar7 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar7 & uVar6 << 0xd) == 0) {
              return (float10)0;
            }
LAB_00464eb9:
            return (float10)DAT_004743a0;
          }
          _uStack_c = (double)((ulonglong)(uVar7 & uVar6 << 0xd | 0x7ff00000) << 0x20);
          iVar5 = 0x1b;
          goto LAB_004650a1;
        }
      }
      else {
        uVar6 = 0;
LAB_00464d34:
        dVar11 = param_1 * 1.844674407370955e+19;
        uVar7 = uVar8;
        dVar30 = dVar11;
        dVar32 = DAT_00474320;
        dVar29 = DAT_00474330;
        if (uVar2 == 0) goto LAB_00464dba;
      }
      dVar11 = (double)(((ulonglong)dVar30 & CONCAT44(DAT_00474340._4_4_,(undefined4)DAT_00474340))
                       >> 0x2c);
      uVar7 = (SUB82(dVar11,0) & 0xff) + 1 & 0x1fe;
      dVar32 = (double)((ulonglong)dVar32 & (ulonglong)dVar30 | (ulonglong)dVar29) *
               *(double *)(&DAT_00470a90 + uVar7 * 4);
      dVar29 = *(double *)(&DAT_00470a90 + uVar7 * 4);
      dVar12 = *(double *)(&DAT_00470ea0 + uVar7 * 8);
      dVar31 = *(double *)(&UNK_00470ea8 + uVar7 * 8);
      uVar7 = 0x43e7f;
      goto LAB_00464916;
    }
    dVar29 = param_1;
    if ((0x7fefffff < (uVar8 & 0x7fffffff)) && ((0x7ff00000 < (uVar8 & 0x7fffffff) || (uVar2 != 0)))
       ) {
LAB_00464eff:
      _uStack_c = param_1 + param_1;
      iVar5 = 0x3ee;
      goto LAB_004650a1;
    }
LAB_00464fac:
    uVar25 = (ulonglong)DAT_00474320 & CONCAT44(param_3,param_2);
    auVar17._0_4_ = -(uint)((int)uVar25 == 0);
    auVar17._4_4_ = -(uint)((int)(uVar25 >> 0x20) == 0);
    auVar17._8_4_ = -(uint)((int)(in_XMM3_Qa & in_XMM2_Qa) == 0);
    auVar17._12_4_ = -(uint)((int)((in_XMM3_Qa & in_XMM2_Qa) >> 0x20) == 0);
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7) == 0xff) {
      if (dVar29 != -1.0) {
        if ((param_3 & 0x80000000) == 0) {
          if ((uVar9 & 0x7ff0) < 0x3ff0) {
            return (float10)0;
          }
        }
        else if (0x3fef < (uVar9 & 0x7ff0)) {
          return (float10)0;
        }
LAB_0046501e:
        return (float10)DAT_00474390;
      }
LAB_0046508a:
      _uStack_c = (double)CONCAT44(param_3,param_2) + DAT_004743b0;
      iVar5 = 0x1c;
      goto LAB_004650a1;
    }
  }
  _uStack_c = (double)CONCAT44(param_3,param_2) + (double)CONCAT44(param_3,param_2);
  iVar5 = 0x3ee;
LAB_004650a1:
  ___libm_error_support(&param_1,(undefined8 *)&param_2,(undefined8 *)&uStack_c,iVar5);
  return (float10)_uStack_c;
}

