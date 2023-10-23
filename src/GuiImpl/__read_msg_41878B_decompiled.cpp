
void __thiscall GuiImpl::__read_msg_41878B(GuiImpl *this,int msg_id)

{
  int i;
  GuiMsgVm *MsgVM;
  MsgRawHeader *msgHeader;
  
  if (msg_id < (int)((this->msg).msg_file)->num_entries) {
    msgHeader = (this->msg).msg_file;
    MsgVM = &this->msg;
    for (i = 426; i != 0; i = i + -1) {
      MsgVM->msg_file = (MsgRawHeader *)0x0;
      MsgVM = (GuiMsgVm *)&MsgVM->current_instr;
    }
    (this->msg).current_msg_index = msg_id;
    (this->msg).msg_file = msgHeader;
    (this->msg).current_instr = ((this->msg).msg_file)->entries[msg_id];
    (this->msg).dialogue_lines[0].anm_file_index = -1;
    (this->msg).dialogue_lines[1].anm_file_index = -1;
    (this->msg).font_size = 15;
                    /* Colors are in hex */
    (this->msg).text_colors_A[0] = 0xe8f0ff;
    (this->msg).text_colors_A[1] = 0xffe8f0;
    (this->msg).text_colors_B[0] = 0;
    (this->msg).text_colors_B[1] = 0;
    (this->msg).dialogue_skippable = 1;
    if ((game_manager.current_stage == 6) && ((msg_id == 0 || (msg_id == 10)))) {
      AnmManager::load_anm_file(anm_manager_ptr,11,"data/eff06.anm",691);
    }
    else if ((game_manager.current_stage == 7) && ((msg_id == 0 || (msg_id == 10)))) {
      AnmManager::load_anm_file(anm_manager_ptr,11,"data/eff07.anm",691);
      AnmManager::load_anm_file(anm_manager_ptr,18,"data/face12c.anm",1192);
    }
  }
  return;
}

