// FUN_00a42260 @ 00a42260 body=[[00a42260, 00a42298]]


void FUN_00a42260(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(in_ECX + 0x29) = 1;
  iVar1 = *(int *)(in_ECX + 0x14c) - *(int *)(in_ECX + 0x148) >> 2;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x148) + iVar2 * 4) + 0x34))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

