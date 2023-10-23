
undefined4 __cdecl AsciiManager::on_draw_B(AsciiManager *ascii_mgr)

{
  if (supervisor._1020_1_ == '\0') {
    __on_draw_B_impl_2(ascii_mgr);
  }
  else {
    __on_draw_B_impl_1(ascii_mgr);
  }
  return 1;
}

