// FUN_006a2370 @ 006a2370 body=[[006a2370, 006a24c3]]


void FUN_006a2370(int param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_3 < 0x21) {
    FUN_006a2a40(param_1,param_2,param_5,param_6);
    return;
  }
  iVar2 = (param_3 + 1) / 2;
  iVar1 = param_1 + iVar2 * 4;
  if ((**(int **)(param_4 + 0x10) == 0) && (0 < (*(int **)(param_4 + 0x10))[3])) {
    FUN_0098f1c0();
    **(undefined4 **)(param_4 + 0x10) = local_10;
    *(undefined4 *)(*(int *)(param_4 + 0x10) + 4) = local_10;
    *(undefined4 *)(*(int *)(param_4 + 0x10) + 8) = local_10;
    *(undefined4 *)(*(int *)(param_4 + 0x10) + 0xc) = local_c;
  }
  if (*(int *)(*(int *)(param_4 + 0x10) + 0xc) < iVar2) {
    FUN_006a2370(param_1,iVar1,iVar2,param_4,param_5,param_6);
    param_3 = param_3 - iVar2;
    FUN_006a2370(iVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_006a2ae0(param_1,iVar1);
    param_3 = param_3 - iVar2;
    FUN_006a2ae0(iVar1,param_2,param_4,param_5,param_6);
  }
  FUN_006a2bf0(param_1,iVar1,param_2,iVar2,param_3,param_4,param_5,param_6);
  return;
}

