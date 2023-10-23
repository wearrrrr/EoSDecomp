
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  uint *_Size_00;
  uint *dwBytes;
  int *_Dst;
  
  _Size_00 = (uint *)(_Count * _Size);
  dwBytes = _Size_00;
  if (_Size_00 == (uint *)0x0) {
    dwBytes = (uint *)0x1;
  }
  do {
    _Dst = (int *)0x0;
    if (dwBytes < (uint *)0xffffffe1) {
      if ((___active_heap == 3) &&
         (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size_00 <= ___sbh_threshold)) {
        __lock(4);
        _Dst = ___sbh_alloc_block(_Size_00);
        FUN_0045e23e();
        if (_Dst != (int *)0x0) {
          _memset(_Dst,0,(size_t)_Size_00);
          goto LAB_0045e209;
        }
      }
      else {
LAB_0045e209:
        if (_Dst != (int *)0x0) {
          return _Dst;
        }
      }
      _Dst = (int *)HeapAlloc(___hHeap_1,8,(SIZE_T)dwBytes);
    }
    if (_Dst != (int *)0x0) {
      return _Dst;
    }
    if (__newmode == 0) {
      return (void *)0x0;
    }
    iVar1 = __callnewh((size_t)dwBytes);
    if (iVar1 == 0) {
      return (void *)0x0;
    }
  } while( true );
}

