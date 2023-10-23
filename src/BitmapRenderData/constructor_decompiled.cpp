
BitmapRenderData * __thiscall BitmapRenderData::constructor(BitmapRenderData *this)

{
  this->format = ~D3DFMT_UNKNOWN;
  this->width = 0;
  this->height = 0;
  this->device_context = (HDC)0x0;
  this->bitmap_handle = (HBITMAP)0x0;
  this->screen_bitmap_object = (HGDIOBJ)0x0;
  this->raw_bitmap_bits = (void *)0x0;
  return this;
}

