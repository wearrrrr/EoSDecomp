
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 fFMOD(void)

{
  ushort in_FPUStatusWord;
  float10 in_ST0;
  float10 in_ST1;
  float10 extraout_ST1;
  
  do {
    if (_DAT_006e61ec == 1) {
      in_ST1 = __adj_fprem();
      in_ST0 = extraout_ST1;
    }
    else {
      in_ST1 = in_ST1 - (in_ST1 / in_ST0) * in_ST0;
    }
  } while ((in_FPUStatusWord & 0x400) != 0);
  return in_ST1;
}

