// FUN_0086e32d @ 0086e32d body=[[0086e32d, 0086e359]]


void FUN_0086e32d(void)

{
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x24) != 1) {
    FUN_00aaa630(unaff_EDI,unaff_EBX);
    lua_error();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

