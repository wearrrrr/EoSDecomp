
float10 __fastcall _rtforatn20(undefined4 param_1)

{
  char cVar1;
  float10 fVar2;
  
  cVar1 = (char)((uint)param_1 >> 8);
  if ((char)param_1 == '\0') {
    fVar2 = (float10)0;
    if (cVar1 != '\0') {
      return -fVar2;
    }
  }
  else {
    fVar2 = (float10)3.141592653589793;
    if (cVar1 != '\0') {
      fVar2 = -fVar2;
    }
  }
  return fVar2;
}

