// FUN_00816550 @ 00816550 body=[[00816550, 008165d8] [008165e0, 008166a2]]


void FUN_00816550(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 uint param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_10;
  
  param_4 = param_4 - param_2;
  iVar12 = param_4;
  iVar11 = param_6 - param_2;
  while (iVar7 = iVar12, iVar7 != 0) {
    iVar12 = iVar11 % iVar7;
    iVar11 = iVar7;
  }
  if (iVar11 < (int)(param_6 - param_2)) {
    for (; 0 < iVar11; iVar11 = iVar11 + -1) {
      uVar8 = iVar11 + param_2;
      iVar12 = param_1;
      uVar9 = param_2;
      local_24 = param_1;
      local_10 = uVar8;
      if (param_4 + uVar8 != param_6) {
        local_1c = param_1;
        uVar9 = param_4 + uVar8;
      }
      do {
        uVar13 = uVar9;
        uVar9 = uVar13;
        if (*(uint *)(local_24 + 8) <= uVar13) {
          uVar9 = uVar13 - *(uint *)(local_24 + 8);
        }
        if (*(uint *)(iVar12 + 8) <= local_10) {
          local_10 = local_10 - *(uint *)(iVar12 + 8);
        }
        puVar1 = *(undefined4 **)(*(int *)(local_24 + 4) + uVar9 * 4);
        puVar2 = *(undefined4 **)(*(int *)(iVar12 + 4) + local_10 * 4);
        uVar3 = puVar2[1];
        uVar4 = *puVar2;
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
        *puVar1 = uVar4;
        puVar1[1] = uVar3;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        if (param_4 < (int)(param_6 - uVar13)) {
          local_20 = uVar13 + param_4;
          piVar10 = &local_24;
        }
        else {
          local_2c = param_1;
          local_28 = (param_2 - (param_6 - uVar13)) + param_4;
          piVar10 = &local_2c;
        }
        iVar12 = local_24;
        uVar9 = piVar10[1];
        local_24 = *piVar10;
        local_10 = uVar13;
      } while (piVar10[1] != uVar8);
    }
  }
  return;
}

