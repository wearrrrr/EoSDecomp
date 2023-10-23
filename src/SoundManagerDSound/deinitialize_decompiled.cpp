
void __thiscall SoundManagerDSound::deinitialize(SoundManagerDSound *this)

{
  if (*(int *)this != 0) {
    (**(code **)(**(int **)this + 8))(*(undefined4 *)this);
    *(undefined4 *)this = 0;
  }
  return;
}

