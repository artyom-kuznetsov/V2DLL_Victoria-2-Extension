// FUN_0098cae0 @ 0098cae0 body=[[0098cae0, 0098cb3f]]


undefined4 FUN_0098cae0(void)

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
  iVar1 = FUN_00aae9af(0x168);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0098cb50();
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

