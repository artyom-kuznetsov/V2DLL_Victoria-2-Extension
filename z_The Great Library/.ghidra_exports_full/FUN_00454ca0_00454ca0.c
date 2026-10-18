// FUN_00454ca0 @ 00454ca0 body=[[00454ca0, 00454d6e]]


void FUN_00454ca0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  undefined4 local_8;
  
  if (param_3 < param_2) {
    while( true ) {
      iVar2 = (param_2 + -1) / 2;
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                      100);
      local_8 = *(undefined4 *)(*(int *)(param_1 + iVar2 * 4) + 0x20);
      FUN_00445430(&local_8);
      iVar1 = *(int *)(iVar1 + 8);
      if ((local_10 == iVar1) || (*(char *)(local_10 + 0x10) != '\x01')) break;
      local_8 = *(undefined4 *)(*param_4 + 0x20);
      FUN_00445430(&local_8);
      if (((local_14 != iVar1) && (*(char *)(local_14 + 0x10) != '\0')) ||
         (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
         param_2 = iVar2, iVar2 <= param_3)) break;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

