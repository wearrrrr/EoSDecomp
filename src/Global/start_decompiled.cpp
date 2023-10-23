
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    start
   
   Library: Visual Studio */

uint __cdecl start(int param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  bool in_ZF;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = __convertTOStoQNaN();
    }
    if (_DAT_006e61e8 == 0) {
      __startOneArgErrorHandling(&DAT_0047a6d0,0x20,in_FPUControlWord,unaff_retaddr,param_1,param_2)
      ;
      return uVar1;
    }
  }
  else {
    fptan(in_ST0);
    fVar2 = (float10)1;
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),in_FPUStatusWord);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - (fVar2 / __PI_2__62_L) * __PI_2__62_L;
        uVar1 = CONCAT22((short)(uVar1 >> 0x10),in_FPUStatusWord);
      } while ((in_FPUStatusWord & 0x400) != 0);
      fptan(fVar2);
    }
    if (_DAT_006e61e8 == 0) {
      uVar1 = __math_exit(&DAT_0047a6d0,0x20,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

