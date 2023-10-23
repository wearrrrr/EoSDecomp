
LogBuffer * __thiscall LogBuffer::__log_to_txt(LogBuffer *this)

{
  FILE *logfile;
  
  if (*(LogBuffer **)this[1].field0_0x0 != this) {
    write(this,"---------------------------------------------------------- \n");
    if (this[1].field0_0x0[4] != '\0') {
      MessageBoxA((HWND)0x0,(LPCSTR)this,(LPCSTR)&_log_,0x10);
    }
    logfile = (FILE *)_fopen("./log.txt","wt");
    fprintf(logfile,(wchar_t *)this);
    this = (LogBuffer *)_fclose(logfile);
  }
  return this;
}

