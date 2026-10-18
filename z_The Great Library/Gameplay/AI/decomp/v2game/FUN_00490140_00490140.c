// FUN_00490140 @ 00490140 body=[[00490140, 004901a6]]


void FUN_00490140(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  int *unaff_EDI;
  bool bVar4;
  
  iVar1 = 2;
  iVar3 = 0;
  bVar4 = in_EDX == 2;
  iVar2 = iVar3;
  if (2 < in_EDX) {
    do {
      iVar2 = iVar1;
      if (*(int *)(in_ECX + iVar1 * 4) < *(int *)(in_ECX + -4 + iVar1 * 4)) {
        iVar2 = iVar1 + -1;
      }
      *(undefined4 *)(in_ECX + iVar3 * 4) = *(undefined4 *)(in_ECX + iVar2 * 4);
      iVar1 = iVar2 * 2 + 2;
      bVar4 = iVar1 == in_EDX;
      iVar3 = iVar2;
    } while (iVar1 < in_EDX);
  }
  if (bVar4) {
    *(undefined4 *)(in_ECX + iVar2 * 4) = *(undefined4 *)(in_ECX + -4 + in_EDX * 4);
    iVar2 = in_EDX + -1;
  }
  if (iVar2 < 1) {
    *(int *)(in_ECX + iVar2 * 4) = *unaff_EDI;
    return;
  }
  do {
    iVar3 = (iVar2 + -1) / 2;
    iVar1 = *(int *)(in_ECX + iVar3 * 4);
    if (*unaff_EDI <= iVar1) break;
    *(int *)(in_ECX + iVar2 * 4) = iVar1;
    iVar2 = iVar3;
  } while (0 < iVar3);
  *(int *)(in_ECX + iVar2 * 4) = *unaff_EDI;
  return;
}

