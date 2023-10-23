
void __fastcall AnmManager::__render_surfaces(AnmManager *this)

{
  int i;
  
  for (i = 0; i < 32; i = i + 1) {
    if (this->surfaces_a[i] != (IDirect3DSurface8 *)0x0) {
      (*this->surfaces_a[i]->lpVtbl->Release)(this->surfaces_a[i]);
      this->surfaces_a[i] = (IDirect3DSurface8 *)0x0;
    }
  }
  return;
}

