
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ___onexitinit(void)

{
  ___onexitbegin = (undefined4 *)_malloc(0x80);
  if (___onexitbegin == (undefined4 *)0x0) {
    return 0x18;
  }
  *___onexitbegin = 0;
  ___onexitend = ___onexitbegin;
  return 0;
}

