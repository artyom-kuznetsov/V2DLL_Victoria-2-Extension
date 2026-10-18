// FUN_005e97c0 @ 005e97c0 body=[[005e97c0, 005e982e]]


void FUN_005e97c0(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00979160(*(undefined4 *)(in_ECX + 0x10));
  local_8 = 0;
  FUN_0099f9e0(uVar1);
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

