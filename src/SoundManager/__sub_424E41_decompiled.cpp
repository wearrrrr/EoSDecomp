
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SoundManager * __thiscall SoundManager::__sub_424E41(SoundManager *this,undefined param_1)

{
  longlong lVar1;
  undefined3 in_stack_00000005;
  
  if (this->csound_ptr != (CSound *)0x0) {
    this = (SoundManager *)this->csound_ptr;
    this->ptrs_8[5] = (IUnknown *)0x1;
    lVar1 = __ftol2((double)(_param_1 * _60_0f));
    this->ptrs_8[3] = (IUnknown *)lVar1;
    this->ptrs_8[4] = this->ptrs_8[3];
  }
  return this;
}

