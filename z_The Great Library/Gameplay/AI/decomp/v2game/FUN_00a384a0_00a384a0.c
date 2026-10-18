// FUN_00a384a0 @ 00a384a0 body=[[00a384a0, 00a384ef]]


void FUN_00a384a0(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x244);
  local_8 = 0;
  if (iVar1 != 0) {
    GetForegroundWindow();
    FUN_00a799c0(iVar1);
  }
  ExceptionList = local_10;
  return;
}

