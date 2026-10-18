// FUN_0044f0a0 @ 0044f0a0 body=[[0044f0a0, 0044f130]]


undefined4 FUN_0044f0a0(int param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  param_1 = *(undefined4 *)(param_1 + 0x20);
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100);
  FUN_00445430(&param_1);
  iVar1 = *(int *)(iVar1 + 8);
  if ((local_8 != iVar1) && (*(char *)(local_8 + 0x10) == '\x01')) {
    param_1 = *(undefined4 *)(param_2 + 0x20);
    FUN_00445430(&param_1);
    if ((param_2 == iVar1) || (*(char *)(param_2 + 0x10) == '\0')) {
      return 1;
    }
  }
  return 0;
}

