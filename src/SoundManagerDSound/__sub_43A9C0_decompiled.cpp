
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SoundManagerDSound::__sub_43A9C0
          (SoundManagerDSound *this,CSound *c_snd,LPSTR param_2,uint param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8,int param_9,
          undefined4 param_10)

{
  CWaveFile *this_00;
  void *this_01;
  int iVar1;
  uint *puVar2;
  uint unaff_retaddr;
  IDirectSoundBuffer *dsound_buffer;
  CSound *local_78;
  uint local_54;
  int *local_50;
  int local_4c;
  uint local_48 [4];
  IDirectSoundBuffer *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 *local_20;
  CSound *local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &__SE_handler_4692D6;
  local_10 = ExceptionList;
  local_24 = _DAT_0047a630 ^ unaff_retaddr;
  if (*(int *)this != 0) {
    local_20 = (undefined4 *)0x0;
    local_1c = (CSound *)0x0;
    local_18 = (void *)0x0;
    local_50 = (int *)0x0;
    ExceptionList = &local_10;
    this_00 = (CWaveFile *)malloc(0x98);
    local_8 = 0;
    if (this_00 == (CWaveFile *)0x0) {
      local_78 = (CSound *)0x0;
    }
    else {
      local_78 = (CSound *)CWaveFile::__sub_43B9B0(this_00);
    }
    local_8 = 0xffffffff;
    local_1c = local_78;
    CWaveFile::Open((CWaveFile *)local_78,param_2,0,(uint *)0x1);
    local_14 = param_9 * param_8;
    puVar2 = local_48;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_48[0] = 0x24;
    local_48[1] = param_3 | 0x18188;
    local_48[2] = local_14;
    local_34 = param_4;
    local_30 = param_5;
    local_2c = param_6;
    local_28 = param_7;
    local_38 = local_1c->m_apDSBuffer;
    local_4c = (**(code **)(**(int **)this + 12))(*(undefined4 *)this,local_48,&local_20,0);
    if (((-1 < local_4c) &&
        (local_4c = (**(code **)*local_20)(local_20,&DAT_0046fe10,&local_50), -1 < local_4c)) &&
       (local_18 = malloc(param_8 << 3), local_18 != (void *)0x0)) {
      for (local_54 = 0; local_54 < param_8; local_54 = local_54 + 1) {
        *(uint *)((int)local_18 + local_54 * 8) = param_9 * local_54 + -1 + param_9;
        *(undefined4 *)((int)local_18 + local_54 * 8 + 4) = param_10;
      }
      local_4c = (**(code **)(*local_50 + 0xc))(local_50,param_8,local_18);
      if (local_4c < 0) {
        if (local_50 != (int *)0x0) {
          (**(code **)(*local_50 + 8))(local_50);
          local_50 = (int *)0x0;
        }
        if (local_18 != (void *)0x0) {
          _free(local_18);
          local_18 = (void *)0x0;
        }
      }
      else {
        if (local_50 != (int *)0x0) {
          (**(code **)(*local_50 + 8))(local_50);
          local_50 = (int *)0x0;
        }
        if (local_18 != (void *)0x0) {
          _free(local_18);
          local_18 = (void *)0x0;
        }
        this_01 = malloc(0x34);
        local_8 = 1;
        if (this_01 == (void *)0x0) {
          dsound_buffer = (IDirectSoundBuffer *)0x0;
        }
        else {
          dsound_buffer =
               (IDirectSoundBuffer *)
               UnknownF::__sub_43B420(this_01,local_20,local_14,local_1c,param_9);
        }
        local_8 = 0xffffffff;
        c_snd->m_apDSBuffer = dsound_buffer;
      }
    }
  }
  ExceptionList = local_10;
  ___security_check_cookie_4(local_24 ^ unaff_retaddr);
  return;
}

