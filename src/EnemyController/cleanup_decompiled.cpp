
/* Library Function - Single Match
    public: __thiscall COleDispParams::~COleDispParams(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

EnemyController * __thiscall EnemyController::cleanup(EnemyController *this)

{
  EnemyController *enemy_ctrler;
  
  enemy_ctrler = this;
  if (this->ecl_file_buffer != (void *)0x0) {
    enemy_ctrler = (EnemyController *)this->ecl_file_buffer;
    _free(enemy_ctrler);
  }
  this->ecl_file_buffer = (void *)0x0;
  return enemy_ctrler;
}

