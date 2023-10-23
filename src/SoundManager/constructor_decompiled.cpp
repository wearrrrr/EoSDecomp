
SoundManager * __thiscall SoundManager::constructor(SoundManager *this)

{
  int i;
  SoundManager *this_00;
  int j;
  
  this_00 = this;
  for (i = 398; i != 0; i = i + -1) {
    this_00->dsound_api = (IDirectSound *)0x0;
    this_00 = (SoundManager *)this_00->field1_0x4;
  }
  for (j = 0; j < 128; j = j + 1) {
    this->array_408[j] = -1;
  }
  return this;
}

