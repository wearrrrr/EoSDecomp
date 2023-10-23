
AsciiManager * __thiscall AsciiManager::constructor(AsciiManager *this)

{
  AsciiManagerPopup *popups;
  int i;
  int local_28;
  
  AnmVm::constructor(&this->vm_1);
  AnmVm::constructor(&this->vm_2);
  local_28 = 256;
  do {
    local_28 = local_28 + -1;
  } while (-1 < local_28);
  AsciiManagerBigChild::constructor(&this->child_6244);
  AsciiManagerBigChild::constructor(&this->child_69BC);
  i = 515;
  popups = this->popups_1;
  while (i = i + -1, -1 < i) {
    Timer::constructor(&popups->timer);
    popups = popups + 1;
  }
  return this;
}

