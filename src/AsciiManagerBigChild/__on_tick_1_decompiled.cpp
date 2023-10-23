
int __thiscall AsciiManagerBigChild::__on_tick_1(AsciiManagerBigChild *this)

{
  int16_t anm_file_idx;
  int i;
  AnmManager *anm_mgr;
  
  if (((input.currently_pressed & 8) != 0) && ((input.currently_pressed & 8) != (input.word_4 & 8)))
  {
    this->index_0 = 3;
    for (i = 0; i < 6; i = i + 1) {
      if ((this->vms_8[i].flags & 1) != 0) {
        this->vms_8[i].pending_interrupt = 2;
      }
    }
    this->dword_4 = 0;
    (this->vm_668).pending_interrupt = 1;
  }
  if (((input.currently_pressed & 0x200) != 0) &&
     ((input.currently_pressed & 0x200) != (input.word_4 & 0x200))) {
    this->index_0 = 6;
    for (i = 0; i < 6; i = i + 1) {
      if ((this->vms_8[i].flags & 1) != 0) {
        this->vms_8[i].pending_interrupt = 2;
      }
    }
    this->dword_4 = 0;
  }
  switch(this->index_0) {
  case 0:
    for (i = 0; anm_mgr = anm_manager_ptr, i < 6; i = i + 1) {
      anm_file_idx = (short)i + 2;
      this->vms_8[i].anm_file_index = anm_file_idx;
      AnmManager::set_vm_script(anm_mgr,this->vms_8 + i,(AnmRawScript *)anm_mgr->scripts[i + 2]);
    }
    for (i = 0; i < 3; i = i + 1) {
      this->vms_8[i].pending_interrupt = 1;
    }
    this->index_0 = this->index_0 + 1;
    this->dword_4 = 0;
    anm_mgr = anm_manager_ptr;
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
  case 1:
    this->vms_8[1].color = 0xffff8080;
    this->vms_8[2].color = 0x80808080;
    this->vms_8[1].scale_y = 1.7;
    this->vms_8[1].scale_x = 1.7;
    this->vms_8[2].scale_y = 1.5;
    this->vms_8[2].scale_x = 1.5;
    this->vms_8[1].pos_2.x = -4.0;
    this->vms_8[1].pos_2.y = -4.0;
    this->vms_8[1].pos_2.z = 0.0;
    this->vms_8[2].pos_2.x = 0.0;
    this->vms_8[2].pos_2.y = 0.0;
    this->vms_8[2].pos_2.z = 0.0;
    if (3 < this->dword_4) {
      if ((((input.currently_pressed & 0x10) != 0) &&
          ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) ||
         (((input.currently_pressed & 0x20) != 0 &&
          ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))))) {
        this->index_0 = 2;
      }
      if (((input.currently_pressed & 1) != 0) &&
         ((input.currently_pressed & 1) != (input.word_4 & 1))) {
        for (i = 0; i < 3; i = i + 1) {
          this->vms_8[i].pending_interrupt = 2;
        }
        this->index_0 = 3;
        this->dword_4 = 0;
        (this->vm_668).pending_interrupt = 1;
      }
    }
    break;
  case 2:
    this->vms_8[1].color = 0x80808080;
    this->vms_8[2].color = 0xffff8080;
    this->vms_8[1].scale_y = 1.5;
    this->vms_8[1].scale_x = 1.5;
    this->vms_8[2].scale_y = 1.7;
    this->vms_8[2].scale_x = 1.7;
    this->vms_8[1].pos_2.x = 0.0;
    this->vms_8[1].pos_2.y = 0.0;
    this->vms_8[1].pos_2.z = 0.0;
    this->vms_8[2].pos_2.x = -4.0;
    this->vms_8[2].pos_2.y = -4.0;
    this->vms_8[2].pos_2.z = 0.0;
    if (3 < this->dword_4) {
      if ((((input.currently_pressed & 0x10) != 0) &&
          ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) ||
         (((input.currently_pressed & 0x20) != 0 &&
          ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))))) {
        this->index_0 = 1;
      }
      if (((input.currently_pressed & 1) != 0) &&
         ((input.currently_pressed & 1) != (input.word_4 & 1))) {
        for (i = 0; i < 3; i = i + 1) {
          this->vms_8[i].pending_interrupt = 2;
        }
        for (i = 3; i < 6; i = i + 1) {
          this->vms_8[i].pending_interrupt = 1;
        }
        this->index_0 = 5;
        this->dword_4 = 0;
      }
    }
    break;
  case 3:
    if (0x13 < this->dword_4) {
      this->index_0 = 0;
      game_manager.__byte_181f = '\0';
      for (i = 0; i < 6; i = i + 1) {
        this->vms_8[i].flags = this->vms_8[i].flags & 0xfffffffe;
      }
    }
    break;
  case 4:
    this->vms_8[4].color = 0xffff8080;
    this->vms_8[5].color = 0x80808080;
    this->vms_8[4].scale_y = 1.7;
    this->vms_8[4].scale_x = 1.7;
    this->vms_8[5].scale_y = 1.5;
    this->vms_8[5].scale_x = 1.5;
    this->vms_8[4].pos_2.x = -4.0;
    this->vms_8[4].pos_2.y = -4.0;
    this->vms_8[4].pos_2.z = 0.0;
    this->vms_8[5].pos_2.x = 0.0;
    this->vms_8[5].pos_2.y = 0.0;
    this->vms_8[5].pos_2.z = 0.0;
    if (3 < this->dword_4) {
      if ((((input.currently_pressed & 0x10) != 0) &&
          ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) ||
         (((input.currently_pressed & 0x20) != 0 &&
          ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))))) {
        this->index_0 = 5;
      }
      if (((input.currently_pressed & 1) != 0) &&
         ((input.currently_pressed & 1) != (input.word_4 & 1))) {
        for (i = 3; i < 6; i = i + 1) {
          this->vms_8[i].pending_interrupt = 2;
        }
        this->index_0 = 6;
        this->dword_4 = 0;
      }
    }
    break;
  case 5:
    this->vms_8[4].color = 0x80808080;
    this->vms_8[5].color = 0xffff8080;
    this->vms_8[4].scale_y = 1.5;
    this->vms_8[4].scale_x = 1.5;
    this->vms_8[5].scale_y = 1.7;
    this->vms_8[5].scale_x = 1.7;
    this->vms_8[4].pos_2.x = 0.0;
    this->vms_8[4].pos_2.y = 0.0;
    this->vms_8[4].pos_2.z = 0.0;
    this->vms_8[5].pos_2.x = -4.0;
    this->vms_8[5].pos_2.y = -4.0;
    this->vms_8[5].pos_2.z = 0.0;
    if (3 < this->dword_4) {
      if ((((input.currently_pressed & 0x10) != 0) &&
          ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) ||
         (((input.currently_pressed & 0x20) != 0 &&
          ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))))) {
        this->index_0 = 4;
      }
      if (((input.currently_pressed & 1) != 0) &&
         ((input.currently_pressed & 1) != (input.word_4 & 1))) {
        for (i = 0; i < 3; i = i + 1) {
          this->vms_8[i].pending_interrupt = 1;
        }
        for (i = 3; i < 6; i = i + 1) {
          this->vms_8[i].pending_interrupt = 2;
        }
        this->index_0 = 2;
        this->dword_4 = 0;
      }
    }
    break;
  case 6:
    if (0x13 < this->dword_4) {
      this->index_0 = 0;
      game_manager.__byte_181f = '\0';
      supervisor.dword_18C = 1;
      for (i = 0; i < 6; i = i + 1) {
        this->vms_8[i].flags = this->vms_8[i].flags & 0xfffffffe;
      }
    }
  }
  for (i = 0; i < 6; i = i + 1) {
    AnmManager::run_anm(anm_manager_ptr,this->vms_8 + i);
  }
  if (supervisor._1021_1_ != '\0') {
    AnmManager::run_anm(anm_manager_ptr,&this->vm_668);
  }
  this->dword_4 = this->dword_4 + 1;
  return 0;
}

