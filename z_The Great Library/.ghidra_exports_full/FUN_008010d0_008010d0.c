// FUN_008010d0 @ 008010d0 body=[[008010d0, 0080122a]]


void FUN_008010d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  iVar4 = 1;
  if (1 < iVar2) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 * 4) + 0xc);
      uVar3 = FUN_009b6df0();
      if (*(char *)(*(int *)(DAT_012588e8 + 0xb24) + 8) == '\0') {
        if (0 < *(int *)(iVar1 + 0x164)) {
          FUN_004cb060();
          goto LAB_008011f3;
        }
      }
      else if (*(int *)(iVar1 + 0x16c) != 0) {
        FUN_00494680();
LAB_008011f3:
        FUN_007ebb80();
        uVar3 = FUN_009b6df0();
      }
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar4 * 4) = uVar3;
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 4) = uVar3;
    } while (iVar4 < iVar2);
  }
  return;
}

