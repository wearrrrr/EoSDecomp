
/* Library Function - Single Match
    __CIsqrt
   
   Library: Visual Studio */

void __CIsqrt(void)

{
  float10 in_ST0;
  double dVar1;
  
  dVar1 = (double)in_ST0;
  __checkTOS_withFB(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  __sqrt_common(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}

