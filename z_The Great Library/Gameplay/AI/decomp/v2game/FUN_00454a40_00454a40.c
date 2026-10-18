// FUN_00454a40 @ 00454a40 body=[[00454a40, 00454b22]]


void FUN_00454a40(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    local_8 = *(undefined4 *)(*(int *)(param_1 + iVar3 * 4) + 0x20);
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100
                    );
    FUN_00445430(&local_8);
    iVar2 = *(int *)(iVar2 + 8);
    if ((local_c != iVar2) && (*(char *)(local_c + 0x10) == '\x01')) {
      local_8 = *(undefined4 *)(*(int *)(param_1 + -4 + iVar3 * 4) + 0x20);
      FUN_00445430(&local_8);
      if ((local_18 == iVar2) || (*(char *)(local_18 + 0x10) == '\0')) {
        iVar3 = iVar1 * 2 + 1;
      }
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar1 = iVar3;
  }
  iVar2 = iVar1;
  if (iVar3 == param_3) {
    iVar2 = param_3 + -1;
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
  }
  FUN_00454ca0(param_1,iVar2,param_2,param_4,param_5);
  return;
}

