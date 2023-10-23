
undefined4 __cdecl ReplayManager::on_tick_B(int *param_1)

{
  bool bVar1;
  uint8_t uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if ((((game_manager.__byte_1821 != '\0') &&
       (bVar1 = Gui::msg_is_active(&gui), CONCAT31(extraout_var,bVar1) != 0)) &&
      (uVar2 = Gui::__sub_417344(&gui), CONCAT31(extraout_var_00,uVar2) != 0)) &&
     (*param_1 % 3 != 2)) {
    return 6;
  }
  return 1;
}

