
undefined4 __cdecl EffectManager::on_tick_0a(EffectManager *eff_mgr)

{
  int run_anm;
  int i;
  Effect *effects;
  
  effects = eff_mgr->effects_array;
  *(undefined4 *)eff_mgr->field1_0x4 = 0;
  for (i = 0; i < 0x200; i = i + 1) {
    if (effects->in_use_flag != 0) {
      *(int *)eff_mgr->field1_0x4 = *(int *)eff_mgr->field1_0x4 + 1;
      if ((effects->dword_174 != 0) &&
         (run_anm = (*(code *)effects->dword_174)(effects), run_anm != 1)) {
        effects->in_use_flag = 0;
      }
      run_anm = AnmManager::run_anm(anm_manager_ptr,&effects->vm);
      if (run_anm != 0) {
        effects->in_use_flag = 0;
      }
      (effects->timer).previous = (effects->timer).current;
      Supervisor::tick_timer(&supervisor,&(effects->timer).current,&(effects->timer).subframe);
    }
    effects = effects + 1;
  }
  return 1;
}

