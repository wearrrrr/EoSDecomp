
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl Stage::on_tick(Stage *stage)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int local_24;
  float local_20;
  StdRawInstr *instruction;
  StdRawInstr *instruction2;
  
  if (stage->std_file != (StdRawHeader *)0x0) {
    if (game_manager.__byte_2c == '\0') {
      do {
        instruction = stage->beginning_of_script + stage->instr_index;
        switch(instruction->opcode) {
        case 0:
          if (instruction->time == -1) {
            (stage->position_interp_initial).x = (float)(instruction->args).args[0];
            (stage->position_interp_initial).y = (float)(instruction->args).args[1];
            (stage->position_interp_initial).z = (float)(instruction->args).args[2];
            (stage->position).x = (stage->position_interp_initial).x;
            (stage->position).y = (stage->position_interp_initial).y;
            (stage->position).z = (stage->position_interp_initial).z;
          }
          else if (instruction->time <= (stage->script_time).current) {
            fVar2 = (float)(instruction->args).args[0];
            fVar3 = (float)(instruction->args).args[1];
            fVar1 = (float)(instruction->args).args[2];
            (stage->position).x = fVar2;
            (stage->position).y = fVar3;
            (stage->position).z = fVar1;
            (stage->position_interp_initial).x = fVar2;
            (stage->position_interp_initial).y = fVar3;
            (stage->position_interp_initial).z = fVar1;
            stage->position_interp_start_time = instruction->time;
            stage->instr_index = stage->instr_index + 1;
            do {
              instruction2 = instruction;
              instruction = instruction2 + 1;
            } while (instruction2[1].opcode != 0);
            stage->position_interp_end_time = instruction->time;
            (stage->position_interp_final).x = (float)instruction2[1].args.args[0];
            (stage->position_interp_final).y = (float)instruction2[1].args.args[1];
            (stage->position_interp_final).z = (float)instruction2[1].args.args[2];
          }
        default:
std_break:
          if (instruction->time != -1) {
            fVar1 = (((float)(stage->script_time).current + (stage->script_time).subframe) -
                    (float)stage->position_interp_start_time) /
                    (float)(stage->position_interp_end_time - stage->position_interp_start_time);
            fVar2 = (stage->position_interp_final).y;
            fVar3 = (stage->position_interp_final).z;
            (stage->position).x =
                 ((stage->position_interp_final).x - (stage->position_interp_initial).x) * fVar1 +
                 (stage->position_interp_initial).x;
            (stage->position).y =
                 (fVar2 - (stage->position_interp_initial).y) * fVar1 +
                 (stage->position_interp_initial).y;
            (stage->position).z =
                 (fVar3 - (stage->position_interp_initial).z) * fVar1 +
                 (stage->position_interp_initial).z;
          }
          if (stage->facing_dir_interp_duration != 0) {
            if ((stage->facing_dir_interp_timer).current < stage->facing_dir_interp_duration) {
              (stage->facing_dir_interp_timer).previous = (stage->facing_dir_interp_timer).current;
              Supervisor::tick_timer
                        (&supervisor,&(stage->facing_dir_interp_timer).current,
                         &(stage->facing_dir_interp_timer).subframe);
            }
            else {
              (stage->facing_dir_interp_timer).current = stage->facing_dir_interp_duration;
              (stage->facing_dir_interp_timer).subframe = 0.0;
              (stage->facing_dir_interp_timer).previous = -999;
            }
            fVar2 = ((float)(stage->facing_dir_interp_timer).current +
                    (stage->facing_dir_interp_timer).subframe) /
                    (float)stage->facing_dir_interp_duration;
            game_manager.stage_camera_facing_dir.x =
                 ((stage->facing_dir_interp_final).x - (stage->facing_dir_interp_initial).x) * fVar2
                 + (stage->facing_dir_interp_initial).x;
            game_manager.stage_camera_facing_dir.y =
                 ((stage->facing_dir_interp_final).y - (stage->facing_dir_interp_initial).y) * fVar2
                 + (stage->facing_dir_interp_initial).y;
            game_manager.stage_camera_facing_dir.z =
                 ((stage->facing_dir_interp_final).z - (stage->facing_dir_interp_initial).z) * fVar2
                 + (stage->facing_dir_interp_initial).z;
          }
          if (stage->sky_fog_interp_duration != 0) {
            (stage->sky_fog_interp_timer).previous = (stage->sky_fog_interp_timer).current;
            Supervisor::tick_timer
                      (&supervisor,&(stage->sky_fog_interp_timer).current,
                       &(stage->sky_fog_interp_timer).subframe);
            local_20 = ((float)(stage->sky_fog_interp_timer).current +
                       (stage->sky_fog_interp_timer).subframe) /
                       (float)stage->sky_fog_interp_duration;
            if (_1_0f <= local_20) {
              local_20 = 1.0;
            }
            for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
              lVar4 = __ftol2((double)(((float)(uint)*(byte *)((int)&(stage->sky_fog_interp_final).
                                                                     color + local_24) -
                                       (float)(uint)*(byte *)((int)&(stage->sky_fog_interp_initial).
                                                                    color + local_24)) * local_20 +
                                      (float)(uint)*(byte *)((int)&(stage->sky_fog_interp_initial).
                                                                   color + local_24)));
              *(char *)((int)&(stage->sky_fog).color + local_24) = (char)lVar4;
            }
            (stage->sky_fog).near_plane =
                 ((stage->sky_fog_interp_final).near_plane -
                 (stage->sky_fog_interp_initial).near_plane) * local_20 +
                 (stage->sky_fog_interp_initial).near_plane;
            (stage->sky_fog).far_plane =
                 ((stage->sky_fog_interp_final).far_plane -
                 (stage->sky_fog_interp_initial).far_plane) * local_20 +
                 (stage->sky_fog_interp_initial).far_plane;
            (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
                      (supervisor.d3d_device,0x22,(stage->sky_fog).color);
            (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
                      (supervisor.d3d_device,0x24,(stage->sky_fog).near_plane);
            (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
                      (supervisor.d3d_device,0x25,(stage->sky_fog).far_plane);
            if (stage->sky_fog_interp_duration <= (stage->sky_fog_interp_timer).current) {
              stage->sky_fog_interp_duration = 0;
            }
          }
          if (instruction->opcode != 5) {
            (stage->script_time).previous = (stage->script_time).current;
            Supervisor::tick_timer
                      (&supervisor,&(stage->script_time).current,&(stage->script_time).subframe);
          }
          tick_std_objects(stage);
          if (stage->set_by_spellcard_ecl_80 < 1) {
            return 1;
          }
          if (stage->set_by_spellcard_ecl_84 == 0x3c) {
            stage->set_by_spellcard_ecl_80 = stage->set_by_spellcard_ecl_80 + 1;
          }
          stage->set_by_spellcard_ecl_84 = stage->set_by_spellcard_ecl_84 + 1;
          AnmManager::run_anm(anm_manager_ptr,&stage->vm_88);
          return 1;
        case 1:
          if ((stage->script_time).current < instruction->time) goto std_break;
          (stage->sky_fog).color = (instruction->args).args[0];
          (stage->sky_fog).near_plane = (float)(instruction->args).args[1];
          (stage->sky_fog).far_plane = (float)(instruction->args).args[2];
          if (stage->sky_fog_interp_duration == 0) {
            (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
                      (supervisor.d3d_device,0x22,(stage->sky_fog).color);
            (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
                      (supervisor.d3d_device,0x24,(stage->sky_fog).near_plane);
            (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
                      (supervisor.d3d_device,0x25,(stage->sky_fog).far_plane);
          }
          stage->instr_index = stage->instr_index + 1;
          (stage->sky_fog_interp_final).near_plane = (stage->sky_fog).near_plane;
          (stage->sky_fog_interp_final).far_plane = (stage->sky_fog).far_plane;
          (stage->sky_fog_interp_final).color = (stage->sky_fog).color;
          break;
        case 2:
          if ((stage->script_time).current < instruction->time) goto std_break;
          (stage->facing_dir_interp_initial).x = (stage->facing_dir_interp_final).x;
          (stage->facing_dir_interp_initial).y = (stage->facing_dir_interp_final).y;
          (stage->facing_dir_interp_initial).z = (stage->facing_dir_interp_final).z;
          (stage->facing_dir_interp_final).x = (float)(instruction->args).args[0];
          (stage->facing_dir_interp_final).y = (float)(instruction->args).args[1];
          (stage->facing_dir_interp_final).z = (float)(instruction->args).args[2];
          stage->instr_index = stage->instr_index + 1;
          break;
        case 3:
          if ((stage->script_time).current < instruction->time) goto std_break;
          stage->facing_dir_interp_duration = (instruction->args).args[0];
          (stage->facing_dir_interp_timer).current = 0;
          (stage->facing_dir_interp_timer).subframe = 0.0;
          (stage->facing_dir_interp_timer).previous = -999;
          stage->instr_index = stage->instr_index + 1;
          break;
        case 4:
          if ((stage->script_time).current < instruction->time) goto std_break;
          (stage->sky_fog_interp_initial).near_plane = (stage->sky_fog).near_plane;
          (stage->sky_fog_interp_initial).far_plane = (stage->sky_fog).far_plane;
          (stage->sky_fog_interp_initial).color = (stage->sky_fog).color;
          stage->sky_fog_interp_duration = (instruction->args).args[0];
          (stage->sky_fog_interp_timer).current = 0;
          (stage->sky_fog_interp_timer).subframe = 0.0;
          (stage->sky_fog_interp_timer).previous = -999;
          stage->instr_index = stage->instr_index + 1;
          break;
        case 5:
          if (stage->unpause_flag == '\0') goto std_break;
          stage->instr_index = stage->instr_index + 1;
          stage->unpause_flag = '\0';
        }
      } while( true );
    }
    *(undefined *)((int)&(stage->vm_88).color + 3) = 0x60;
    *(undefined *)((int)&(stage->vm_88).color + 2) = 0x80;
    *(undefined *)((int)&(stage->vm_88).color + 1) = 0x30;
    *(undefined *)&(stage->vm_88).color = 0x30;
  }
  return 1;
}

