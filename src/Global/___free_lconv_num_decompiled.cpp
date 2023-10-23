
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2003 Release */

void __cdecl ___free_lconv_num(void **param_1)

{
  void *pvVar1;
  
  if (param_1 != (void **)0x0) {
    pvVar1 = *param_1;
    if ((pvVar1 != *_DAT_0047b3d4) && (pvVar1 != _DAT_0047b3a4)) {
      _free(pvVar1);
    }
    pvVar1 = param_1[1];
    if ((pvVar1 != _DAT_0047b3d4[1]) && (pvVar1 != _DAT_0047b3a8)) {
      _free(pvVar1);
    }
    pvVar1 = param_1[2];
    if ((pvVar1 != _DAT_0047b3d4[2]) && (pvVar1 != _DAT_0047b3ac)) {
      _free(pvVar1);
    }
  }
  return;
}

