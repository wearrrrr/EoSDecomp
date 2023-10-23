
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _fprintf
    _fwprintf
   
   Library: Visual Studio 2003 Release */

int __cdecl fprintf(FILE *_File,wchar_t *_Format,...)

{
  int _Flag;
  int iVar1;
  
  __lock_file(_File);
  _Flag = __stbuf(_File);
  iVar1 = __output(_File,(byte *)_Format,(int **)&stack0x0000000c);
  __ftbuf(_Flag,_File);
  FUN_0045d361();
  return iVar1;
}

