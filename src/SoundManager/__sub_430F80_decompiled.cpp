
void __thiscall SoundManager::__sub_430F80(SoundManager *this)

{
  if (this->csound_ptr != (CSound *)0x0) {
    CSound::Stop(this->csound_ptr);
    if (this->dword_618 != 0) {
      PostThreadMessageA(this->dword_614,0x12,0,0);
      __stub_3();
      WaitForSingleObject((HANDLE)this->dword_618,0xffffffff);
      __stub_3();
      CloseHandle((HANDLE)this->dword_618);
      CloseHandle((HANDLE)this->dword_630);
      this->dword_618 = 0;
    }
    if (this->csound_ptr != (CSound *)0x0) {
      if (this->csound_ptr != (CSound *)0x0) {
        (*(code *)this->csound_ptr->m_apDSBuffer->vtable)(1);
      }
      this->csound_ptr = (CSound *)0x0;
    }
    __stub_3();
  }
  return;
}

