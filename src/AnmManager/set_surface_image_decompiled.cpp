
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall AnmManager::set_surface_image(AnmManager *this,int surface_index,char *filename)

{
  uint *_Memory;
  int result;
  int iVar1;
  int *local_8;
  
  if (this->surfaces_a[surface_index] != (IDirect3DSurface8 *)0x0) {
    free_surface(this,surface_index);
  }
  _Memory = (uint *)__read_file_to_buffer(filename,0);
  if (_Memory == (uint *)0x0) {
    LogBuffer::write_error(&LogBuffer,"%s‚ª“Ç‚Ýž‚ß‚È‚¢‚Å‚·B\n");
    result = -1;
  }
  else {
    iVar1 = (*(code *)(supervisor.d3d_device)->vtable->CreateImageSurface)
                      (supervisor.d3d_device,0x280,0x400,supervisor.present_params.BackBufferFormat,
                       &local_8);
    if (iVar1 == 0) {
      iVar1 = D3DXLoadSurfaceFromFileInMemory
                        (local_8,0,(int *)0x0,_Memory,___current_filesize,(dword *)0x0,(int *)0x1,0,
                         &this->surface_source_info[surface_index].Width);
      if (((iVar1 == 0) &&
          (((iVar1 = (*(code *)(supervisor.d3d_device)->vtable->CreateRenderTarget)
                               (supervisor.d3d_device,this->surface_source_info[surface_index].Width
                                ,this->surface_source_info[surface_index].Height,
                                supervisor.present_params.BackBufferFormat,0,1,
                                this->surfaces_a + surface_index), iVar1 == 0 ||
            (iVar1 = (*(code *)(supervisor.d3d_device)->vtable->CreateImageSurface)
                               (supervisor.d3d_device,this->surface_source_info[surface_index].Width
                                ,this->surface_source_info[surface_index].Height,
                                supervisor.present_params.BackBufferFormat,
                                this->surfaces_a + surface_index), iVar1 == 0)) &&
           (iVar1 = (*(code *)(supervisor.d3d_device)->vtable->CreateImageSurface)
                              (supervisor.d3d_device,this->surface_source_info[surface_index].Width,
                               this->surface_source_info[surface_index].Height,
                               supervisor.present_params.BackBufferFormat,
                               this->surfaces_b + surface_index), iVar1 == 0)))) &&
         ((iVar1 = D3DXLoadSurfaceFromSurface
                             ((int *)this->surfaces_a[surface_index],0,(int *)0x0,local_8,0,
                              (int *)0x0,(int *)0x1,0), iVar1 == 0 &&
          (iVar1 = D3DXLoadSurfaceFromSurface
                             ((int *)this->surfaces_b[surface_index],0,(int *)0x0,local_8,0,
                              (int *)0x0,(int *)0x1,0), iVar1 == 0)))) {
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        _free(_Memory);
        result = 0;
      }
      else {
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        _free(_Memory);
        result = -1;
      }
    }
    else {
      result = -1;
    }
  }
  return result;
}

