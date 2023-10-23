
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  ___sbh_pHeaderList = HeapAlloc(___hHeap_1,0,0x140);
  if (___sbh_pHeaderList == (LPVOID)0x0) {
    return 0;
  }
  ___sbh_pHeaderDefer = 0;
  ___sbh_cntHeaderList = 0;
  ___sbh_pHeaderScan = ___sbh_pHeaderList;
  ___sbh_threshold = param_1;
  ___sbh_sizeHeaderList = 0x10;
  return 1;
}

