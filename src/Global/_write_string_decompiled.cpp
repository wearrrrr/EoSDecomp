
/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2003 Release */

void __cdecl _write_string(int param_1)

{
  int *in_EAX;
  FILE *unaff_EDI;
  
  if (((*(byte *)&unaff_EDI->_flag & 0x40) == 0) || (unaff_EDI->_base != (char *)0x0)) {
    do {
      if (param_1 < 1) {
        return;
      }
      param_1 = param_1 + -1;
      _write_char(unaff_EDI);
    } while (*in_EAX != -1);
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}

