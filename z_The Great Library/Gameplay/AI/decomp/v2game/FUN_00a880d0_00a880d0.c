// FUN_00a880d0 @ 00a880d0 body=[[00a880d0, 00a8812e]]


void FUN_00a880d0(void)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0xb0) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0xb0) + 0x38))();
  for (iVar1 = *(int *)(*(int *)(in_ECX + 0x94) + 0xe8);
      (iVar1 != 0 &&
      ((*(int *)(iVar1 + 4) != in_ECX || (*(int *)(iVar1 + 8) != *(int *)(in_ECX + 0xb0)))));
      iVar1 = *(int *)(iVar1 + 0x10)) {
  }
  FUN_0099e660(iVar1);
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  return;
}

