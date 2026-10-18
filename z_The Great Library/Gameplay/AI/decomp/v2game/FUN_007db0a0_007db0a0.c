// FUN_007db0a0 @ 007db0a0 body=[[007db0a0, 007db110]]


undefined4 FUN_007db0a0(void)

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
  iVar1 = FUN_00aae9af(0x1bc);
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_007d99d0(iVar1,*(int *)(in_ECX + 0x8c),*(undefined4 *)(in_ECX + 0x44),
                         *(int *)(in_ECX + 0x8c) + 0x6bcfc);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

