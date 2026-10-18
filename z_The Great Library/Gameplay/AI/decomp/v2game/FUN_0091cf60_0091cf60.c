// FUN_0091cf60 @ 0091cf60 body=[[0091cf60, 0091cfc6]]


undefined4 FUN_0091cf60(undefined4 param_1)

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
  iVar1 = FUN_00aae9af(200);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00948a80(iVar1,param_1);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

