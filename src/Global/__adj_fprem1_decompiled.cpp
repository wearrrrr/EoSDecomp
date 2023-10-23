
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __adj_fprem1
   
   Library: Visual Studio */

float10 __adj_fprem1(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((unkuint10)in_ST1 & 0) != 0) {
    __fprem1_common(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if ((SUB104(in_ST1,0) | uVar2) != 0) {
    fVar1 = in_ST1 * (float10)_DAT_0047a914;
    __fprem1_common(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),
                    (ushort)((unkuint10)fVar1 >> 0x40));
    return extraout_ST0_00;
  }
  return in_ST0 - (in_ST0 / in_ST1) * in_ST1;
}

