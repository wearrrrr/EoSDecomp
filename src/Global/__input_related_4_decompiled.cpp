
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __input_related_4(void)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 *puVar3;
  joyinfoex_tag *pjVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  int local_160;
  undefined local_15c [48];
  undefined4 local_12c [57];
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  joyinfoex_tag local_38;
  
  local_48 = _DAT_0047a630 ^ unaff_retaddr;
  puVar3 = (undefined4 *)&DINPUT_THING____bytes_0_;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (supervisor.dinput_related_ptr_1 == (void *)0x0) {
    pjVar4 = &local_38;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      pjVar4->dwSize = 0;
      pjVar4 = (joyinfoex_tag *)&pjVar4->dwFlags;
    }
    local_38.dwSize = 0x34;
    local_38.dwFlags = 0xff;
    MVar1 = joyGetPosEx(0,&local_38);
    if (MVar1 == 0) {
      local_3c = local_38.dwButtons;
      for (local_40 = 0; local_40 < 0x20; local_40 = local_40 + 1) {
        if ((local_3c & 1) != 0) {
          (&DINPUT_THING____bytes_0_)[local_40] = 0x80;
        }
        local_3c = local_3c >> 1;
      }
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    local_44 = (**(code **)(*supervisor.dinput_related_ptr_1 + 100))
                         (supervisor.dinput_related_ptr_1);
    if (local_44 < 0) {
      local_160 = 0;
      __stub_3();
                    /* WARNING: Load size is inaccurate */
      local_44 = (**(code **)(*supervisor.dinput_related_ptr_1 + 0x1c))
                           (supervisor.dinput_related_ptr_1);
      do {
        if (local_44 != -0x7ff8ffe2) break;
                    /* WARNING: Load size is inaccurate */
        local_44 = (**(code **)(*supervisor.dinput_related_ptr_1 + 0x1c))
                             (supervisor.dinput_related_ptr_1);
        __stub_3();
        local_160 = local_160 + 1;
      } while (local_160 < 400);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*supervisor.dinput_related_ptr_1 + 0x24))
                (supervisor.dinput_related_ptr_1,0x110,local_15c);
      if (-1 < local_44) {
        puVar3 = local_12c;
        puVar5 = (undefined4 *)&DINPUT_THING____bytes_0_;
        for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
      }
    }
  }
  ___security_check_cookie_4(local_48 ^ unaff_retaddr);
  return;
}

