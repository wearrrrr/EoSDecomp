
int32_t __thiscall Timer::tick(Timer *this)

{
  this->previous = this->current;
  Supervisor::tick_timer(&supervisor,&this->current,&this->subframe);
  return this->current;
}

