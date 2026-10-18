// FUN_005ed5f0 @ 005ed5f0 body=[[005ed5f0, 005ed638]]


void FUN_005ed5f0(undefined4 param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int in_ECX;
  
  uVar1 = *(undefined1 *)(*(int *)(in_ECX + 0x10) + 0x20);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    *(undefined1 *)(*(int *)(in_ECX + 0x10) + 0x20) = 1;
  }
  piVar2 = *(int **)(in_ECX + 0x10);
  FUN_009a0940(param_1);
  (**(code **)(*piVar2 + 4))(param_1);
  *(undefined1 *)(*(int *)(in_ECX + 0x10) + 0x20) = uVar1;
  return;
}

