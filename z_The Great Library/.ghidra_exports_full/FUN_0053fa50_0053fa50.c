// FUN_0053fa50 @ 0053fa50 body=[[0053fa50, 0053fa92]]


void FUN_0053fa50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x1574) - *(int *)(param_1 + 0x1570) >> 2;
  if (0 < iVar2) {
    do {
      FUN_004716f0(*(undefined4 *)(*(int *)(param_1 + 0x1570) + iVar1 * 4),param_1 + 0x1c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return;
}

