
void life_before_main_469550_upd(void)

{
  UpdateFunc *unaff_EBP;
  
  UpdateFunc::constructor
            ((UpdateFunc *)&enemy_manager.enemies[0x32].vms[7].anm_file_index,unaff_EBP);
  _atexit(__at_exit_effect_manager_on_tick);
  return;
}

