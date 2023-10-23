
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __input_related_1(uint param_1)

{
  ushort uVar1;
  MMRESULT MVar2;
  undefined2 extraout_var;
  uint uVar3;
  undefined2 extraout_var_00;
  int i;
  joyinfoex_tag *ptr_joyinfo;
  int *piVar4;
  int local_160;
  int local_15c [12];
  undefined local_12c [224];
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  joyinfoex_tag joystickInfo;
  uint unaff_retaddr;
  
  local_4c = _DAT_0047a630 ^ unaff_retaddr;
  if (supervisor.dinput_related_ptr_1 == (void *)0x0) {
    ptr_joyinfo = &joystickInfo;
    for (i = uVar5; i != 0; i = i + -1) {
      ptr_joyinfo->dwSize = 0;
      ptr_joyinfo = (joyinfoex_tag *)&ptr_joyinfo->dwFlags;
    }
    joystickInfo.dwSize = 52;
    joystickInfo.dwFlags = 255;
    MVar2 = joyGetPosEx(0,&joystickInfo);
    if (MVar2 == 0) {
      uVar1 = __input_related_3((ushort *)&param_1,_DAT_004765a0,1,joystickInfo.dwButtons);
      local_40 = CONCAT22(extraout_var,uVar1);
      if (_DAT_004765a0 == _DAT_004765a4) {
        if (local_40 == 0) {
          if (___word_69D8F4 < 9) {
            ___word_69D8F4 = 0;
          }
          else {
            ___word_69D8F4 = ___word_69D8F4 - 8;
          }
        }
        else {
          if (___word_69D8F4 < 0x10) {
            ___word_69D8F4 = ___word_69D8F4 + 1;
          }
          if (7 < ___word_69D8F4) {
            param_1 = param_1 | 4;
          }
        }
      }
      else {
        __input_related_3((ushort *)&param_1,_DAT_004765a4,4,joystickInfo.dwButtons);
      }
      __input_related_3((ushort *)&param_1,supervisor.config.field0_0x0._2_2_,2,
                        joystickInfo.dwButtons);
      __input_related_3((ushort *)&param_1,supervisor.config.field0_0x0._6_2_,8,
                        joystickInfo.dwButtons);
      __input_related_3((ushort *)&param_1,supervisor.config.field0_0x0._8_2_,16,
                        joystickInfo.dwButtons);
      __input_related_3((ushort *)&param_1,supervisor.config.field0_0x0._10_2_,32,
                        joystickInfo.dwButtons);
      __input_related_3((ushort *)&param_1,supervisor.config.field0_0x0._12_2_,64,
                        joystickInfo.dwButtons);
      __input_related_3((ushort *)&param_1,supervisor.config.field0_0x0._14_2_,128,
                        joystickInfo.dwButtons);
      __input_related_3((ushort *)&param_1,supervisor.config.field0_0x0._16_2_,256,
                        joystickInfo.dwButtons);
      uVar3 = JOYPAD_CAPS__wMid_.wXmax - JOYPAD_CAPS__wMid_.wXmin >> 2;
      local_3c = JOYPAD_CAPS__wMid_.wYmax - JOYPAD_CAPS__wMid_.wYmin >> 2;
      param_1 = CONCAT22(param_1._2_2_,
                         (ushort)param_1 |
                         -(ushort)((JOYPAD_CAPS__wMid_.wXmin + JOYPAD_CAPS__wMid_.wXmax >> 1) +
                                   uVar3 < joystickInfo.dwXpos) & 128 |
                         -(ushort)(joystickInfo.dwXpos <
                                  (JOYPAD_CAPS__wMid_.wXmin + JOYPAD_CAPS__wMid_.wXmax >> 1) - uVar3
                                  ) & 64 |
                         -(ushort)((JOYPAD_CAPS__wMid_.wYmin + JOYPAD_CAPS__wMid_.wYmax >> 1) +
                                   local_3c < joystickInfo.dwYpos) & 32 |
                         -(ushort)(joystickInfo.dwYpos <
                                  (JOYPAD_CAPS__wMid_.wYmin + JOYPAD_CAPS__wMid_.wYmax >> 1) -
                                  local_3c) & 16);
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    local_48 = (**(code **)(*supervisor.dinput_related_ptr_1 + 100))
                         (supervisor.dinput_related_ptr_1);
    if (local_48 < 0) {
      local_160 = 0;
      __stub_3();
                    /* WARNING: Load size is inaccurate */
      local_48 = (**(code **)(*supervisor.dinput_related_ptr_1 + 0x1c))
                           (supervisor.dinput_related_ptr_1);
      do {
        if (local_48 != -0x7ff8ffe2) break;
                    /* WARNING: Load size is inaccurate */
        local_48 = (**(code **)(*supervisor.dinput_related_ptr_1 + 0x1c))
                             (supervisor.dinput_related_ptr_1);
        __stub_3();
        local_160 = local_160 + 1;
      } while (local_160 < 400);
    }
    else {
      piVar4 = local_15c;
      for (i = 0x44; i != 0; i = i + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
                    /* WARNING: Load size is inaccurate */
      local_48 = (**(code **)(*supervisor.dinput_related_ptr_1 + 0x24))
                           (supervisor.dinput_related_ptr_1,0x110,local_15c);
      if (-1 < local_48) {
        uVar1 = __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._0_2_,1,
                                  (int)local_12c);
        local_44 = CONCAT22(extraout_var_00,uVar1);
        if (_DAT_004765a0 == _DAT_004765a4) {
          if (local_44 == 0) {
            if (___word_69D8F4 < 9) {
              ___word_69D8F4 = 0;
            }
            else {
              ___word_69D8F4 = ___word_69D8F4 - 8;
            }
          }
          else {
            if (___word_69D8F4 < 16) {
              ___word_69D8F4 = ___word_69D8F4 + 1;
            }
            if (7 < ___word_69D8F4) {
              param_1 = param_1 | 4;
            }
          }
        }
        else {
          __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._4_2_,4,(int)local_12c);
        }
        __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._2_2_,2,(int)local_12c);
        __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._6_2_,8,(int)local_12c);
        __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._8_2_,16,(int)local_12c);
        __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._10_2_,32,(int)local_12c);
        __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._12_2_,64,(int)local_12c);
        __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._14_2_,128,(int)local_12c)
        ;
        __input_related_2((ushort *)&param_1,supervisor.config.field0_0x0._16_2_,256,(int)local_12c)
        ;
        param_1 = CONCAT22(param_1._2_2_,
                           (ushort)param_1 |
                           (local_15c[0] <= (short)supervisor.config.deadzone_x) - 1 & 0x80 |
                           (SBORROW4(local_15c[0],-(int)(short)supervisor.config.deadzone_x) ==
                           local_15c[0] + (short)supervisor.config.deadzone_x < 0) - 1 & 0x40 |
                           (local_15c[1] <= (short)supervisor.config.deadzone_y) - 1 & 0x20 |
                           (SBORROW4(local_15c[1],-(int)(short)supervisor.config.deadzone_y) ==
                           local_15c[1] + (short)supervisor.config.deadzone_y < 0) - 1 & 0x10);
      }
    }
  }
  ___security_check_cookie_4(local_4c ^ unaff_retaddr);
  return;
}

