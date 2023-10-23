
void __cdecl __free_scorefile(void *param_1)

{
  __free_HSCR_chain(*(void **)((int)param_1 + 0xc));
  _free(*(void **)((int)param_1 + 0xc));
  _free(param_1);
  return;
}

