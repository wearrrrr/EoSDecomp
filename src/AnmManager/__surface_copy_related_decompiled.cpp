
void __thiscall
AnmManager::__surface_copy_related
          (AnmManager *this,int surface_index,long SrcX,long SrcY,long DstX,long DstY)

{
  int iVar1;
  int *local_20;
  long local_1c;
  long local_18;
  UINT local_14;
  UINT local_10;
  long local_c;
  long local_8;
  
  if (this->surfaces_b[surface_index] == (IDirect3DSurface8 *)0x0) {
    return;
  }
  iVar1 = (*(code *)(supervisor.d3d_device)->vtable->GetBackBuffer)
                    (supervisor.d3d_device,0,0,&local_20);
  if (iVar1 == 0) {
    if (this->surfaces_a[surface_index] == (IDirect3DSurface8 *)0x0) {
      iVar1 = (*(code *)(supervisor.d3d_device)->vtable->CreateRenderTarget)
                        (supervisor.d3d_device,this->surface_source_info[surface_index].Width,
                         this->surface_source_info[surface_index].Height,
                         supervisor.present_params.BackBufferFormat,0,1,
                         this->surfaces_a + surface_index);
      if ((iVar1 != 0) &&
         (iVar1 = (*(code *)(supervisor.d3d_device)->vtable->CreateImageSurface)
                            (supervisor.d3d_device,this->surface_source_info[surface_index].Width,
                             this->surface_source_info[surface_index].Height,
                             supervisor.present_params.BackBufferFormat,
                             this->surfaces_a + surface_index), iVar1 != 0)) {
        (**(code **)(*local_20 + 8))(local_20);
        return;
      }
      iVar1 = D3DXLoadSurfaceFromSurface
                        ((int *)this->surfaces_a[surface_index],0,(int *)0x0,
                         (int *)this->surfaces_b[surface_index],0,(int *)0x0,(int *)0x1,0);
      if (iVar1 != 0) {
        (**(code **)(*local_20 + 8))(local_20);
        return;
      }
    }
    local_1c = SrcX;
    local_18 = SrcY;
    local_14 = this->surface_source_info[surface_index].Width;
    local_10 = this->surface_source_info[surface_index].Height;
    local_c = DstX;
    local_8 = DstY;
    (*(code *)(supervisor.d3d_device)->vtable->CopyRects)
              (supervisor.d3d_device,this->surfaces_a[surface_index],&local_1c,1,local_20,&local_c);
    (**(code **)(*local_20 + 8))(local_20);
    return;
  }
  return;
}

