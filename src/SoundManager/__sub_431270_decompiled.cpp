
SoundManager * __thiscall SoundManager::__sub_431270(SoundManager *this)

{
  SoundManager *this_00;
  int i;
  int sound_idx;
  
  this_00 = this;
  if ((this->dsound != (IDirectSound *)0x0) && (supervisor.config.__byte_1c != '\0')) {
    for (i = 0; (i < 3 && (this_00 = (SoundManager *)i, -1 < this->sound_index_array[i])); i = i + 1
        ) {
      sound_idx = this->sound_index_array[i];
      this->sound_index_array[i] = -1;
      this_00 = this;
      if (this->ptrs_200[sound_idx] != (IUnknown *)0x0) {
        (*(code *)this->ptrs_200[sound_idx]->vtable[6].QueryInterface)(this->ptrs_200[sound_idx]);
        (*(code *)this->ptrs_200[sound_idx]->vtable[4].AddRef)(this->ptrs_200[sound_idx],0);
        this_00 = (SoundManager *)
                  (*(code *)this->ptrs_200[sound_idx]->vtable[4].QueryInterface)
                            (this->ptrs_200[sound_idx],0,0,0);
      }
    }
  }
  return this_00;
}

