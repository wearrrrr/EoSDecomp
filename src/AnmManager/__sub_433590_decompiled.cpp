
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall AnmManager::__sub_433590(AnmManager *this,AnmVm *vm)

{
  int result;
  D3DMATRIX *matrix;
  float *pfVar1;
  float local_c4 [5];
  float local_b0;
  float local_94;
  float local_90;
  float local_8c;
  float local_44 [8];
  float local_24;
  float local_20;
  
  if ((vm->flags & 1) == 0) {
    result = -1;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    result = -1;
  }
  else if ((((vm->rotation).x == (float)__0f) && ((vm->rotation).y == (float)__0f)) &&
          ((vm->rotation).z == (float)__0f)) {
    if (vm->color == 0) {
      result = -1;
    }
    else {
      matrix = &vm->matrix;
      pfVar1 = local_c4;
      for (result = 0x10; result != 0; result = result + -1) {
        *pfVar1 = (matrix->field0_0x0).field0._11;
        matrix = (D3DMATRIX *)((int)&matrix->field0_0x0 + 4);
        pfVar1 = pfVar1 + 1;
      }
      local_94 = ROUND((vm->pos).x) - __5f;
      local_90 = -ROUND((vm->pos).y) + __5f;
      if ((vm->flags >> 8 & 1) != 0) {
        local_94 = (vm->sprite->width_px * vm->scale_x) / _2_0f + local_94;
      }
      if ((vm->flags >> 8 & 2) != 0) {
        local_90 = local_90 - (vm->sprite->height_px * vm->scale_y) / _2_0f;
      }
      local_8c = (vm->pos).z;
      local_c4[0] = local_c4[0] * vm->scale_x;
      local_b0 = -vm->scale_y * local_b0;
      (*(code *)(supervisor.d3d_device)->vtable->SetTransform)(supervisor.d3d_device,0x100,local_c4)
      ;
      if (this->current_sprite != vm->sprite) {
        this->current_sprite = vm->sprite;
        matrix = &vm->matrix;
        pfVar1 = local_44;
        for (result = 0x10; result != 0; result = result + -1) {
          *pfVar1 = (matrix->field0_0x0).field0._11;
          matrix = (D3DMATRIX *)((int)&matrix->field0_0x0 + 4);
          pfVar1 = pfVar1 + 1;
        }
        local_24 = (vm->sprite->uv_start).x + (vm->uv_scroll_pos).x;
        local_20 = (vm->sprite->uv_start).y + (vm->uv_scroll_pos).y;
        (*(code *)(supervisor.d3d_device)->vtable->SetTransform)
                  (supervisor.d3d_device,0x10,local_44);
        if (this->current_texture !=
            (IDirect3DTexture8 *)this->textures[vm->sprite->source_file_index]) {
          this->current_texture = (IDirect3DTexture8 *)this->textures[vm->sprite->source_file_index]
          ;
          (*(code *)(supervisor.d3d_device)->vtable->SetTexture)
                    (supervisor.d3d_device,0,this->current_texture);
        }
        if (this->current_unknown != '\x03') {
          if ((supervisor.config.flags >> 1 & 1) == 0) {
            (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x102)
            ;
            (*(code *)(supervisor.d3d_device)->vtable->SetStreamSource)
                      (supervisor.d3d_device,0,this->stream_source,0x14);
          }
          else {
            (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x142)
            ;
          }
          this->current_unknown = '\x03';
        }
      }
      set_render_state_for_vm(this,vm);
      if ((supervisor.config.flags >> 1 & 1) == 0) {
        (*(code *)(supervisor.d3d_device)->vtable->DrawPrimitive)(supervisor.d3d_device,5,0,2);
      }
      else {
        (*(code *)(supervisor.d3d_device)->vtable->DrawPrimitiveUP)
                  (supervisor.d3d_device,5,2,&SPRITE_VERTEX_BUFFER_C_0___position_x_,0x18);
      }
      result = 0;
    }
  }
  else {
    result = draw_vm(this,vm);
  }
  return result;
}

