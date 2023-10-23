
void __cdecl __free_HSCR_chain(void *param_1)

{
  void *pvVar1;
  
  param_1 = *(void **)((int)param_1 + 4);
  while (param_1 != (void *)0x0) {
    pvVar1 = *(void **)((int)param_1 + 4);
    _free(param_1);
    param_1 = pvVar1;
  }
  return;
}

