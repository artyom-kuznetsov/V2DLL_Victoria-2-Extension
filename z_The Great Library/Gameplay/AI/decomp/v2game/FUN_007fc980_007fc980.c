// FUN_007fc980 @ 007fc980 body=[[007fc980, 007fca2e]]


void FUN_007fc980(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0x20) - *(int *)(unaff_EDI + 0x1c) >> 2;
  iVar4 = 1;
  if (1 < iVar3) {
    do {
      uVar2 = FUN_009b6df0();
      **(undefined4 **)(*(int *)(unaff_EDI + 0x1c) + iVar4 * 4) = uVar2;
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(unaff_EDI + 0x1c) + iVar1) + 4) = uVar2;
    } while (iVar4 < iVar3);
  }
  return;
}

