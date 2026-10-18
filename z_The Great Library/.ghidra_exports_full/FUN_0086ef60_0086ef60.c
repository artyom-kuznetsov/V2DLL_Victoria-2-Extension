// FUN_0086ef60 @ 0086ef60 body=[[0086ef60, 0086ef8c]]


void FUN_0086ef60(void)

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

