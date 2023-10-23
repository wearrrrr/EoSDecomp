
void __cdecl __sub_42F8B0(undefined4 *param_1,undefined4 param_2)

{
  int local_88;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_88 = 4;
  do {
    local_88 = local_88 + -1;
  } while (-1 < local_88);
  local_50 = param_1[1];
  local_54 = *param_1;
  local_4c = 0;
  local_3c = param_1[1];
  local_40 = param_1[2];
  local_38 = 0;
  local_28 = param_1[3];
  local_2c = *param_1;
  local_24 = 0;
  local_14 = param_1[3];
  local_18 = param_1[2];
  local_10 = 0;
  local_c = 0x3f800000;
  local_20 = 0x3f800000;
  local_34 = 0x3f800000;
  local_48 = 0x3f800000;
  local_8 = param_2;
  local_1c = param_2;
  local_30 = param_2;
  local_44 = param_2;
  if ((supervisor.config.flags >> 8 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,4,2);
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,1,2);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,5,0);
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,2,0);
  if ((supervisor.config.flags >> 6 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x17,8);
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0xe,0);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x14,6);
  (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x44);
  (*(code *)(supervisor.d3d_device)->vtable->DrawPrimitiveUP)
            (supervisor.d3d_device,5,2,&local_54,0x14);
  anm_manager_ptr->current_unknown = 0xff;
  anm_manager_ptr->current_sprite = (AnmLoadedSprite *)0x0;
  anm_manager_ptr->current_texture = (IDirect3DTexture8 *)0x0;
  anm_manager_ptr->current_colorop = 0xff;
  anm_manager_ptr->current_blend_mode = 0xff;
  anm_manager_ptr->current_zwrite_disable = 0xff;
  if ((supervisor.config.flags >> 8 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,4,4);
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,1,4);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,5,2);
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,2,2);
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x17,4);
  return;
}

