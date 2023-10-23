
void __sub_43A70A(void)

{
  int local_8;
  
  for (local_8 = 0x15; local_8 < 0x1c; local_8 = local_8 + 1) {
    AnmManager::free_anm_file(anm_manager_ptr,local_8);
  }
  return;
}

