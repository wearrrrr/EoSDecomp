
/* WARNING: Removing unreachable block (ram,0x0045db99) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl _floor(double param_1,undefined2 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint in_MXCSR;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  if (_DAT_006e688c != 0) {
    bVar3 = (in_MXCSR & 0x1f80) == 0x1f80;
    if (bVar3) {
      bVar3 = (in_FPUControlWord & 0x7f) == 0x7f;
    }
    if (bVar3) {
      uVar1 = uVar7 >> 0x14;
      lVar6 = CONCAT44(_UNK_0046ffc4,
                       _5_311205692793400__321_d__5_311205692793400__321_d -
                       (uVar7 >> 0x14 & _0_0d__1_011352377037032__320_d));
      if ((uVar1 & 0x800) == 0) {
        if (uVar1 < 0x3ff) {
          return (float10)0;
        }
        if (uVar1 < 0x433) {
          return (float10)(double)(((ulonglong)param_1 >> lVar6) << lVar6);
        }
      }
      else {
        dVar5 = (double)(((ulonglong)param_1 >> lVar6) << lVar6);
        if (uVar1 < 0xbff) {
          return (float10)(double)((-(ulonglong)(param_1 < _0_0d__0_0d) | (ulonglong)_0_0d__0_0d) &
                                  _4503599627370496_0d___1_0d);
        }
        if (uVar1 < 0xc33) {
          return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & _1_0d__1_0d));
        }
      }
      return (float10)param_1;
    }
  }
  uVar1 = __ctrlfp();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = __sptype(SUB84(param_1,0),uVar7);
    if (0 < iVar2) {
      if (iVar2 < 3) {
        __ctrlfp();
        return (float10)param_1;
      }
      if (iVar2 == 3) {
        fVar4 = __handle_qnan1(0xb,param_1);
        return fVar4;
      }
    }
    dVar5 = param_1 + _1_0d;
    uVar7 = 8;
  }
  else {
    fVar4 = __frnd(param_1);
    dVar5 = (double)fVar4;
    if ((dVar5 == param_1) || ((uVar1 & 0x20) != 0)) {
      __ctrlfp();
      return (float10)dVar5;
    }
    uVar7 = 0x10;
  }
  fVar4 = (float10)__except1(uVar7,0xb,param_1,dVar5,uVar1);
  return fVar4;
}

