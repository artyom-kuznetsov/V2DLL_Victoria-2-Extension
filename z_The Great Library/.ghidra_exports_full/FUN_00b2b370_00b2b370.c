// FUN_00b2b370 @ 00b2b370 body=[[00b2b370, 00b2b512]]


undefined4 FUN_00b2b370(uint *param_1,code *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_c;
  uint local_8;
  
  puVar3 = param_1;
  iVar7 = 0;
  uVar8 = 0;
  local_c = 0;
  local_8 = 0;
  if (param_1[4] == 0) {
    param_1[0xc] = 0;
  }
  else {
    uVar4 = (*param_2)(param_1[4] * 4);
    param_1[0xc] = uVar4;
    if (uVar4 == 0) {
      return 0x8007000e;
    }
  }
  uVar4 = 0;
  if (param_1[4] != 0) {
    iVar5 = 0;
    do {
      *(int *)(param_1[0xc] + uVar4 * 4) = iVar7;
      iVar7 = iVar7 + *(int *)(param_1[5] + 0x10 + iVar5);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x28;
    } while (uVar4 < param_1[4]);
  }
  if (*param_1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    uVar4 = (*param_2)(*param_1 * 8);
    param_1[0xd] = uVar4;
    if (uVar4 == 0) {
      return 0x8007000e;
    }
  }
  uVar6 = 0;
  uVar4 = 0;
  if (*param_1 != 0) {
    do {
      uVar2 = param_1[0xd];
      *(uint *)(uVar2 + uVar4 * 8) = uVar6;
      *(int *)(uVar2 + 4 + uVar4 * 8) = local_c;
      puVar1 = (uint *)(param_1[1] + uVar4 * 8);
      bVar9 = CARRY4(uVar6,*puVar1);
      uVar6 = uVar6 + *puVar1;
      local_c = local_c + *(int *)(param_1[1] + 4 + uVar4 * 8) + (uint)bVar9;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_1);
  }
  if (param_1[4] == 0) {
    param_1[0xe] = 0;
  }
  else {
    uVar4 = (*param_2)(param_1[4] * 4);
    param_1[0xe] = uVar4;
    if (uVar4 == 0) {
      return 0x8007000e;
    }
  }
  if (param_1[6] == 0) {
    param_1[0xf] = 0;
  }
  else {
    uVar4 = (*param_2)(param_1[6] * 4);
    param_1[0xf] = uVar4;
    if (uVar4 == 0) {
      return 0x8007000e;
    }
  }
  uVar4 = 0;
  if (param_1[6] != 0) {
    param_1 = (uint *)0x0;
    do {
      bVar9 = *(char *)((int)param_1 + 0x19 + puVar3[7]) != '\0';
      if (bVar9) {
        if (local_8 == 0) {
          iVar7 = uVar8 * 0x28;
          while( true ) {
            if (puVar3[4] <= uVar8) {
              return 6;
            }
            *(uint *)(puVar3[0xe] + uVar8 * 4) = uVar4;
            if (*(int *)(puVar3[5] + 0x24 + iVar7) != 0) break;
            uVar8 = uVar8 + 1;
            iVar7 = iVar7 + 0x28;
          }
        }
LAB_00b2b4ce:
        *(uint *)(puVar3[0xf] + uVar4 * 4) = uVar8;
        if ((bVar9) &&
           (local_8 = local_8 + 1, *(uint *)(puVar3[5] + 0x24 + uVar8 * 0x28) <= local_8)) {
          uVar8 = uVar8 + 1;
          local_8 = 0;
        }
      }
      else {
        if (local_8 != 0) goto LAB_00b2b4ce;
        *(undefined4 *)(puVar3[0xf] + uVar4 * 4) = 0xffffffff;
      }
      param_1 = (uint *)((int)param_1 + 0x20);
      uVar4 = uVar4 + 1;
    } while (uVar4 < puVar3[6]);
  }
  return 0;
}

