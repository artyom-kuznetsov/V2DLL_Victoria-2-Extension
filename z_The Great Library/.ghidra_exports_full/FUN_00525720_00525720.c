// FUN_00525720 @ 00525720 body=[[00525720, 0052576b]]


void FUN_00525720(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  
  iVar4 = *unaff_EDI;
  iVar3 = 0;
  if (0 < (int)(unaff_EDI[1] - iVar4 & 0xfffffff8U)) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x1234) + iVar3 * 4) != 0) {
        uVar1 = *(undefined4 *)(iVar4 + 4 + iVar3 * 8);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1234) + iVar3 * 4);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar4 + iVar3 * 8);
        *(undefined4 *)(iVar2 + 0x14) = uVar1;
      }
      iVar4 = *unaff_EDI;
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI[1] - iVar4 >> 3);
  }
  return;
}

