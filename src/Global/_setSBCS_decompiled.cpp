
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Release */

void _setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_006e6660;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)puVar2 = 0;
  _CodePage_006e6764 = 0;
  _DAT_006e6658 = 0;
  _DAT_006e6650 = 0;
  _DAT_006e6770 = 0;
  _DAT_006e6774 = 0;
  _DAT_006e6778 = 0;
  return;
}

