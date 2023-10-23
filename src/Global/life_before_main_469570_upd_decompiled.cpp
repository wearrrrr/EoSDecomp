
void life_before_main_469570_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor
            ((UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].pos_interp_initial.z,unaff_EBP);
  _atexit(__at_exit_effect_manager_on_draw);
  return;
}

