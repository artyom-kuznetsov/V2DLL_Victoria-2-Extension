// FUN_0066bc40 @ 0066bc40 body=[[0066bc40, 0066bc57] [0066bc60, 0066bc8f]]


undefined4 FUN_0066bc40(void)

{
  char cVar1;
  int unaff_ESI;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xd94) - *(int *)(unaff_ESI + 0xd90) & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(unaff_ESI + 0xd90) + iVar2 * 4) + 0x10))();
      if (cVar1 != '\0') {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_ESI + 0xd94) - *(int *)(unaff_ESI + 0xd90) >> 2);
  }
  return 0;
}

