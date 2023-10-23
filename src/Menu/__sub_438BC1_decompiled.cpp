
undefined4 __fastcall Menu::__sub_438BC1(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  AsciiManager::drawf(&ascii_manager,(Float3 *)(param_1 + 0x68b0),
                      "No.   Name      Date     Player   Rank");
  iVar1 = *(int *)(param_1 + 0x81e8) - *(int *)(param_1 + 0x81e8) % 0xf;
  local_8 = param_1 + 0x6820;
  for (local_c = iVar1; (local_c < iVar1 + 0xf && (local_c < *(int *)(param_1 + 0x81ec)));
      local_c = local_c + 1) {
    if ((supervisor.config.flags >> 8 & 1 | supervisor.config.flags & 1) == 0) {
      if (local_c == *(int *)(param_1 + 0x81e8)) {
        ascii_manager.color = 0xffff8080;
      }
      else {
        ascii_manager.color = 0xff808080;
      }
    }
    else {
      ascii_manager.dword_6234 = (int)(local_c == *(int *)(param_1 + 0x81e8));
      if (local_c == *(int *)(param_1 + 0x81e8)) {
        ascii_manager.color = 0xffffffff;
      }
      else {
        ascii_manager.color = 0xff808080;
      }
    }
    AsciiManager::drawf(&ascii_manager,(Float3 *)(local_8 + 0x1a0),"%s %8s  %8s %7s  %7s");
    local_8 = local_8 + 0x110;
  }
  if ((*(int *)(param_1 + 0x81f0) == 0xf) && (*(int *)(param_1 + 0x10edc) != 0)) {
    ascii_manager.color = 0xffffffff;
    ascii_manager.dword_6234 = 0;
    AsciiManager::drawf(&ascii_manager,(Float3 *)(param_1 + 0x67a0),"       %2.3f%%");
    AsciiManager::drawf(&ascii_manager,(Float3 *)(param_1 + 0x79b0),"Stage  LastScore");
    local_8 = param_1 + 0x7920;
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      if ((supervisor.config.flags >> 8 & 1 | supervisor.config.flags & 1) == 0) {
        if (local_c == *(int *)(param_1 + 0x81a0)) {
          ascii_manager.color = 0xffff8080;
        }
        else {
          ascii_manager.color = 0xff808080;
        }
      }
      else {
        ascii_manager.dword_6234 = (int)(local_c == *(int *)(param_1 + 0x81a0));
        if (local_c == *(int *)(param_1 + 0x81a0)) {
          ascii_manager.color = 0xffffffff;
        }
        else {
          ascii_manager.color = 0xff808080;
        }
      }
      if (*(int *)(*(int *)(param_1 + 0x10edc) + 0x34 + local_c * 4) == 0) {
        AsciiManager::drawf(&ascii_manager,(Float3 *)(local_8 + 0x1a0),"%s ---------");
      }
      else {
        AsciiManager::drawf(&ascii_manager,(Float3 *)(local_8 + 0x1a0),"%s %9d");
      }
      local_8 = local_8 + 0x110;
    }
  }
  ascii_manager.color = 0xffffffff;
  ascii_manager.dword_6234 = 0;
  return 0;
}

