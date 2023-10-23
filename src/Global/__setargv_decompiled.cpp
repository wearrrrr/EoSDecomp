
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall __setargv(int param_1)

{
  int iVar1;
  byte **ppbVar2;
  undefined4 uVar3;
  int local_8;
  
  local_8 = param_1;
  if (___mbctype_initialized == 0) {
    ___initmbctable();
  }
  DAT_006e64c4 = 0;
  GetModuleFileNameA((HMODULE)0x0,&_pgmname,0x104);
  __pgmptr = &_pgmname;
  _parse_cmdline((void *)0x0,(byte **)0x0,&local_8);
  iVar1 = local_8;
  ppbVar2 = (byte **)_malloc(param_1 + local_8 * 4);
  if (ppbVar2 == (byte **)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    _parse_cmdline(ppbVar2 + iVar1,ppbVar2,&local_8);
    ___argc = local_8 + -1;
    uVar3 = 0;
    ___argv = ppbVar2;
  }
  return uVar3;
}

