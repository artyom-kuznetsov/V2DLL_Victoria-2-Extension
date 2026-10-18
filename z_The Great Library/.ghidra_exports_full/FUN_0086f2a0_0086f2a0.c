// FUN_0086f2a0 @ 0086f2a0 body=[[0086f2a0, 0086f2cc]]


void FUN_0086f2a0(void)

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

