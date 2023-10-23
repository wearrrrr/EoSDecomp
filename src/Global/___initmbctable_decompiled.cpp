
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2003 Release */

undefined4 ___initmbctable(void)

{
  if (___mbctype_initialized == 0) {
    __setmbcp(-3);
    ___mbctype_initialized = 1;
  }
  return 0;
}

