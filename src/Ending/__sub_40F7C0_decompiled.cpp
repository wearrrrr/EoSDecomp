
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Ending::__sub_40F7C0(Ending *ending)

{
  int iVar1;
  AnmManager *pAVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float unaff_EDI;
  undefined4 *puVar7;
  uint unaff_retaddr;
  short local_ac;
  short local_90;
  int local_58;
  int local_54;
  int local_50;
  int local_38;
  undefined4 local_34;
  uint local_c;
  int local_8;
  
  local_c = _DAT_0047a630 ^ unaff_retaddr;
  local_8 = 0;
  local_38 = 0;
  puVar7 = &local_34;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  if (0 < *(int *)(ending->field1_0x4 + 0x1138)) {
    Timer::sub((Timer *)(ending->field1_0x4 + 0x1130),1);
    if (*(int *)(ending->field1_0x4 + 0x113c) == 0) {
      if ((((input.currently_pressed & 0x1001) != 0) &&
          ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) ||
         ((*(int *)(ending->field1_0x4 + 0x1114) != 0 && ((input.currently_pressed & 0x100) != 0))))
      {
        *(undefined4 *)(ending->field1_0x4 + 0x1138) = 0;
        *(undefined4 *)(ending->field1_0x4 + 0x1134) = 0;
        *(undefined4 *)(ending->field1_0x4 + 0x1130) = 0xfffffc19;
      }
    }
    else {
      *(int *)(ending->field1_0x4 + 0x113c) = *(int *)(ending->field1_0x4 + 0x113c) + -1;
    }
    if (0 < *(int *)(ending->field1_0x4 + 0x1138)) goto end_end;
    puVar7 = (undefined4 *)(ending->field1_0x4 + 0x10);
    for (iVar6 = 0x440; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(ending->field1_0x4 + 0x1150) = 0;
  }
  if (*(int *)(ending->field1_0x4 + 0x112c) < 1) {
    do {
      pAVar2 = anm_manager_ptr;
      switch(**(undefined **)(ending->field1_0x4 + 0x1168)) {
      case 0:
      case 10:
      case 0xd:
        goto end_type_text;
      default:
        *(undefined *)((int)&local_34 + local_38) = **(undefined **)(ending->field1_0x4 + 0x1168);
        *(undefined *)((int)&local_34 + local_38 + 1) =
             *(undefined *)(*(int *)(ending->field1_0x4 + 0x1168) + 1);
        local_38 = local_38 + 2;
        *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 2;
        pAVar2 = anm_manager_ptr;
        if (0x1f < local_38) {
          iVar6 = *(int *)(ending->field1_0x4 + 0x1150);
          local_ac = (short)local_8 + 0x708 + (short)iVar6 * 2;
          iVar1 = *(int *)(ending->field1_0x4 + 0x1150);
          ((AnmVm *)(ending->field1_0x4 + (local_8 + iVar1 * 2) * 0x110 + 0x10))->anm_file_index =
               local_ac;
          AnmManager::set_vm_script
                    (pAVar2,(AnmVm *)(ending->field1_0x4 + (local_8 + iVar1 * 2) * 0x110 + 0x10),
                     (AnmRawScript *)pAVar2->scripts[iVar6 * 2 + local_8 + 0x708]);
          AnmManager::__draw_text_to_vm_left
                    (anm_manager_ptr,
                     (AnmVm *)(ending->field1_0x4 +
                              (local_8 + *(int *)(ending->field1_0x4 + 0x1150) * 2) * 0x110 + 0x10),
                     *(D3DCOLOR *)(ending->field1_0x4 + 0x1154),0xc0d0d0,(char *)&local_34);
          if (local_8 != 0) goto end_end;
          local_8 = 1;
          local_38 = 0;
          puVar7 = &local_34;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined2 *)puVar7 = 0;
        }
        break;
      case 0x40:
        *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
        switch(**(undefined **)(ending->field1_0x4 + 0x1168)) {
        case 0x30:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          *(undefined4 *)(ending->field1_0x4 + 0x1164) = 1;
          *(undefined4 *)(ending->field1_0x4 + 0x115c) = 0;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1160) = lVar5;
          break;
        case 0x31:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          *(undefined4 *)(ending->field1_0x4 + 0x1164) = 2;
          *(undefined4 *)(ending->field1_0x4 + 0x115c) = 0;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1160) = lVar5;
          break;
        case 0x32:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          *(undefined4 *)(ending->field1_0x4 + 0x1164) = 3;
          *(undefined4 *)(ending->field1_0x4 + 0x115c) = 0;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1160) = lVar5;
          break;
        case 0x33:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          *(undefined4 *)(ending->field1_0x4 + 0x1164) = 4;
          *(undefined4 *)(ending->field1_0x4 + 0x115c) = 0;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1160) = lVar5;
          break;
        case 0x46:
          iVar6 = __sub_4106D0(ending,(char *)(*(int *)(ending->field1_0x4 + 0x1168) + 1));
          if (iVar6 == 0) {
            local_38 = 0;
            local_8 = 0;
            for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
              for (local_54 = 0; local_54 < 4; local_54 = local_54 + 1) {
                if ((*(char *)(local_50 * 0x18 + 0x69ccdc + local_54) == 'c') ||
                   (*(char *)(local_50 * 0x18 + 0x69cce1 + local_54) == 'c')) {
                  *(undefined4 *)(ending->field1_0x4 + 0x1114) = 1;
                  break;
                }
              }
            }
            goto end_R;
          }
          goto end_return;
        case 0x4d:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          lVar5 = __sub_40F4D0(ending);
          Supervisor::__fade_music(&supervisor,(float)lVar5,unaff_EDI);
          break;
        case 0x52:
end_R:
          for (local_58 = 0; local_58 < 0x10; local_58 = local_58 + 1) {
            *(undefined2 *)(ending->field1_0x4 + local_58 * 0x110 + 0xc4) = 0;
          }
          break;
        case 0x56:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          lVar5 = __sub_40F4D0(ending);
          lVar3 = __sub_40F4D0(ending);
          *(float *)(ending->field1_0x4 + 0xc) = (float)lVar5 / (float)lVar3;
          break;
        case 0x61:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          lVar5 = __sub_40F4D0(ending);
          lVar3 = __sub_40F4D0(ending);
          lVar4 = __sub_40F4D0(ending);
          AnmManager::__sub_4051B0
                    (anm_manager_ptr,(AnmVm *)(ending->field1_0x4 + lVar5 * 0x110 + 0x10),
                     lVar3 + 0x600);
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,(AnmVm *)(ending->field1_0x4 + lVar5 * 0x110 + 0x10),
                     lVar4 + 0x600);
          break;
        case 0x62:
          iVar6 = AnmManager::set_surface_image
                            (anm_manager_ptr,0,(char *)(*(int *)(ending->field1_0x4 + 0x1168) + 1));
          if (iVar6 != 0) goto end_return;
          break;
        case 99:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1154) = lVar5;
          break;
        case 0x6d:
          Supervisor::__load_bgm_file
                    (&supervisor,(char *)(*(int *)(ending->field1_0x4 + 0x1168) + 1));
          break;
        case 0x72:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1138) = lVar5;
          *(undefined4 *)(ending->field1_0x4 + 0x1134) = 0;
          *(undefined4 *)(ending->field1_0x4 + 0x1130) = 0xfffffc19;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x113c) = lVar5;
          while ((**(char **)(ending->field1_0x4 + 0x1168) != '\n' &&
                 (**(char **)(ending->field1_0x4 + 0x1168) != '\r'))) {
            *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          }
          while ((**(char **)(ending->field1_0x4 + 0x1168) == '\n' ||
                 (**(char **)(ending->field1_0x4 + 0x1168) == '\r'))) {
            *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          }
          goto end_end;
        case 0x73:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1144) = lVar5;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1148) = lVar5;
          break;
        case 0x76:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          lVar5 = __sub_40F4D0(ending);
          *(float *)(ending->field1_0x4 + 8) = (float)lVar5;
          break;
        case 0x77:
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x112c) = lVar5;
          *(undefined4 *)(ending->field1_0x4 + 0x1128) = 0;
          *(undefined4 *)(ending->field1_0x4 + 0x1124) = 0xfffffc19;
          lVar5 = __sub_40F4D0(ending);
          *(long *)(ending->field1_0x4 + 0x1140) = lVar5;
          while ((**(char **)(ending->field1_0x4 + 0x1168) != '\n' &&
                 (**(char **)(ending->field1_0x4 + 0x1168) != '\r'))) {
            *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          }
          while ((**(char **)(ending->field1_0x4 + 0x1168) == '\n' ||
                 (**(char **)(ending->field1_0x4 + 0x1168) == '\r'))) {
            *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
          }
          goto end_end;
        case 0x7a:
          goto end_return;
        }
        while ((**(char **)(ending->field1_0x4 + 0x1168) != '\n' &&
               (**(char **)(ending->field1_0x4 + 0x1168) != '\r'))) {
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
        }
        while ((**(char **)(ending->field1_0x4 + 0x1168) == '\n' ||
               (**(char **)(ending->field1_0x4 + 0x1168) == '\r'))) {
          *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
        }
      }
    } while( true );
  }
  Timer::sub((Timer *)(ending->field1_0x4 + 0x1124),1);
  if (*(int *)(ending->field1_0x4 + 0x1140) == 0) {
    if ((((input.currently_pressed & 0x1001) != 0) &&
        ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) ||
       ((*(int *)(ending->field1_0x4 + 0x1114) != 0 && ((input.currently_pressed & 0x100) != 0)))) {
      *(undefined4 *)(ending->field1_0x4 + 0x112c) = 0;
      *(undefined4 *)(ending->field1_0x4 + 0x1128) = 0;
      *(undefined4 *)(ending->field1_0x4 + 0x1124) = 0xfffffc19;
    }
  }
  else {
    *(int *)(ending->field1_0x4 + 0x1140) = *(int *)(ending->field1_0x4 + 0x1140) + -1;
  }
  goto end_end;
end_type_text:
  if (local_38 != 0) {
    iVar6 = *(int *)(ending->field1_0x4 + 0x1150);
    local_90 = (short)local_8 + 0x708 + (short)iVar6 * 2;
    iVar1 = *(int *)(ending->field1_0x4 + 0x1150);
    ((AnmVm *)(ending->field1_0x4 + (local_8 + iVar1 * 2) * 0x110 + 0x10))->anm_file_index =
         local_90;
    AnmManager::set_vm_script
              (pAVar2,(AnmVm *)(ending->field1_0x4 + (local_8 + iVar1 * 2) * 0x110 + 0x10),
               (AnmRawScript *)pAVar2->scripts[iVar6 * 2 + local_8 + 0x708]);
    AnmManager::__draw_text_to_vm_left
              (anm_manager_ptr,
               (AnmVm *)(ending->field1_0x4 +
                        (local_8 + *(int *)(ending->field1_0x4 + 0x1150) * 2) * 0x110 + 0x10),
               *(D3DCOLOR *)(ending->field1_0x4 + 0x1154),0xc0d0d0,(char *)&local_34);
  }
  while (((**(char **)(ending->field1_0x4 + 0x1168) == '\n' ||
          (**(char **)(ending->field1_0x4 + 0x1168) == '\0')) ||
         (**(char **)(ending->field1_0x4 + 0x1168) == '\r'))) {
    *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
  }
  if ((input.currently_pressed & 0x1001) == 0) {
    *(undefined4 *)(ending->field1_0x4 + 0x112c) = *(undefined4 *)(ending->field1_0x4 + 0x1144);
    *(undefined4 *)(ending->field1_0x4 + 0x1128) = 0;
    *(undefined4 *)(ending->field1_0x4 + 0x1124) = 0xfffffc19;
    *(undefined4 *)(ending->field1_0x4 + 0x1140) = *(undefined4 *)(ending->field1_0x4 + 0x1144);
  }
  else {
    *(undefined4 *)(ending->field1_0x4 + 0x112c) = *(undefined4 *)(ending->field1_0x4 + 0x1148);
    *(undefined4 *)(ending->field1_0x4 + 0x1128) = 0;
    *(undefined4 *)(ending->field1_0x4 + 0x1124) = 0xfffffc19;
    *(undefined4 *)(ending->field1_0x4 + 0x1140) = *(undefined4 *)(ending->field1_0x4 + 0x1148);
  }
  *(int *)(ending->field1_0x4 + 0x1150) = *(int *)(ending->field1_0x4 + 0x1150) + 1;
end_end:
  *(undefined4 *)(ending->field1_0x4 + 0x1118) = *(undefined4 *)(ending->field1_0x4 + 0x1120);
  Supervisor::tick_timer
            (&supervisor,(int *)(ending->field1_0x4 + 0x1120),(float *)(ending->field1_0x4 + 0x111c)
            );
  *(float *)(ending->field1_0x4 + 8) =
       *(float *)(ending->field1_0x4 + 8) - *(float *)(ending->field1_0x4 + 0xc);
  if (*(float *)(ending->field1_0x4 + 8) < (float)__0f !=
      (*(float *)(ending->field1_0x4 + 8) == (float)__0f)) {
    *(undefined4 *)(ending->field1_0x4 + 8) = 0;
    *(undefined4 *)(ending->field1_0x4 + 0xc) = 0;
  }
end_return:
  ___security_check_cookie_4(local_c ^ unaff_retaddr);
  return;
}

