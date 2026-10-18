// FUN_005821e0 @ 005821e0 body=[[005821e0, 0058224e]]


void FUN_005821e0(void)

{
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b3fb18;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_0043a750(in_ECX + 0x3c);
  FUN_00528c00();
  ExceptionList = local_14;
  return;
}

