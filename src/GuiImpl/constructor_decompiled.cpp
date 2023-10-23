
GuiImpl * __fastcall GuiImpl::constructor(GuiImpl *this)

{
  GuiImpl *gui_impl;
  int i;
  
  i = 26;
  gui_impl = this;
  while (i = i + -1, -1 < i) {
    AnmVm::constructor(gui_impl->vms);
    gui_impl = (GuiImpl *)(gui_impl->vms + 1);
  }
  AnmVm::constructor(&this->vm_1);
  AnmVm::constructor(&this->vm_2);
  AnmVm::constructor(&this->vm_3);
  AnmVm::constructor(&this->vm_4);
  AnmVm::constructor(&this->vm_5);
  AnmVm::constructor(&this->vm_6);
  AnmVm::constructor(&this->vm_7);
  AnmVm::constructor(&this->vm_8);
  AnmVm::constructor(&this->vm_9);
  GuiMsgVm::constructor(&this->msg);
  Timer::constructor(&(this->child_b_2BE4).timer);
  Timer::constructor(&(this->child_b_2C04).timer);
  Timer::constructor(&(this->child_b_2C24).timer);
  return this;
}

