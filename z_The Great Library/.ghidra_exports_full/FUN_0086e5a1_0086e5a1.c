// FUN_0086e5a1 @ 0086e5a1 body=[[0086e5a1, 0086e5cd]]


void FUN_0086e5a1(void)

{
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x24) != 1) {
    FUN_00aaa630(unaff_EDI,unaff_ESI);
    lua_error();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

