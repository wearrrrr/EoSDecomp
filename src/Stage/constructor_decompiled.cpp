
Stage * __thiscall Stage::constructor(Stage *this)

{
  Timer::constructor(&this->script_time);
  Timer::constructor(&this->timer_2C);
  Timer::constructor(&this->sky_fog_interp_timer);
  AnmVm::constructor(&this->vm_88);
  AnmVm::constructor(&this->vm_198);
  Timer::constructor(&this->facing_dir_interp_timer);
  return this;
}

