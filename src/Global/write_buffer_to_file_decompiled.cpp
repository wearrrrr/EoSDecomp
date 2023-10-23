
int __cdecl write_buffer_to_file(char *filename,void *buffer,size_t size)

{
  FILE *file;
  uint result;
  size_t file_size;
  
                    /* Opens file with write and binary mode selected. */
  file = (FILE *)_fopen(filename,"wb");
  if (file == (FILE *)0x0) {
    result = 0xffffffff;
  }
  else {
    file_size = _fwrite(buffer,1,size,file);
                    /* File written successfully */
    if (file_size == size) {
      _fclose(file);
      result = 0;
    }
    else {
                    /* Failed to write to file */
      _fclose(file);
      result = 0xfffffffe;
    }
  }
  return result;
}

