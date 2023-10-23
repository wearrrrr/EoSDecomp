
int __thiscall SoundManager::__sub_431080(SoundManager *this)

{
  int result;
  int iVar1;
  int i;
  
  if (this->dsound == (IDirectSound *)0x0) {
    result = -1;
  }
  else if (this->dsound_api == (IDirectSound *)0x0) {
    result = 0;
  }
  else {
    for (i = 0; i < 3; i = i + 1) {
      this->sound_index_array[i] = -1;
    }
    for (i = 0; i < 26; i = i + 1) {
      iVar1 = i;
      __sub_4306E0(this,i,*(char **)(&DAT_00478628 + i * 4));
      if (iVar1 != 0) {
        LogBuffer::write(&LogBuffer,
                         "error : Sound ファイルが読み込めない データを確認 %s\n");
        return -1;
      }
    }
    for (i = 0; (uint)i < 32; i = i + 1) {
      (*this->dsound_api->vtable->DuplicateSoundBuffer)
                (this->dsound_api,
                 (IDirectSoundBuffer *)this->ptrs_8[*(int *)(&DAT_00478528 + i * 8)],
                 (IDirectSoundBuffer **)(this->ptrs_200 + i));
      (*(code *)this->ptrs_200[i]->vtable[4].AddRef)(this->ptrs_200[i],0);
      (*(code *)this->ptrs_200[i]->vtable[5].QueryInterface)
                (this->ptrs_200[i],(int)*(short *)(&DAT_0047852c + i * 8));
    }
    result = 0;
  }
  return result;
}

