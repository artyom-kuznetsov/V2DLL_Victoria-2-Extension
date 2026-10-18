// FUN_007fe6b0 @ 007fe6b0 body=[[007fe6b0, 007feb7c]]


void FUN_007fe6b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_2c [28];
  undefined4 local_10;
  
  iVar4 = 1;
  iVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  if (1 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 * 4) + 0xc);
      if (*(int *)(iVar1 + 300) != 0) {
        local_10 = *(undefined4 *)(iVar1 + 0x128);
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 300) * 4);
        if (*(char *)(iVar1 + 0x31) == '\0') {
          if ((*(char *)(iVar1 + 0x12d0) == '\0') ||
             (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(iVar1 + 0x1404))) {
            (**(code **)(*DAT_012588e8 + 0x1c))();
            FUN_009b7270(local_2c);
          }
          else {
            FUN_009b7270(local_2c);
          }
        }
        else {
          FUN_009b7270(local_2c);
        }
      }
      uVar2 = FUN_009b6df0();
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar4 * 4) = uVar2;
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 4) = uVar2;
    } while (iVar4 < iVar3);
  }
  return;
}

