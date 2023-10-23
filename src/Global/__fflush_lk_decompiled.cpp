
/* Library Function - Single Match
    __fflush_lk
   
   Library: Visual Studio 2003 Release */

int __cdecl __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)&param_1->_flag + 1) & 0x40) != 0) {
    iVar1 = __commit(param_1->_file);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

