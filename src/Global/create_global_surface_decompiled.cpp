
void create_global_surface(void)

{
  (*(code *)(supervisor.d3d_device)->vtable->CreateImageSurface)
            (supervisor.d3d_device,0x280,0x40,0x19,&UnknownSurface_LPDIRECT3DSURFACE8);
  return;
}

