// FUN_00490100 @ 00490100 body=[[00490100, 00490131]]


void FUN_00490100(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int unaff_ESI;
  int *unaff_EDI;
  
  if (in_ECX < 1) {
    *(int *)(unaff_ESI + in_ECX * 4) = *unaff_EDI;
    return;
  }
  do {
    iVar2 = (in_ECX + -1) / 2;
    iVar1 = *(int *)(unaff_ESI + iVar2 * 4);
    if (*unaff_EDI <= iVar1) break;
    *(int *)(unaff_ESI + in_ECX * 4) = iVar1;
    in_ECX = iVar2;
  } while (0 < iVar2);
  *(int *)(unaff_ESI + in_ECX * 4) = *unaff_EDI;
  return;
}

