
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall UpdateFuncRegistry::__sub_41CD10(UpdateFuncRegistry *this)

{
  UpdateFunc func;
  UpdateFunc func_00;
  undefined4 unaff_EBP;
  undefined in_stack_00000000 [20];
  
  func.function_pointer = this;
  func._0_4_ = this;
  func.on_registration = (void *)unaff_EBP;
  func._12_20_ = in_stack_00000000;
  __sub_41CB90(this,func);
  func_00.function_pointer = this;
  func_00._0_4_ = &this->on_draw_list_head;
  func_00.on_registration = (void *)unaff_EBP;
  func_00._12_20_ = in_stack_00000000;
  __sub_41CB90(this,func_00);
  return;
}

