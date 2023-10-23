
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void release_global_surface(void)

{
  if (_UnknownSurface_LPDIRECT3DSURFACE8 != (int *)0x0) {
    (**(code **)(*_UnknownSurface_LPDIRECT3DSURFACE8 + 8))(_UnknownSurface_LPDIRECT3DSURFACE8);
    _UnknownSurface_LPDIRECT3DSURFACE8 = (int *)0x0;
  }
  return;
}

