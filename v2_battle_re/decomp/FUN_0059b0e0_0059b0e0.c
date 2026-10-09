// FUN_0059b0e0 @ 0059b0e0

void FUN_0059b0e0(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0xec + in_ECX * 4);
  if (iVar1 != 0) {
    if (*(int *)(in_EAX + 0x6c + in_ECX * 4) == 0) {
      *(int *)(in_EAX + 0x6c + in_ECX * 4) = iVar1;
      *(undefined4 *)(in_EAX + 0xec + in_ECX * 4) = 0;
      return;
    }
    if ((*(int *)(*(int *)(iVar1 + 0x38) + 0x23c) < 1) &&
       ((((iVar2 = in_ECX + 1, iVar2 < 0 ||
          ((iVar2 < 0x1f && (*(int *)(in_EAX + 0x6c + iVar2 * 4) == 0)))) && (iVar2 < 0x1e)) ||
        ((iVar2 = in_ECX + -1, -1 < iVar2 &&
         ((0x1e < iVar2 || (*(int *)(in_EAX + 0x6c + iVar2 * 4) == 0)))))))) {
      *(int *)(in_EAX + 0x6c + iVar2 * 4) = iVar1;
      *(undefined4 *)(in_EAX + 0xec + in_ECX * 4) = 0;
    }
  }
  return;
}


