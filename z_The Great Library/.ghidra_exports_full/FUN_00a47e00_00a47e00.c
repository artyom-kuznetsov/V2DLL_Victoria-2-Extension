// FUN_00a47e00 @ 00a47e00 body=[[00a47e00, 00a47e7c]]


void FUN_00a47e00(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 != param_5) {
    do {
      param_5 = param_5 - 1;
      if (param_3 == param_5) {
        return;
      }
      uVar7 = param_5 >> 1;
      if (*(uint *)(param_4 + 8) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(param_4 + 8);
      }
      uVar6 = param_3 >> 1;
      if (*(uint *)(param_2 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(param_2 + 8);
      }
      puVar1 = (undefined4 *)(*(int *)(*(int *)(param_4 + 4) + uVar7 * 4) + (param_5 & 1) * 8);
      iVar3 = *(int *)(*(int *)(param_2 + 4) + uVar6 * 4);
      uVar4 = *(undefined4 *)(iVar3 + 4 + (param_3 & 1) * 8);
      puVar2 = (undefined4 *)(iVar3 + (param_3 & 1) * 8);
      uVar5 = *puVar2;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *puVar1 = uVar5;
      puVar1[1] = uVar4;
      param_3 = param_3 + 1;
    } while (param_3 != param_5);
  }
  return;
}

