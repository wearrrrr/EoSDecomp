
void __thiscall GameManager::increase_rank(GameManager *this,int count)

{
  this->subrank = this->subrank + count;
  while (99 < this->subrank) {
    this->rank = this->rank + 1;
    this->subrank = this->subrank + -100;
  }
  if (this->max_rank < this->rank) {
    this->rank = this->max_rank;
  }
  return;
}

