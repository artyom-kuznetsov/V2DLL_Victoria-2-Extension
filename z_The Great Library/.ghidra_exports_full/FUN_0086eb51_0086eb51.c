// FUN_0086eb51 @ 0086eb51 body=[[0086eb51, 0086eb7d]]


void FUN_0086eb51(void)

{
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  if (*(int *)(unaff_EBP + -0x24) != 1) {
    FUN_00aaa630(unaff_ESI,unaff_EBX);
    lua_error();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

