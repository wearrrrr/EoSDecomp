
int __thiscall Gui::__sub_4172D3(Gui *this)

{
  int result;
  
  if (((this->impl->vm_9).sprite_number < 0) || (((this->impl->vm_9).flags >> 0xd & 1) == 0)) {
    result = 0;
  }
  else {
    result = 1;
  }
  return result;
}

