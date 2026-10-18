// FUN_00a37aa0 @ 00a37aa0 body=[[00a37aa0, 00a37b03]]


undefined4 *
FUN_00a37aa0(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,int param_7)

{
  uint uVar1;
  
  for (; param_3 != param_5; param_3 = param_3 + 1) {
    uVar1 = param_3;
    if (*(uint *)(param_2 + 8) <= param_3) {
      uVar1 = param_3 - *(uint *)(param_2 + 8);
    }
    FUN_00408ed0(*(undefined4 *)(*(int *)(param_2 + 4) + uVar1 * 4),0,0xffffffff);
    param_7 = param_7 + 1;
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return param_1;
}

