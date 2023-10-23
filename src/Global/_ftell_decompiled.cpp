
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _ftell
   
   Library: Visual Studio 2003 Release */

long __cdecl _ftell(FILE *_File)

{
  int iVar1;
  
  __lock_file(_File);
  iVar1 = __ftell_lk(&_File->_ptr);
  FUN_0045c8cd();
  return iVar1;
}

