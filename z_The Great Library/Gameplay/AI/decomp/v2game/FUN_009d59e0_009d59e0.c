// FUN_009d59e0 @ 009d59e0 body=[[009d59e0, 009d5a5d]]


void FUN_009d59e0(void)

{
  int *piVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3dfcb;
  local_10 = ExceptionList;
  piVar1 = in_ECX + 0x14;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x50 + (int)piVar1) = &PTR_FUN_00e3b4f4;
  local_8 = 0;
  in_ECX[1] = (int)&PTR_FUN_00e3b4b8;
  FUN_009d68b0();
  FUN_009d5b00();
  local_8 = 0xffffffff;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x50 + (int)piVar1) = &PTR_FUN_00e3b4b4;
  *piVar1 = (int)std::ios_base::vftable;
  FUN_00aad52d(piVar1);
  ExceptionList = local_10;
  return;
}

