// FUN_00aa8110 @ 00aa8110 body=[[00aa8110, 00aa8153] [00aa8157, 00aa8168] [00aa816c, 00aa8174]]


void FUN_00aa8110(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(in_ECX + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0xc) = 0;
      }
    }
    iVar1 = *(int *)(in_ECX + 0x10);
  }
  iVar2 = *(int *)(in_ECX + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*(int *)(*(int *)(in_ECX + 4) + iVar2 * 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(*(int *)(in_ECX + 4) + iVar2 * 4));
    }
  }
  if (*(int *)(in_ECX + 4) == 0) {
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(in_ECX + 4));
}

