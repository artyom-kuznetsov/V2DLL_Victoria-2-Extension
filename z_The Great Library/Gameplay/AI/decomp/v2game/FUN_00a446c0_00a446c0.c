// FUN_00a446c0 @ 00a446c0 body=[[00a446c0, 00a4472c]]


undefined4 FUN_00a446c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0xb84);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00a76ce0(iVar1,*(int *)(in_ECX + 0x90),*(int *)(in_ECX + 0x90) + 0x158);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

