
void __cdecl __sub_42F6D0(undefined4 param_1)

{
  int iVar1;
  
  (*(code *)(supervisor.d3d_device)->vtable->Clear)
            (supervisor.d3d_device,0,0,3,param_1,0x3f800000,0);
  iVar1 = (*(code *)(supervisor.d3d_device)->vtable->Present)(supervisor.d3d_device,0,0,0,0);
  if (iVar1 < 0) {
    (*(code *)(supervisor.d3d_device)->vtable->Reset)(supervisor.d3d_device,0x6c6df8);
  }
  (*(code *)(supervisor.d3d_device)->vtable->Clear)
            (supervisor.d3d_device,0,0,3,param_1,0x3f800000,0);
  iVar1 = (*(code *)(supervisor.d3d_device)->vtable->Present)(supervisor.d3d_device,0,0,0,0);
  if (iVar1 < 0) {
    (*(code *)(supervisor.d3d_device)->vtable->Reset)(supervisor.d3d_device,0x6c6df8);
  }
  return;
}

