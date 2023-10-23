
EnemyManager * __thiscall EnemyManager::constructor(EnemyManager *this)

{
  Enemy *enemies;
  int i;
  
  Enemy::constructor(&this->template);
  i = 257;
  enemies = this->enemies;
                    /* Fill all possible enemy slots. */
  while (i = i + -1, -1 < i) {
    Enemy::constructor(enemies);
    enemies = enemies + 1;
  }
  Timer::constructor((Timer *)&(this->timeline_time).subframe);
  __sub_410E30(this);
  return this;
}

