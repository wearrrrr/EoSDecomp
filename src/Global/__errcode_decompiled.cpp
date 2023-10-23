
/* Library Function - Single Match
    __errcode
   
   Library: Visual Studio 2003 Release */

int __cdecl __errcode(byte param_1)

{
  int iStack_4;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return 1;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) << 1;
      }
      iStack_4 = 3;
    }
    else {
      iStack_4 = 2;
    }
  }
  else {
    iStack_4 = 5;
  }
  return iStack_4;
}

