
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Timer::add(Timer *this,int amount)

{
  if (supervisor.slowdown <= __99f) {
    if (amount < 0) {
      sub(this,-amount);
    }
    else {
      this->previous = this->current;
      this->subframe = supervisor.game_speed * (float)amount + this->subframe;
      while (_1_0f <= this->subframe) {
        this->current = this->current + 1;
        this->subframe = this->subframe - _1_0f;
      }
    }
  }
  else {
    this->current = this->current + amount;
  }
  return;
}

