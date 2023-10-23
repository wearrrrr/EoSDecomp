
int __thiscall
AnmManager::create_texture
          (AnmManager *this,int texture_index,uint width,uint height,int D3DFmtTableIndex)

{
  D3DXCreateTexture((int *)supervisor.d3d_device,width,height,1,0,
                    *(int *)(&AnmD3DFormats_D3DFORMATTable + D3DFmtTableIndex * 4),1,
                    (int)(this->textures + texture_index));
  return 0;
}

