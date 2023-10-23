
void __thiscall FUN_0041e150(void *this,int **param_1,int param_2,int param_3)

{
  HDC hdc;
  HFONT h;
  HGDIOBJ h_00;
  int fontidrinstance;
  
  hdc = CreateCompatibleDC((HDC)0x0);
  h = CreateFontA(param_3,param_2,0,0,400,0,0,0,0x80,0,0,0,0,"ÇlÇr ÉSÉVÉbÉN");
  if (h != (HFONT)0x0) {
    h_00 = SelectObject(hdc,h);
    fontidrinstance = _D3DXCreateFont_12(param_1,h,(cls_0x46d034 **)((int)this + 4));
    if (fontidrinstance < 0) {
      MessageBoxA((HWND)0x0,"D3DXCreateFontIndirect FALSE",(LPCSTR)&_ok_,0);
    }
    else {
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
  }
  return;
}

