
undefined4 __thiscall SoundManager::deinitialize(SoundManager *this)

{
  IDirectSound *this_00;
  int i;
  
  if (this->dsound != (IDirectSound *)0x0) {
    for (i = 0; i < 128; i = i + 1) {
      if (this->ptrs_200[i] != (IUnknown *)0x0) {
        (*(code *)this->ptrs_200[i]->vtable->Release)(this->ptrs_200[i]);
        this->ptrs_200[i] = (IUnknown *)0x0;
      }
      if (this->ptrs_8[i] != (IUnknown *)0x0) {
        (*(code *)this->ptrs_8[i]->vtable->Release)(this->ptrs_8[i]);
        this->ptrs_8[i] = (IUnknown *)0x0;
      }
    }
    KillTimer((HWND)this->window,1);
    __sub_430F80(this);
    this->dsound_api = (IDirectSound *)0x0;
                    /* WARNING: Load size is inaccurate */
    (**(code **)(*this->ptr_608 + 0x48))(this->ptr_608);
    if (this->ptr_608 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this->ptr_608 + 8))(this->ptr_608);
      this->ptr_608 = (void *)0x0;
    }
    if (this->csound_ptr != (CSound *)0x0) {
      if (this->csound_ptr != (CSound *)0x0) {
        (*(code *)this->csound_ptr->m_apDSBuffer->vtable)(1);
      }
      this->csound_ptr = (CSound *)0x0;
    }
    if (this->dsound != (IDirectSound *)0x0) {
      this_00 = this->dsound;
      if (this_00 != (IDirectSound *)0x0) {
        SoundManagerDSound::deinitialize((SoundManagerDSound *)this_00);
        _free(this_00);
      }
      this->dsound = (IDirectSound *)0x0;
    }
  }
  return 0;
}

