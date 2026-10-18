// FUN_0092f4a0 @ 0092f4a0 body=[[0092f4a0, 0092f56e]]


undefined4 FUN_0092f4a0(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x20) != 0) {
    return 1;
  }
  if (*(char *)(unaff_ESI + 0x60) != '\0') {
    return 1;
  }
  if ((*(int **)(unaff_ESI + 0x24) != (int *)0x0) &&
     (((iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x24) + 0x1c))(), iVar2 == 0x336 ||
       (iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x24) + 0x1c))(), iVar2 == 0x93a)) &&
      (*(int *)(*(int *)(unaff_ESI + 0x24) + 0x14) == *(int *)(unaff_ESI + 0xc))))) {
    return 1;
  }
  if (((*(int **)(unaff_ESI + 0x24) != (int *)0x0) &&
      ((iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x24) + 0x1c))(), iVar2 == 0x336 ||
       (iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x24) + 0x1c))(), iVar2 == 0x93a)))) &&
     (*(int *)(*(int *)(unaff_ESI + 0x24) + 0xc) == *(int *)(unaff_ESI + 0xc))) {
    return 1;
  }
  cVar1 = FUN_0092e240();
  if (cVar1 == '\0') {
    if ((*(int *)(unaff_ESI + 0x28) != 0) &&
       (*(int *)(*(int *)(unaff_ESI + 0x28) + 0xc) == *(int *)(unaff_ESI + 0xc))) {
      return 1;
    }
    if (*(int *)(unaff_ESI + 0x38) == 0) {
      return 0;
    }
  }
  return 1;
}

