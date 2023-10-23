
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_text(int texture_index,int x_pos,int y_pos,int width,int height,int font_width,
                int font_height,D3DCOLOR colorA,D3DCOLOR colorB,char *text,
                IDirect3DTexture8 *texture)

{
  HFONT font_handle;
  HGDIOBJ gdi_handle;
  size_t size;
  int unaff_EBP;
  
  __EH_prolog();
  font_handle = CreateFontA(*(int *)(unaff_EBP + 0x18) << 1,0,0,0,700,0,0,0,0x80,0,0,4,0x11,
                            "‚l‚r ƒSƒVƒbƒN");
  *(HFONT *)(unaff_EBP + -0x14) = font_handle;
  BitmapRenderData::constructor((BitmapRenderData *)(unaff_EBP + -0x5c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  (*_UnknownSurface_LPDIRECT3DSURFACE8->lpVtbl->GetDesc)
            (_UnknownSurface_LPDIRECT3DSURFACE8,(D3DSURFACE_DESC *)(unaff_EBP + -0x34));
  BitmapRenderData::__sub_41EA04
            ((BitmapRenderData *)(unaff_EBP + -0x5c),*(int *)(unaff_EBP + -0x1c),
             *(int *)(unaff_EBP + -0x18),*(D3DFORMAT *)(unaff_EBP + -0x34));
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x48);
  gdi_handle = SelectObject(*(HDC *)(unaff_EBP + -0x10),*(HGDIOBJ *)(unaff_EBP + -0x14));
  *(HGDIOBJ *)(unaff_EBP + -0x38) = gdi_handle;
  BitmapRenderData::__sub_41EC72
            ((BitmapRenderData *)(unaff_EBP + -0x5c),0,0,*(int *)(unaff_EBP + 0x10) << 1,
             *(int *)(unaff_EBP + 0x18) * 2 + 6);
  SetBkMode(*(HDC *)(unaff_EBP + -0x10),1);
  if (*(int *)(unaff_EBP + 0x24) != -1) {
    SetTextColor(*(HDC *)(unaff_EBP + -0x10),*(COLORREF *)(unaff_EBP + 0x24));
    size = _strlen(*(char **)(unaff_EBP + 0x28));
    TextOutA(*(HDC *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 8) * 2 + 3,2,
             *(LPCSTR *)(unaff_EBP + 0x28),size);
  }
  SetTextColor(*(HDC *)(unaff_EBP + -0x10),*(COLORREF *)(unaff_EBP + 0x20));
  size = _strlen(*(char **)(unaff_EBP + 0x28));
  TextOutA(*(HDC *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 8) << 1,0,*(LPCSTR *)(unaff_EBP + 0x28),
           size);
  SelectObject(*(HDC *)(unaff_EBP + -0x10),*(HGDIOBJ *)(unaff_EBP + -0x38));
  BitmapRenderData::__sub_41EC72
            ((BitmapRenderData *)(unaff_EBP + -0x5c),0,0,*(int *)(unaff_EBP + 0x10) << 1,
             *(int *)(unaff_EBP + 0x18) * 2 + 6);
  BitmapRenderData::__sub_41EF11
            ((BitmapRenderData *)(unaff_EBP + -0x5c),_UnknownSurface_LPDIRECT3DSURFACE8);
  SelectObject(*(HDC *)(unaff_EBP + -0x10),*(HGDIOBJ *)(unaff_EBP + -0x38));
  DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  *(undefined4 *)(unaff_EBP + -0x78) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + 0x10);
  *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + 0xc) + 0x10;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + 0x10) * 2 + -2;
  *(int *)(unaff_EBP + -0x60) = *(int *)(unaff_EBP + 0x18) * 2 + -2;
  (**(code **)(**(int **)(unaff_EBP + 0x2c) + 0x3c))
            (*(undefined4 *)(unaff_EBP + 0x2c),0,unaff_EBP + -0x80);
  D3DXLoadSurfaceFromSurface
            (*(int **)(unaff_EBP + -0x80),0,(int *)(unaff_EBP + -0x7c),
             (int *)_UnknownSurface_LPDIRECT3DSURFACE8,0,(int *)(unaff_EBP + -0x6c),(int *)0x4,0);
  if (*(int *)(unaff_EBP + -0x80) != 0) {
    (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))(*(undefined4 *)(unaff_EBP + -0x80));
    *(undefined4 *)(unaff_EBP + -0x80) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  BitmapRenderData::destructor((BitmapRenderData *)(unaff_EBP + -0x5c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

