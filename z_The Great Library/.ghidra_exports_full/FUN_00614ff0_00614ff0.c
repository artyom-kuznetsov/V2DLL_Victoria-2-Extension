// FUN_00614ff0 @ 00614ff0 body=[[00614ff0, 00615131]]


int * FUN_00614ff0(int *param_1,undefined1 *param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  undefined4 uVar9;
  int local_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c9a0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  param_1[2] = 0;
  param_1[3] = 0;
  piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  iVar7 = 0;
  local_20 = 0x7f;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 4))();
  }
  uVar9 = 1;
  local_8 = 0;
  cVar4 = FUN_005486e0(param_1,1);
  local_8 = 1;
  if (cVar4 != '\0') {
    local_8 = 2;
    piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
    if ((*(int *)piVar6[8] == 0) || (*(int *)piVar6[0xc] < 1)) {
      uVar5 = (**(code **)(*piVar6 + 0x18))();
    }
    else {
      uVar5 = (uint)**(byte **)piVar6[8];
    }
    while( true ) {
      if (uVar5 == 0xffffffff) {
        local_8 = 1;
        piVar6 = (int *)FUN_00615166(uVar9);
        return piVar6;
      }
      if (uVar5 == param_3) break;
      bVar8 = local_20 != 0;
      local_20 = local_20 + -1;
      iVar7 = iVar7 + -1 + (uint)bVar8;
      if ((iVar7 < 1) && ((iVar7 < 0 || (local_20 == 0)))) {
        local_8 = 1;
        piVar6 = (int *)FUN_00615166(uVar9);
        return piVar6;
      }
      puVar1 = (uint *)(param_1 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar2);
      *param_2 = (char)uVar5;
      param_2 = param_2 + 1;
      uVar5 = FUN_005474a0();
    }
    puVar1 = (uint *)(param_1 + 2);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar5);
    piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
    if ((*(int *)piVar6[8] != 0) && (piVar3 = (int *)piVar6[0xc], 0 < *piVar3)) {
      *piVar3 = *piVar3 + -1;
      *(int *)piVar6[8] = *(int *)piVar6[8] + 1;
      local_8 = 1;
      piVar6 = (int *)FUN_00615166(uVar9);
      return piVar6;
    }
    (**(code **)(*piVar6 + 0x1c))();
    local_8 = 1;
    piVar6 = (int *)FUN_00615166(uVar9);
    return piVar6;
  }
  uVar5 = 0;
  *param_2 = 0;
  if (param_1[2] == 0 && param_1[3] == 0) {
    uVar5 = 2;
  }
  if (uVar5 != 0) {
    uVar5 = uVar5 | *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc);
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    FUN_00401120(uVar5,0);
  }
  local_8 = 0xffffffff;
  piVar6 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))();
  }
  ExceptionList = pvStack_10;
  return param_1;
}

