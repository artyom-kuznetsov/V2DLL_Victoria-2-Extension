// FUN_0086f1d1 @ 0086f1d1 body=[[0086f1d1, 0086f1fd]]


void FUN_0086f1d1(void)

{
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x24) != 1) {
    FUN_00aaa630(unaff_ESI,unaff_EDI);
    lua_error();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

