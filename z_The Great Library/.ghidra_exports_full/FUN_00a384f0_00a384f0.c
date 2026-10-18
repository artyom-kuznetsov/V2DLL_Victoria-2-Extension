// FUN_00a384f0 @ 00a384f0 body=[[00a384f0, 00a38596]]


undefined4 FUN_00a384f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3db06;
  local_10 = ExceptionList;
  if (DAT_01258a88 == 1) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0xd8);
    local_8 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_00a79f20(iVar1,param_1);
      ExceptionList = local_10;
      return uVar2;
    }
  }
  else {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x118);
    local_8 = 1;
    if (iVar1 != 0) {
      uVar2 = FUN_00a7a580(param_1,param_2);
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

