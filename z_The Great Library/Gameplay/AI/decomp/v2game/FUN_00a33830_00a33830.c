// FUN_00a33830 @ 00a33830 body=[[00a33830, 00a338a8]]


void FUN_00a33830(void)

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
  iVar1 = FUN_00aae9af(0x48);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a34f00(iVar1,*(undefined4 *)(DAT_01258b40 + 0xa4),*(undefined4 *)(in_ECX + 0x48),
                         *(undefined4 *)(DAT_01258b40 + 0xa4));
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x20) + 0x38) + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}

