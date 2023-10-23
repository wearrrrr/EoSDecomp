
int __thiscall
SoundManagerDSound::initialize
          (SoundManagerDSound *this,undefined4 p_windowHandle,undefined4 param_2,short param_3,
          int param_4,ushort param_5)

{
  int result;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    (**(code **)(**(int **)this + 8))(*(undefined4 *)this);
    *(int **)this = (int *)0x0;
  }
  result = DirectSoundCreate8(0,this,0);
  if ((-1 < result) &&
     (result = (**(code **)(**(int **)this + 0x18))
                         (*(int **)this,p_windowHandle,param_2,this,result,uVar1), -1 < result)) {
    check_format_is_supported(this,param_3,param_4,param_5);
    result = 0;
  }
  return result;
}

