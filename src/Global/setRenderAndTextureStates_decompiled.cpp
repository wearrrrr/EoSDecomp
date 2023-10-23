
void setRenderAndTextureStates(void)

{
  if ((supervisor.config.flags >> 6 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,D3DRS_ZENABLE,1);
  }
  else {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,D3DRS_ZENABLE,0);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,D3DRS_LIGHTING,0)
  ;
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,D3DRS_CULLMODE,1)
  ;
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_ALPHABLENDENABLE,1);
  if ((supervisor.config.flags >> 5 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,D3DRS_SHADEMODE,2);
  }
  else {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,D3DRS_SHADEMODE,1);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,D3DRS_SRCBLEND,5)
  ;
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_DESTBLEND,6);
  if ((supervisor.config.flags >> 6 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,D3DRS_ZFUNC,4);
  }
  else {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,D3DRS_ZFUNC,8);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_ALPHATESTENABLE,1);
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,D3DRS_ALPHAREF,4)
  ;
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_ALPHAFUNC,7);
  if ((supervisor.config.flags >> 10 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,D3DRS_FOGENABLE,1);
  }
  else {
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,D3DRS_FOGENABLE,0);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_FOGDENSITY,0x3f800000);
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_FOGTABLEMODE,3);
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_FOGCOLOR,0xffa0a0a0);
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_FOGSTART,0x447a0000);
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,D3DRS_FOGEND,0x459c4000);
  if ((supervisor.config.flags >> 8 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
              (supervisor.d3d_device,0,D3DTSS_ALPHAOP,4);
  }
  else {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
              (supervisor.d3d_device,0,D3DTSS_ALPHAOP,2);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_ALPHAARG1,2);
  if ((supervisor.config.flags >> 1 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
              (supervisor.d3d_device,0,D3DTSS_ALPHAARG2,3);
  }
  else {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
              (supervisor.d3d_device,0,D3DTSS_ALPHAARG2,0);
  }
  if ((supervisor.config.flags >> 8 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
              (supervisor.d3d_device,0,D3DTSS_COLOROP,4);
  }
  else {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
              (supervisor.d3d_device,0,D3DTSS_COLOROP,2);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_COLORARG1,2);
  if ((supervisor.config.flags >> 1 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
              (supervisor.d3d_device,0,D3DTSS_COLORARG2,3);
  }
  else {
    (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
              (supervisor.d3d_device,0,D3DTSS_COLORARG2,0);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_MIPFILTER,0);
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_MAGFILTER,2);
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_MINFILTER,2);
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_TEXTURETRANSFORMFLAGS,2);
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_ADDRESSW,3);
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_ADDRESSU,1);
  (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)
            (supervisor.d3d_device,0,D3DTSS_ADDRESSV,1);
  if (anm_manager_ptr != (AnmManager *)0x0) {
    anm_manager_ptr->current_blend_mode = 0xff;
    anm_manager_ptr->current_colorop = 0xff;
    anm_manager_ptr->current_unknown = 0xff;
    anm_manager_ptr->current_texture = (IDirect3DTexture8 *)0x0;
  }
  Stage._124_1_ = 1;
  return;
}

