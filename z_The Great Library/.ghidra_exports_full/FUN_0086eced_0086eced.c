// FUN_0086eced @ 0086eced body=[[0086eced, 0086ed19]]


void FUN_0086eced(void)

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

