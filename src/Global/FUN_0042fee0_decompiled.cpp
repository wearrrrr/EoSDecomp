
undefined4 __cdecl FUN_0042fee0(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0x44200000;
  local_8 = 0x43f00000;
  supervisor.viewport.X = 0;
  supervisor.viewport.Y = 0;
  supervisor.viewport.Width = 0x280;
  supervisor.viewport.Height = 0x1e0;
  (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
  __sub_42F8B0(&local_14,*(int *)(param_1 + 0x10) << 0x18 | *(uint *)(param_1 + 0x18));
  return 1;
}

