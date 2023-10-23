
float10 __cdecl __decomp(uint param_1,uint param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int extraout_EDX;
  float10 fVar3;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) ==
      __0d) {
    fVar3 = (float10)0;
    iVar2 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    if (__0d <= (double)CONCAT17(param_2._3_1_,
                                 CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    while ((param_2._2_1_ & 0x10) == 0) {
      iVar2 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_1_ = (byte)((uint)iVar2 >> 0x10);
      param_2._3_1_ = (byte)((uint)iVar2 >> 0x18);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
    }
    if (bVar1) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar3 = __set_exp(CONCAT17(param_2._3_1_,
                               CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))) &
                      0xffefffffffffffff,0);
    iVar2 = extraout_EDX;
  }
  else {
    fVar3 = __set_exp(CONCAT17(param_2._3_1_,
                               CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0);
    iVar2 = ((param_2 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  }
  *param_3 = iVar2;
  return (float10)(double)fVar3;
}

