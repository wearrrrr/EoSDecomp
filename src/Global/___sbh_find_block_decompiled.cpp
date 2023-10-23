
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___sbh_find_block
   
   Library: Visual Studio 2003 Release */

LPVOID __cdecl ___sbh_find_block(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = ___sbh_pHeaderList;
  while( true ) {
    if ((LPVOID)((int)___sbh_pHeaderList + ___sbh_cntHeaderList * 0x14) <= pvVar1) {
      return (LPVOID)0x0;
    }
    if ((uint)(param_1 - *(int *)((int)pvVar1 + 0xc)) < 0x100000) break;
    pvVar1 = (LPVOID)((int)pvVar1 + 0x14);
  }
  return pvVar1;
}

