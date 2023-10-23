
undefined4 __cdecl __d_inttype(double param_1)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = __fpclass(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
  if ((uVar2 & 0x90) == 0) {
    fVar3 = __frnd(param_1);
    if ((double)fVar3 == param_1) {
      dVar1 = param_1 / __0d;
      fVar3 = __frnd(dVar1);
      if (fVar3 == (float10)dVar1) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}

