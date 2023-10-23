
void __thiscall BulletManager::reset(BulletManager *this)

{
  int i;
  
  for (i = 251654; i != 0; i = i + -1) {
    this->bullet_types_templates[0].vm_0.rotation.x = 0.0;
    this = (BulletManager *)&this->bullet_types_templates[0].vm_0.rotation.y;
  }
  return;
}

