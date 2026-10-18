// FUN_00a47e80 @ 00a47e80 body=[[00a47e80, 00a47ed7] [00a47ee0, 00a47fc6]]


int FUN_00a47e80(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                uint param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar14 = param_6 - param_2;
  local_8 = param_4 - param_2;
  local_c = iVar14;
  if (param_6 < param_2) {
  }
  iVar6 = 0;
  iVar8 = iVar14;
  iVar10 = local_8;
  if (local_8 != 0) {
    do {
      local_c = iVar10;
      iVar6 = iVar8 / local_c;
      iVar10 = iVar8 % local_c;
      iVar8 = local_c;
    } while (iVar10 != 0);
  }
  if (local_c < iVar14) {
    while (0 < local_c) {
      uVar1 = param_2 + local_c;
      local_1c = param_1;
      if (local_8 + uVar1 == param_6) {
        piVar7 = &param_1;
      }
      else {
        local_24 = param_1;
        local_10 = uVar1;
        local_20 = local_8 + uVar1;
        piVar7 = &local_24;
      }
      local_2c = *piVar7;
      uVar12 = uVar1;
      uVar13 = piVar7[1];
      do {
        uVar9 = uVar13 >> 1;
        if (*(uint *)(local_2c + 8) <= uVar9) {
          uVar9 = uVar9 - *(uint *)(local_2c + 8);
        }
        uVar11 = uVar12 >> 1;
        if (*(uint *)(local_1c + 8) <= uVar11) {
          uVar11 = uVar11 - *(uint *)(local_1c + 8);
        }
        puVar2 = (undefined4 *)(*(int *)(*(int *)(local_2c + 4) + uVar9 * 4) + (uVar13 & 1) * 8);
        iVar14 = *(int *)(*(int *)(local_1c + 4) + uVar11 * 4);
        uVar4 = *(undefined4 *)(iVar14 + 4 + (uVar12 & 1) * 8);
        puVar3 = (undefined4 *)(iVar14 + (uVar12 & 1) * 8);
        uVar5 = *puVar3;
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar2[1] = uVar4;
        *puVar2 = uVar5;
        local_1c = local_2c;
        if (local_8 < (int)(param_6 - uVar13)) {
          local_10 = uVar13;
          local_28 = uVar13 + local_8;
          piVar7 = &local_2c;
        }
        else {
          local_10 = param_2;
          local_34 = param_1;
          local_30 = (param_2 - (param_6 - uVar13)) + local_8;
          piVar7 = &local_34;
        }
        local_2c = *piVar7;
        uVar12 = uVar13;
        uVar13 = piVar7[1];
      } while (piVar7[1] != uVar1);
      local_c = local_c + -1;
      iVar6 = param_1;
    }
  }
  return iVar6;
}

