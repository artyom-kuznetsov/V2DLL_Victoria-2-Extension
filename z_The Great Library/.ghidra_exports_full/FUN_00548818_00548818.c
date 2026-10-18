// FUN_00548818 @ 00548818 body=[[00548818, 00548865]]


uint FUN_00548818(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_EDI;
  
  iVar1 = *(int *)(*unaff_EDI + 4);
  if (*(int *)((int)unaff_EDI + iVar1 + 0xc) == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return CONCAT31((int3)((uint)*unaff_EDI >> 8),1);
  }
  uVar3 = *(uint *)((int)unaff_EDI + iVar1 + 0xc);
  uVar2 = uVar3 | 2;
  if (*(int *)((int)unaff_EDI + iVar1 + 0x38) == 0) {
    uVar2 = uVar3 | 6;
  }
  uVar3 = FUN_00401120(uVar2,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3 & 0xffffff00;
}

