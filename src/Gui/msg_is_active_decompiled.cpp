
bool __thiscall Gui::msg_is_active(Gui *this)

{
  return -1 < (this->impl->msg).current_msg_index;
}

