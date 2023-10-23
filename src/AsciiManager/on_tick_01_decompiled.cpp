
undefined4 __cdecl AsciiManager::on_tick_01(AsciiManager *ascii_manager)

{
  AsciiManagerPopup *popups;
  int i;
  
  if ((game_manager.__byte_181f == '\0') && (game_manager.__byte_1820 == '\0')) {
    popups = ascii_manager->popups_1;
    for (i = 0; i < 515; i = i + 1) {
      if (popups->in_use != '\0') {
        (popups->position).y = (popups->position).y - __5f * supervisor.game_speed;
        (popups->timer).previous = (popups->timer).current;
        Supervisor::tick_timer(&supervisor,&(popups->timer).current,&(popups->timer).subframe);
        if (60 < (popups->timer).current) {
          popups->in_use = 0;
        }
      }
      popups = popups + 1;
    }
  }
  else if (game_manager.__byte_181f != '\0') {
    AsciiManagerBigChild::__on_tick_1(&ascii_manager->child_6244);
  }
  if (game_manager.__byte_1820 != '\0') {
    AsciiManagerBigChild::__on_tick_2(&ascii_manager->child_69BC);
  }
  return 1;
}

