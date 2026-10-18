// FUN_00aaab70 @ 00aaab70 body=[[00aaab70, 00aaabf1]]


void FUN_00aaab70(void)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b36760;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = FUN_00aa9e20();
  local_8._0_1_ = 1;
  FUN_00aa9be0(uVar1);
  FUN_00aa9c00();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0086a050();
  ExceptionList = local_10;
  return;
}

