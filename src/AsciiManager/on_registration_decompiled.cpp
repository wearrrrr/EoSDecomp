
int __cdecl AsciiManager::on_registration(AsciiManager *ascii_mgr)

{
  int fileToLoad;
  int result;
  
  fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,1,"data/ascii.anm",0);
  if (fileToLoad == 0) {
    fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,2,"data/asciis.anm",0x77);
    if (fileToLoad == 0) {
      fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,3,"data/capture.anm",0x718);
      if (fileToLoad == 0) {
        __sub_401410(ascii_mgr);
        result = 0;
      }
      else {
        result = -1;
      }
    }
    else {
      result = -1;
    }
  }
  else {
    result = -1;
  }
  return result;
}

