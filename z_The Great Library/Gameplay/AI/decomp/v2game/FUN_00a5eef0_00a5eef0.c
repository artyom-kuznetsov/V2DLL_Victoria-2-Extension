// FUN_00a5eef0 @ 00a5eef0 body=[[00a5eef0, 00a5f035]]


void FUN_00a5eef0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *unaff_ESI;
  
  iVar3 = *(int *)(in_ECX + 0x1a8);
  if (iVar3 == 3) {
    iVar3 = *(int *)(in_ECX + 0x1b0);
  }
  else {
    if (iVar3 == 1) {
      iVar3 = *(int *)(in_ECX + 0x18c);
      *unaff_ESI = *(int *)(in_ECX + 0x1b0) + *(int *)(in_ECX + 0x188);
      unaff_ESI[1] = iVar3;
      return;
    }
    if (iVar3 == 2) {
      iVar3 = *(int *)(in_ECX + 0x188);
      unaff_ESI[1] = *(int *)(in_ECX + 0x1b4) + *(int *)(in_ECX + 0x18c);
      *unaff_ESI = iVar3;
      return;
    }
    if (iVar3 == 0) {
      iVar3 = *(int *)(in_ECX + 0x188);
      unaff_ESI[1] = *(int *)(in_ECX + 0x18c);
      *unaff_ESI = iVar3;
      return;
    }
    if (iVar3 == 4) {
      if (*(int *)(in_ECX + 0x1ac) != 2) {
        *unaff_ESI = *(int *)(in_ECX + 0x1b0) / 2 + *(int *)(in_ECX + 0x188);
        unaff_ESI[1] = *(int *)(in_ECX + 0x1b4) / 2 + *(int *)(in_ECX + 0x18c);
        return;
      }
      iVar3 = *(int *)(in_ECX + 0x1b4);
      iVar1 = *(int *)(in_ECX + 0x18c);
      *unaff_ESI = (*(int *)(in_ECX + 0x1b0) / 2 - *(int *)(in_ECX + 0x1a0) / 2) +
                   *(int *)(in_ECX + 0x188);
      unaff_ESI[1] = iVar3 / 2 + iVar1;
      return;
    }
    if (iVar3 == 5) {
      iVar3 = *(int *)(in_ECX + 0x18c);
      *unaff_ESI = *(int *)(in_ECX + 0x1b0) / 2 + *(int *)(in_ECX + 0x188);
      unaff_ESI[1] = iVar3;
      return;
    }
    if (iVar3 != 6) {
      iVar3 = *(int *)(in_ECX + 0x18c);
      *unaff_ESI = *(int *)(in_ECX + 0x188);
      unaff_ESI[1] = iVar3;
      return;
    }
    iVar3 = *(int *)(in_ECX + 0x1b0) / 2;
  }
  iVar1 = *(int *)(in_ECX + 0x1b4);
  iVar2 = *(int *)(in_ECX + 0x18c);
  *unaff_ESI = iVar3 + *(int *)(in_ECX + 0x188);
  unaff_ESI[1] = iVar1 + iVar2;
  return;
}

