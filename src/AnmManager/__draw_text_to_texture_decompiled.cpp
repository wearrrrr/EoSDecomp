
void AnmManager::__draw_text_to_texture
               (int texture_index,int x_pos,int y_pos,int width,int height,int font_width,
               int font_height,D3DCOLOR colorA,D3DCOLOR colorB,char *text)

{
  IDirect3DTexture8 *in_ECX;
  
  if (font_width < 1) {
    font_width = 0xf;
  }
  if (font_height < 1) {
    font_height = 0xf;
  }
  render_text(x_pos,y_pos,width,height,font_width,font_height,colorA,colorB,(D3DCOLOR)text,
              (char *)(&in_ECX[0x3822].vtable)[texture_index],in_ECX);
  return;
}

