
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall __sub_41C3F3(void *this,float param_1)

{
  undefined in_DL;
  float10 fVar1;
  double dVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = (float)(ulonglong)supervisor.viewport.Width / _2_0f;
  local_c = (float)(ulonglong)supervisor.viewport.Height / _2_0f;
  local_14 = (float)(ulonglong)supervisor.viewport.Width /
             (float)(ulonglong)supervisor.viewport.Height;
  local_18 = Pi_6_f;
  fVar1 = (float10)_tan(this,in_DL,SUB81((double)(Pi_6_f / _2_0f),0));
  local_8 = local_c / (float)fVar1;
  local_24 = 0.0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_2c = -local_c + game_manager.stage_camera_facing_dir.y;
  local_30 = local_10 + game_manager.stage_camera_facing_dir.x;
  local_28 = 0;
  local_34 = -local_8 * game_manager.stage_camera_facing_dir.z;
  local_3c = local_10;
  local_38 = -local_c;
  D3DXMatrixLookAtLH((float *)&supervisor.view_matrix,&local_3c,&local_30,&local_24);
  dVar2 = _fabs((double)local_8);
  game_manager.__float_1a5c = (float)dVar2;
  _D3DXMatrixPerspectiveFovLH_20
            ((float *)&supervisor.projection_matrix,local_18,local_14,_00_0f,_0000_0f + param_1);
  (*(code *)(supervisor.d3d_device)->vtable->SetTransform)(supervisor.d3d_device,2,0x6c6d60);
  (*(code *)(supervisor.d3d_device)->vtable->SetTransform)(supervisor.d3d_device,3,0x6c6da0);
  return;
}

