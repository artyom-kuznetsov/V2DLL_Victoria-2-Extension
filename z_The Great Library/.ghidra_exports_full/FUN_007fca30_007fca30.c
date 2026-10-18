// FUN_007fca30 @ 007fca30 body=[[007fca30, 007fca5d] [007fca60, 007fcbc0]]


void FUN_007fca30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 1;
  iVar6 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  if (1 < iVar6) {
    do {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 * 4) + 0xc);
      if (*(int *)(iVar4 + 300) == 0) {
        FUN_007ebb80();
        uVar3 = FUN_009b6df0();
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) = uVar3;
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      else {
        FUN_004fb5c0();
        FUN_007ebb80();
        uVar2 = FUN_009b6df0();
        uVar3 = uVar2;
        if (*(int *)(iVar4 + 300) != *(int *)(iVar4 + 0x134)) {
          FUN_004fb5c0();
          FUN_007ebb80();
          uVar3 = FUN_009b6df0();
        }
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar5 * 4) = uVar2;
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(iVar4 + iVar1) + 4) = uVar3;
    } while (iVar5 < iVar6);
  }
  return;
}

