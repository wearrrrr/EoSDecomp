
/* Library Function - Multiple Matches With Different Base Names
    __set_errno
    __set_errno_from_matherr
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

errno_t __cdecl __set_errno(int _Value)

{
  int *piVar1;
  
  if (_Value == 1) {
    _Value = (int)__errno();
    *(int *)_Value = 0x21;
  }
  else if ((1 < _Value) && (_Value < 4)) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return (errno_t)piVar1;
  }
  return _Value;
}

