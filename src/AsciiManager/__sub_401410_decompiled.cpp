
AsciiManager * __thiscall AsciiManager::__sub_401410(AsciiManager *this)

{
  int i;
  AsciiManager *ascii_mgr;
  AnmManager *anm_mgr;
  
  ascii_mgr = this;
  for (i = 12395; i != 0; i = i + -1) {
    (ascii_mgr->vm_1).rotation.x = 0.0;
    ascii_mgr = (AsciiManager *)&(ascii_mgr->vm_1).rotation.y;
  }
  this->color = 0xffffffff;
  (this->scale).x = 1.0;
  (this->scale).y = 1.0;
  (this->vm_2).flags = (this->vm_2).flags | 0x300;
  anm_mgr = anm_manager_ptr;
  AnmVm::initialize(&this->vm_2);
  AnmManager::set_vm_sprite(anm_mgr,&this->vm_2,0);
  anm_mgr = anm_manager_ptr;
  AnmVm::initialize(&this->vm_1);
  AnmManager::set_vm_sprite(anm_mgr,&this->vm_1,0x20);
  (this->vm_2).pos.z = 0.1;
  this->dword_6234 = 0;
  return this;
}

