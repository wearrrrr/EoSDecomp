
void __thiscall AnmVm::initialize(AnmVm *this)

{
  (this->uv_scroll_pos).y = 0.0;
  (this->uv_scroll_pos).x = 0.0;
  this->scale_interp_final_x = 0.0;
  this->scale_interp_final_y = 0.0;
  (this->angle_velocity).z = 0.0;
  (this->angle_velocity).y = 0.0;
  (this->angle_velocity).x = 0.0;
  (this->rotation).z = 0.0;
  (this->rotation).y = 0.0;
  (this->rotation).x = 0.0;
  this->scale_x = 1.0;
  this->scale_y = 1.0;
  this->scale_interp_end_time = 0;
  this->alpha_interp_end_time = 0;
  this->color = 0xffffffff;
  D3DMATRIX::set_identity(&this->matrix);
  *(undefined2 *)&this->flags = 3;
  this->auto_rotate = 0;
  this->pending_interrupt = 0;
  this->pos_interp_end_time = 0;
  Timer::constructor(&this->current_time_in_script);
  return;
}

