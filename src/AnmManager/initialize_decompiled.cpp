
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall AnmManager::initialize(AnmManager *manager)

{
  int i;
  RenderVertex142 *vertex_buffer;
  float *local_8;
  
  manager->some_vertex_buffer[1].texture_uv.x = -128.0;
  manager->some_vertex_buffer[0].pos.x = -128.0;
  manager->some_vertex_buffer[2].diffuse_color = 0x43000000;
  manager->some_vertex_buffer[0].texture_uv.y = 128.0;
  manager->some_vertex_buffer[1].pos.x = -128.0;
  manager->some_vertex_buffer[0].pos.y = -128.0;
  manager->some_vertex_buffer[2].texture_uv.x = 128.0;
  manager->some_vertex_buffer[1].texture_uv.y = 128.0;
  manager->some_vertex_buffer[2].texture_uv.y = 0.0;
  manager->some_vertex_buffer[2].pos.x = 0.0;
  manager->some_vertex_buffer[1].pos.y = 0.0;
  manager->some_vertex_buffer[0].pos.z = 0.0;
  manager->some_vertex_buffer[2].pos.y = 0.0;
  manager->some_vertex_buffer[0].diffuse_color = 0;
  manager->some_vertex_buffer[3].pos.x = 1.0;
  manager->some_vertex_buffer[1].pos.z = 1.0;
  manager->some_vertex_buffer[1].diffuse_color = 0;
  manager->some_vertex_buffer[0].texture_uv.x = 0.0;
  manager->some_vertex_buffer[3].pos.y = 1.0;
  manager->some_vertex_buffer[2].pos.z = 1.0;
  _SPRITE_VERTEX_BUFFER_C_0___position_x_ = manager->some_vertex_buffer[0].pos.x;
  _SPRITE_VERTEX_BUFFER_C_0__position_y = manager->some_vertex_buffer[0].pos.y;
  _SPRITE_VERTEX_BUFFER_C_0__position_z = manager->some_vertex_buffer[0].pos.z;
  _SPRITE_VERTEX_BUFFER_C_1__position_x = manager->some_vertex_buffer[0].texture_uv.y;
  _SPRITE_VERTEX_BUFFER_C_1__position_y = manager->some_vertex_buffer[1].pos.x;
  _SPRITE_VERTEX_BUFFER_C_1__position_z = manager->some_vertex_buffer[1].pos.y;
  _SPRITE_VERTEX_BUFFER_C_2__position_x = manager->some_vertex_buffer[1].texture_uv.x;
  _SPRITE_VERTEX_BUFFER_C_2__position_y = manager->some_vertex_buffer[1].texture_uv.y;
  _SPRITE_VERTEX_BUFFER_C_2__position_z = manager->some_vertex_buffer[2].pos.x;
  _SPRITE_VERTEX_BUFFER_C_3__position_x = manager->some_vertex_buffer[2].diffuse_color;
  _SPRITE_VERTEX_BUFFER_C_3__position_y = manager->some_vertex_buffer[2].texture_uv.x;
  _SPRITE_VERTEX_BUFFER_C_3__position_z = manager->some_vertex_buffer[2].texture_uv.y;
  _SPRITE_VERTEX_BUFFER_C_0__texture_uv_x = manager->some_vertex_buffer[0].diffuse_color;
  _SPRITE_VERTEX_BUFFER_C_0__texture_uv_y = manager->some_vertex_buffer[0].texture_uv.x;
  _SPRITE_VERTEX_BUFFER_C_1__texture_uv_x = manager->some_vertex_buffer[1].pos.z;
  _SPRITE_VERTEX_BUFFER_C_1__texture_uv_y = manager->some_vertex_buffer[1].diffuse_color;
  _SPRITE_VERTEX_BUFFER_C_2__texture_uv_x = manager->some_vertex_buffer[2].pos.y;
  _SPRITE_VERTEX_BUFFER_C_2__texture_uv_y = manager->some_vertex_buffer[2].pos.z;
  _SPRITE_VERTEX_BUFFER_C_3__texture_uv_x = manager->some_vertex_buffer[3].pos.x;
  _SPRITE_VERTEX_BUFFER_C_3__texture_uv_y = manager->some_vertex_buffer[3].pos.y;
  if ((supervisor.config.flags >> 1 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->CreateVertexBuffer)
              (supervisor.d3d_device,0x50,0,0x102,1,&manager->stream_source);
    (*(code *)manager->stream_source->vtable->Lock)(manager->stream_source,0,0,&local_8,0);
    vertex_buffer = manager->some_vertex_buffer;
    for (i = 20; i != 0; i = i + -1) {
      *local_8 = (vertex_buffer->pos).x;
      vertex_buffer = (RenderVertex142 *)&(vertex_buffer->pos).y;
      local_8 = local_8 + 1;
    }
    (*(code *)manager->stream_source->vtable->Unlock)(manager->stream_source);
    (*(code *)(supervisor.d3d_device)->vtable->SetStreamSource)
              (supervisor.d3d_device,0,anm_manager_ptr->stream_source,0x14);
  }
  return;
}

