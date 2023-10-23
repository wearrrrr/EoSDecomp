
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __powhlp
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __powhlp(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  uVar4 = 0;
  if (dVar1 < __0d) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_0047acc8;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) goto LAB_004656ec;
    if (_1_0d < dVar1) goto LAB_0046579c;
    if (_1_0d <= dVar1) goto LAB_0046569f;
  }
  else {
    if (param_3 == -INFINITY) {
      if (_1_0d < dVar1) {
        dVar2 = 0.0;
        goto LAB_0046579c;
      }
      if (dVar1 < _1_0d) goto LAB_0046579c;
LAB_0046569f:
      uVar4 = 1;
      dVar2 = _DAT_0047acd0;
      goto LAB_0046579c;
    }
LAB_004656ec:
    if (param_2 != 0x7ff00000) {
      if (param_2 != -0x100000) {
        return 0;
      }
      if (param_1 != 0) {
        return 0;
      }
      iVar3 = __d_inttype(param_3);
      if (param_3 <= __0d) {
        if (__0d <= param_3) {
          dVar2 = 1.0;
        }
        else {
          dVar2 = _DAT_0047ace8;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
        }
      }
      else {
        dVar2 = _DAT_0047acc8;
        if (iVar3 == 1) {
          dVar2 = -_DAT_0047acc8;
        }
      }
      goto LAB_0046579c;
    }
    if (param_1 != 0) {
      return 0;
    }
    if (__0d < param_3) goto LAB_0046579c;
    if (__0d <= param_3) {
      dVar2 = 1.0;
      goto LAB_0046579c;
    }
  }
  dVar2 = 0.0;
LAB_0046579c:
  *param_4 = dVar2;
  return uVar4;
}

