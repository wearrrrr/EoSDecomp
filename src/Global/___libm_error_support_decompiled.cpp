
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
___libm_error_support(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint unaff_retaddr;
  undefined4 local_28;
  undefined **local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  if (0xa1 < param_4) {
    if (param_4 < 0x3eb) {
      if (param_4 != 0x3ea) {
        if (param_4 == 0xa2) {
          local_28 = 4;
          goto LAB_004645f4;
        }
        if (param_4 == 0xa6) {
          local_28 = 3;
          local_24 = (undefined **)0x470a58;
        }
        else {
          if (param_4 != 0xaa) {
            if (param_4 == 0xab) {
              local_24 = (undefined **)&_log2_;
              goto LAB_0046468d;
            }
            if (param_4 == 1000) {
              local_24 = &_log_;
            }
            else {
              if (param_4 != 0x3e9) goto LAB_004646c5;
              local_24 = (undefined **)0x470630;
            }
            goto LAB_00464683;
          }
          local_28 = 2;
          local_24 = (undefined **)&_log2_;
        }
        goto LAB_004645fb;
      }
      local_24 = (undefined **)&_exp_;
    }
    else if (param_4 == 0x3eb) {
      local_24 = (undefined **)0x470600;
    }
    else if (param_4 == 0x3ec) {
      local_24 = (undefined **)0x4705dc;
    }
    else if (param_4 == 0x3ed) {
      local_24 = (undefined **)0x4705d4;
    }
    else {
      if (param_4 == 0x3ee) {
LAB_0046465b:
        local_24 = (undefined **)0x470638;
        goto LAB_0046468d;
      }
      if (param_4 != 0x3ef) goto LAB_004646c5;
      local_24 = (undefined **)0x4705c4;
    }
LAB_00464683:
    *param_3 = *param_1;
    goto LAB_0046468d;
  }
  if (param_4 == 0xa1) {
    local_28 = 3;
LAB_004645f4:
    local_24 = (undefined **)&_exp2_;
    goto LAB_004645fb;
  }
  if (param_4 < 0x19) {
    if (param_4 == 0x18) {
      local_28 = 3;
LAB_004644ec:
      local_24 = (undefined **)0x470638;
    }
    else if (param_4 == 2) {
      local_28 = 2;
      local_24 = &_log_;
    }
    else {
      if (param_4 == 3) {
        local_24 = &_log_;
LAB_0046468d:
        local_20 = *param_1;
        local_28 = 1;
        local_18 = *param_2;
        local_10 = *param_3;
        iVar1 = (*_DAT_0047b230)(&local_28);
        if (iVar1 == 0) {
          piVar2 = __errno();
          *piVar2 = 0x21;
        }
        goto LAB_004646c0;
      }
      if (param_4 == 8) {
        local_28 = 2;
        local_24 = (undefined **)0x470630;
      }
      else {
        if (param_4 == 9) {
          local_24 = (undefined **)0x470630;
          goto LAB_0046468d;
        }
        if (param_4 != 0xe) {
          if (param_4 != 0xf) goto LAB_004646c5;
          local_24 = (undefined **)&_exp_;
          goto LAB_00464539;
        }
        local_28 = 3;
        local_24 = (undefined **)&_exp_;
      }
    }
LAB_004645fb:
    local_20 = *param_1;
    local_18 = *param_2;
    local_10 = *param_3;
    iVar1 = (*_DAT_0047b230)(&local_28);
    if (iVar1 == 0) {
      piVar2 = __errno();
      *piVar2 = 0x22;
    }
  }
  else {
    if (param_4 != 0x19) {
      if (param_4 == 0x1a) {
        *param_3 = 0x3ff0000000000000;
        goto LAB_004646c5;
      }
      if (param_4 != 0x1b) {
        if (param_4 == 0x1c) goto LAB_0046465b;
        if (param_4 != 0x1d) goto LAB_004646c5;
        local_24 = (undefined **)0x470638;
        goto LAB_00464683;
      }
      local_28 = 2;
      goto LAB_004644ec;
    }
    local_24 = (undefined **)0x470638;
LAB_00464539:
    local_20 = *param_1;
    local_18 = *param_2;
    local_10 = *param_3;
    local_28 = 4;
    (*_DAT_0047b230)(&local_28);
  }
LAB_004646c0:
  *param_3 = local_10;
LAB_004646c5:
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}

