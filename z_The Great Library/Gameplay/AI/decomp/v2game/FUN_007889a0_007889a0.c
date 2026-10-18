// FUN_007889a0 @ 007889a0 body=[[007889a0, 00788caa]]


void FUN_007889a0(int param_1,int param_2,int param_3,int *param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  uint local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    local_2c = (param_2 + -1) / 2;
    iVar6 = *param_4;
    iVar1 = *(int *)(param_1 + local_2c * 4);
    local_18 = *(uint *)(iVar1 + 0xc);
    local_14 = *(undefined4 *)(iVar1 + 0x10);
    iVar5 = DAT_01258a94;
    if (local_18 < 0x1269) {
      iVar5 = DAT_01258a98;
    }
    if (iVar5 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_009c1d40();
    }
    *(int **)(iVar1 + 8) = piVar3;
    local_10 = *(uint *)(iVar6 + 0xc);
    local_c = *(undefined4 *)(iVar6 + 0x10);
    if (local_10 < 0x1269) {
      if (DAT_01258a98 == 0) goto LAB_00788a65;
      local_38 = (int *)FUN_009c1d40();
    }
    else if (DAT_01258a94 == 0) {
LAB_00788a65:
      local_38 = (int *)0x0;
    }
    else {
      local_38 = (int *)FUN_009c1d40();
    }
    *(int **)(iVar6 + 8) = local_38;
    local_30 = 0;
    local_34 = 0;
    if (piVar3 != (int *)0x0) {
      if ((piVar3[0x1d] == 0) || (*(char *)(piVar3[0x1d] + 0x164) == '\0')) {
        iVar6 = piVar3[0x10];
      }
      else {
        iVar6 = 0;
      }
      piVar4 = (int *)(**(code **)(*piVar3 + 0x34))(local_28,0);
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        local_38 = (int *)0xffffffff;
      }
      else if (iVar6 + 0x189373U < 0x39580e) {
        local_38 = (int *)((iVar6 * 1000) / iVar1);
      }
      else {
        uVar7 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
        local_38 = (int *)__alldiv(uVar7,iVar1,iVar1 >> 0x1f);
      }
      iVar6 = piVar3[0xf];
      piVar3 = (int *)(**(code **)(*piVar3 + 0x30))(&local_2c,0);
      local_30 = *piVar3;
      if (local_30 == 0) {
        local_30 = -1;
      }
      else if (iVar6 + 0x189373U < 0x39580e) {
        local_30 = (iVar6 * 1000) / local_30;
      }
      else {
        uVar7 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
        local_30 = __alldiv(uVar7,local_30,local_30 >> 0x1f);
      }
    }
    if (local_38 != (int *)0x0) {
      if ((local_38[0x1d] == 0) || (*(char *)(local_38[0x1d] + 0x164) == '\0')) {
        iVar6 = local_38[0x10];
      }
      else {
        iVar6 = 0;
      }
      piVar3 = (int *)(**(code **)(*local_38 + 0x34))(auStack_20,0);
      iVar1 = *piVar3;
      if ((iVar1 != 0) && (0x39580d < iVar6 + 0x189373U)) {
        uVar7 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
        __alldiv(uVar7,iVar1,iVar1 >> 0x1f);
      }
      iVar6 = local_38[0xf];
      piVar3 = (int *)(**(code **)(*local_38 + 0x30))(auStack_24,0);
      local_34 = *piVar3;
      if (local_34 == 0) {
        local_34 = -1;
      }
      else if (iVar6 + 0x189373U < 0x39580e) {
        local_34 = (iVar6 * 1000) / local_34;
      }
      else {
        uVar7 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
        local_34 = __alldiv(uVar7,local_34,local_34 >> 0x1f);
      }
    }
    if (param_5 == '\0') {
      bVar2 = local_34 < local_30;
    }
    else {
      bVar2 = local_30 < local_34;
    }
    if (!bVar2) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + local_2c * 4);
    param_2 = local_2c;
    if (local_2c <= param_3) {
      *(int *)(param_1 + local_2c * 4) = *param_4;
      return;
    }
  } while( true );
}

