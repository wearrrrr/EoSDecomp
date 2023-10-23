
int EffectManager::initialize(void)

{
  int on_tick;
  int result;
  
  __sub_40E340((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c));
  enemy_manager.enemies[50].vms[7].beginning_of_script = (AnmRawInstr *)on_tick_0a;
  enemy_manager.enemies[50].vms[7].current_instruction = (AnmRawInstr *)on_registration;
  enemy_manager.enemies[50].vms[7].sprite = (AnmLoadedSprite *)on_cleanup;
  enemy_manager.enemies[50].vms[7].pos_interp_initial.y = 6.658029e-39;
  on_tick = UpdateFuncRegistry::register_on_tick
                      (&update_func_registry,&enemy_manager.enemies[0x32].vms[7].anm_file_index,10);
  if (on_tick == 0) {
    enemy_manager.enemies[50].vms[7].pos_interp_final.x = (float)on_draw_08;
    enemy_manager.enemies[50].vms[7].pos_interp_final.y = 0.0;
    enemy_manager.enemies[50].vms[7].pos_interp_final.z = 0.0;
    enemy_manager.enemies[50].vms[7].pos_interp_time.previous = 0x487fe0;
    UpdateFuncRegistry::register_on_draw
              (&update_func_registry,
               (UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].pos_interp_initial.z,8);
    result = 0;
  }
  else {
    result = -1;
  }
  return result;
}

