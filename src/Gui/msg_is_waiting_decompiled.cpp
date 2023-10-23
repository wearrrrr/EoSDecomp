
bool __thiscall Gui::msg_is_waiting(Gui *this)

{
  bool result;
  
  if ((this->impl->msg).ignore_wait_counter == 0) {
    result = -1 < (this->impl->msg).current_msg_index;
  }
  else {
    result = false;
  }
  return result;
}

