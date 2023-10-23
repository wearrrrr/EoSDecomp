
undefined4 __thiscall Stage::draw_vms(Stage *this,int param_1)

{
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  StdRawQuadBasic *std_quad;
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [3];
  StdRawObject *std_obj;
  D3DMATRIX matrix;
  StdRawInstance *std_instance;
  int local_10;
  AnmVm *vm;
  undefined4 local_8;
  
  std_instance = this->object_instances;
  local_10 = 0;
  local_78 = 0;
  local_84 = 0.0;
  local_80 = 0;
  local_7c = 0;
  D3DMATRIX::set_identity(&matrix);
  do {
    if ((short)std_instance->object_id < 0) {
      return 0;
    }
    std_obj = this->objects[(short)std_instance->object_id];
    if ((char)std_obj->unknown == param_1) {
      std_quad = &std_obj->first_quad;
      local_8 = 0;
      matrix.field0_0x0.field0._41 = ((std_obj->pos).x + (std_instance->pos).x) - (this->position).x
      ;
      matrix.field0_0x0.field0._42 =
           -(((std_obj->pos).y + (std_instance->pos).y) - (this->position).y);
      matrix.field0_0x0.field0._43 =
           (((std_obj->pos).z + (std_instance->pos).z) - (this->position).z) + (std_obj->size).z;
      _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                          (float *)&supervisor.projection_matrix,(float *)&supervisor.view_matrix,
                          (float *)&matrix);
      if ((local_6c < (float)(ulonglong)supervisor.viewport.Y) ||
         (local_6c < (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height) ==
          (local_6c == (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height)))) {
        matrix.field0_0x0.field0._42 = matrix.field0_0x0.field0._42 - (std_obj->size).y;
        _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                            (float *)&supervisor.projection_matrix,(float *)&supervisor.view_matrix,
                            (float *)&matrix);
        if ((local_6c < (float)(ulonglong)supervisor.viewport.Y) ||
           (local_6c < (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height) ==
            (local_6c == (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height)))) {
          matrix.field0_0x0.field0._43 = matrix.field0_0x0.field0._43 - (std_obj->size).z;
          _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                              (float *)&supervisor.projection_matrix,
                              (float *)&supervisor.view_matrix,(float *)&matrix);
          if ((local_6c < (float)(ulonglong)supervisor.viewport.Y) ||
             (local_6c < (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height) ==
              (local_6c == (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height))))
          {
            matrix.field0_0x0.field0._42 = matrix.field0_0x0.field0._42 + (std_obj->size).y;
            _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                                (float *)&supervisor.projection_matrix,
                                (float *)&supervisor.view_matrix,(float *)&matrix);
            if ((local_6c < (float)(ulonglong)supervisor.viewport.Y) ||
               (local_6c < (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height) ==
                (local_6c == (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height))
               )) {
              matrix.field0_0x0.field0._41 =
                   (((std_obj->pos).x + (std_instance->pos).x) - (this->position).x) +
                   (std_obj->size).x;
              matrix.field0_0x0.field0._42 =
                   -(((std_obj->pos).y + (std_instance->pos).y) - (this->position).y);
              matrix.field0_0x0.field0._43 =
                   (((std_obj->pos).z + (std_instance->pos).z) - (this->position).z) +
                   (std_obj->size).z;
              _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                                  (float *)&supervisor.projection_matrix,
                                  (float *)&supervisor.view_matrix,(float *)&matrix);
              if ((local_6c < (float)(ulonglong)supervisor.viewport.Y) ||
                 (local_6c < (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height)
                  == (local_6c ==
                     (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height)))) {
                matrix.field0_0x0.field0._42 = matrix.field0_0x0.field0._42 - (std_obj->size).y;
                _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                                    (float *)&supervisor.projection_matrix,
                                    (float *)&supervisor.view_matrix,(float *)&matrix);
                if ((local_6c < (float)(ulonglong)supervisor.viewport.Y) ||
                   (local_6c <
                    (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height) ==
                    (local_6c ==
                    (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height)))) {
                  matrix.field0_0x0.field0._43 = matrix.field0_0x0.field0._43 - (std_obj->size).z;
                  _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                                      (float *)&supervisor.projection_matrix,
                                      (float *)&supervisor.view_matrix,(float *)&matrix);
                  if ((local_6c < (float)(ulonglong)supervisor.viewport.Y) ||
                     (local_6c <
                      (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height) ==
                      (local_6c ==
                      (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height)))) {
                    matrix.field0_0x0.field0._42 = matrix.field0_0x0.field0._42 + (std_obj->size).y;
                    _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                                        (float *)&supervisor.projection_matrix,
                                        (float *)&supervisor.view_matrix,(float *)&matrix);
                    if ((local_6c < (float)(ulonglong)supervisor.viewport.Y) ||
                       (local_6c <
                        (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height) ==
                        (local_6c ==
                        (float)(ulonglong)(supervisor.viewport.Y + supervisor.viewport.Height))))
                    goto LAB_00405197;
                  }
                }
              }
            }
          }
        }
      }
      local_78 = 1;
      for (; -1 < std_quad->type;
          std_quad = (StdRawQuadBasic *)((int)&std_quad->type + (int)(short)std_quad->byte_size)) {
        vm = this->quad_vms + (short)std_quad->vm_index;
        if (std_quad->type == 0) {
          (vm->pos).x = ((std_quad->pos).x + (std_instance->pos).x) - (this->position).x;
          (vm->pos).y = ((std_quad->pos).y + (std_instance->pos).y) - (this->position).y;
          (vm->pos).z = ((std_quad->pos).z + (std_instance->pos).z) - (this->position).z;
          if ((std_quad->size).x != (float)__0f) {
            vm->scale_x = (std_quad->size).x / vm->sprite->width_px;
          }
          if ((std_quad->size).y != (float)__0f) {
            vm->scale_y = (std_quad->size).y / vm->sprite->height_px;
          }
          if (vm->auto_rotate == 2) {
            if ((std_quad->size).x == (float)__0f) {
              local_88 = vm->sprite->width_px;
            }
            else {
              local_88 = (std_quad->size).x;
            }
            matrix.field0_0x0.field0._41 = (vm->pos).x;
            matrix.field0_0x0.field0._42 = -(vm->pos).y;
            matrix.field0_0x0.field0._43 = (vm->pos).z;
            _D3DXVec3Project_24(&local_70,&local_84,&supervisor.viewport.X,
                                (float *)&supervisor.projection_matrix,
                                (float *)&supervisor.view_matrix,(float *)&matrix);
            matrix.field0_0x0.field0._41 = local_88 * vm->scale_x + matrix.field0_0x0.field0._41;
            _D3DXVec3Project_24(local_64,&local_84,&supervisor.viewport.X,
                                (float *)&supervisor.projection_matrix,
                                (float *)&supervisor.view_matrix,(float *)&matrix);
            vm->scale_x = (local_64[0] - local_70) / local_88;
            vm->scale_y = vm->scale_x;
            (vm->pos).x = local_70;
            (vm->pos).y = local_6c;
            (vm->pos).z = local_68;
            AnmManager::__draw_vm_3(anm_manager_ptr,vm);
          }
          else {
            AnmManager::draw_vm(anm_manager_ptr,vm);
          }
        }
      }
      local_10 = local_10 + 1;
    }
LAB_00405197:
    std_instance = std_instance + 1;
  } while( true );
}

