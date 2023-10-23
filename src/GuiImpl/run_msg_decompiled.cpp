
int __fastcall GuiImpl::run_msg(GuiImpl *gui_impl)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int result;
  MsgRawInstr *msg_instruction2;
  uint uVar10;
  float unaff_ESI;
  short local_34;
  short local_20;
  short local_14;
  AnmManager *anm_mgr;
  MsgRawInstr *msg_instruction;
  AnmVm *vm;
  
  if ((gui_impl->msg).current_msg_index < 0) {
    result = -1;
  }
  else {
    if ((gui_impl->msg).ignore_wait_counter != 0) {
      (gui_impl->msg).ignore_wait_counter = (gui_impl->msg).ignore_wait_counter - 1;
    }
    if (((gui_impl->msg).dialogue_skippable != '\0') && ((input.currently_pressed & 0x100) != 0)) {
      (gui_impl->msg).script_time.current = (uint)(ushort)((gui_impl->msg).current_instr)->time;
      (gui_impl->msg).script_time.subframe = 0.0;
      (gui_impl->msg).script_time.previous = -999;
    }
    while (anm_mgr = anm_manager_ptr,
          (int)(uint)(ushort)((gui_impl->msg).current_instr)->time <=
          (gui_impl->msg).script_time.current) {
      switch(((gui_impl->msg).current_instr)->opcode) {
      case '\0':
        (gui_impl->msg).current_msg_index = -1;
        return -1;
      case '\x01':
        msg_instruction = (gui_impl->msg).current_instr;
        msg_instruction2 = msg_instruction + 1;
        uVar10 = -(uint)(msg_instruction2->time != 0) & 2;
        sVar8 = *(short *)&msg_instruction[1].opcode;
        local_14 = sVar8 + (short)uVar10 + 0x4a0;
        vm = (gui_impl->msg).portraits + msg_instruction2->time;
        vm->anm_file_index = local_14;
        AnmManager::set_vm_script
                  (anm_mgr,vm,(AnmRawScript *)anm_mgr->scripts[uVar10 + sVar8 + 0x4a0]);
        break;
      case '\x02':
        msg_instruction = (gui_impl->msg).current_instr;
        sVar1._0_1_ = msg_instruction[1].opcode;
        sVar1._1_1_ = msg_instruction[1].args_size;
        AnmManager::set_vm_sprite
                  (anm_manager_ptr,(gui_impl->msg).portraits + msg_instruction[1].time,
                   (int)sVar1 + (-(uint)(msg_instruction[1].time != 0) & 8) + 0x4a0);
        break;
      case '\x03':
        msg_instruction = (gui_impl->msg).current_instr;
        msg_instruction2 = msg_instruction + 1;
        sVar2._0_1_ = msg_instruction[1].opcode;
        sVar2._1_1_ = msg_instruction[1].args_size;
        if ((sVar2 == 0) && (-1 < (gui_impl->msg).dialogue_lines[1].anm_file_index)) {
          AnmManager::__draw_text_to_vm_left
                    (anm_manager_ptr,(gui_impl->msg).dialogue_lines + 1,
                     (gui_impl->msg).text_colors_A[msg_instruction2->time],
                     (gui_impl->msg).text_colors_B[msg_instruction2->time]," ");
        }
        anm_mgr = anm_manager_ptr;
        sVar8 = *(short *)&msg_instruction[1].opcode;
        local_20 = sVar8 + 0x702;
        sVar3._0_1_ = msg_instruction[1].opcode;
        sVar3._1_1_ = msg_instruction[1].args_size;
        vm = (gui_impl->msg).dialogue_lines + sVar3;
        vm->anm_file_index = local_20;
        AnmManager::set_vm_script(anm_mgr,vm,(AnmRawScript *)anm_mgr->scripts[sVar8 + 0x702]);
        sVar4._0_1_ = msg_instruction[1].opcode;
        sVar4._1_1_ = msg_instruction[1].args_size;
        (gui_impl->msg).dialogue_lines[sVar4].font_height = *(uint8_t *)&(gui_impl->msg).font_size;
        sVar5._0_1_ = msg_instruction[1].opcode;
        sVar5._1_1_ = msg_instruction[1].args_size;
        sVar6._0_1_ = msg_instruction[1].opcode;
        sVar6._1_1_ = msg_instruction[1].args_size;
        (gui_impl->msg).dialogue_lines[sVar6].font_width =
             (gui_impl->msg).dialogue_lines[sVar5].font_height;
        sVar7._0_1_ = msg_instruction[1].opcode;
        sVar7._1_1_ = msg_instruction[1].args_size;
        AnmManager::__draw_text_to_vm_left
                  (anm_manager_ptr,(gui_impl->msg).dialogue_lines + sVar7,
                   (gui_impl->msg).text_colors_A[msg_instruction2->time],
                   (gui_impl->msg).text_colors_B[msg_instruction2->time],
                   (char *)(msg_instruction + 2));
        (gui_impl->msg).frames_elapsed_during_pause = 0;
        break;
      case '\x04':
        if (((((gui_impl->msg).dialogue_skippable == '\0') ||
             ((input.currently_pressed & 0x100) == 0)) &&
            (((input.currently_pressed & 1) == 0 ||
             (((input.currently_pressed & 1) == (input.word_4 & 1) ||
              ((gui_impl->msg).frames_elapsed_during_pause < 8)))))) &&
           ((gui_impl->msg).frames_elapsed_during_pause < (int)(gui_impl->msg).current_instr[1])) {
          (gui_impl->msg).frames_elapsed_during_pause =
               (gui_impl->msg).frames_elapsed_during_pause + 1;
          goto msg_skip_no_tick_time;
        }
        break;
      case '\x05':
        msg_instruction = (gui_impl->msg).current_instr;
        msg_instruction2 = msg_instruction + 1;
        if (msg_instruction2->time < 2) {
          (gui_impl->msg).portraits[msg_instruction2->time].pending_interrupt =
               (ushort)msg_instruction[1].opcode;
        }
        else {
          (gui_impl->msg).portraits[msg_instruction2->time].pending_interrupt =
               (ushort)msg_instruction[1].opcode;
        }
        break;
      case '\x06':
        (gui_impl->msg).ignore_wait_counter = (gui_impl->msg).ignore_wait_counter + 1;
        break;
      case '\a':
        (gui_impl->vm_2).anm_file_index = 0x701;
        AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_2,(AnmRawScript *)anm_mgr->scripts[0x701]);
        (gui_impl->vm_2).font_width = '\x10';
        (gui_impl->vm_2).font_height = '\x10';
        AnmManager::__draw_text_to_vm_right(anm_manager_ptr,&gui_impl->vm_2,0xe0ffff,0,"ô%s");
        result = Supervisor::change_midi_music(&supervisor,(int)(gui_impl->msg).current_instr[1]);
        if (result != 0) {
          Supervisor::__load_bgm_file
                    (&supervisor,
                     (char *)(Stage.std_file)->bgm_paths[(int)(gui_impl->msg).current_instr[1]]);
        }
        break;
      case '\b':
        msg_instruction = (gui_impl->msg).current_instr;
        sVar8 = *(short *)&msg_instruction[1].opcode;
        local_34 = sVar8 + 0x704;
        sVar9._0_1_ = msg_instruction[1].opcode;
        sVar9._1_1_ = msg_instruction[1].args_size;
        vm = (gui_impl->msg).intro_lines + sVar9;
        vm->anm_file_index = local_34;
        AnmManager::set_vm_script(anm_mgr,vm,(AnmRawScript *)anm_mgr->scripts[sVar8 + 0x704]);
        sVar8._0_1_ = msg_instruction[1].opcode;
        sVar8._1_1_ = msg_instruction[1].args_size;
        AnmManager::__draw_text_to_vm_right
                  (anm_manager_ptr,(gui_impl->msg).intro_lines + sVar8,
                   (gui_impl->msg).text_colors_A[msg_instruction[1].time],
                   (gui_impl->msg).text_colors_B[msg_instruction[1].time],
                   (char *)(msg_instruction + 2));
        (gui_impl->msg).frames_elapsed_during_pause = 0;
        break;
      case '\t':
        gui_impl->dword_2BDC = 1;
        anm_mgr = anm_manager_ptr;
        if (game_manager.current_stage < 6) {
          (gui_impl->vm_9).anm_file_index = 0x619;
          AnmManager::set_vm_script(anm_mgr,&gui_impl->vm_9,(AnmRawScript *)anm_mgr->scripts[0x619])
          ;
        }
        else {
          game_manager.__byte_181c = -1;
        }
        break;
      case '\n':
        goto msg_skip_no_tick_time;
      case '\v':
        game_manager.__dword_0 = game_manager.score;
        if (game_manager.__byte_1823 == '\0') {
          if ((game_manager.current_stage < 5) ||
             ((game_manager.difficulty != 0 && (game_manager.current_stage == 5)))) {
            supervisor.dword_18C = 3;
          }
          else if (game_manager.__spellcard_related_1 == 0) {
            if (game_manager.difficulty == 4) {
              game_manager.__byte_1822 = '\x01';
              supervisor.dword_18C = 7;
            }
            else {
              supervisor.dword_18C = 10;
            }
          }
          else {
            supervisor.dword_18C = 8;
          }
        }
        else {
          supervisor.dword_18C = 7;
        }
        goto msg_skip_no_tick_time;
      case '\f':
        Supervisor::__fade_music(&supervisor,__0f,unaff_ESI);
        break;
      case '\r':
        (gui_impl->msg).dialogue_skippable = *(uint8_t *)&(gui_impl->msg).current_instr[1].time;
      }
      (gui_impl->msg).current_instr =
           (MsgRawInstr *)
           ((int)&(gui_impl->msg).current_instr[1].time +
           (uint)((gui_impl->msg).current_instr)->args_size);
    }
    Timer::tick(&(gui_impl->msg).script_time);
msg_skip_no_tick_time:
    AnmManager::run_anm(anm_manager_ptr,(gui_impl->msg).portraits);
    AnmManager::run_anm(anm_manager_ptr,(gui_impl->msg).portraits + 1);
    AnmManager::run_anm(anm_manager_ptr,(gui_impl->msg).dialogue_lines);
    AnmManager::run_anm(anm_manager_ptr,(gui_impl->msg).dialogue_lines + 1);
    AnmManager::run_anm(anm_manager_ptr,(gui_impl->msg).intro_lines);
    AnmManager::run_anm(anm_manager_ptr,(gui_impl->msg).intro_lines + 1);
    if ((((gui_impl->msg).script_time.current < 0x3c) &&
        ((gui_impl->msg).dialogue_skippable != '\0')) && ((input.currently_pressed & 0x100) != 0)) {
      (gui_impl->msg).script_time.current = 0x3c;
      (gui_impl->msg).script_time.subframe = 0.0;
      (gui_impl->msg).script_time.previous = -999;
    }
    result = 0;
  }
  return result;
}

