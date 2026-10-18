// FUN_00a422a0 @ 00a422a0 body=[[00a422a0, 00a422d8]]


void FUN_00a422a0(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(in_ECX + 0x29) = 0;
  iVar1 = 0;
  iVar2 = *(int *)(in_ECX + 0x14c) - *(int *)(in_ECX + 0x148) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x148) + iVar1 * 4) + 0x38))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return;
}

