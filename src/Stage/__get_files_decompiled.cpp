
int __thiscall Stage::__get_files(Stage *this,char *anm_filename,char *std_filename)

{
  int result;
  StdRawHeader *std_header;
  AnmVm *vm;
  StdRawQuadBasic *std_quad;
  int i;
  int local_8;
  StdRawObject *std_obj;
  
  result = AnmManager::load_anm_file(anm_manager_ptr,4,anm_filename,0x300);
  if (result == 0) {
    std_header = (StdRawHeader *)__read_file_to_buffer(std_filename,0);
    this->std_file = std_header;
    if (this->std_file == (StdRawHeader *)0x0) {
      LogBuffer::write(&LogBuffer,&_SJIS__Stage_data_not_found__Data_is_corrupted_n_);
      result = -1;
    }
    else {
      this->num_objects = (int)(short)this->std_file->object_count;
      this->num_quads = (int)(short)this->std_file->quads_count;
      this->object_instances =
           (StdRawInstance *)
           (this->std_file->stage_name + (this->std_file->offset_to_instances - 0x10));
      this->beginning_of_script =
           (StdRawInstr *)(this->std_file->stage_name + (this->std_file->offset_to_scripts - 0x10));
      this->objects = this->std_file->objects;
      for (i = 0; i < this->num_objects; i = i + 1) {
        this->objects[i] =
             (StdRawObject *)(this->std_file->stage_name + (int)(&this->objects[i]->id + -8));
      }
      vm = (AnmVm *)_malloc(this->num_quads * 0x110);
      this->quad_vms = vm;
      local_8 = 0;
      for (i = 0; i < this->num_objects; i = i + 1) {
        std_obj = this->objects[i];
        std_obj->flags = '\x01';
        for (std_quad = &std_obj->first_quad; -1 < std_quad->type;
            std_quad = (StdRawQuadBasic *)((int)&std_quad->type + (int)(short)std_quad->byte_size))
        {
          AnmManager::__sub_4051B0
                    (anm_manager_ptr,this->quad_vms + local_8,(short)std_quad->anm_script + 0x300);
          std_quad->vm_index = (uint16_t)local_8;
          local_8 = local_8 + 1;
        }
      }
      result = 0;
    }
  }
  else {
    result = -1;
  }
  return result;
}

