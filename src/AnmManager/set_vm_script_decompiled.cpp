
void __thiscall AnmManager::set_vm_script(AnmManager *this,AnmVm *vm,AnmRawScript *script_start)

{
  vm->flags = vm->flags & 0xffffff3f;
  AnmVm::initialize(vm);
  vm->beginning_of_script = (AnmRawInstr *)script_start;
  vm->current_instruction = vm->beginning_of_script;
  (vm->current_time_in_script).current = 0;
  (vm->current_time_in_script).subframe = 0.0;
  (vm->current_time_in_script).previous = -999;
  vm->flags = vm->flags & 0xfffffffe;
  if (script_start != (AnmRawScript *)0x0) {
    run_anm(this,vm);
  }
  return;
}

