
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Different Base Names
    __sqrt_common
    start
   
   Library: Visual Studio */

uint __cdecl __sqrt_common(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_EDX;
  bool in_ZF;
  short in_FPUControlWord;
  undefined4 unaff_retaddr;
  ushort uVar2;
  undefined4 uVar3;
  
  uVar3 = CONCAT22((short)((uint)in_EDX >> 0x10),in_FPUControlWord);
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = __convertTOStoQNaN();
      uVar2 = (ushort)uVar3;
      goto LAB_0045bcbb;
    }
    uVar1 = param_2 & 0x80000000;
    if (uVar1 == 0) goto LAB_0045bc5e;
  }
  else {
    uVar1 = param_2;
    if (in_FPUControlWord != 0x27f) {
      uVar1 = __load_CW(uVar3);
    }
    if (((uVar1 & 0x80000000) == 0) ||
       ((((uVar1 & 0x7ff00000) == 0 && ((uVar1 & 0xfffff) == 0)) && (param_1 == 0)))) {
LAB_0045bc5e:
      if (_DAT_006e61e8 != 0) {
        return uVar1;
      }
      uVar1 = __math_exit(&DAT_0047a640,5,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  uVar2 = (ushort)uVar3;
  uVar1 = 1;
LAB_0045bcbb:
  if (_DAT_006e61e8 != 0) {
    return uVar1;
  }
  __startOneArgErrorHandling(&DAT_0047a640,5,uVar2,unaff_retaddr,param_1,param_2);
  return uVar1;
}

