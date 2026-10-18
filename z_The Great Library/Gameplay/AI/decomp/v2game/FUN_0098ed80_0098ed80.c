// FUN_0098ed80 @ 0098ed80 body=[[0098ed80, 0098ee2a]]


void FUN_0098ed80(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  if (0x1f < (int)param_3) {
    uVar2 = param_3 >> 5;
    do {
      FUN_0098f250();
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_0098f250();
  iVar1 = 0x20;
  if (0x20 < (int)param_3) {
    do {
      (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
      FUN_0098f320(param_2);
      FUN_0098f420(*(undefined4 *)(*(int *)(param_4 + 0x10) + 4),param_1,param_3,param_5);
      iVar1 = iVar1 * 4;
    } while (iVar1 < (int)param_3);
  }
  return;
}

