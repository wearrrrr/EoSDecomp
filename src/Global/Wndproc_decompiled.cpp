
LRESULT Wndproc(HWND hWnd,uint uMsg,WPARAM wParam,LPARAM param_4)

{
  HCURSOR cursor;
  LRESULT windowProc;
  
  if (uMsg < WM_MOUSEACTIVATE) {
    if (uMsg == WM_SETCURSOR) {
      if (supervisor.config.fullscreen == uVar4) {
        if (Window.bool_wparam_is_zero == 0) {
          ShowCursor(0);
          SetCursor((HCURSOR)uVar5);
        }
        else {
          cursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
          SetCursor(cursor);
          ShowCursor(1);
        }
      }
      else {
        cursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
        SetCursor(cursor);
        ShowCursor(1);
      }
      return 1;
    }
    if (uMsg == WM_CLOSE) {
      Window.should_close = 1;
      return 1;
    }
    if (uMsg == WM_ACTIVATEAPP) {
      Window.wparam = wParam;
      Window.bool_wparam_is_zero = (int32_t)(wParam == 0);
    }
  }
  else {
                    /* If midi output stream is finished and midi_manager is initialized... */
    if ((uMsg == MOM_DONE) && (supervisor.midi_manager_ptr != (MidiManager *)0x0)) {
      UnknownB::__sub_422560(supervisor.midi_manager_ptr,(LPMIDIHDR)param_4);
    }
  }
  windowProc = DefWindowProcA(hWnd,uMsg,wParam,param_4);
  return windowProc;
}

