
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __mtterm(void)

{
  __mtdeletelocks();
  if (_DAT_0047abd4 != 0xffffffff) {
    TlsFree(_DAT_0047abd4);
    _DAT_0047abd4 = 0xffffffff;
  }
  return;
}

