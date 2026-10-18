// FUN_00936fc0 @ 00936fc0 body=[[00936fc0, 00937326] [00937330, 009373aa]]


int FUN_00936fc0(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int local_34;
  int local_30;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3e4) / 1000;
  local_20 = *param_2;
  local_18 = *param_3;
  local_14 = param_3[1];
  iVar7 = *(int *)(param_1 + 0x30);
  iVar8 = *(int *)(param_1 + 0x2c);
  iVar5 = param_2[1];
  local_30 = 1;
  iVar3 = iVar8;
  if (iVar8 != iVar7) {
    do {
      if (*(int *)(iVar3 + 4) == iVar5) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar7);
    if (iVar3 != iVar7) goto LAB_0093705c;
  }
  local_20 = *param_3;
  iVar5 = param_3[1];
  local_18 = *param_2;
  local_14 = param_2[1];
  local_30 = -1;
LAB_0093705c:
  bVar9 = *(int *)(iVar8 + 4) == iVar5;
  bVar10 = *(int *)(*(int *)(param_1 + 0x3c) + 4) == local_14;
  cVar2 = FUN_00936e70((uint *)(param_1 + 0x3c),local_18,local_14,local_20,iVar5);
  if (cVar2 == '\x01') {
    return local_30 * -100;
  }
  cVar2 = FUN_00936e70(param_1 + 0x2c,local_20,iVar5,local_18,local_14);
  if (cVar2 == '\x01') {
    return local_30 * 100;
  }
  local_34 = 0;
  if ((bVar9) && (bVar10)) {
    local_34 = FUN_00936ba0();
    if (local_34 < -iVar1) {
      local_34 = -iVar1;
    }
    if (iVar1 < local_34) {
      local_34 = iVar1;
    }
    local_34 = local_34 * local_30;
    if (local_34 < 0x65) {
      if (local_34 < -100) {
        local_34 = -100;
      }
    }
    else {
      local_34 = 100;
    }
  }
  iVar1 = DAT_012587e4;
  iVar7 = 0;
  iVar8 = 0;
  if (bVar10) {
    uVar6 = *(uint *)(param_1 + 0x3c);
    for (uVar4 = uVar6; (uVar6 <= uVar4 && (uVar4 < *(uint *)(param_1 + 0x40))); uVar4 = uVar4 + 8)
    {
      iVar7 = iVar7 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar4 + 4) * 4) +
                              0xde4);
    }
  }
  else {
    iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_14 * 4) + 0xde4);
  }
  if (bVar9) {
    for (uVar6 = *(uint *)(param_1 + 0x2c);
        (*(uint *)(param_1 + 0x2c) <= uVar6 && (uVar6 < *(uint *)(param_1 + 0x30)));
        uVar6 = uVar6 + 8) {
      iVar8 = iVar8 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar6 + 4) * 4) +
                              0xde4);
    }
  }
  else {
    iVar8 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4) + 0xde4);
  }
  if (bVar10) {
    for (uVar6 = *(uint *)(param_1 + 0x3c);
        (*(uint *)(param_1 + 0x3c) <= uVar6 && (uVar6 < *(uint *)(param_1 + 0x40)));
        uVar6 = uVar6 + 8) {
      iVar3 = FUN_00936740(*(undefined4 *)
                            (*(int *)(*(int *)(iVar1 + 4) + *(int *)(uVar6 + 4) * 4) + 0x9e8),
                           param_1 + 0x2c,iVar8,iVar7,local_20,iVar5);
      local_34 = local_34 - iVar3 * local_30;
    }
  }
  else {
    iVar3 = FUN_00936740(*(undefined4 *)
                          (*(int *)(*(int *)(DAT_012587e4 + 4) + local_14 * 4) + 0x9e8),
                         param_1 + 0x2c,iVar8,iVar7,local_20,iVar5);
    local_34 = local_34 - iVar3 * local_30;
  }
  if (bVar9) {
    for (uVar6 = *(uint *)(param_1 + 0x2c);
        (*(uint *)(param_1 + 0x2c) <= uVar6 && (uVar6 < *(uint *)(param_1 + 0x30)));
        uVar6 = uVar6 + 8) {
      iVar5 = FUN_00936740(*(undefined4 *)
                            (*(int *)(*(int *)(iVar1 + 4) + *(int *)(uVar6 + 4) * 4) + 0x9e8),
                           param_1 + 0x3c,iVar7,iVar8,local_18,local_14);
      local_34 = local_34 + iVar5 * local_30;
    }
  }
  else {
    iVar7 = FUN_00936740(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + iVar5 * 4) + 0x9e8),
                         param_1 + 0x3c,iVar7,iVar8,local_18,local_14);
    local_34 = local_34 + iVar7 * local_30;
  }
  iVar7 = FUN_0093ca90(param_1,param_2,param_3,0,0);
  if (param_4 != (int *)0x0) {
    *param_4 = iVar7;
  }
  local_34 = local_34 + iVar7;
  if (100 < local_34) {
    return 100;
  }
  if (local_34 < -100) {
    local_34 = -100;
  }
  return local_34;
}

