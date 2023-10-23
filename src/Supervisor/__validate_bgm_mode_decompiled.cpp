
int __thiscall Supervisor::__validate_bgm_mode(Supervisor *this)

{
  int result;
  
  if ((supervisor.config.bgm_format == 2) || (supervisor.config.bgm_format == 1)) {
    result = 0;
  }
  else {
    result = -1;
  }
  return result;
}

