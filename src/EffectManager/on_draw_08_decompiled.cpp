
undefined4 __cdecl EffectManager::on_draw_08(EffectManager *eff_mgr)

{
  int i;
  Effect *effects;
  
  effects = eff_mgr->effects_array;
  for (i = 0; i < 512; i = i + 1) {
    if (effects->in_use_flag != 0) {
      (effects->vm).pos.x = (effects->float3_110).x;
      (effects->vm).pos.y = (effects->float3_110).y;
      (effects->vm).pos.z = (effects->float3_110).z;
      AnmManager::draw_vm(anm_manager_ptr,&effects->vm);
    }
    effects = effects + 1;
  }
  return 1;
}

