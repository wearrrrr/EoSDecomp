
int __cdecl Gui::on_cleanup(Gui *gui)

{
  AnmManager::free_anm_file(anm_manager_ptr,0x12);
  AnmManager::free_anm_file(anm_manager_ptr,0x13);
  AnmManager::free_anm_file(anm_manager_ptr,0x14);
  __sub_41872A(gui);
  if (supervisor.dword_18C != 3) {
    AnmManager::free_anm_file(anm_manager_ptr,0xd);
    AnmManager::free_anm_file(anm_manager_ptr,0xe);
    AnmManager::free_anm_file(anm_manager_ptr,0xf);
    AnmManager::free_anm_file(anm_manager_ptr,0x10);
    AnmManager::free_anm_file(anm_manager_ptr,0x11);
    _free(gui->impl);
    gui->impl = (GuiImpl *)0x0;
  }
  return 0;
}

