// FUN_00a421f0 @ 00a421f0 body=[[00a421f0, 00a42256]]


void FUN_00a421f0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  if ((*(char *)(in_ECX + 0x4d) != (char)param_1) && (*(int *)(in_ECX + 0x140) != 0)) {
    FUN_00a6fb60();
  }
  *(char *)(in_ECX + 0x4d) = (char)param_1;
  iVar2 = 0;
  iVar1 = *(int *)(in_ECX + 0x14c) - *(int *)(in_ECX + 0x148) >> 2;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x148) + iVar2 * 4) + 0x144))(param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

