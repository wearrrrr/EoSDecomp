
void __cdecl __sub_4377A3(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  float fVar1;
  
  if (param_2 == param_3) {
    if ((supervisor.config.flags >> 8 & 1 | supervisor.config.flags & 1) == 0) {
      *(uint *)(param_1 + 0x7c) = param_4;
    }
    else {
      AnmManager::set_vm_sprite
                (anm_manager_ptr,(AnmVm *)param_1,*(short *)(param_1 + 0xb2) + param_6);
      *(uint *)(param_1 + 0x7c) = param_4 & 0xff000000 | 0xffffff;
    }
    fVar1 = _4_0f;
    *(float *)(param_1 + 0xe4) = _4_0f;
    *(float *)(param_1 + 0xe8) = fVar1;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  else {
    if ((supervisor.config.flags >> 8 & 1 | supervisor.config.flags & 1) == 0) {
      *(uint *)(param_1 + 0x7c) = param_5;
    }
    else {
      AnmManager::set_vm_sprite(anm_manager_ptr,(AnmVm *)param_1,(int)*(short *)(param_1 + 0xb2));
      *(uint *)(param_1 + 0x7c) = param_5 & 0xff000000 | 0xffffff;
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}

