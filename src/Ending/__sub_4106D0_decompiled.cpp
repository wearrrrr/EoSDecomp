
undefined4 __thiscall Ending::__sub_4106D0(Ending *this,char *filename)

{
  char *rawEndData;
  undefined4 result;
  void *beginning_of_script;
  
  beginning_of_script = *(void **)(this->field1_0x4 + 0x1110);
  rawEndData = __read_file_to_buffer(filename,0);
  *(char **)(this->field1_0x4 + 0x1110) = rawEndData;
  if (*(int *)(this->field1_0x4 + 0x1110) == 0) {
    LogBuffer::write(&LogBuffer,
                     "error : エンディングファイルが読み込めない、ファイルが破壊されています\n"
                    );
    result = 0xffffffff;
  }
  else {
    *(undefined4 *)(this->field1_0x4 + 0x1168) = *(undefined4 *)(this->field1_0x4 + 0x1110);
    *(undefined4 *)(this->field1_0x4 + 0x1144) = 8;
    *(undefined4 *)(this->field1_0x4 + 0x112c) = 0;
    *(undefined4 *)(this->field1_0x4 + 0x1128) = 0;
    *(undefined4 *)(this->field1_0x4 + 0x1124) = 0xfffffc19;
    *(undefined4 *)(this->field1_0x4 + 0x1120) = 0;
    *(undefined4 *)(this->field1_0x4 + 0x111c) = 0;
    *(undefined4 *)(this->field1_0x4 + 0x1118) = 0xfffffc19;
    if (beginning_of_script != (void *)0x0) {
      _free(beginning_of_script);
    }
    result = 0;
  }
  return result;
}

