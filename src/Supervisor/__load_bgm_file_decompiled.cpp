
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Supervisor::__load_bgm_file(Supervisor *this,char *filename)

{
  char cVar1;
  int iVar2;
  uint unaff_retaddr;
  char *local_22c;
  char *local_228;
  char *buff;
  char *Filename;
  char filename_buffer [256];
  char local_10c [256];
  uint local_c;
  char *strrchr;
  MidiManager *midi_mgr;
  
  midi_mgr = supervisor.midi_manager_ptr;
  local_c = _DAT_0047a630 ^ unaff_retaddr;
  if (supervisor.config.bgm_format == 2) {
    if (supervisor.midi_manager_ptr != (MidiManager *)0x0) {
      MidiManager::__sub_4224E0(supervisor.midi_manager_ptr);
      UnknownB::__sub_422380(midi_mgr,(byte *)filename);
      UnknownB::__sub_422490(midi_mgr);
    }
  }
  else if (supervisor.config.bgm_format == '\x01') {
    Filename = filename;
    buff = filename_buffer;
    do {
      cVar1 = *Filename;
      *buff = cVar1;
      Filename = Filename + 1;
      buff = buff + 1;
    } while (cVar1 != '\0');
    local_228 = filename;
    local_22c = local_10c;
    do {
      cVar1 = *local_228;
      *local_22c = cVar1;
      local_228 = local_228 + 1;
      local_22c = local_22c + 1;
    } while (cVar1 != '\0');
    strrchr = _strrchr(filename_buffer,0x2e);
    strrchr[1] = 'w';
    strrchr[2] = 'a';
    strrchr[3] = 'v';
    strrchr = _strrchr(local_10c,0x2e);
    strrchr[1] = 'p';
    strrchr[2] = 'o';
    strrchr[3] = 's';
    SoundManager::__sub_430A50(&sound_manager,filename_buffer);
    iVar2 = SoundManager::__sub_430E10(&sound_manager,local_10c);
    if (iVar2 < 0) {
      SoundManager::__sub_430EC0(&sound_manager,0);
    }
    else {
      SoundManager::__sub_430EC0(&sound_manager,1);
    }
  }
  ___security_check_cookie_4(local_c ^ unaff_retaddr);
  return;
}

