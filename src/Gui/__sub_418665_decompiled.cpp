
int __thiscall Gui::__sub_418665(Gui *this,char *filename)

{
  MsgRawHeader *msg_header;
  int result;
  int i;
  
  __sub_41872A(this);
  msg_header = (MsgRawHeader *)__read_file_to_buffer(filename,0);
  (this->impl->msg).msg_file = msg_header;
  if ((this->impl->msg).msg_file == (MsgRawHeader *)0x0) {
    LogBuffer::write(&LogBuffer,
                     "error : メッセージファイル %s が読み込めませんでした\n");
    result = -1;
  }
  else {
    (this->impl->msg).current_msg_index = -1;
    (this->impl->msg).current_instr = (MsgRawInstr *)0x0;
    for (i = 0; i < (int)((this->impl->msg).msg_file)->num_entries; i = i + 1) {
      ((this->impl->msg).msg_file)->entries[i] =
           (MsgRawInstr *)
           ((int)((this->impl->msg).msg_file)->entries +
           (int)(((this->impl->msg).msg_file)->entries[i] + -1));
    }
    result = 0;
  }
  return result;
}

