
void __cdecl hardcoded_func_10_stage6Ex(Enemy *this)

{
  AnmManager *AnmManager;
  
  if (0 < this->life) {
    hardcoded_func_06_stage6Ex(this);
    AnmManager = anm_manager_ptr;
    if (player.player_inner.dword_0 == 0) {
      if ((0 < (this->timer_e44).current) &&
         (Timer::sub(&this->timer_e44,1), AnmManager = anm_manager_ptr,
         (this->timer_e44).current == 0)) {
        if (this->anm_ex_left < 0) {
          (this->primary_vm).anm_file_index = 0x1a0;
          ::AnmManager::set_vm_script
                    (AnmManager,&this->primary_vm,(AnmRawScript *)AnmManager->scripts[0x1a0]);
          this->anm_ex_left = 0xa1;
        }
        this->flags_2 = this->flags_2 | 1;
      }
    }
    else {
      if (-1 < this->anm_ex_left) {
        (this->primary_vm).anm_file_index = 0x1a5;
        ::AnmManager::set_vm_script
                  (AnmManager,&this->primary_vm,(AnmRawScript *)AnmManager->scripts[421]);
        this->anm_ex_left = -1;
      }
      this->flags_2 = this->flags_2 & 0xfe;
      (this->timer_e44).current = 0x3c;
      (this->timer_e44).subframe = 0.0;
      (this->timer_e44).previous = -999;
    }
  }
  return;
}

