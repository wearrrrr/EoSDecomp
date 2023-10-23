
undefined4 __cdecl _x_ismbbtype(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if (((&DAT_006e6661)[param_1] & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_004743c2 + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

