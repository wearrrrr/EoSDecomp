
void __cdecl hardcoded_func_03_stage4(Enemy *this)

{
  (this->current_context).int_var_1 =
       *(int32_t *)
        (&DAT_00476264 +
        (uint)(byte)game_manager.shottype * 0xc + (uint)(byte)game_manager.character * 0x18);
  (this->current_context).int_var_2 =
       *(int32_t *)
        (&DAT_00476268 +
        (uint)(byte)game_manager.shottype * 0xc + (uint)(byte)game_manager.character * 0x18);
  (this->current_context).int_var_3 =
       *(int32_t *)
        (&DAT_0047626c +
        (uint)(byte)game_manager.shottype * 0xc + (uint)(byte)game_manager.character * 0x18);
  return;
}

