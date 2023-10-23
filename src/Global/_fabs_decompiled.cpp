
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _fabs
   
   Library: Visual Studio 2003 Release */

double __cdecl _fabs(double _X)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  uVar1 = __ctrlfp();
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar2 = __sptype(_X._0_4_,(uint)((ulonglong)_X >> 0x20));
    if (iVar2 == 1) {
      __ctrlfp();
      fVar3 = (float10)_X;
    }
    else if (iVar2 == 2) {
      __ctrlfp();
      fVar3 = -(float10)_X;
    }
    else if (iVar2 == 3) {
      fVar3 = __handle_qnan1(0x15,_X);
    }
    else {
      fVar3 = (float10)__except1(8,0x15,_X,_X + _1_0d,uVar1);
    }
  }
  else {
    __ctrlfp();
    fVar3 = (float10)(double)((ulonglong)_X & 0x7fffffffffffffff);
  }
  return (double)fVar3;
}

