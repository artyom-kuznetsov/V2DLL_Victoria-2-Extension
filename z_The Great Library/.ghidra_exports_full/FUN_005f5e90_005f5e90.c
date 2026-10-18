// FUN_005f5e90 @ 005f5e90 body=[[005f5e90, 005f5f26]]


void FUN_005f5e90(void)

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
  FUN_0099f9e0(in_ECX + 0x10);
  FUN_0099f310();
  uVar1 = FUN_00977080();
  local_8 = 0;
  FUN_0099f9e0(uVar1);
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

