
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Gui::spawn_spellcard_effects(Gui *this,int portrait,char *spell_name)

{
  char *spellname;
  AnmManager *anm_mgr;
  GuiImpl *gui_impl;
  char spellname_ptr;
  
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_4).anm_file_index = 0x4a3;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_4,(AnmRawScript *)anm_mgr->scripts[0x4a3]);
  AnmManager::set_vm_sprite(anm_manager_ptr,&this->impl->vm_4,portrait + 0x4a8);
  anm_mgr = anm_manager_ptr;
  gui_impl = this->impl;
  (gui_impl->vm_6).anm_file_index = 0x707;
  AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_6,(AnmRawScript *)anm_mgr->scripts[0x707]);
  AnmManager::__draw_text_to_vm_right(anm_manager_ptr,&this->impl->vm_6,0xfff0f0,0,spell_name);
  spellname = spell_name;
  do {
    spellname_ptr = *spellname;
    spellname = spellname + 1;
  } while (spellname_ptr != '\0');
  this->blue_spellcard_bar_length =
       (float)(ulonglong)(uint)(((int)spellname - (int)(spell_name + 1)) * 0xf) / _2_0f +
       ram0x0046a2b4;
  SoundManager::play_sound_centered(&sound_manager,0xe,0);
  return;
}

