// FUN_00a46a70 @ 00a46a70 body=[[00a46a70, 00a46aee]]


int * FUN_00a46a70(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x174);
  piVar2 = (int *)0x0;
  local_8 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_009e0ab0(param_1,*(undefined4 *)(in_ECX + 0x58),in_ECX);
  }
  local_8 = 0xffffffff;
  local_14 = CONCAT22(*(undefined2 *)(in_ECX + 0x5c),*(undefined2 *)(in_ECX + 0x5c));
  (**(code **)(*piVar2 + 0x100))(local_14);
  ExceptionList = local_10;
  return piVar2;
}

