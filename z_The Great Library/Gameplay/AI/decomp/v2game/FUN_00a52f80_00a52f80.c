// FUN_00a52f80 @ 00a52f80 body=[[00a52f80, 00a52fe9]]


undefined4 FUN_00a52f80(void)

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
  iVar1 = FUN_00aae9af(0x1d0);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00a2d610(iVar1,*(undefined4 *)(in_ECX + 0xe4),*(undefined4 *)(in_ECX + 0x44));
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

