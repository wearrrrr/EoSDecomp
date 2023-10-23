
undefined4 __cdecl Stage::on_registration(Stage *stage)

{
  int get_files;
  undefined4 result;
  
  (stage->script_time).current = 0;
  (stage->script_time).subframe = 0.0;
  (stage->script_time).previous = -999;
  stage->instr_index = 0;
  (stage->position).x = 0.0;
  (stage->position).y = 0.0;
  (stage->position).z = 0.0;
  stage->set_by_spellcard_ecl_80 = 0;
  stage->sky_fog_interp_duration = 0;
  get_files = __get_files(stage,*(char **)(&DAT_004760e0 + game_manager.current_stage * 8),
                          *(char **)(&DAT_004760e4 + game_manager.current_stage * 8));
  if (get_files == 0) {
    (stage->sky_fog).color = 0xff000000;
    (stage->sky_fog).near_plane = 200.0;
    (stage->sky_fog).far_plane = 500.0;
    (stage->facing_dir_interp_final).x = 0.0;
    (stage->facing_dir_interp_final).y = 0.0;
    (stage->facing_dir_interp_final).z = 1.0;
    (stage->facing_dir_interp_initial).x = 0.0;
    (stage->facing_dir_interp_initial).y = 0.0;
    (stage->facing_dir_interp_initial).z = 1.0;
    stage->facing_dir_interp_duration = 1;
    (stage->facing_dir_interp_timer).current = 0;
    (stage->facing_dir_interp_timer).subframe = 0.0;
    (stage->facing_dir_interp_timer).previous = -999;
    stage->unpause_flag = '\0';
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,0x22,(stage->sky_fog).color);
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,0x24,(stage->sky_fog).near_plane);
    (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
              (supervisor.d3d_device,0x25,(stage->sky_fog).far_plane);
    result = 0;
  }
  else {
    result = 0xffffffff;
  }
  return result;
}

