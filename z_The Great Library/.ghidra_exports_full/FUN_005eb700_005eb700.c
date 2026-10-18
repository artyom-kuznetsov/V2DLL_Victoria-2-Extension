// FUN_005eb700 @ 005eb700 body=[[005eb700, 005eb76f]]


void FUN_005eb700(void)

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
  uVar1 = FUN_0043acd0(in_ECX + 0x10,local_2c);
  local_8 = 0;
  FUN_0099f9e0(uVar1);
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

