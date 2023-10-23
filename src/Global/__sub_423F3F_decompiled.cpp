
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __sub_423F3F(void)

{
  Float3 local_20;
  float local_14;
  float local_10;
  float local_c;
  DWORD local_8;
  
  if ((___dword_6C6D10 & 1) == 0) {
    ___dword_6C6D10 = ___dword_6C6D10 | 1;
    ___dword_6C6D0C = timeGetTime();
  }
  local_8 = timeGetTime();
  ___dword_6C6D08 = ___dword_6C6D08 + 1 + (uint)supervisor.config.frameskip_settings;
  if (499 < local_8 - ___dword_6C6D0C) {
    local_14 = (float)(ulonglong)(local_8 - ___dword_6C6D0C) / _000_0f;
    local_10 = (float)(ulonglong)___dword_6C6D08 / local_14;
    ___dword_6C6D08 = 0;
    ___dword_6C6D0C = local_8;
    _sprintf(&FPS_COUNTER_SPRINTF_BUFFER,(byte *)"%.02ffps");
    if (game_manager.__byte_1821 != '\0') {
      local_c = _60_0f / supervisor.slowdown;
      supervisor.float_1B8 = supervisor.float_1B8 + local_c;
      if (local_10 <= local_c * __9f) {
        if (local_10 <= local_c * __7f) {
          if (local_10 <= local_c * __5f) {
            supervisor.float_1B4 = local_c * __5f + supervisor.float_1B4;
          }
          else {
            supervisor.float_1B4 = local_c * __6f + supervisor.float_1B4;
          }
        }
        else {
          supervisor.float_1B4 = local_c * __8f + supervisor.float_1B4;
        }
      }
      else {
        supervisor.float_1B4 = supervisor.float_1B4 + local_c;
      }
    }
  }
  if (supervisor.dword_19C == 0) {
    local_20.x = _12_0f;
    local_20.y = _64_0f;
    local_20.z = 0.0;
    AsciiManager::draw(&ascii_manager,&local_20,&FPS_COUNTER_SPRINTF_BUFFER);
  }
  return;
}

