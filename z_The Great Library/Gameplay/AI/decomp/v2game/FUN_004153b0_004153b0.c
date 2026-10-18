// FUN_004153b0 @ 004153b0 body=[[004153b0, 0041561b]]


undefined4 * FUN_004153b0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar6 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4bc6b;
  local_10 = ExceptionList;
  if (DAT_012586d9 == '\0') {
    local_14 = *(int *)(*(int *)(DAT_012586dc + 0x70) + 0x28);
    uVar7 = *(uint *)(param_2 + 0x1a8) / 1000;
    iVar8 = uVar7 * 1000;
    if (local_14 == 0) {
      local_14 = -1;
      ExceptionList = &local_10;
    }
    else if (iVar8 + 0x189373U < 0x39580e) {
      local_14 = (int)(uVar7 * 1000000) / local_14;
      ExceptionList = &local_10;
    }
    else {
      ExceptionList = &local_10;
      uVar9 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
      local_14 = __alldiv(uVar9,local_14,local_14 >> 0x1f);
    }
    puVar1 = (undefined4 *)(param_2 + 0x188);
    local_18 = local_14;
    iVar8 = 0;
    param_2 = 0;
    cVar2 = (**(code **)(*(int *)*puVar1 + 0x24))();
    if (cVar2 != '\0') {
      iVar3 = *(int *)(*(int *)(iVar6 + 0x188) + 0x68) + 3;
      iVar4 = iVar3 * 1000;
      if (iVar4 + 0x189373U < 0x39580e) {
        param_2 = (iVar3 * 1000000) / 11000;
      }
      else {
        uVar9 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
        param_2 = __alldiv(uVar9,11000,0);
      }
    }
    if (DAT_0125ce80 == 0) {
      iVar3 = FUN_00aae9af(0x3c);
      local_8 = 0;
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_004dada0();
      }
      FUN_004dc340(uVar5);
    }
    iVar3 = *(int *)(DAT_0125ce80 + 0x34);
    if ((*(char *)(iVar3 + 0x131) != '\0') &&
       (iVar6 = *(int *)(*(int *)(iVar6 + 0x118) + *(int *)(iVar3 + 0x134) * 4), iVar6 != 0)) {
      iVar8 = (*(int *)(iVar3 + 0xc4) + 3) * 1000;
      iVar6 = *(int *)(iVar6 + 0x24) + 3000;
      if (iVar8 == 0) {
        iVar8 = -1;
      }
      else if ((iVar6 < -0x189373) || (0x20c49a < iVar6)) {
        uVar9 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
        iVar8 = __alldiv(uVar9,iVar8,iVar8 >> 0x1f);
      }
      else {
        iVar8 = (iVar6 * 1000) / iVar8;
      }
    }
    if (local_14 < 0) {
      local_18 = 0;
    }
    else if (1000 < local_14) {
      local_18 = 1000;
    }
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (1000 < param_2) {
      param_2 = 1000;
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    else if (1000 < iVar8) {
      iVar8 = 1000;
    }
    iVar6 = __alldiv((longlong)param_2 * (longlong)local_18,1000,0);
    uVar5 = __alldiv((longlong)iVar6 * (longlong)iVar8,1000,0);
    *param_1 = uVar5;
    ExceptionList = local_10;
    return param_1;
  }
  *param_1 = DAT_00f0aa50;
  return param_1;
}

