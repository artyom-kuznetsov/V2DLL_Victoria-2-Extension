// FUN_00a3fee0 @ 00a3fee0 body=[[00a3fee0, 00a3ff59]]


undefined4 FUN_00a3fee0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(short *)(in_ECX + 0xbc) == -1) {
    ExceptionList = &local_10;
    uVar1 = FUN_00a423c0();
    *(undefined2 *)(in_ECX + 0xbc) = uVar1;
  }
  iVar2 = FUN_00aae9af(0x158);
  local_8 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00a41160();
    ExceptionList = local_10;
    return uVar3;
  }
  ExceptionList = local_10;
  return 0;
}

