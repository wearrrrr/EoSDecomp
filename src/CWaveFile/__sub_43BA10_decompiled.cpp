
void __thiscall CWaveFile::__sub_43BA10(CWaveFile *this)

{
  close_hmmio(this);
  if ((this->m_dwFlags == 0) && (this->m_pwfx != (WAVEFORMATEX *)0x0)) {
    _free(this->m_pwfx);
    this->m_pwfx = (WAVEFORMATEX *)0x0;
  }
  return;
}

