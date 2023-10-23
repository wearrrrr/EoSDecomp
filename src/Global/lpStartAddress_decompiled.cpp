
/* lpStartAddress parameter of CreateThread
    */

undefined4 lpStartAddress(void)

{
  bool bVar1;
  DWORD DVar2;
  BOOL BVar3;
  tagMSG local_20;
  
  bVar1 = false;
  while (!bVar1) {
    DVar2 = MsgWaitForMultipleObjects(1,(HANDLE *)&sound_manager.dword_630,0,0xffffffff,0xbf);
    if (sound_manager.csound_ptr == (CSound *)0x0) {
      bVar1 = true;
    }
    if (DVar2 == 0) {
      if (sound_manager.csound_ptr != (CSound *)0x0) {
        CSound::HandleWaveStreamNotification(sound_manager.csound_ptr,1);
      }
    }
    else if (DVar2 == 1) {
      while (BVar3 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar3 != 0) {
        if (local_20.message == 0x12) {
          bVar1 = true;
        }
      }
    }
  }
  return 0;
}

