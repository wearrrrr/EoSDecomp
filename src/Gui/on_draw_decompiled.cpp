
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Gui::on_draw(Gui *gui)

{
  char cVar1;
  uint unaff_retaddr;
  char *local_40;
  char local_34;
  undefined auStack_33 [31];
  uint local_14;
  Float3 vector;
  
  local_14 = _DAT_0047a630 ^ unaff_retaddr;
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x17,8);
  if (gui->impl->dword_2BDC != 0) {
    vector.x = _4_0f;
    vector.y = _28_0f;
    vector.z = 0.0;
    ascii_manager.color = 0xffffff40;
    if (game_manager.current_stage < 6) {
      AsciiManager::drawf(&ascii_manager,&vector,"Stage Clear\n\n");
    }
    else {
      AsciiManager::drawf(&ascii_manager,&vector,"All Clear!\n\n");
    }
    vector.y = vector.y + _32_0f;
    ascii_manager.color = 0xffffffff;
    AsciiManager::drawf(&ascii_manager,&vector,"Stage * 1000 = %5d\n");
    vector.y = vector.y + ram0x0046a2b4;
    ascii_manager.color = 0xffe0e0ff;
    AsciiManager::drawf(&ascii_manager,&vector,"Power *  100 = %5d\n");
    vector.y = vector.y + ram0x0046a2b4;
    ascii_manager.color = 0xffd0d0ff;
    AsciiManager::drawf(&ascii_manager,&vector,"Graze *   10 = %5d\n");
    vector.y = vector.y + ram0x0046a2b4;
    ascii_manager.color = 0xffff8080;
    AsciiManager::drawf(&ascii_manager,&vector,"    * Point Item %3d\n");
    if (5 < game_manager.current_stage) {
      vector.y = vector.y + ram0x0046a2b4;
      ascii_manager.color = 0xffffff80;
      AsciiManager::drawf(&ascii_manager,&vector,"Player    = %8d\n");
      vector.y = vector.y + ram0x0046a2b4;
      AsciiManager::drawf(&ascii_manager,&vector,"Bomb      = %8d\n");
    }
    vector.y = vector.y + _32_0f;
    if (game_manager.difficulty == 0) {
      ascii_manager.color = 0xffff8080;
      AsciiManager::drawf(&ascii_manager,&vector,"Easy Rank      * 0.5\n");
    }
    else if (game_manager.difficulty == 1) {
      ascii_manager.color = 0xffff8080;
      AsciiManager::drawf(&ascii_manager,&vector,"Normal Rank    * 1.0\n");
    }
    else if (game_manager.difficulty == 2) {
      ascii_manager.color = 0xffff8080;
      AsciiManager::drawf(&ascii_manager,&vector,"Hard Rank      * 1.2\n");
    }
    else if (game_manager.difficulty == 3) {
      ascii_manager.color = 0xffff8080;
      AsciiManager::drawf(&ascii_manager,&vector,"Lunatic Rank   * 1.5\n");
    }
    else if (game_manager.difficulty == 4) {
      ascii_manager.color = 0xffff8080;
      AsciiManager::drawf(&ascii_manager,&vector,"Extra Rank     * 2.0\n");
    }
    vector.y = vector.y + ram0x0046a2b4;
    if ((game_manager.difficulty < 4) && (game_manager.__byte_1823 == '\0')) {
      if (supervisor.config_defaults.starting_lives == '\x03') {
        ascii_manager.color = 0xffff8080;
        AsciiManager::drawf(&ascii_manager,&vector,"Player Penalty * 0.5\n");
        vector.y = vector.y + ram0x0046a2b4;
      }
      else if (supervisor.config_defaults.starting_lives == '\x04') {
        ascii_manager.color = 0xffff8080;
        AsciiManager::drawf(&ascii_manager,&vector,"Player Penalty * 0.2\n");
        vector.y = vector.y + ram0x0046a2b4;
      }
    }
    ascii_manager.color = 0xffffffff;
    AsciiManager::drawf(&ascii_manager,&vector,"Total     = %8d");
    ascii_manager.color = 0xffffffff;
  }
  GuiImpl::__on_draw(gui->impl);
  __sub_41ADF3(gui);
  __sub_419C99(gui);
  ascii_manager.dword_6230 = 1;
  if ((gui->impl->child_b_2BE4).field_10 != 0) {
    ascii_manager.color = 0xffffff80;
    AsciiManager::drawf(&ascii_manager,&(gui->impl->child_b_2BE4).vec3,"BONUS %8d");
    ascii_manager.color = 0xffffffff;
  }
  if ((gui->impl->child_b_2C04).field_10 != 0) {
    ascii_manager.color = 0xffc0b0ff;
    AsciiManager::drawf(&ascii_manager,&(gui->impl->child_b_2C04).vec3,"Full Power Mode!!");
    ascii_manager.color = 0xffffffff;
  }
  if ((gui->impl->child_b_2C24).field_10 != 0) {
    ascii_manager.color = 0xffff0000;
    (gui->impl->child_b_2C24).vec3.x = (_84_0f - _7_0f * ram0x0046a2b4) / _2_0f + _32_0f;
    (gui->impl->child_b_2C24).vec3.y = _0_0f;
    AsciiManager::drawf(&ascii_manager,&(gui->impl->child_b_2C24).vec3,"Spell Card Bonus!");
    (gui->impl->child_b_2C24).vec3.y = (gui->impl->child_b_2C24).vec3.y + ram0x0046a2b4;
    _sprintf(&local_34,(byte *)&___d_);
    local_40 = &local_34;
    do {
      cVar1 = *local_40;
      local_40 = local_40 + 1;
    } while (cVar1 != 0);
    (gui->impl->child_b_2C24).vec3.x =
         (_84_0f - (float)(ulonglong)(uint)((int)local_40 - (int)auStack_33) * _32_0f) / _2_0f +
         _32_0f;
    ascii_manager.scale.x = _2_0f;
    ascii_manager.scale.y = _2_0f;
    ascii_manager.color = 0xffff8080;
    AsciiManager::draw(&ascii_manager,&(gui->impl->child_b_2C24).vec3,&local_34);
    ascii_manager.scale.x = 1.0;
    ascii_manager.scale.y = 1.0;
    ascii_manager.color = 0xffffffff;
  }
  ascii_manager.dword_6230 = 0;
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x17,4);
  ___security_check_cookie_4(local_14 ^ unaff_retaddr);
  return;
}

