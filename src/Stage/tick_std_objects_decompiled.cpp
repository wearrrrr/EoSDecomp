
undefined4 __thiscall Stage::tick_std_objects(Stage *this)

{
  AnmVm *vm;
  StdRawQuadBasic *std_quad;
  int i;
  int instruction_idx;
  StdRawObject *std_obj;
  
  for (i = 0; i < this->num_objects; i = i + 1) {
    std_obj = this->objects[i];
    if ((std_obj->flags & 1) != 0) {
      instruction_idx = 0;
      for (std_quad = &std_obj->first_quad; -1 < std_quad->type;
          std_quad = (StdRawQuadBasic *)((int)&std_quad->type + (int)(short)std_quad->byte_size)) {
        vm = this->quad_vms + (short)std_quad->vm_index;
        if (std_quad->type == 0) {
          AnmManager::run_anm(anm_manager_ptr,vm);
        }
        else if (std_quad->type == 1) {
          AnmManager::run_anm(anm_manager_ptr,vm);
        }
        if (vm->current_instruction != (AnmRawInstr *)0x0) {
          instruction_idx = instruction_idx + 1;
        }
      }
      if (instruction_idx == 0) {
        std_obj->flags = std_obj->flags & 0xfe;
      }
    }
  }
  return 0;
}

