
undefined4 __cdecl __sub_439F88(int param_1)

{
  int iVar1;
  undefined4 result;
  AnmVm *local_c;
  int local_8;
  
  for (local_8 = 0x15; local_8 < 0x1b; local_8 = local_8 + 1) {
    AnmManager::free_anm_file(anm_manager_ptr,local_8);
  }
  iVar1 = AnmManager::set_surface_image(anm_manager_ptr,0,"data/title/select00.jpg");
  if (iVar1 == 0) {
    iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x1b,"data/select01.anm",0x150);
    if (iVar1 == 0) {
      iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x1c,"data/select02.anm",0x153);
      if (iVar1 == 0) {
        iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x1d,"data/select03.anm",0x15a);
        if (iVar1 == 0) {
          iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x1e,"data/select04.anm",0x15c);
          if (iVar1 == 0) {
            iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x1f,"data/select05.anm",0x155);
            if (iVar1 == 0) {
              iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x20,"data/slpl00a.anm",0x156);
              if (iVar1 == 0) {
                iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x21,"data/slpl00b.anm",0x157);
                if (iVar1 == 0) {
                  iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x22,"data/slpl01a.anm",0x158);
                  if (iVar1 == 0) {
                    iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x23,"data/slpl01b.anm",0x159)
                    ;
                    if (iVar1 == 0) {
                      local_c = (AnmVm *)(param_1 + 0x5500);
                      for (local_8 = 0x150; local_8 < 0x160; local_8 = local_8 + 1) {
                        AnmManager::__sub_4051B0(anm_manager_ptr,local_c,local_8);
                        local_c->flags = local_c->flags & 0xfffffffe;
                        local_c->flags = local_c->flags | 8;
                        if ((supervisor.config.flags & 1) == 0) {
                          local_c->color = 0xff000000;
                        }
                        else {
                          local_c->color = 0xffffffff;
                        }
                        (local_c->pos_2).x = 0.0;
                        (local_c->pos_2).y = 0.0;
                        (local_c->pos_2).z = 0.0;
                        local_c->sprite_number_duplicate = local_c->sprite_number;
                        local_c->flags = local_c->flags | 0x1000;
                        local_c = local_c + 1;
                      }
                      result = 0;
                    }
                    else {
                      result = 0xffffffff;
                    }
                  }
                  else {
                    result = 0xffffffff;
                  }
                }
                else {
                  result = 0xffffffff;
                }
              }
              else {
                result = 0xffffffff;
              }
            }
            else {
              result = 0xffffffff;
            }
          }
          else {
            result = 0xffffffff;
          }
        }
        else {
          result = 0xffffffff;
        }
      }
      else {
        result = 0xffffffff;
      }
    }
    else {
      result = 0xffffffff;
    }
  }
  else {
    result = 0xffffffff;
  }
  return result;
}

