
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

AnmManager * __thiscall AnmManager::constructor(AnmManager *this)

{
  int i;
  AnmManager *anm_mgr;
  int local_1c;
  int j;
  
  AnmVm::constructor(&this->mystery_vm);
  local_1c = 4;
  do {
    local_1c = local_1c + -1;
  } while (-1 < local_1c);
  this->loaded_sprite_count_maybe = 0;
  anm_mgr = this;
  for (i = 33867; i != 0; i = i + -1) {
    anm_mgr->sprites[0].source_file_index = 0;
    anm_mgr = (AnmManager *)&anm_mgr->sprites[0].start_pixel_inclusive;
  }
                    /* Clear source file index */
  for (j = 0; j < 2048; j = j + 1) {
    this->sprites[j].source_file_index = 0xffffffff;
  }
  _SPRITE_VERTEX_BUFFER_B_3__position_w = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_B_2__position_w = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_B_1__position_w = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_B_0__position_w = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_B_0__texture_uv_x = 0;
  _SPRITE_VERTEX_BUFFER_B_0__texture_uv_y = 0;
  _SPRITE_VERTEX_BUFFER_B_1__texture_uv_x = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_B_1__texture_uv_y = 0;
  _SPRITE_VERTEX_BUFFER_B_2__texture_uv_x = 0;
  _SPRITE_VERTEX_BUFFER_B_2__texture_uv_y = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_B_3__texture_uv_x = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_B_3__texture_uv_y = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_A_3__position_w = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_A_2__position_w = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_A_1__position_w = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_A_0__position_w = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_A_0__texture_uv_x = 0;
  _SPRITE_VERTEX_BUFFER_A_0__texture_uv_y = 0;
  _SPRITE_VERTEX_BUFFER_A_1__texture_uv_x = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_A_1__texture_uv_y = 0;
  _SPRITE_VERTEX_BUFFER_A_2__texture_uv_x = 0;
  _SPRITE_VERTEX_BUFFER_A_2__texture_uv_y = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_A_3__texture_uv_x = 0x3f800000;
  _SPRITE_VERTEX_BUFFER_A_3__texture_uv_y = 0x3f800000;
  this->stream_source = (IDirect3DVertexBuffer8 *)0x0;
  this->current_texture = (IDirect3DTexture8 *)0x0;
  this->current_blend_mode = 0;
  this->current_colorop = 0;
  this->current_texture_factor = 1;
  this->current_unknown = 0;
  this->current_zwrite_disable = 0;
  this->some_vertex_buffer[3].pos.z = -NAN;
  return this;
}

