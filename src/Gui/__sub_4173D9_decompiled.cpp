
void __thiscall Gui::__sub_4173D9(Gui *this,int32_t param_1)

{
  float fVar1;
  GuiImpl *gui_impl;
  
  fVar1 = _32_0f;
  gui_impl = this->impl;
  (gui_impl->child_b_2C04).vec3.x = _16_0f;
  (gui_impl->child_b_2C04).vec3.y = fVar1;
  (gui_impl->child_b_2C04).vec3.z = 0.0;
  (this->impl->child_b_2C04).field_10 = 1;
  gui_impl = this->impl;
  (gui_impl->child_b_2C04).timer.current = 0;
  (gui_impl->child_b_2C04).timer.subframe = 0.0;
  (gui_impl->child_b_2C04).timer.previous = -999;
  (this->impl->child_b_2C04).field_c = param_1;
  return;
}

