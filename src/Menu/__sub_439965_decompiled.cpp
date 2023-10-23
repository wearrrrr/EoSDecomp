
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Menu::__sub_439965(int param_1)

{
  uint local_2c;
  uint local_28;
  Float3 local_20;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x81f0) == 0x11) {
    local_20.x = _20_0f;
    local_20.y = ram0x0046c4d8;
    local_20.z = 0.0;
    if (*(int *)(param_1 + 0x81f4) < 0x1e) {
      local_28 = (*(int *)(param_1 + 0x81f4) * 0xff) / 0x1e;
    }
    else {
      local_28 = 0xff;
    }
    local_c = local_28;
    local_10 = (uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2;
    if (*(byte *)(local_10 * 0x18 + 0x69cce1 + game_manager.difficulty) < 7) {
      local_2c = (uint)*(byte *)(local_10 * 0x18 + 0x69cce1 + game_manager.difficulty);
    }
    else {
      local_2c = 6;
    }
    local_14 = local_2c;
    if ((game_manager.difficulty == 0) && (local_2c == 6)) {
      local_14 = 5;
    }
    for (local_8 = 0; local_8 < (int)local_14; local_8 = local_8 + 1) {
      if (local_8 == *(int *)(param_1 + 0x81a0)) {
        ascii_manager.color = local_c << 0x18 | 0xc0f0f0;
      }
      else {
        ascii_manager.color = (local_c >> 1) << 0x18 | 0x80c0c0;
      }
      AsciiManager::drawf(&ascii_manager,&local_20,"STAGE %d  %.9d");
      local_20.y = local_20.y + _4_0f;
    }
    ascii_manager.color = 0xffffffff;
  }
  return 0;
}

