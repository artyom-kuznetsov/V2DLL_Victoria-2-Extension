// FUN_00a6d5e0 @ 00a6d5e0 body=[[00a6d5e0, 00a6d769]]


void FUN_00a6d5e0(float param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = *(int *)(in_ECX + 0x248);
  *(float *)(in_ECX + 0x1d0) = param_1;
  if (iVar2 != 0) {
    do {
      piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x1d8) + 4))(iVar2);
      (**(code **)(*piVar1 + 0x20))(param_1 + 0.1);
      iVar2 = *(int *)(iVar2 + 0x20);
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(in_ECX + 600);
  if (iVar2 != 0) {
    do {
      piVar1 = (int *)(**(code **)(*(int *)(in_ECX + 0x1fc) + 4))(iVar2);
      (**(code **)(*piVar1 + 0x20))(param_1 + 0.1);
      iVar2 = *(int *)(iVar2 + 0x20);
    } while (iVar2 != 0);
  }
  (**(code **)(**(int **)(in_ECX + 0x280) + 0x20))(param_1 + 0.2);
  (**(code **)(**(int **)(in_ECX + 0x27c) + 0x20))(param_1 + 0.2);
  (**(code **)(**(int **)(in_ECX + 0x1a4) + 0x20))(param_1);
  param_1 = param_1 + 0.01;
  (**(code **)(**(int **)(in_ECX + 0x290) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x294) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x28c) + 0x20))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x288) + 0x20))(param_1);
  return;
}

