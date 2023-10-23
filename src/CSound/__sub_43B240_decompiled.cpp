
int __thiscall CSound::__sub_43B240(CSound *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int local_c;
  int *local_8;
  
  if (this->m_dwDSBufferSize == 0) {
    iVar1 = -2147221008;
  }
  else {
    local_8 = (int *)__sub_43B140(this);
    if (local_8 == (int *)0x0) {
      iVar1 = -2147467259;
    }
    else {
      iVar1 = RestoreBuffer(this,local_8,&local_c);
      if (-1 < iVar1) {
        if (local_c != 0) {
          iVar1 = FillBufferWithSound(this,local_8,0);
          if (iVar1 < 0) {
            return iVar1;
          }
          __sub_43B3B0(this);
        }
        *(undefined4 *)&this[1].field_0x8 = 0;
        this[1].m_apDSBuffer = (IDirectSoundBuffer *)0x0;
        this[1].m_dwDSBufferSize = 0;
        iVar1 = (**(code **)(*local_8 + 0x30))(local_8,0,param_1,param_2);
      }
    }
  }
  return iVar1;
}

