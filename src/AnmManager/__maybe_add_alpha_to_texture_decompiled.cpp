
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
AnmManager::__maybe_add_alpha_to_texture
          (AnmManager *this,int texture_index,char *filename,int UnusedD3DFmtTableIndex,
          D3DCOLOR color_key)

{
  int iVar1;
  HRESULT result_handle;
  uint local_6c;
  uint local_68;
  short *local_64;
  ushort *local_60;
  uint local_5c;
  uint local_58;
  ushort *local_54;
  ushort *local_50;
  uint local_4c;
  uint local_48;
  undefined *local_44;
  void *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  D3DLOCKED_RECT locked_rect;
  uint *local_28;
  D3DSURFACE_DESC surface_desc;
  
  local_3c = (int *)0x0;
  local_28 = (uint *)__read_file_to_buffer(filename,0);
  if (local_28 != (uint *)0x0) {
    (*this->textures[texture_index]->lpVtbl->GetLevelDesc)
              (this->textures[texture_index],0,&surface_desc);
    if (((surface_desc.Format == D3DFMT_A8R8G8B8) || (surface_desc.Format == D3DFMT_A4R4G4B4)) ||
       (surface_desc.Format == D3DFMT_A1R5G5B5)) {
      iVar1 = D3DXCreateTextureFromFileInMemoryEx
                        ((int *)supervisor.d3d_device,local_28,___current_filesize,0,0,0,0,
                         surface_desc.Format,2,(int *)0x3,(int *)0xffffffff,color_key,
                         (undefined4 *)0x0,(uint *)0x0,&local_3c);
      if (((iVar1 == 0) &&
          (result_handle =
                (*this->textures[texture_index]->lpVtbl->LockRect)
                          (this->textures[texture_index],0,&locked_rect,(RECT *)0x0,0),
          result_handle == 0)) &&
         (iVar1 = (**(code **)(*local_3c + 0x40))(local_3c,0,&local_38,0,0x8000), iVar1 == 0)) {
        if (surface_desc.Format == D3DFMT_A8R8G8B8) {
          for (local_48 = 0; local_48 < surface_desc.Height; local_48 = local_48 + 1) {
            local_40 = (void *)((int)locked_rect.pBits + local_48 * locked_rect.Pitch);
            local_44 = (undefined *)(local_34 + local_48 * local_38);
            for (local_4c = 0; local_4c < surface_desc.Width; local_4c = local_4c + 1) {
              *(undefined *)((int)local_40 + 3) = *local_44;
              local_44 = local_44 + 4;
              local_40 = (void *)((int)local_40 + 4);
            }
          }
        }
        else if (surface_desc.Format == D3DFMT_A1R5G5B5) {
          for (local_58 = 0; local_58 < surface_desc.Height; local_58 = local_58 + 1) {
            local_50 = (ushort *)((int)locked_rect.pBits + local_58 * locked_rect.Pitch);
            local_54 = (ushort *)(local_34 + local_58 * local_38);
            for (local_5c = 0; local_5c < surface_desc.Width; local_5c = local_5c + 1) {
              *local_50 = *local_50 & 0x7fff | (short)((int)(uint)(*local_54 & 0x1f) >> 4) << 0xf;
              local_54 = local_54 + 1;
              local_50 = local_50 + 1;
            }
          }
        }
        else if (surface_desc.Format == D3DFMT_A4R4G4B4) {
          for (local_68 = 0; local_68 < surface_desc.Height; local_68 = local_68 + 1) {
            local_60 = (ushort *)((int)locked_rect.pBits + local_68 * locked_rect.Pitch);
            local_64 = (short *)(local_34 + local_68 * local_38);
            for (local_6c = 0; local_6c < surface_desc.Width; local_6c = local_6c + 1) {
              *local_60 = *local_60 & 0xfff | *local_64 << 0xc;
              local_64 = local_64 + 1;
              local_60 = local_60 + 1;
            }
          }
        }
        (**(code **)(*local_3c + 0x44))(local_3c,0);
        (*this->textures[texture_index]->lpVtbl->UnlockRect)(this->textures[texture_index],0);
        if (local_3c != (int *)0x0) {
          (**(code **)(*local_3c + 8))(local_3c);
          local_3c = (int *)0x0;
        }
        _free(local_28);
        return 0;
      }
    }
    else {
      LogBuffer::write_error(&LogBuffer,"error : ÉCÉÅÅ[ÉWÇ™ÉøÇéùÇ¡ÇƒÇ¢Ç‹ÇπÇÒ\n");
    }
    if (local_3c != (int *)0x0) {
      (**(code **)(*local_3c + 8))(local_3c);
      local_3c = (int *)0x0;
    }
    _free(local_28);
  }
  return 0xffffffff;
}

