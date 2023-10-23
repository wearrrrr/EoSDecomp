
int __thiscall GameManager::__CLRD_related_2(GameManager *this,int character,int shottype)

{
  int result;
  
  if (((this->clrd_data[shottype + character * 2].clear_counts[1] == 'c') ||
      (this->clrd_data[shottype + character * 2].clear_counts[2] == 'c')) ||
     (this->clrd_data[shottype + character * 2].clear_counts[3] == 'c')) {
    result = 1;
  }
  else {
    result = 0;
  }
  return result;
}

