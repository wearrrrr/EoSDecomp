
undefined4 Gui::operator_new(void)

{
  void *pvVar1;
  GuiImpl *pGVar2;
  undefined4 result;
  int iVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  __EH_prolog();
  *(Gui **)(unaff_EBP + -0x10) = &gui;
  if (supervisor.dword_18C != 3) {
    puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    pvVar1 = malloc(0x2c44);
    *(void **)(unaff_EBP + -0x18) = pvVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    else {
      pGVar2 = GuiImpl::constructor(*(GuiImpl **)(unaff_EBP + -0x18));
      *(GuiImpl **)(unaff_EBP + -0x1c) = pGVar2;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4) = *(undefined4 *)(unaff_EBP + -0x14);
  }
  GUI_ON_TICK__priority_.function_pointer = on_tick;
  GUI_ON_TICK__priority_.on_registration = on_registration;
  GUI_ON_TICK__priority_.on_cleanup = on_cleanup;
  GUI_ON_TICK__priority_.ecx_arg_to_func = *(void **)(unaff_EBP + -0x10);
  iVar3 = UpdateFuncRegistry::register_on_tick
                    (&update_func_registry,&GUI_ON_TICK__priority_.priority,0xc);
  if (iVar3 == 0) {
    GUI_ON_DRAW__priority_.function_pointer = on_draw;
    GUI_ON_DRAW__priority_.on_registration = (void *)0x0;
    GUI_ON_DRAW__priority_.on_cleanup = (void *)0x0;
    GUI_ON_DRAW__priority_.ecx_arg_to_func = *(void **)(unaff_EBP + -0x10);
    UpdateFuncRegistry::register_on_draw(&update_func_registry,&GUI_ON_DRAW__priority_,0xb);
    result = 0;
  }
  else {
    result = 0xffffffff;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return result;
}

