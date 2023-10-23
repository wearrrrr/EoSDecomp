
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Gui::__sub_417ACD(Gui *this,int sprite_number,char *filename)

{
  char *filename_ptr;
  AnmManager *anm_mgr;
  char buffer;
  GuiImpl *gui_impl;
  
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_3).anm_file_index = 0x4a1;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_3,(AnmRawScript *)anm_mgr->scripts[0x4a1]);
  AnmManager::set_vm_sprite(anm_manager_ptr,&this->impl->vm_3,sprite_number);
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_5).anm_file_index = 0x706;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_5,(AnmRawScript *)anm_mgr->scripts[0x706]);
  AnmManager::__draw_text_to_vm_left(anm_manager_ptr,&this->impl->vm_5,0xf0f0ff,0,filename);
  filename_ptr = filename;
  do {
    buffer = *filename_ptr;
    filename_ptr = filename_ptr + 1;
  } while (buffer != '\0');
  this->float_8 =
       (float)(ulonglong)(uint)(((int)filename_ptr - (int)(filename + 1)) * 0xf) / _2_0f +
       ram0x0046a2b4;
  supervisor.frames_to_disable_something = 3;
  SoundManager::play_sound_centered(&sound_manager,0xe,0);
  return;
}

