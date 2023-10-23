
undefined4 Supervisor::on_draw(Supervisor *supervisor)

{
  anm_manager_ptr->current_unknown = 0xff;
  anm_manager_ptr->current_sprite = (AnmLoadedSprite *)0x0;
  anm_manager_ptr->current_texture = (IDirect3DTexture8 *)0x0;
  anm_manager_ptr->current_colorop = 0xff;
  anm_manager_ptr->current_blend_mode = 0xff;
  anm_manager_ptr->current_zwrite_disable = 0xff;
  __sub_423F3F();
  return 1;
}

