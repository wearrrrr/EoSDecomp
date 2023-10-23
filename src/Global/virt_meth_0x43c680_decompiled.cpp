
void __thiscall virt_meth_0x43c680(void *this)

{
  LPVOID in_stack_00000004;
  DWORD in_stack_00000008;
  void *pvStack_4;
  
                    /* WARNING: Load size is inaccurate */
  pvStack_4 = this;
  (**(code **)(*this + 0x10))();
  OOAnalyzer::cls_0x46cbe8::virt_meth_0x43cf50
            ((cls_0x46cbe8 *)((int)this + 0x18),in_stack_00000004,in_stack_00000008,
             (LPDWORD)&pvStack_4);
  return;
}

