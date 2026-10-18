// FUN_00926890 @ 00926890 body=[[00926890, 009268f6]]


undefined4 FUN_00926890(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x78);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_006186f0(iVar1,param_2);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

