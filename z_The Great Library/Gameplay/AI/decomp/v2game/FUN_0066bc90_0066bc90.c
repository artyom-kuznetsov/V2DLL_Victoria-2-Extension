// FUN_0066bc90 @ 0066bc90 body=[[0066bc90, 0066bd43] [0066bd47, 0066bd51]]


void FUN_0066bc90(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_EAX + 0xd90);
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_EAX + 0xd94) - iVar2 & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(**(int **)(iVar2 + iVar3 * 4) + 0x10))();
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(*(int *)(in_EAX + 0xd90) + iVar3 * 4) + 0xc))();
      }
      iVar2 = *(int *)(in_EAX + 0xd90);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_EAX + 0xd94) - iVar2 >> 2);
  }
  if (((*(int *)(in_EAX + 0xd24) != 0) &&
      (iVar2 = *(int *)(*(int *)(in_EAX + 0xd24) + 4), iVar2 != 0)) &&
     (*(char *)(iVar2 + 0x67) != '\0')) {
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    }
    iVar2 = *(int *)(in_EAX + 0xd20);
    if ((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + 0x3c), iVar3 != 0)) {
      if (*(int *)(iVar3 + 4) != 0) {
        (**(code **)(*(int *)(*(int *)(iVar3 + 4) + 0x18) + 0x38))();
      }
      iVar3 = *(int *)(iVar2 + 0x3c);
      if (iVar3 != 0) {
        FUN_0046d420(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      *(undefined4 *)(iVar2 + 0x3c) = 0;
    }
  }
  return;
}

