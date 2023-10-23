
void __cdecl setupViewport(undefined4 param_1)

{
  supervisor.viewport.X = 0;
  supervisor.viewport.Y = 0;
  supervisor.viewport.Width = 640;
  supervisor.viewport.Height = 480;
  supervisor.viewport.MinZ = 0.0;
  supervisor.viewport.MaxZ = 1.0;
  (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
  __sub_42F6D0(param_1);
  return;
}

