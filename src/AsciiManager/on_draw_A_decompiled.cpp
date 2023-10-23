
undefined4 __cdecl AsciiManager::on_draw_A(AsciiManager *ascii_mgr)

{
  __on_draw_A_impl(ascii_mgr);
  ascii_mgr->num_strings = 0;
  AsciiManagerBigChild::__on_draw_1(&ascii_mgr->child_6244);
  AsciiManagerBigChild::__on_draw_2(&ascii_mgr->child_69BC);
  return 1;
}

