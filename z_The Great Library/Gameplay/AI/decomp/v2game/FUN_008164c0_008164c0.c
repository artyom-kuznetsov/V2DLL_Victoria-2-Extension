// FUN_008164c0 @ 008164c0 body=[[008164c0, 00816549]]


void FUN_008164c0(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 != param_5) {
    do {
      param_5 = param_5 - 1;
      if (param_3 == param_5) {
        return;
      }
      uVar8 = param_5;
      if (*(uint *)(param_4 + 8) <= param_5) {
        uVar8 = param_5 - *(uint *)(param_4 + 8);
      }
      uVar7 = param_3;
      if (*(uint *)(param_2 + 8) <= param_3) {
        uVar7 = param_3 - *(uint *)(param_2 + 8);
      }
      puVar1 = *(undefined4 **)(*(int *)(param_4 + 4) + uVar8 * 4);
      puVar2 = *(undefined4 **)(*(int *)(param_2 + 4) + uVar7 * 4);
      uVar3 = puVar2[3];
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar3;
      param_3 = param_3 + 1;
    } while (param_3 != param_5);
  }
  return;
}

