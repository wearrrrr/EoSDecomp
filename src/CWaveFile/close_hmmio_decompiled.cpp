
int __thiscall CWaveFile::close_hmmio(CWaveFile *this)

{
  if ((this->m_mmioinfoOut).hmmio == (HMMIO)0x1) {
    mmioClose((HMMIO)this->m_hmmio,0);
    this->m_hmmio = (HMMIO)0x0;
  }
  return 0;
}

