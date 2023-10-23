
AnmVm * __thiscall AnmVm::constructor(AnmVm *this)

{
  Timer::constructor(&this->current_time_in_script);
  Timer::constructor(&this->scale_interp_time);
  Timer::constructor(&this->pos_interp_time);
  Timer::constructor(&this->alpha_interp_time);
  this->sprite_number = -1;
  return this;
}

