// FUN_007fcbd0 @ 007fcbd0 body=[[007fcbd0, 007fcccd]]


void FUN_007fcbd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  iVar5 = 1;
  if (1 < iVar4) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 0xc);
      if (*(int *)(iVar1 + 300) == 0) {
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) = 0x99999999;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 4) = 0x99999999;
      }
      else {
        FUN_004fb5c0();
        uVar2 = FUN_009b6df0();
        uVar3 = uVar2;
        if (*(int *)(iVar1 + 300) != *(int *)(iVar1 + 0x134)) {
          FUN_004fb5c0();
          uVar3 = FUN_009b6df0();
        }
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) = uVar2;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 4) = uVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

