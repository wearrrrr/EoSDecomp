
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2003 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (___sbh_cntHeaderList == ___sbh_sizeHeaderList) {
    pvVar2 = HeapReAlloc(___hHeap_1,0,___sbh_pHeaderList,(___sbh_sizeHeaderList * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    ___sbh_sizeHeaderList = ___sbh_sizeHeaderList + 0x10;
    ___sbh_pHeaderList = pvVar2;
  }
  puVar1 = (undefined4 *)((int)___sbh_pHeaderList + ___sbh_cntHeaderList * 0x14);
  pvVar2 = HeapAlloc(___hHeap_1,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      ___sbh_cntHeaderList = ___sbh_cntHeaderList + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(___hHeap_1,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

