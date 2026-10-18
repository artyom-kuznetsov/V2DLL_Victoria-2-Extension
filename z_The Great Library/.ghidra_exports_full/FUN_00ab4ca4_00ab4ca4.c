// FUN_00ab4ca4 @ 00ab4ca4 body=[[00ab4ca4, 00ab4cbd]]


void FUN_00ab4ca4(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}

