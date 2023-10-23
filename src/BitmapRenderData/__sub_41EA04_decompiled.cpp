
undefined4 __thiscall
BitmapRenderData::__sub_41EA04(BitmapRenderData *this,int width,int height,D3DFORMAT format)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = __sub_41EA63(this,width,height,format);
  if ((uVar1 & 0xff) == 0) {
    if ((format == D3DFMT_A1R5G5B5) || (format == D3DFMT_A4R4G4B4)) {
      uVar2 = __sub_41EA63(this,width,height,D3DFMT_A8R8G8B8);
    }
    else if (format == D3DFMT_R5G6B5) {
      uVar2 = __sub_41EA63(this,width,height,D3DFMT_X8R8G8B8);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

