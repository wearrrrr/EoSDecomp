
int __thiscall EnemyController::initialize(EnemyController *this,char *filename)

{
  char *file_buf;
  int result;
  int i;
  
  file_buf = __read_file_to_buffer(filename,0);
  this->ecl_file_buffer = file_buf;
  if (this->ecl_file_buffer == (void *)0x0) {
    LogBuffer::write(&LogBuffer,
                     "敵データの読み込みに失敗しました、データが壊れてるか失われています\n"
                    );
    result = -1;
  }
  else {
    *(int *)((int)this->ecl_file_buffer + 4) =
         *(int *)((int)this->ecl_file_buffer + 4) + (int)this->ecl_file_buffer;
    this->sub_table = (EclRawInstr **)((int)this->ecl_file_buffer + 0x10);
                    /* WARNING: Load size is inaccurate */
    for (i = 0; i < *this->ecl_file_buffer; i = i + 1) {
      this->sub_table[i] =
           (EclRawInstr *)((int)this->sub_table[i]->args + (int)this->ecl_file_buffer + -12);
    }
    this->current_timeline_instruction = *(TimelineInstruction **)((int)this->ecl_file_buffer + 4);
    result = 0;
  }
  return result;
}

