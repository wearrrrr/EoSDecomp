
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 MusicRoom::initialize(void)

{
  UpdateFunc *pUVar1;
  undefined4 result;
  int i;
  int unaff_EBP;
  undefined4 *puVar2;
  
  __EH_prolog();
  if ((_DAT_006ca624 & 1) == 0) {
    _DAT_006ca624 = _DAT_006ca624 | 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    constructor((MusicRoom *)&MUSIC_ROOM);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  *(undefined **)(unaff_EBP + -0x10) = &MUSIC_ROOM;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  for (i = 0xd0d; i != 0; i = i + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick);
  **(UpdateFunc ***)(unaff_EBP + -0x10) = pUVar1;
  *(undefined4 *)(**(int **)(unaff_EBP + -0x10) + 0x1c) = *(undefined4 *)(unaff_EBP + -0x10);
  *(code **)(**(int **)(unaff_EBP + -0x10) + 8) = on_registration;
  *(code **)(**(int **)(unaff_EBP + -0x10) + 0xc) = on_cleanup;
  i = UpdateFuncRegistry::register_on_tick
                (&update_func_registry,(undefined2 *)**(undefined4 **)(unaff_EBP + -0x10),2);
  if (i == 0) {
    pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw);
    *(UpdateFunc **)(*(int *)(unaff_EBP + -0x10) + 4) = pUVar1;
    *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 4) + 0x1c) =
         *(undefined4 *)(unaff_EBP + -0x10);
    UpdateFuncRegistry::register_on_draw
              (&update_func_registry,*(UpdateFunc **)(*(int *)(unaff_EBP + -0x10) + 4),0);
    result = 0;
  }
  else {
    result = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return result;
}

