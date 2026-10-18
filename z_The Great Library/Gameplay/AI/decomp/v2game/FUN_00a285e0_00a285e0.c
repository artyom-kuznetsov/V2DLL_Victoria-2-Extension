// FUN_00a285e0 @ 00a285e0 body=[[00a285e0, 00a28644]]


undefined4 FUN_00a285e0(undefined4 param_1)

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
  iVar1 = FUN_00aae9af(0x184);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00a2ef00(iVar1,param_1);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

