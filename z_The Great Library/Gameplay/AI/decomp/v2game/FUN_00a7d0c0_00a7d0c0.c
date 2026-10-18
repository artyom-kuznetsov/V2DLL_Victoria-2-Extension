// FUN_00a7d0c0 @ 00a7d0c0 body=[[00a7d0c0, 00a7d13b]]


void FUN_00a7d0c0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(int *)(in_ECX + 0x54) - *(int *)(in_ECX + 0x50)) / 0x60;
  if (0 < iVar2) {
    do {
      FUN_00a7d0c0();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (*(int *)(in_ECX + 0x44) - *(int *)(in_ECX + 0x40)) / 0x1c;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + 0x10 + iVar3);
      if ((iVar1 != 0) && (iVar1 != 2)) {
        _free(*(void **)(*(int *)(in_ECX + 0x40) + 0x18 + iVar3));
      }
      iVar3 = iVar3 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

