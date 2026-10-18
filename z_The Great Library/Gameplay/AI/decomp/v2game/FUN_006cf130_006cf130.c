// FUN_006cf130 @ 006cf130 body=[[006cf130, 006cf1b0]]


uint FUN_006cf130(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int in_EDX;
  char *unaff_ESI;
  bool bVar3;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if (iVar1 == 0) {
    if (*unaff_ESI == '\0') {
      uVar2 = FUN_0098ab20();
      return uVar2;
    }
    uVar2 = FUN_0098ab20();
    return uVar2;
  }
  if (iVar1 == 1) {
    if (*unaff_ESI == '\0') {
      if (*(int *)(in_EDX + 0x2c) < *(int *)(in_ECX + 0x2c)) {
        return 0;
      }
      if (*(int *)(in_ECX + 0x2c) < *(int *)(in_EDX + 0x2c)) {
        return 1;
      }
      bVar3 = *(uint *)(in_ECX + 0x28) < *(uint *)(in_EDX + 0x28);
    }
    else {
      if (*(int *)(in_ECX + 0x2c) < *(int *)(in_EDX + 0x2c)) {
        return 0;
      }
      if (*(int *)(in_EDX + 0x2c) < *(int *)(in_ECX + 0x2c)) {
        return 1;
      }
      bVar3 = *(uint *)(in_EDX + 0x28) < *(uint *)(in_ECX + 0x28);
    }
  }
  else {
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U & 0xffffff00;
    }
    if (*unaff_ESI == '\0') {
      if (*(int *)(in_EDX + 0x24) < *(int *)(in_ECX + 0x24)) {
        return 0;
      }
      if (*(int *)(in_ECX + 0x24) < *(int *)(in_EDX + 0x24)) {
        return 1;
      }
      bVar3 = *(uint *)(in_ECX + 0x20) < *(uint *)(in_EDX + 0x20);
    }
    else {
      if (*(int *)(in_ECX + 0x24) < *(int *)(in_EDX + 0x24)) {
        return 0;
      }
      if (*(int *)(in_EDX + 0x24) < *(int *)(in_ECX + 0x24)) {
        return 1;
      }
      bVar3 = *(uint *)(in_EDX + 0x20) < *(uint *)(in_ECX + 0x20);
    }
  }
  if (!bVar3) {
    return 0;
  }
  return 1;
}

