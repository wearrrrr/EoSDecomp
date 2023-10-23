
void ___endstdio(void)

{
  __flushall();
  if (_exitflag != '\0') {
    __fcloseall();
    return;
  }
  return;
}

