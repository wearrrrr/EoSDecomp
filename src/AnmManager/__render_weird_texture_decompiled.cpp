
void __fastcall AnmManager::__render_weird_texture(AnmManager *this)

{
  if (-1 < (int)this->some_vertex_buffer[3].pos.z) {
    __surface_copy_with_a_texture_index
              (this,(int)this->some_vertex_buffer[3].pos.z,this->some_vertex_buffer[3].diffuse_color
               ,(long)this->some_vertex_buffer[3].texture_uv.x,
               (long)this->some_vertex_buffer[3].texture_uv.y,this->weird_texture_height);
    this->some_vertex_buffer[3].pos.z = -NAN;
  }
  return;
}

