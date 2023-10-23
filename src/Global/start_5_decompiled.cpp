
void start_5(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint in_EAX;
  uint extraout_ECX;
  uint uVar1;
  short in_FPUControlWord;
  
  uVar1 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    in_EAX = __load_CW(CONCAT22((short)(in_EAX >> 0x10),in_FPUControlWord));
    uVar1 = extraout_ECX;
  }
  if ((uVar1 & 0x7ff00000) != 0x7ff00000) {
                    /* WARNING: Subroutine does not return */
    __fload_withFB(uVar1 & 0x7ff00000,(int)&param_1);
  }
  if ((in_EAX & 0xfffff | param_3) == 0) {
                    /* WARNING: Subroutine does not return */
    __fload_withFB(0,(int)&param_1);
  }
                    /* WARNING: Subroutine does not return */
  __fload_withFB(0,(int)&param_1);
}

