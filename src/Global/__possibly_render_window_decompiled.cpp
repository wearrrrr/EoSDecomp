
void __fastcall __possibly_render_window(Window window)

{
  int isPresent;
  
  isPresent = (*(code *)(supervisor.d3d_device)->vtable->Present)(supervisor.d3d_device,0,0,0,0);
                    /* If response is anything other than D3D_OK... */
  if (isPresent < D3D_OK) {
    AnmManager::__render_surfaces(anm_manager_ptr);
    (*(code *)(supervisor.d3d_device)->vtable->Reset)(supervisor.d3d_device,0x6c6df8);
    setRenderAndTextureStates();
    supervisor.frames_to_disable_something = 2;
  }
  AnmManager::__render_weird_texture(anm_manager_ptr);
  if (supervisor.frames_to_disable_something != 0) {
    supervisor.frames_to_disable_something = supervisor.frames_to_disable_something - 1;
  }
  return;
}

