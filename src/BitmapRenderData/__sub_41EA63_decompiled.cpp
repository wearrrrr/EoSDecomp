
undefined4 __thiscall
BitmapRenderData::__sub_41EA63(BitmapRenderData *this,int width,int height,D3DFORMAT format)

{
  undefined4 uVar1;
  HGDIOBJ pvVar2;
  void *local_90;
  HBITMAP local_8c;
  undefined *local_88;
  BITMAPINFO local_84;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  HDC local_c;
  int local_8;
  
  reset(this);
  _memset(&local_84,0,0x6c);
  local_88 = __sub_41EC22(this,format);
  if (local_88 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    local_8 = (((width * *(int *)(local_88 + 4)) / 8 + 3) / 4) * 4;
    local_84.bmiHeader.biSize = 0x6c;
    local_84.bmiHeader.biWidth = width;
    local_84.bmiHeader.biHeight = -(height + 1);
    local_84.bmiHeader.biPlanes = 1;
    local_84.bmiHeader.biBitCount = *(WORD *)(local_88 + 4);
    local_84.bmiHeader.biSizeImage = height * local_8;
    if ((format != D3DFMT_X1R5G5B5) && (format != D3DFMT_X8R8G8B8)) {
      local_84.bmiHeader.biCompression = 3;
      local_84.bmiColors[0] = *(RGBQUAD *)(local_88 + 0xc);
      local_58 = *(undefined4 *)(local_88 + 0x10);
      local_54 = *(undefined4 *)(local_88 + 0x14);
      local_50 = *(undefined4 *)(local_88 + 8);
    }
    local_8c = CreateDIBSection((HDC)0x0,&local_84,0,&local_90,(HANDLE)0x0,0);
    if (local_8c == (HBITMAP)0x0) {
      uVar1 = 0;
    }
    else {
      _memset(local_90,0,local_84.bmiHeader.biSizeImage);
      local_c = CreateCompatibleDC((HDC)0x0);
      pvVar2 = SelectObject(local_c,local_8c);
      this->device_context = (HDC)local_c;
      this->bitmap_handle = (HBITMAP)local_8c;
      this->raw_bitmap_bits = local_90;
      this->raw_bitmap_size = local_84.bmiHeader.biSizeImage;
      this->screen_bitmap_object = pvVar2;
      this->width = width;
      this->height = height;
      this->format = format;
      this->bytes_per_row = local_8;
      uVar1 = CONCAT31((int3)((uint)this >> 8),1);
    }
  }
  return uVar1;
}

