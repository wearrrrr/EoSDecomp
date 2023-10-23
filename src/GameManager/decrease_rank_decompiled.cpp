
void __thiscall GameManager::decrease_rank(GameManager *this,int count)

{
  this->subrank = this->subrank - count;
  while (this->subrank < 0) {
    this->rank = this->rank + -1;
    this->subrank = this->subrank + 100;
  }
  if (this->rank < this->min_rank) {
    this->rank = this->min_rank;
  }
  return;
}

