
uint __cdecl __shot_related_1(int param_1,float *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  short sVar3;
  AnmManager *this;
  short *psVar4;
  float10 fVar5;
  
  for (; param_5[1] <= (int)(uint)game_manager.current_power; param_5 = param_5 + 3) {
  }
  psVar4 = (short *)(param_3 * 0x24 + param_5[2]);
  if (*(char *)((int)psVar4 + 0x1f) == '\x03') {
    sVar3 = psVar4[1];
    if (*(int *)(param_1 + 0x9c0 + sVar3 * 0xc) != 0) {
LAB_00426400:
      if (*param_5 + -1 <= param_3) {
        return 0xfffffffe;
      }
      return 0xffffffff;
    }
    puVar1 = (undefined4 *)(param_1 + 0x9b8 + sVar3 * 0xc);
    puVar1[2] = (int)*psVar4;
    puVar1[1] = 0;
    *puVar1 = 0xfffffc19;
    *(short *)((int)param_2 + 0x152) = sVar3;
    *(ushort *)(param_2 + 0x55) = (ushort)*(byte *)(psVar4 + 0xf);
    param_2[0x4c] = *(float *)(psVar4 + 2);
    param_2[0x4d] = *(float *)(psVar4 + 4);
  }
  else if (param_4 % (int)*psVar4 != (int)psVar4[1]) goto LAB_00426400;
  this = anm_manager_ptr;
  sVar3 = psVar4[0x10];
  *(short *)(param_2 + 0x2d) = sVar3;
  AnmManager::set_vm_script(this,(AnmVm *)param_2,(AnmRawScript *)this->scripts[sVar3]);
  if (*(char *)(psVar4 + 0xf) == '\0') {
    param_2[0x44] = *(float *)(param_1 + 0x440);
    param_2[0x45] = *(float *)(param_1 + 0x444);
    param_2[0x46] = *(float *)(param_1 + 0x448);
  }
  else {
    pfVar2 = (float *)(param_1 + 0x4a0 + (*(byte *)(psVar4 + 0xf) - 1) * 0xc);
    param_2[0x44] = *pfVar2;
    param_2[0x45] = pfVar2[1];
    param_2[0x46] = pfVar2[2];
  }
  param_2[0x44] = param_2[0x44] + *(float *)(psVar4 + 2);
  param_2[0x45] = param_2[0x45] + *(float *)(psVar4 + 4);
  param_2[0x46] = 0.495;
  param_2[0x47] = *(float *)(psVar4 + 6);
  param_2[0x48] = *(float *)(psVar4 + 8);
  param_2[0x49] = 1.0;
  param_2[0x4f] = *(float *)(psVar4 + 10);
  param_2[0x4e] = *(float *)(psVar4 + 0xc);
  fVar5 = (float10)_cos(psVar4,SUB41(*(float *)(psVar4 + 10),0),
                        SUB81((double)*(float *)(psVar4 + 10),0));
  param_2[0x4a] = (float)fVar5 * *(float *)(psVar4 + 0xc);
  fVar5 = (float10)_sin(param_2,(char)psVar4,SUB81((double)*(float *)(psVar4 + 10),0));
  param_2[0x4b] = (float)fVar5 * *(float *)(psVar4 + 0xc);
  param_2[0x52] = 0.0;
  param_2[0x51] = 0.0;
  param_2[0x50] = -NAN;
  *(ushort *)(param_2 + 0x54) = (ushort)*(byte *)((int)psVar4 + 0x1f);
  *(short *)(param_2 + 0x53) = psVar4[0xe];
  if (-1 < psVar4[0x11]) {
    SoundManager::play_sound_centered(&sound_manager,(int)psVar4[0x11],0);
  }
  return (uint)(*param_5 + -1 <= param_3);
}

