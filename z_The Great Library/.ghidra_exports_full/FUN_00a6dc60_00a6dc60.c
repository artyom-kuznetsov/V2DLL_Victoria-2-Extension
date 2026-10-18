// FUN_00a6dc60 @ 00a6dc60 body=[[00a6dc60, 00a6dc98] [00a6dca0, 00a6dcf5]]


void FUN_00a6dc60(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + -0x14);
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 4))();
  }
  (**(code **)(**(int **)(in_ECX + 0x1a4) + 0x38))();
  for (iVar2 = *(int *)(in_ECX + 0x248); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar3 = (int *)(**(code **)(*(int *)(in_ECX + 0x1d8) + 4))(iVar2);
    (**(code **)(*piVar3 + 0x38))();
  }
  for (iVar2 = *(int *)(in_ECX + 600); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
    piVar3 = (int *)(**(code **)(*(int *)(in_ECX + 0x1fc) + 4))(iVar2);
    (**(code **)(*piVar3 + 0x38))();
  }
  return;
}

