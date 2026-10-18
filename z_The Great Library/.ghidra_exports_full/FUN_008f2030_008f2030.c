// FUN_008f2030 @ 008f2030 body=[[008f2030, 008f210c]]


bool FUN_008f2030(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = FUN_00969480();
    return iVar2 == *(int *)(in_ECX + 0x1c);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = FUN_00969480();
    return iVar2 == *(int *)(in_ECX + 0x1c);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_00969480();
    return iVar2 == *(int *)(in_ECX + 0x1c);
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar1 != '\0') {
    iVar2 = FUN_009665d0(*(undefined4 *)(param_1 + 0x14));
    return iVar2 == *(int *)(in_ECX + 0x1c);
  }
  return false;
}

