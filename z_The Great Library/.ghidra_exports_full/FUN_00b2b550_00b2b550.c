// FUN_00b2b550 @ 00b2b550 body=[[00b2b550, 00b2b5b9]]


undefined4 FUN_00b2b550(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x14) + param_2 * 0x28 + 0x10);
  uVar5 = 0;
  uVar2 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    puVar7 = (uint *)(*(int *)(param_1 + 4) + *(int *)(*(int *)(param_1 + 0x30) + param_2 * 4) * 8);
    uVar3 = uVar2;
    uVar6 = uVar5;
    do {
      uVar5 = *puVar7 + uVar6;
      uVar2 = puVar7[1] + uVar3 + (uint)CARRY4(*puVar7,uVar6);
      if ((uVar2 < uVar3) || ((uVar2 <= uVar3 && (uVar5 < uVar6)))) {
        return 0x80004005;
      }
      uVar4 = uVar4 + 1;
      puVar7 = puVar7 + 2;
      uVar3 = uVar2;
      uVar6 = uVar5;
    } while (uVar4 < uVar1);
  }
  *param_3 = uVar5;
  param_3[1] = uVar2;
  return 0;
}

