
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    start
   
   Library: Visual Studio */

void __cdecl start_4(uint param_1,uint param_2)

{
  uint in_EAX;
  undefined4 in_EDX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 unaff_retaddr;
  ushort uVar1;
  undefined4 uVar2;
  
  uVar2 = CONCAT22((short)((uint)in_EDX >> 0x10),in_FPUControlWord);
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
LAB_0045d9bf:
      uVar1 = (ushort)uVar2;
    }
    else {
      __convertTOStoQNaN();
      uVar1 = (ushort)uVar2;
    }
    if (_DAT_006e61e8 == 0) {
      __startOneArgErrorHandling(&DAT_0047a700,0xd,uVar1,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = __load_CW(uVar2);
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)),in_ST0);
    }
    else if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff | param_1) != 0)) goto LAB_0045d9bf;
    if (_DAT_006e61e8 == 0) {
      __math_exit(&DAT_0047a700,0xd,unaff_retaddr,param_1,param_2);
      return;
    }
  }
  return;
}

