
void __cdecl window_init(HINSTANCE instance)

{
  int frameDimensions;
  int captionHeight;
  WNDCLASSA *window_ptr;
  WNDCLASSA window;
  int window_width;
  int window_height;
  
  window_ptr = &window;
  for (frameDimensions = 10; frameDimensions != 0; frameDimensions = frameDimensions + -1) {
    window_ptr->style = 0;
    window_ptr = (WNDCLASSA *)&window_ptr->lpfnWndProc;
  }
  window.hbrBackground = (HBRUSH)GetStockObject(0);
  window.hCursor = (HCURSOR)LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  window.hInstance = (HINSTANCE)instance;
  window.lpfnWndProc = Wndproc;
  Window.wparam = 0;
  Window.bool_wparam_is_zero = 0;
                    /* lpClassName is "BASE" */
  window.lpszClassName = "BASE";
  RegisterClassA(&window);
  if (supervisor.config.fullscreen == '\0') {
    window_width = 640;
    window_height = 480;
    Window.main_window =
         CreateWindowExA(0,"BASE","ìåï˚çgñÇãΩ\x3000Å` the Embodiment of Scarlet Devil",
                         0xcf0000,0,0,640,480,(HWND)0x0,(HMENU)0x0,instance,(LPVOID)0x0);
  }
  else {
    frameDimensions = GetSystemMetrics(7);
    window_width = frameDimensions * 2 + 640;
    frameDimensions = GetSystemMetrics(8);
    captionHeight = GetSystemMetrics(4);
    window_height = captionHeight + 480 + frameDimensions * 2;
    Window.main_window =
         CreateWindowExA(0,"BASE","ìåï˚çgñÇãΩ\x3000Å` the Embodiment of Scarlet Devil",
                         0x100a0000,-0x80000000,-0x80000000,window_width,window_height,(HWND)0x0,
                         (HMENU)0x0,instance,(LPVOID)0x0);
  }
  supervisor.main_window = (HWND)Window.main_window;
  return;
}

