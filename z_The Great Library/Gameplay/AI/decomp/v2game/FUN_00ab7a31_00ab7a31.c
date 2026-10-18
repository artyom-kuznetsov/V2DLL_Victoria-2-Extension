// FUN_00ab7a31 @ 00ab7a31 body=[[00ab7a31, 00ab7a43]]


void FUN_00ab7a31(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}

