
void __thiscall AnmManager::free_surface(AnmManager *this,int surface_index)

{
  if (this->surfaces_a[surface_index] != (IDirect3DSurface8 *)0x0) {
    (*this->surfaces_a[surface_index]->lpVtbl->Release)(this->surfaces_a[surface_index]);
    this->surfaces_a[surface_index] = (IDirect3DSurface8 *)0x0;
  }
  if (this->surfaces_b[surface_index] != (IDirect3DSurface8 *)0x0) {
    (*this->surfaces_b[surface_index]->lpVtbl->Release)(this->surfaces_b[surface_index]);
    this->surfaces_b[surface_index] = (IDirect3DSurface8 *)0x0;
  }
  return;
}

