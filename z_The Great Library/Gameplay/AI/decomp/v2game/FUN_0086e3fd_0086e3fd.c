// FUN_0086e3fd @ 0086e3fd body=[[0086e3fd, 0086e429]]


void FUN_0086e3fd(void)

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

