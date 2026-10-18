// FUN_00a37940 @ 00a37940 body=[[00a37940, 00a379cc]]


undefined4 *
FUN_00a37940(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,int *param_8,undefined4 param_9,int param_10)

{
  uint uVar1;
  int iVar2;
  
  for (; param_4 != param_7; param_4 = param_4 + 1) {
    if (param_2 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *param_2;
    }
    uVar1 = param_4;
    if (*(uint *)(iVar2 + 8) <= param_4) {
      uVar1 = param_4 - *(uint *)(iVar2 + 8);
    }
    FUN_00408ed0(*(undefined4 *)(*(int *)(iVar2 + 4) + uVar1 * 4),0,0xffffffff);
    param_10 = param_10 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_10;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return param_1;
}

