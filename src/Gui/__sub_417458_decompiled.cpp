
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Gui::__sub_417458(Gui *this,int32_t param_1)

{
  float fVar1;
  GuiImpl *gui_impl;
  
  fVar1 = ram0x0046a2b4;
  gui_impl = this->impl;
  (gui_impl->child_b_2C24).vec3.x = _24_0f;
  (gui_impl->child_b_2C24).vec3.y = fVar1;
  (gui_impl->child_b_2C24).vec3.z = 0.0;
  (this->impl->child_b_2C24).field_10 = 1;
  gui_impl = this->impl;
  (gui_impl->child_b_2C24).timer.current = 0;
  (gui_impl->child_b_2C24).timer.subframe = 0.0;
  (gui_impl->child_b_2C24).timer.previous = -999;
  (this->impl->child_b_2C24).field_c = param_1;
  return;
}

