
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  LPVOID pvVar4;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
  }
  else {
    if (_NewSize == 0) {
      _free(_Memory);
    }
    else if (___active_heap == 3) {
      do {
        local_20 = (int *)0x0;
        if (_NewSize < (uint *)0xffffffe1) {
          __lock(4);
          local_24 = (uint *)___sbh_find_block((int)_Memory);
          if (local_24 != (uint *)0x0) {
            if (_NewSize <= ___sbh_threshold) {
              iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
              if (iVar2 == 0) {
                local_20 = ___sbh_alloc_block((uint *)_NewSize);
                if (local_20 != (int *)0x0) {
                  puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
                  if (_NewSize <= puVar3) {
                    puVar3 = (uint *)_NewSize;
                  }
                  _memcpy(local_20,_Memory,(size_t)puVar3);
                  local_24 = (uint *)___sbh_find_block((int)_Memory);
                  ___sbh_free_block(local_24,(int)_Memory);
                }
              }
              else {
                local_20 = (int *)_Memory;
              }
            }
            if (local_20 == (int *)0x0) {
              if ((uint *)_NewSize == (uint *)0x0) {
                _NewSize = 1;
              }
              _NewSize = _NewSize + 0xf & 0xfffffff0;
              local_20 = (int *)HeapAlloc(___hHeap_1,0,_NewSize);
              if (local_20 != (int *)0x0) {
                puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
                if (_NewSize <= puVar3) {
                  puVar3 = (uint *)_NewSize;
                }
                _memcpy(local_20,_Memory,(size_t)puVar3);
                ___sbh_free_block(local_24,(int)_Memory);
              }
            }
          }
          FUN_0045e3b7();
          if (local_24 == (uint *)0x0) {
            if ((uint *)_NewSize == (uint *)0x0) {
              _NewSize = 1;
            }
            _NewSize = _NewSize + 0xf & 0xfffffff0;
            local_20 = (int *)HeapReAlloc(___hHeap_1,0,_Memory,_NewSize);
          }
        }
        if (local_20 != (int *)0x0) {
          return local_20;
        }
        if (__newmode == 0) {
          return (void *)0x0;
        }
        iVar2 = __callnewh(_NewSize);
      } while (iVar2 != 0);
    }
    else {
      do {
        pvVar4 = (LPVOID)0x0;
        if (_NewSize < 0xffffffe1) {
          if (_NewSize == 0) {
            _NewSize = 1;
          }
          pvVar4 = HeapReAlloc(___hHeap_1,0,_Memory,_NewSize);
        }
        if (pvVar4 != (LPVOID)0x0) {
          return pvVar4;
        }
        if (__newmode == 0) {
          return (void *)0x0;
        }
        iVar2 = __callnewh(_NewSize);
      } while (iVar2 != 0);
    }
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

