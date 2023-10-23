
Effect * __thiscall
EffectManager::spawn_effect(EffectManager *this,int effect_id,Float3 *pos,int count,D3DCOLOR color)

{
  int iVar1;
  Effect *dummy_effect;
  int16_t local_10;
  int i;
  Effect *effect;
  AnmManager *anm_mgr;
  
  effect = this->effects_array + this->next_index;
  for (i = 0; i < 512; i = i + 1) {
    this->next_index = this->next_index + 1;
    if (0x1ff < this->next_index) {
      this->next_index = 0;
    }
    if (effect->in_use_flag == '\0') {
      effect->in_use_flag = '\x01';
      effect->effect_id = (char)effect_id;
      (effect->float3_110).x = pos->x;
      (effect->float3_110).y = pos->y;
      (effect->float3_110).z = pos->z;
      anm_mgr = anm_manager_ptr;
      iVar1 = *(int *)(&DAT_00476298 + effect_id * 8);
      local_10 = (int16_t)iVar1;
      (effect->vm).anm_file_index = local_10;
      AnmManager::set_vm_script(anm_mgr,&effect->vm,(AnmRawScript *)anm_mgr->scripts[iVar1]);
      (effect->vm).color = color;
      effect->dword_174 = *(int32_t *)(&DAT_0047629c + effect_id * 8);
      (effect->timer).current = 0;
      (effect->timer).subframe = 0.0;
      (effect->timer).previous = -999;
      effect->byte_17A = '\0';
      effect->byte_17B = '\0';
      count = count + -1;
      if (count == 0) break;
      if (this->next_index == 0) {
        effect = this->effects_array;
      }
      else {
        effect = effect + 1;
      }
    }
    else if (this->next_index == 0) {
      effect = this->effects_array;
    }
    else {
      effect = effect + 1;
    }
  }
                    /* Set item cap at 512, spawn a dummy effect (empty) if it exceeds that. */
  if (i < 512) {
    dummy_effect = effect;
  }
  else {
    dummy_effect = &this->dummy_effect;
  }
  return dummy_effect;
}

