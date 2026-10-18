// FUN_00533f20 @ 00533f20 body=[[00533f20, 00533fc2]]


void FUN_00533f20(int param_1)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(param_1 + 0x1418);
  if (iVar1 != *(int *)(param_1 + 0x141c)) {
    do {
      if (*(int *)(iVar1 + 4) == *(int *)(unaff_EDI + 4)) break;
      iVar1 = iVar1 + 8;
    } while (iVar1 != *(int *)(param_1 + 0x141c));
  }
  FUN_0042ba80();
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 4) * 4);
  *(undefined4 *)(iVar1 + 0x142c) = 0;
  *(undefined4 *)(iVar1 + 0x1428) = 0x2d2d2d;
  iVar1 = *(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(unaff_EDI + 4) * 4);
  if (*(int *)(iVar1 + 0x40) != 4) {
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  }
  *(undefined4 *)(iVar1 + 0x40) = 4;
  return;
}

