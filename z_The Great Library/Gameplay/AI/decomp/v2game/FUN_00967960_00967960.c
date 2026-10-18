// FUN_00967960 @ 00967960 body=[[00967960, 00967a7f]]


void FUN_00967960(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = FUN_00967f50();
  if (iVar3 != 0) {
    iVar3 = DAT_01258a94;
    if (*(uint *)(unaff_EDI + 0x224) < 0x1269) {
      iVar3 = DAT_01258a98;
    }
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_009c1d40();
    }
    for (piVar1 = *(int **)(iVar3 + 0xa4); (piVar1 != (int *)0x0 && (*piVar1 != unaff_EDI));
        piVar1 = (int *)piVar1[2]) {
    }
    FUN_005f2ae0();
    FUN_00965bd0();
  }
  uVar2 = *(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x1a8);
  iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x1ac);
  if ((*(int *)(unaff_EDI + 0x124) <= iVar3) &&
     ((*(int *)(unaff_EDI + 0x124) < iVar3 || (*(uint *)(unaff_EDI + 0x120) < uVar2)))) {
    *(uint *)(unaff_EDI + 0x120) = uVar2;
    *(int *)(unaff_EDI + 0x124) = iVar3;
    if ((-1 < iVar3) && ((0 < iVar3 || (0x50000 < uVar2)))) {
      *(undefined4 *)(unaff_EDI + 0x120) = 0x50000;
      *(undefined4 *)(unaff_EDI + 0x124) = 0;
    }
  }
  FUN_00409350(&DAT_00ded94d,0);
  iVar3 = FUN_0068bc90(DAT_012588e8,unaff_EDI,0);
  if (iVar3 != 0) {
    FUN_004e7c00();
  }
  *(undefined4 *)(unaff_EDI + 0x274) = 0;
  return;
}

