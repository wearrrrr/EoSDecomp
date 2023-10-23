
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Timer::sub(Timer *this,int amount)

{
  if (supervisor.slowdown <= __99f) {
    if (amount < 0) {
      add(this,-amount);
    }
    else {
      this->previous = this->current;
      this->subframe = this->subframe - supervisor.game_speed * (float)amount;
      while (this->subframe < (float)__0f) {
        this->current = this->current + -1;
        this->subframe = this->subframe + _1_0f;
      }
    }
  }
  else {
    this->current = this->current - amount;
  }
  return;
}

