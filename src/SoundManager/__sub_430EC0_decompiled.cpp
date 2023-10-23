
int __thiscall SoundManager::__sub_430EC0(SoundManager *this,int param_1)

{
  int result;
  int *piVar1;
  
  __stub_3();
  if (this->csound_ptr == (CSound *)0x0) {
    result = -1;
  }
  else {
    result = CSound::__play(this->csound_ptr);
    if (result < 0) {
      result = -1;
    }
    else {
      piVar1 = (int *)CSound::__sub_43B200(this->csound_ptr,0);
      result = CSound::FillBufferWithSound(this->csound_ptr,piVar1,param_1);
      if (result < 0) {
        result = -1;
      }
      else {
        result = CSound::__sub_43B240(this->csound_ptr,0,1);
        if (result < 0) {
          result = -1;
        }
        else {
          __stub_3();
          this->field14_0x634 = param_1;
          result = 0;
        }
      }
    }
  }
  return result;
}

