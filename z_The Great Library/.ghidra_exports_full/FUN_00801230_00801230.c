// FUN_00801230 @ 00801230 body=[[00801230, 008014ca]]


void FUN_00801230(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  iVar1 = *(int *)(DAT_012588e8 + 0xb60);
  iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  iVar6 = 1;
  if (1 < iVar3) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6 * 4) + 0xc);
      uVar4 = FUN_009b6df0();
      if ((*(int *)(iVar2 + 300) == iVar1) || (*(int *)(iVar2 + 0x134) == iVar1)) {
        plVar5 = (longlong *)FUN_00969f90(iVar2 + 0x1a8);
        if ((float)((float10)*plVar5 * (float10)3.0517578125e-05) <= DAT_00f177e0) {
          uVar4 = FUN_009b6df0();
        }
        else {
          uVar4 = FUN_009b6df0();
        }
      }
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar6 * 4) = uVar4;
      iVar2 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 4) = uVar4;
    } while (iVar6 < iVar3);
  }
  return;
}

