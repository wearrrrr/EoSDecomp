
Timer * __thiscall Timer::constructor(Timer *this)

{
  this->current = 0;
  this->previous = -1;
  this->subframe = 0.0;
  return this;
}

