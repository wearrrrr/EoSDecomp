
int __cdecl Gui::on_tick(Gui *gui)

{
  if (game_manager.__byte_2c == 0) {
    on_tick_impl(gui);
    GuiImpl::run_msg(gui->impl);
  }
  return 1;
}

