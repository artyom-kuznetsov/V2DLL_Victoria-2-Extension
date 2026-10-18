// FUN_00849c20 @ 00849c20 body=[[00849c20, 00849ce8]]


void FUN_00849c20(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  while (param_3 < param_2) {
    iVar6 = (param_2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar6 * 8);
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_6 * 4) + 0xbe8);
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + param_4[1] * 4) + 0x34);
    uVar4 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar2 + puVar1[1] * 4) + 0x34),&param_5,puVar1,0);
    uVar5 = FUN_00936fc0(uVar3,&param_5,param_4,0);
    if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <=
        (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) break;
    *(undefined4 *)(param_1 + param_2 * 8) = *puVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 8) = puVar1[1];
    param_2 = iVar6;
  }
  *(undefined4 *)(param_1 + param_2 * 8) = *param_4;
  *(undefined4 *)(param_1 + 4 + param_2 * 8) = param_4[1];
  return;
}

