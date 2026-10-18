// FUN_00a6dd00 @ 00a6dd00 body=[[00a6dd00, 00a6dd74]]


void FUN_00a6dd00(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x4f) = 1;
  (**(code **)(**(int **)(in_ECX + 0x1a4) + 0x34))();
  for (iVar1 = *(int *)(in_ECX + 0x248); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x1d8) + 4))(iVar1);
    (**(code **)(*piVar2 + 0x34))();
  }
  for (iVar1 = *(int *)(in_ECX + 600); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    piVar2 = (int *)(**(code **)(*(int *)(in_ECX + 0x1fc) + 4))(iVar1);
    (**(code **)(*piVar2 + 0x34))();
  }
  return;
}

