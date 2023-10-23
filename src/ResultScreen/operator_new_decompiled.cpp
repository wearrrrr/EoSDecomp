
undefined4 ResultScreen::operator_new(void)

{
  void *pvVar1;
  ResultScreen *pRVar2;
  UpdateFunc *pUVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  __EH_prolog();
  pvVar1 = malloc(0x56b0);
  *(void **)(unaff_EBP + -0x18) = pvVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
  }
  else {
    pRVar2 = constructor(*(ResultScreen **)(unaff_EBP + -0x18));
    *(ResultScreen **)(unaff_EBP + -0x60) = pRVar2;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
  __stub_4();
  pUVar3 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick);
  *(UpdateFunc **)(*(int *)(unaff_EBP + -0x10) + 0x51a8) = pUVar3;
  *(code **)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x51a8) + 8) = on_registration;
  *(code **)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x51a8) + 0xc) = on_cleanup;
  *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x51a8) + 0x1c) =
       *(undefined4 *)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + 8) != 0) {
    if (game_manager.__byte_1823 == '\0') {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8) = 9;
    }
    else {
      *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8) = 0x11;
    }
  }
  iVar4 = UpdateFuncRegistry::register_on_tick
                    (&update_func_registry,*(undefined2 **)(*(int *)(unaff_EBP + -0x10) + 0x51a8),
                     0xd);
  if (iVar4 == 0) {
    pUVar3 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw);
    *(UpdateFunc **)(*(int *)(unaff_EBP + -0x10) + 0x51ac) = pUVar3;
    *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x51ac) + 0x1c) =
         *(undefined4 *)(unaff_EBP + -0x10);
    UpdateFuncRegistry::register_on_draw
              (&update_func_registry,*(UpdateFunc **)(*(int *)(unaff_EBP + -0x10) + 0x51ac),0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}

