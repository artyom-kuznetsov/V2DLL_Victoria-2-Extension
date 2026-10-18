// FUN_0098eb80 @ 0098eb80 body=[[0098eb80, 0098ec85]]


void FUN_0098eb80(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int local_10;
  undefined4 local_c;
  
  if (param_3 < 0x21) {
    FUN_0098f250(param_1,param_2,param_5);
    return;
  }
  iVar1 = (param_3 + 1) / 2;
  if ((**(int **)(param_4 + 0x10) == 0) && (0 < (*(int **)(param_4 + 0x10))[3])) {
    FUN_0098f1c0();
    **(undefined4 **)(param_4 + 0x10) = local_10;
    *(int *)(*(int *)(param_4 + 0x10) + 4) = local_10;
    *(int *)(*(int *)(param_4 + 0x10) + 8) = local_10;
    *(undefined4 *)(*(int *)(param_4 + 0x10) + 0xc) = local_c;
  }
  if (*(int *)(*(int *)(param_4 + 0x10) + 0xc) < iVar1) {
    local_10 = param_1 + iVar1 * 4;
    FUN_0098eb80(param_1,local_10,iVar1,param_4,param_5);
    param_3 = param_3 - iVar1;
    FUN_0098eb80(local_10,param_2,param_3,param_4,param_5);
  }
  else {
    local_10 = param_1 + iVar1 * 4;
    FUN_0098ed80(param_1,local_10,iVar1,param_4,param_5);
    param_3 = param_3 - iVar1;
    FUN_0098ed80(local_10,param_2,param_3,param_4,param_5);
  }
  FUN_0098ee30(param_1,local_10,param_2,iVar1,param_3,param_4,param_5);
  return;
}

