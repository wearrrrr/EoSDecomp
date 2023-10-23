
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall AnmManager::draw_vm(AnmManager *this,AnmVm *vm)

{
  D3DMATRIX matrix_00;
  int result;
  undefined4 unaff_ESI;
  D3DMATRIX *matrix;
  undefined4 unaff_EDI;
  float *pfVar1;
  undefined4 in_stack_ffffff24;
  undefined4 in_stack_ffffff28;
  undefined4 in_stack_ffffff30;
  undefined4 in_stack_ffffff34;
  undefined4 in_stack_ffffff38;
  undefined4 in_stack_ffffff3c;
  undefined4 uVar2;
  undefined in_stack_ffffff40 [16];
  undefined4 in_stack_ffffff50;
  undefined4 uVar3;
  undefined4 in_stack_ffffff54;
  D3DMATRIX local_84;
  float local_44 [8];
  float local_24;
  float local_20;
  
  if ((vm->flags & 1) == 0) {
    result = -1;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    result = -1;
  }
  else if (vm->color == 0) {
    result = -1;
  }
  else {
    matrix = &vm->matrix;
    pfVar1 = (float *)&stack0xffffff3c;
    for (result = 16; result != 0; result = result + -1) {
      *pfVar1 = (matrix->field0_0x0).field0._11;
      matrix = (D3DMATRIX *)((int)&matrix->field0_0x0 + 4);
      pfVar1 = pfVar1 + 1;
    }
    uVar2 = in_stack_ffffff3c * vm->scale_x;
    uVar3 = -vm->scale_y * in_stack_ffffff50;
    if ((vm->rotation).x != (float)__0d) {
      D3DMATRIX::_c_D3DXMatrixRotationX__YGPAUD3DXMATRIX__PAU1_M_Z(&local_84,(vm->rotation).x);
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)&stack0xffffff3c,(D3DMATRIX *)&stack0xffffff3c,&local_84);
    }
    if ((vm->rotation).y != (float)__0d) {
      D3DMATRIX::_c_D3DXMatrixRotationY__YGPAUD3DXMATRIX__PAU1_M_Z(&local_84,(vm->rotation).y);
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)&stack0xffffff3c,(D3DMATRIX *)&stack0xffffff3c,&local_84);
    }
    if ((vm->rotation).z != (float)__0d) {
      matrix_00.field0_0x0.field0._12 = (vm->rotation).z;
      matrix_00.field0_0x0.field0._11 = (float)&local_84;
      matrix_00.field0_0x0.field0._13 = (float)unaff_EDI;
      matrix_00.field0_0x0.field0._14 = (float)unaff_ESI;
      matrix_00.field0_0x0.field0._21 = (float)in_stack_ffffff24;
      matrix_00.field0_0x0.field0._22 = (float)in_stack_ffffff28;
      matrix_00.field0_0x0.field0._23 = (float)this;
      matrix_00.field0_0x0.field0._24 = (float)in_stack_ffffff30;
      matrix_00.field0_0x0.field0._31 = (float)in_stack_ffffff34;
      matrix_00.field0_0x0.field0._32 = (float)in_stack_ffffff38;
      matrix_00.field0_0x0.field0._33 = uVar2;
      matrix_00.field0_0x0._44_16_ = in_stack_ffffff40;
      matrix_00.field0_0x0.field0._44 = uVar3;
      D3DMATRIX::_c_D3DXMatrixRotationZ__YGPAUD3DXMATRIX__PAU1_M_Z(matrix_00,in_stack_ffffff54);
      D3DMATRIX::_x86_D3DXMatrixMultiply__YGPAUD3DXMATRIX__PAU1_PBU1_1_Z
                ((D3DMATRIX *)&stack0xffffff3c,(D3DMATRIX *)&stack0xffffff3c,&local_84);
    }
    if ((vm->flags >> 8 & 1) != 0) {
      _fabs((double)((vm->sprite->width_px * vm->scale_x) / _2_0f));
    }
    if ((vm->flags >> 8 & 2) != 0) {
      _fabs((double)((vm->sprite->height_px * vm->scale_y) / _2_0f));
    }
    (*(code *)(supervisor.d3d_device)->vtable->SetTransform)
              (supervisor.d3d_device,0x100,&stack0xffffff3c);
    if (this->current_sprite != vm->sprite) {
      this->current_sprite = vm->sprite;
      matrix = &vm->matrix;
      pfVar1 = local_44;
      for (result = 16; result != 0; result = result + -1) {
        *pfVar1 = (matrix->field0_0x0).field0._11;
        matrix = (D3DMATRIX *)((int)&matrix->field0_0x0 + 4);
        pfVar1 = pfVar1 + 1;
      }
      local_24 = (vm->sprite->uv_start).x + (vm->uv_scroll_pos).x;
      local_20 = (vm->sprite->uv_start).y + (vm->uv_scroll_pos).y;
      (*(code *)(supervisor.d3d_device)->vtable->SetTransform)(supervisor.d3d_device,0x10,local_44);
      if (this->current_texture !=
          (IDirect3DTexture8 *)this->textures[vm->sprite->source_file_index]) {
        this->current_texture = (IDirect3DTexture8 *)this->textures[vm->sprite->source_file_index];
        (*(code *)(supervisor.d3d_device)->vtable->SetTexture)
                  (supervisor.d3d_device,0,this->current_texture);
      }
    }
    if (this->current_unknown != '\x03') {
      if ((supervisor.config.flags >> 1 & 1) == 0) {
        (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x102);
        (*(code *)(supervisor.d3d_device)->vtable->SetStreamSource)
                  (supervisor.d3d_device,0,this->stream_source,0x14);
      }
      else {
        (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x142);
      }
      this->current_unknown = '\x03';
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
  return result;
}

