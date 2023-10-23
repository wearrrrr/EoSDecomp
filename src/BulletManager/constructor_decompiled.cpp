
BulletManager * __thiscall BulletManager::constructor(BulletManager *this)

{
  Laser *lasers;
  int k;
  Bullet *bullets;
  int j;
  BulletManager *BulletManager;
  int i;
  
  i = 16;
  BulletManager = this;
                    /* Not sure why this isn't BulletManager->bullet_type_templates[i] ... sigh
                       love you msvc */
  while (i = i + -1, -1 < i) {
    BulletTypeVms::constructor(BulletManager->bullet_types_templates);
    BulletManager = (BulletManager *)(BulletManager->bullet_types_templates + 1);
  }
  j = 640;
  bullets = this->bullets;
  while (j = j + -1, -1 < j) {
    BulletTypeVms::constructor(&bullets->vms);
    Timer::constructor(&bullets->timer);
    bullets = bullets + 1;
  }
  k = 64;
  lasers = this->lasers;
  while (k = k + -1, -1 < k) {
    AnmVm::constructor(&lasers->vm_0);
    AnmVm::constructor(&lasers->vm_1);
    Timer::constructor(&lasers->timer);
    lasers = lasers + 1;
  }
  Timer::constructor(&this->timer);
  reset(this);
  return this;
}

