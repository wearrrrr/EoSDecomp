
/* WARNING: Removing unreachable block (ram,0x0042ada4) */
/* WARNING: Removing unreachable block (ram,0x0042ad25) */
/* WARNING: Removing unreachable block (ram,0x0042ad69) */
/* WARNING: Removing unreachable block (ram,0x0042addf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sub_42AB30(char *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  FILE *_File;
  int i;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  uint unaff_retaddr;
  undefined local_ac;
  undefined local_a8;
  char local_a4;
  char *local_94;
  char *local_90;
  char *local_84;
  int local_80;
  char local_79;
  undefined uStack_75;
  int local_74;
  int local_70;
  int local_68;
  int local_64 [3];
  undefined local_58;
  undefined local_57;
  char local_56;
  char local_55 [10];
  char local_4b [11];
  int32_t local_40;
  float local_3c;
  float local_38;
  float local_34;
  int aiStack_30 [7];
  uint local_14;
  float local_10;
  int local_c;
  uint j;
  
  local_14 = _DAT_0047a630 ^ unaff_retaddr;
  if (_REPLAY_MANAGER_PTR != 0) {
    local_c = _REPLAY_MANAGER_PTR;
    if (*(int *)(_REPLAY_MANAGER_PTR + 8) == 0) {
      if (param_1 != (char *)0x0) {
        piVar4 = *(int **)(_REPLAY_MANAGER_PTR + 4);
        piVar5 = local_64;
        for (i = 0x14; i != 0; i = i + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        ReplayManager::__sub_42AAB0();
        local_68 = 0x50;
        for (j = 0; (int)j < 7; j = j + 1) {
          if (*(int *)(*(int *)(local_c + 4) + 0x34 + j * 4) != 0) {
            aiStack_30[j] = local_68;
            local_68 = local_68 +
                       (*(int *)(local_c + 0x4c + j * 4) -
                       *(int *)(*(int *)(local_c + 4) + 0x34 + j * 4));
          }
        }
        __stub_3();
        local_40 = game_manager.__dword_0;
        local_10 = supervisor.float_1B4 / supervisor.float_1B8 - __5f;
        local_10 = local_10 + local_10;
        if ((float)__0f <= local_10) {
          if (_1_0f <= local_10) {
            local_10 = 1.0;
          }
        }
        else {
          local_10 = 0.0;
        }
        local_38 = (_1_0f - local_10) * _00_0f;
        local_3c = local_38 + __12f;
        local_34 = local_38 + __34f;
        **(int32_t **)(*(int *)(local_c + 4) + 0x30 + game_manager.current_stage * 4) =
             game_manager.score;
        local_90 = param_2;
        local_94 = local_4b;
        do {
          cVar1 = *local_90;
          *local_94 = cVar1;
          local_90 = local_90 + 1;
          local_94 = local_94 + 1;
        } while (cVar1 != '\0');
        __strdate(local_55 + 1);
        uVar2 = Rng::rand_word(&Rng);
        local_56 = (char)((uint)uVar2 % 0x80) + '@';
        uVar2 = Rng::rand_word(&Rng);
        local_a4 = (char)((uint)uVar2 % 0x100);
        local_55[0] = local_a4;
        uVar2 = Rng::rand_word(&Rng);
        local_a8 = (undefined)((uint)uVar2 % 0x100);
        local_58 = local_a8;
        uVar2 = Rng::rand_word(&Rng);
        local_ac = (undefined)((uint)uVar2 % 0x100);
        local_57 = local_ac;
        pcVar3 = &local_56;
        uStack_75 = (undefined)((uint)pcVar3 >> 0x18);
        local_74 = 0x3f000318;
        j = 0;
        while( true ) {
          if (0x41 < j) break;
          local_74 = local_74 + (uint)*(byte *)CONCAT13(uStack_75,(int3)pcVar3);
          j = j + 1;
          pcVar3 = (char *)(CONCAT13(uStack_75,(int3)pcVar3) + 1);
          uStack_75 = (undefined)((uint)pcVar3 >> 0x18);
        }
        for (j = 0; (int)j < 7; j = j + 1) {
          if (*(int *)(*(int *)(local_c + 4) + 0x34 + j * 4) != 0) {
            i = *(int *)(*(int *)(local_c + 4) + 0x34 + j * 4);
            uStack_75 = (undefined)((uint)i >> 0x18);
            local_70 = 0;
            while( true ) {
              if (*(int *)(local_c + 0x4c + j * 4) - *(int *)(*(int *)(local_c + 4) + 0x34 + j * 4)
                  <= local_70) break;
              local_74 = local_74 + (uint)*(byte *)CONCAT13(uStack_75,(int3)i);
              local_70 = local_70 + 1;
              i = CONCAT13(uStack_75,(int3)i) + 1;
              uStack_75 = (undefined)((uint)i >> 0x18);
            }
          }
        }
        local_64[2] = local_74;
        local_84 = local_55;
        local_79 = local_56;
        for (j = 0; j < 0x41; j = j + 1) {
          *local_84 = *local_84 + local_79;
          local_79 = local_79 + '\a';
          local_84 = local_84 + 1;
        }
        for (j = 0; (int)j < 7; j = j + 1) {
          if (*(int *)(*(int *)(local_c + 4) + 0x34 + j * 4) != 0) {
            local_84 = *(char **)(*(int *)(local_c + 4) + 0x34 + j * 4);
            for (local_80 = 0;
                local_80 <
                *(int *)(local_c + 0x4c + j * 4) - *(int *)(*(int *)(local_c + 4) + 0x34 + j * 4);
                local_80 = local_80 + 1) {
              *local_84 = *local_84 + local_79;
              local_79 = local_79 + '\a';
              local_84 = local_84 + 1;
            }
          }
        }
        _File = (FILE *)_fopen(param_1,"wb");
        _fwrite(local_64,0x50,1,_File);
        for (j = 0; (int)j < 7; j = j + 1) {
          if (*(int *)(*(int *)(local_c + 4) + 0x34 + j * 4) != 0) {
            _fwrite(*(void **)(*(int *)(local_c + 4) + 0x34 + j * 4),1,
                    *(int *)(local_c + 0x4c + j * 4) -
                    *(int *)(*(int *)(local_c + 4) + 0x34 + j * 4),_File);
          }
        }
        _fclose(_File);
      }
      for (j = 0; (int)j < 7; j = j + 1) {
        if (*(int *)(*(int *)(_REPLAY_MANAGER_PTR + 4) + 0x34 + j * 4) != 0) {
          __stub_3();
          _free(*(void **)(*(int *)(_REPLAY_MANAGER_PTR + 4) + 0x34 + j * 4));
        }
      }
    }
    UpdateFuncRegistry::unregister
              (&update_func_registry,*(UpdateFunc **)(_REPLAY_MANAGER_PTR + 0x68));
  }
  ___security_check_cookie_4(local_14 ^ unaff_retaddr);
  return;
}

