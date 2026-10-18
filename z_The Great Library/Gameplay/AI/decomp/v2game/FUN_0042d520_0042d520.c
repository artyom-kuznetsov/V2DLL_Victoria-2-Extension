// FUN_0042d520 @ 0042d520 body=[[0042d520, 0042d5bc]]


void FUN_0042d520(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  bool bVar4;
  int local_8;
  
  iVar2 = param_1 * 2 + 2;
  bVar4 = iVar2 == param_2;
  iVar1 = param_1;
  iVar3 = param_1;
  if (iVar2 < param_2) {
    do {
      FUN_00425f80(&param_1);
      FUN_00425f80(&local_8);
      iVar3 = iVar2;
      if (local_8 < param_1) {
        iVar3 = iVar2 + -1;
      }
      *(undefined4 *)(unaff_EDI + iVar1 * 8) = *(undefined4 *)(unaff_EDI + iVar3 * 8);
      *(undefined4 *)(unaff_EDI + 4 + iVar1 * 8) = *(undefined4 *)(unaff_EDI + 4 + iVar3 * 8);
      iVar2 = iVar3 * 2 + 2;
      iVar1 = iVar3;
    } while (iVar2 < param_2);
    bVar4 = iVar2 == param_2;
  }
  if (bVar4) {
    *(undefined4 *)(unaff_EDI + iVar3 * 8) = *(undefined4 *)(unaff_EDI + -8 + param_2 * 8);
    *(undefined4 *)(unaff_EDI + 4 + iVar3 * 8) = *(undefined4 *)(unaff_EDI + -4 + param_2 * 8);
  }
  FUN_0042d5c0();
  return;
}

