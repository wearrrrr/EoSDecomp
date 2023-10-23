
void life_before_main_4695b0_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor
            ((UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].pos_interp_time.current,unaff_EBP);
  _atexit(__at_exit_enemy_manager_on_draw);
  return;
}

