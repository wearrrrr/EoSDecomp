
undefined4 __cdecl __sub_43A1EC(int param_1)

{
  int iVar1;
  undefined4 result;
  AnmVm *local_c;
  int i;
  
                    /* REALLY weird way to loop 6 times, but okay zun */
  for (i = 21; i < 27; i = i + 1) {
    AnmManager::free_anm_file(anm_manager_ptr,i);
  }
  iVar1 = AnmManager::set_surface_image(anm_manager_ptr,0,"data/title/select00.jpg");
  if (iVar1 == 0) {
    iVar1 = AnmManager::load_anm_file(anm_manager_ptr,0x24,"data/replay00.anm",0x160);
    if (iVar1 == 0) {
      local_c = (AnmVm *)(param_1 + 0x6600);
      for (i = 352; i < 378; i = i + 1) {
        AnmManager::__sub_4051B0(anm_manager_ptr,local_c,i);
        local_c->flags = local_c->flags & 0xfffffffe;
        local_c->flags = local_c->flags | 8;
        if ((supervisor.config.flags & 1) == 0) {
          local_c->color = 0xff000000;
        }
        else {
          local_c->color = INFINITE;
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
  return result;
}

