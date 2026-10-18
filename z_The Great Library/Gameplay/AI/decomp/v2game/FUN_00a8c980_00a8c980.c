// FUN_00a8c980 @ 00a8c980 body=[[00a8c980, 00a8c9a0]]


void FUN_00a8c980(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = 0;
  iVar3 = 0x100;
  do {
    iVar2 = iVar3 + iVar1 >> 1;
    if (*(int *)(unaff_ESI + iVar2 * 4) <= unaff_EDI) {
      iVar1 = iVar2;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
  } while (iVar2 - iVar1 != 1);
  return;
}

