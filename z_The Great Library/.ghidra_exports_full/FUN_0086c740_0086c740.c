// FUN_0086c740 @ 0086c740 body=[[0086c740, 0086c76c]]


void FUN_0086c740(void)

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

