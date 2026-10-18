// FUN_0066bbf0 @ 0066bbf0 body=[[0066bbf0, 0066bc07] [0066bc10, 0066bc3f]]


undefined4 FUN_0066bbf0(void)

{
  char cVar1;
  int unaff_ESI;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xd84) - *(int *)(unaff_ESI + 0xd80) & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(unaff_ESI + 0xd80) + iVar2 * 4) + 0x1c))();
      if (cVar1 != '\0') {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_ESI + 0xd84) - *(int *)(unaff_ESI + 0xd80) >> 2);
  }
  return 0;
}

