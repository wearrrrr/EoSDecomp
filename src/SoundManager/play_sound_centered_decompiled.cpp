
SoundManager * __thiscall
SoundManager::play_sound_centered(SoundManager *this,int sound,undefined param_2)

{
  short sVar1;
  SoundManager *snd;
  int i;
  
  sVar1 = *(short *)(&DAT_0047852e + sound * 8);
  snd = (SoundManager *)sound;
  for (i = 0; (i < 3 && (snd = (SoundManager *)i, -1 < this->sound_index_array[i])); i = i + 1) {
    if (this->sound_index_array[i] == sound) {
      snd = this;
      return snd;
    }
    snd = this;
  }
  if (i < 3) {
    this->sound_index_array[i] = sound;
    this->array_408[sound] = (int)sVar1;
    snd = this;
  }
  return snd;
}

