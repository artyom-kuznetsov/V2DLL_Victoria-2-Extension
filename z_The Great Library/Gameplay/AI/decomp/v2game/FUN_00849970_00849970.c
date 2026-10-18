// FUN_00849970 @ 00849970 body=[[00849970, 00849a58]]


void FUN_00849970(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = param_2;
  while( true ) {
    iVar7 = iVar3 * 2 + 2;
    if (param_3 <= iVar7) break;
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_6 * 4) + 0xbe8);
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + *(int *)(param_1 + 4 + iVar7 * 8) * 4) + 0x34);
    iVar6 = param_1 + iVar7 * 8;
    uVar4 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + *(int *)(iVar6 + -4) * 4) + 0x34),&param_5
                         ,iVar6 + -8,0);
    uVar5 = FUN_00936fc0(uVar2,&param_5,iVar6,0);
    if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
        (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
      iVar7 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 8) = *(undefined4 *)(param_1 + iVar7 * 8);
    *(undefined4 *)(param_1 + 4 + iVar3 * 8) = *(undefined4 *)(param_1 + 4 + iVar7 * 8);
    iVar3 = iVar7;
  }
  iVar6 = iVar3;
  if (iVar7 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    iVar6 = param_3 + -1;
    *(undefined4 *)(param_1 + 4 + iVar3 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
  }
  FUN_00849c20(param_1,iVar6,param_2,param_4,param_5,param_6);
  return;
}

