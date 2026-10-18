// FUN_00a4c9a0 @ 00a4c9a0 body=[[00a4c9a0, 00a4ca6f]]


undefined4 FUN_00a4c9a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00b488f6;
  local_4c = ExceptionList;
  piVar1 = *(int **)(in_ECX + 0xac);
  ExceptionList = &local_4c;
  *(int *)(in_ECX + 300) = *(int *)(in_ECX + 300) + 1;
  if (piVar1 == (int *)0x0) {
    iVar2 = FUN_00aae9af(0x18c);
    local_44 = 4;
    if (iVar2 != 0) {
      uVar3 = FUN_00a81f60();
      ExceptionList = local_4c;
      return uVar3;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x34))(piVar1,0,0);
    iVar2 = FUN_00aae9af(0x18c);
    local_44 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_00a81f60();
      ExceptionList = local_4c;
      return uVar3;
    }
  }
  ExceptionList = local_4c;
  return 0;
}

