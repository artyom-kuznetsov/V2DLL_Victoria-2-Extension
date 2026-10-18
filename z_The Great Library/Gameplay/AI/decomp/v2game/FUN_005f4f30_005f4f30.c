// FUN_005f4f30 @ 005f4f30 body=[[005f4f30, 005f4fa2]]


void FUN_005f4f30(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_2c [28];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0098fc50();
  FUN_009885d0();
  local_8 = 0;
  uVar1 = FUN_004a0c90(DAT_0125870c,local_2c);
  *(undefined4 *)(in_ECX + 0x10) = uVar1;
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

