
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2003 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = *(void **)(param_1 + 0xc);
    if ((pvVar1 != *(void **)(_DAT_0047b3d4 + 0xc)) && (pvVar1 != _DAT_0047b3b0)) {
      _free(pvVar1);
    }
    pvVar1 = *(void **)(param_1 + 0x10);
    if ((pvVar1 != *(void **)(_DAT_0047b3d4 + 0x10)) && (pvVar1 != _DAT_0047b3b4)) {
      _free(pvVar1);
    }
    pvVar1 = *(void **)(param_1 + 0x14);
    if ((pvVar1 != *(void **)(_DAT_0047b3d4 + 0x14)) && (pvVar1 != _DAT_0047b3b8)) {
      _free(pvVar1);
    }
    pvVar1 = *(void **)(param_1 + 0x18);
    if ((pvVar1 != *(void **)(_DAT_0047b3d4 + 0x18)) && (pvVar1 != _DAT_0047b3bc)) {
      _free(pvVar1);
    }
    pvVar1 = *(void **)(param_1 + 0x1c);
    if ((pvVar1 != *(void **)(_DAT_0047b3d4 + 0x1c)) && (pvVar1 != _DAT_0047b3c0)) {
      _free(pvVar1);
    }
    pvVar1 = *(void **)(param_1 + 0x20);
    if ((pvVar1 != *(void **)(_DAT_0047b3d4 + 0x20)) && (pvVar1 != _DAT_0047b3c4)) {
      _free(pvVar1);
    }
    pvVar1 = *(void **)(param_1 + 0x24);
    if ((pvVar1 != *(void **)(_DAT_0047b3d4 + 0x24)) && (pvVar1 != _DAT_0047b3c8)) {
      _free(pvVar1);
    }
  }
  return;
}

