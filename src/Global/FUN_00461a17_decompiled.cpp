
void FUN_00461a17(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < (int)p_Var1->_translator) {
    p_Var1 = __getptd();
    p_Var1->_translator = (void *)((int)p_Var1->_translator + -1);
  }
  return;
}

