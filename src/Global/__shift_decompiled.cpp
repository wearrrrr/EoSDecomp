
/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2003 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memcpy_0(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}

