
undefined4 __fastcall Menu::__sub_4378A2(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 result;
  int i;
  DWORD local_8;
  
  iVar2 = __menu_related_439DA0(param_1);
  if (iVar2 == 0) {
    if (supervisor.dword_400 != 0) {
      local_8 = timeGetTime();
      while (local_8 - supervisor.dword_400 < 3000) {
        local_8 = timeGetTime();
      }
      supervisor.dword_400 = 0;
      Supervisor::__load_bgm_file(&supervisor,"bgm/th06_01.mid");
    }
    for (i = 0; i < 0x7a; i = i + 1) {
      *(undefined2 *)(param_1 + 0x8a + i * 0x110) = 1;
      *(uint *)(param_1 + 0x80 + i * 0x110) = *(uint *)(param_1 + 0x80 + i * 0x110) | 8;
      if ((supervisor.config.flags & 1) == 0) {
        *(undefined4 *)(param_1 + 0x7c + i * 0x110) = 0xff000000;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c + i * 0x110) = 0xffffffff;
      }
      puVar1 = (undefined4 *)(param_1 + 0xe4 + i * 0x110);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(undefined4 *)(param_1 + 0x81f0) = 1;
    result = 0;
  }
  else {
    supervisor.dword_18C = 4;
    result = 0xffffffff;
  }
  return result;
}

