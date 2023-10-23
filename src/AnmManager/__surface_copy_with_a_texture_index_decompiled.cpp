
void __thiscall
AnmManager::__surface_copy_with_a_texture_index
          (AnmManager *this,int texture_index,long X,long Y,long Width,long Height)

{
  int iVar1;
  HRESULT result_handle;
  int *local_1c;
  IDirect3DSurface8 *d3dsurface;
  long local_14;
  long local_10;
  int local_c;
  int local_8;
  
  if ((this->textures[texture_index] != (IDirect3DTexture8 *)0x0) &&
     (iVar1 = (*(code *)(supervisor.d3d_device)->vtable->GetBackBuffer)
                        (supervisor.d3d_device,0,0,&local_1c), iVar1 == 0)) {
    result_handle =
         (*this->textures[texture_index]->lpVtbl->GetSurfaceLevel)
                   (this->textures[texture_index],0,&d3dsurface);
    if (result_handle == 0) {
      local_14 = X;
      local_10 = Y;
      local_c = X + Width;
      local_8 = Y + Height;
      iVar1 = D3DXLoadSurfaceFromSurface
                        ((int *)d3dsurface,0,(int *)0x0,local_1c,0,&local_14,(int *)0xffffffff,0);
      if (iVar1 == 0) {
        (*d3dsurface->lpVtbl->Release)(d3dsurface);
        (**(code **)(*local_1c + 8))(local_1c);
      }
      else {
        (*d3dsurface->lpVtbl->Release)(d3dsurface);
        (**(code **)(*local_1c + 8))(local_1c);
      }
    }
    else {
      (**(code **)(*local_1c + 8))(local_1c);
    }
  }
  return;
}

