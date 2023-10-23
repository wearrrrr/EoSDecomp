
undefined * __thiscall BitmapRenderData::__sub_41EC22(BitmapRenderData *this,D3DFORMAT format)

{
  undefined *result;
  int local_8;
  
  for (local_8 = 0;
      (*(int *)(&DAT_004765b8 + local_8 * 0x18) != -1 &&
      (*(D3DFORMAT *)(&DAT_004765b8 + local_8 * 0x18) != format)); local_8 = local_8 + 1) {
  }
  if (format == ~D3DFMT_UNKNOWN) {
    result = (undefined *)0x0;
  }
  else {
    result = &DAT_004765b8 + local_8 * 0x18;
  }
  return result;
}

