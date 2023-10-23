
undefined4 __cdecl Stage::on_draw_A(Stage *stage)

{
  int iVar1;
  
  if (stage->field_0x7c != '\0') {
    stage->field_0x7c = 0;
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,0x22,(stage->sky_fog).color);
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,0x24,(stage->sky_fog).near_plane);
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
            (supervisor.d3d_device,0x25,(stage->sky_fog).far_plane);
  if (stage->set_by_spellcard_ecl_80 < 2) {
    iVar1 = Gui::__sub_4172D3(&gui);
    if (iVar1 == 0) {
      draw_vms(stage,0);
      draw_vms(stage,1);
    }
  }
  return 1;
}

