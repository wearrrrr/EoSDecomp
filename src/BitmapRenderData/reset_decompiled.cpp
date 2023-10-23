
bool __thiscall BitmapRenderData::reset(BitmapRenderData *this)

{
  bool current_context;
  
  current_context = this->device_context != (HDC)0x0;
  if (current_context) {
    SelectObject((HDC)this->device_context,this->screen_bitmap_object);
    DeleteDC((HDC)this->device_context);
    DeleteObject(this->bitmap_handle);
    this->format = ~D3DFMT_UNKNOWN;
    this->width = 0;
    this->height = 0;
    this->device_context = (HDC)0x0;
    this->bitmap_handle = (HBITMAP)0x0;
    this->screen_bitmap_object = (HGDIOBJ)0x0;
    this->raw_bitmap_bits = (void *)0x0;
  }
  return current_context;
}

