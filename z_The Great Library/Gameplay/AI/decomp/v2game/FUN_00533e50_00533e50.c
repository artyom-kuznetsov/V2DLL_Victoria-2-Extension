// FUN_00533e50 @ 00533e50 body=[[00533e50, 00533f16]]


void FUN_00533e50(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 4) * 4);
  if (*(int *)(iVar1 + 0x142c) != 0) {
    FUN_00533f20(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0x142c) * 4));
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 4) * 4);
  *(undefined4 *)(iVar1 + 0x1428) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x142c) = *(undefined4 *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x141c);
  iVar2 = *(int *)(param_1 + 0x1418);
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(unaff_ESI + 4)) break;
      iVar2 = iVar2 + 8;
    } while (iVar2 != iVar1);
    if (iVar2 != iVar1) goto LAB_00533ee7;
  }
  FUN_004d61d0();
LAB_00533ee7:
  iVar1 = *(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(unaff_ESI + 4) * 4);
  if (*(int *)(iVar1 + 0x40) != 5) {
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  }
  *(undefined4 *)(iVar1 + 0x40) = 5;
  return;
}

