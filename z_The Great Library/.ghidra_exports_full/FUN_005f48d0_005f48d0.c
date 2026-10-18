// FUN_005f48d0 @ 005f48d0 body=[[005f48d0, 005f4944]]


void FUN_005f48d0(void)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004010c0();
  uVar1 = FUN_009885d0();
  local_8 = 0;
  FUN_0099f9e0(uVar1);
  local_8 = 0xffffffff;
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

