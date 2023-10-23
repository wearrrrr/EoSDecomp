
uint __thiscall BitmapRenderData::__sub_41EF11(BitmapRenderData *this,LPDIRECT3DSURFACE8 surface)

{
  uint result;
  HRESULT HVar1;
  D3DLOCKED_RECT locked_rect;
  void *bitmap_bits;
  D3DSURFACE_DESC surface_desc;
  size_t bytes_per_row;
  int i;
  RECT rect;
  int pitch;
  void *bits_ptr;
  
  if (this->bitmap_handle == (HBITMAP)0x0) {
    result = 0;
  }
  else {
    (*surface->lpVtbl->GetDesc)(surface,&surface_desc);
    rect.left = 0;
    rect.top = 0;
    rect.right = this->width;
    rect.bottom = this->height;
    result = (*surface->lpVtbl->LockRect)(surface,&locked_rect,&rect,0);
    if (result == 0) {
      pitch = locked_rect.Pitch;
      bytes_per_row = this->bytes_per_row;
      bitmap_bits = this->raw_bitmap_bits;
      bits_ptr = locked_rect.pBits;
      if (surface_desc.Format == this->format) {
        for (i = 0; i < this->height; i = i + 1) {
          _memcpy(bits_ptr,bitmap_bits,bytes_per_row);
          bitmap_bits = (void *)((int)bitmap_bits + bytes_per_row);
          bits_ptr = (void *)((int)bits_ptr + pitch);
        }
      }
      HVar1 = (*surface->lpVtbl->UnlockRect)(surface);
      result = CONCAT31((int3)((uint)HVar1 >> 8),1);
    }
    else {
      result = result & 0xffffff00;
    }
  }
  return result;
}

