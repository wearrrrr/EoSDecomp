
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Supervisor::tick_timer(Supervisor *this,int *current,float *subframe)

{
  if (this->slowdown < __99f == (this->slowdown == __99f)) {
    *current = *current + 1;
  }
  else {
    *subframe = *subframe + this->game_speed;
    if (_1_0f <= *subframe) {
      *current = *current + 1;
      *subframe = *subframe - _1_0f;
    }
  }
  return;
}

