
/* WARNING: Unknown calling convention */
/* Library Function - Single Match
    __ftol2
   
   Library: Visual Studio */

longlong __ftol2(double param_1)

{
  uint uVar1;
  float fVar2;
  uint local_20;
  float fStack_1c;
  float input;
  ulonglong result;
  
  input = (float)param_1;
  result = (ulonglong)ROUND(input);
  local_20 = (uint)result;
  fStack_1c = (float)(result >> 0x20);
  fVar2 = input;
  if ((local_20 != 0) || (fVar2 = fStack_1c, (result & 0x7fffffff00000000) != 0)) {
    if ((int)fVar2 < 0) {
      result = result + (0x80000000 < ((uint)(input - (float)result) ^ 0x80000000));
    }
    else {
      uVar1 = (uint)(0x80000000 < (uint)(input - (float)result));
      result = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar1),local_20 - uVar1);
    }
  }
  return result;
}

