
int __thiscall AsciiManagerBigChild::__on_tick_2(AsciiManagerBigChild *this)

{
  short local_48;
  short local_3c;
  int i;
  AnmManager *anm_mgr;
  
  if (game_manager.__byte_1823 != '\0') {
    game_manager.__dword_0 = game_manager.score;
    game_manager.__byte_1820 = '\0';
    supervisor.dword_18C = 7;
    return 1;
  }
  if (game_manager.__spellcard_related_1 != 0) {
    game_manager.__dword_0 = game_manager.score;
    game_manager.__byte_1820 = '\0';
    supervisor.dword_18C = 8;
    return 1;
  }
  if ((2 < (byte)game_manager.__byte_1818) || (3 < game_manager.difficulty)) {
    game_manager.__dword_0 = game_manager.score;
    game_manager.__byte_1820 = '\0';
    supervisor.dword_18C = 7;
    return 1;
  }
  switch(this->index_0) {
  case 0:
    if (this->dword_4 == 0) {
      for (i = 0; anm_mgr = anm_manager_ptr, i < 4; i = i + 1) {
        if (i < 2) {
          local_3c = (short)i + 8;
          this->vms_8[i].anm_file_index = local_3c;
          AnmManager::set_vm_script(anm_mgr,this->vms_8 + i,(AnmRawScript *)anm_mgr->scripts[i + 8])
          ;
        }
        else {
          local_48 = (short)i + 4;
          this->vms_8[i].anm_file_index = local_48;
          AnmManager::set_vm_script(anm_mgr,this->vms_8 + i,(AnmRawScript *)anm_mgr->scripts[i + 4])
          ;
        }
        this->vms_8[i].pending_interrupt = 1;
      }
      if (supervisor._1021_1_ != '\0') {
        anm_manager_ptr->some_vertex_buffer[3].pos.z = 4.203895e-45;
        anm_mgr->some_vertex_buffer[3].diffuse_color = 0x20;
        anm_mgr->some_vertex_buffer[3].texture_uv.x = 2.242078e-44;
        anm_mgr->some_vertex_buffer[3].texture_uv.y = 5.380986e-43;
        anm_mgr->weird_texture_height = 0x1c0;
        anm_mgr = anm_manager_ptr;
        (this->vm_668).anm_file_index = 0x718;
        AnmManager::set_vm_script(anm_mgr,&this->vm_668,(AnmRawScript *)anm_mgr->scripts[0x718]);
        (this->vm_668).pos.x = 32.0;
        (this->vm_668).pos.y = 16.0;
        (this->vm_668).pos.z = 0.0;
      }
    }
    if (8 < this->dword_4) break;
    this->index_0 = this->index_0 + 2;
    this->dword_4 = 0;
  case 1:
    this->vms_8[2].color = 0xffff8080;
    this->vms_8[3].color = 0x80808080;
    this->vms_8[2].scale_y = 1.7;
    this->vms_8[2].scale_x = 1.7;
    this->vms_8[3].scale_y = 1.5;
    this->vms_8[3].scale_x = 1.5;
    this->vms_8[2].pos_2.x = -4.0;
    this->vms_8[2].pos_2.y = -4.0;
    this->vms_8[2].pos_2.z = 0.0;
    this->vms_8[3].pos_2.x = 0.0;
    this->vms_8[3].pos_2.y = 0.0;
    this->vms_8[3].pos_2.z = 0.0;
    if (3 < this->dword_4) {
      if ((((input.currently_pressed & 0x10) != 0) &&
          ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) ||
         (((input.currently_pressed & 0x20) != 0 &&
          ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))))) {
        this->index_0 = 2;
      }
      if (((input.currently_pressed & 1) != 0) &&
         ((input.currently_pressed & 1) != (input.word_4 & 1))) {
        for (i = 0; i < 4; i = i + 1) {
          this->vms_8[i].pending_interrupt = 2;
        }
        this->index_0 = 3;
        (this->vm_668).pending_interrupt = 1;
        this->dword_4 = 0;
      }
    }
    break;
  case 2:
    this->vms_8[3].color = 0xffff8080;
    this->vms_8[2].color = 0x80808080;
    this->vms_8[2].scale_y = 1.5;
    this->vms_8[2].scale_x = 1.5;
    this->vms_8[3].scale_y = 1.7;
    this->vms_8[3].scale_x = 1.7;
    this->vms_8[3].pos_2.x = -4.0;
    this->vms_8[3].pos_2.y = -4.0;
    this->vms_8[3].pos_2.z = 0.0;
    this->vms_8[2].pos_2.x = 0.0;
    this->vms_8[2].pos_2.y = 0.0;
    this->vms_8[2].pos_2.z = 0.0;
    if (0x1d < this->dword_4) {
      if ((((input.currently_pressed & 0x10) != 0) &&
          ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) ||
         (((input.currently_pressed & 0x20) != 0 &&
          ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))))) {
        this->index_0 = 1;
      }
      if (((input.currently_pressed & 1) != 0) &&
         ((input.currently_pressed & 1) != (input.word_4 & 1))) {
        for (i = 0; i < 4; i = i + 1) {
          this->vms_8[i].pending_interrupt = 2;
        }
        this->index_0 = 4;
        this->dword_4 = 0;
      }
    }
    break;
  case 3:
    if (0x1d < this->dword_4) {
      this->index_0 = 0;
      this->dword_4 = 0;
      game_manager.__byte_1820 = '\0';
      for (i = 0; i < 4; i = i + 1) {
        this->vms_8[i].flags = this->vms_8[i].flags & 0xfffffffe;
      }
      game_manager.__byte_1818 = game_manager.__byte_1818 + 1;
      gui.flags_0 = gui.flags_0 & 0xfffffc00 | 0x2aa;
      game_manager.__dword_0 = (uint)(byte)game_manager.__byte_1818;
      game_manager.score = (uint)(byte)game_manager.__byte_1818;
      game_manager.__dword_8 = 0;
      game_manager.graze_in_stage = 0;
      game_manager.current_power = 0;
      game_manager.power_items_collected_stage = 0;
      game_manager.lives_remaining = supervisor.config_defaults.starting_lives;
      game_manager.bombs_remaining = supervisor.config_defaults.starting_bombs;
      game_manager.__byte_181c = '\0';
      return 0;
    }
    break;
  case 4:
    if (0x13 < this->dword_4) {
      this->index_0 = 0;
      this->dword_4 = 0;
      game_manager.__byte_1820 = '\0';
      supervisor.dword_18C = 7;
      for (i = 0; i < 4; i = i + 1) {
        this->vms_8[i].flags = this->vms_8[i].flags & 0xfffffffe;
      }
      game_manager.__dword_0 = game_manager.score;
      return 0;
    }
  }
  for (i = 0; i < 4; i = i + 1) {
    AnmManager::run_anm(anm_manager_ptr,this->vms_8 + i);
  }
  if (supervisor._1021_1_ != '\0') {
    AnmManager::run_anm(anm_manager_ptr,&this->vm_668);
  }
  this->dword_4 = this->dword_4 + 1;
  return 0;
}

