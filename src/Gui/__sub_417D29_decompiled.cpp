
int __thiscall Gui::__sub_417D29(Gui *this)

{
  int fileToLoad;
  AnmVm *vm;
  GuiImpl *gui_impl;
  short local_14;
  int local_8;
  AnmManager *anm_mgr;
  
  anm_mgr = anm_manager_ptr;
  if (supervisor.dword_18C == 3) {
    gui_impl = this->impl;
    (gui_impl->vm_9).anm_file_index = 0x619;
    AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_9,(AnmRawScript *)anm_mgr->scripts[0x619]);
    (this->impl->vm_9).pending_interrupt = 1;
  }
  else {
    gui_impl = this->impl;
    for (fileToLoad = 2833; fileToLoad != 0; fileToLoad = fileToLoad + -1) {
      gui_impl->vms[0].rotation.x = 0.0;
      gui_impl = (GuiImpl *)&gui_impl->vms[0].rotation.y;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0xd,"data/front.anm",0x600);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0xe,"data/loading.anm",0x619);
    if (fileToLoad != 0) {
      return -1;
    }
    (this->impl->vm_9).sprite_number = -1;
    if (game_manager.character == 0) {
      fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0xf,"data/face00a.anm",0x4a0);
      if (fileToLoad != 0) {
        return -1;
      }
      fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x10,"data/face00b.anm",0x4a2);
      if (fileToLoad != 0) {
        return -1;
      }
      fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x11,"data/face00c.anm",0x4a4);
      if (fileToLoad != 0) {
        return -1;
      }
    }
    else if (game_manager.character == 1) {
      fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0xf,"data/face01a.anm",0x4a0);
      if (fileToLoad != 0) {
        return -1;
      }
      fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x10,"data/face01b.anm",0x4a2);
      if (fileToLoad != 0) {
        return -1;
      }
      fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x11,"data/face01c.anm",0x4a4);
      if (fileToLoad != 0) {
        return -1;
      }
    }
  }
  if (game_manager.current_stage == 1) {
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x12,"data/face03a.anm",0x4a8);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x13,"data/face03b.anm",0x4aa);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = __sub_418665(this,"data/msg1.dat");
    if (fileToLoad != 0) {
      return -1;
    }
  }
  else if (game_manager.current_stage == 2) {
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x12,"data/face05a.anm",0x4a8);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = __sub_418665(this,"data/msg2.dat");
    if (fileToLoad != 0) {
      return -1;
    }
  }
  else if (game_manager.current_stage == 3) {
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x12,"data/face06a.anm",0x4a8);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x13,"data/face06b.anm",0x4aa);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = __sub_418665(this,"data/msg3.dat");
    if (fileToLoad != 0) {
      return -1;
    }
  }
  else if (game_manager.current_stage == 4) {
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x12,"data/face08a.anm",0x4a8);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x13,"data/face08b.anm",0x4aa);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = __sub_418665(this,"data/msg4.dat");
    if (fileToLoad != 0) {
      return -1;
    }
  }
  else if (game_manager.current_stage == 5) {
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x12,"data/face09a.anm",0x4a8);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x13,"data/face09b.anm",0x4aa);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = __sub_418665(this,"data/msg5.dat");
    if (fileToLoad != 0) {
      return -1;
    }
  }
  else if (game_manager.current_stage == 6) {
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x12,"data/face09b.anm",0x4a8);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x13,"data/face10a.anm",0x4aa);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x14,"data/face10b.anm",0x4ab);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = __sub_418665(this,"data/msg6.dat");
    if (fileToLoad != 0) {
      return -1;
    }
  }
  else {
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x12,"data/face08a.anm",0x4a8);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x13,"data/face12a.anm",0x4aa);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x14,"data/face12b.anm",0x4ab);
    if (fileToLoad != 0) {
      return -1;
    }
    fileToLoad = __sub_418665(this,"data/msg7.dat");
    if (fileToLoad != 0) {
      return -1;
    }
  }
  if (supervisor.dword_18C != 3) {
    for (local_8 = 0; anm_mgr = anm_manager_ptr, local_8 < 0x1a; local_8 = local_8 + 1) {
      local_14 = (short)local_8 + 0x600;
      vm = this->impl->vms + local_8;
      vm->anm_file_index = local_14;
      AnmManager::set_vm_script(anm_mgr,vm,(AnmRawScript *)anm_mgr->scripts[local_8 + 0x600]);
    }
  }
  this->boss_present = false;
  this->impl->field1_0x1ba0[0] = 0;
  this->boss_healthbar_24 = 0.0;
  this->boss_healthbar_28 = 0.0;
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_3).anm_file_index = 0x4a1;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_3,(AnmRawScript *)anm_mgr->scripts[0x4a1]);
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_4).anm_file_index = 0x4a3;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_4,(AnmRawScript *)anm_mgr->scripts[0x4a3]);
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_5).anm_file_index = 0x706;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_5,(AnmRawScript *)anm_mgr->scripts[0x706]);
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_6).anm_file_index = 0x707;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_6,(AnmRawScript *)anm_mgr->scripts[0x707]);
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_7).anm_file_index = 0x617;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_7,(AnmRawScript *)anm_mgr->scripts[0x617]);
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_8).anm_file_index = 0x618;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_8,(AnmRawScript *)anm_mgr->scripts[0x618]);
  (this->impl->vm_3).current_instruction = (AnmRawInstr *)0x0;
  (this->impl->vm_5).current_instruction = (AnmRawInstr *)0x0;
  (this->impl->vm_4).current_instruction = (AnmRawInstr *)0x0;
  (this->impl->vm_6).current_instruction = (AnmRawInstr *)0x0;
  (this->impl->vm_3).flags = (this->impl->vm_3).flags & 0xfffffffe;
  (this->impl->vm_5).flags = (this->impl->vm_5).flags & 0xfffffffe;
  (this->impl->vm_4).flags = (this->impl->vm_4).flags & 0xfffffffe;
  (this->impl->vm_6).flags = (this->impl->vm_6).flags & 0xfffffffe;
  (this->impl->vm_5).font_width = '\x0f';
  (this->impl->vm_5).font_height = '\x0f';
  (this->impl->vm_6).font_width = '\x0f';
  (this->impl->vm_6).font_height = '\x0f';
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_1).anm_file_index = 0x700;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_1,(AnmRawScript *)anm_mgr->scripts[0x700]);
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_2).anm_file_index = 0x701;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_2,(AnmRawScript *)anm_mgr->scripts[0x701]);
  AnmManager::__draw_text_to_vm_center
            (anm_manager_ptr,&this->impl->vm_1,0xe0ffff,0,(Stage.std_file)->stage_name);
  (this->impl->vm_2).font_width = '\x10';
  (this->impl->vm_2).font_height = '\x10';
  AnmManager::__draw_text_to_vm_right(anm_manager_ptr,&this->impl->vm_2,0xe0ffff,0,"ô%s");
  (this->impl->msg).current_msg_index = -1;
  this->impl->dword_2BDC = 0;
  (this->impl->child_b_2BE4).field_10 = 0;
  (this->impl->child_b_2C04).field_10 = 0;
  (this->impl->child_b_2C24).field_10 = 0;
  this->flags_0 = this->flags_0 & 0xfffffffc | 2;
  this->flags_0 = this->flags_0 & 0xfffffff3 | 8;
  this->flags_0 = this->flags_0 & 0xffffff3f | 0x80;
  this->flags_0 = this->flags_0 & 0xfffffcff | 0x200;
  this->flags_0 = this->flags_0 & 0xffffffcf | 0x20;
  return 0;
}

