// FUN_0054a180 @ 0054a180 body=[[0054a180, 0054a3d3]]


int * FUN_0054a180(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cd3a;
  local_10 = ExceptionList;
  uVar9 = param_2[4];
  iVar2 = *(int *)(*param_1 + 4);
  iVar3 = *(int *)(iVar2 + 0x24 + (int)param_1);
  uVar8 = *(uint *)(iVar2 + 0x20 + (int)param_1);
  local_18 = 0;
  if ((iVar3 < 0) || (((iVar3 < 1 && (uVar8 == 0)) || (uVar8 <= uVar9)))) {
    local_1c = 0;
  }
  else {
    local_1c = uVar8 - uVar9;
  }
  piVar4 = *(int **)(iVar2 + 0x38 + (int)param_1);
  ExceptionList = &local_10;
  if (piVar4 != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*piVar4 + 4))();
  }
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) != 0) {
    local_18 = 4;
    goto LAB_0054a301;
  }
  local_8 = 2;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 0x1c0) == 0x40) {
LAB_0054a2ba:
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    uVar10 = FUN_00419180(param_2,uVar9,0);
    if (((uint)uVar10 == uVar9) && ((int)((ulonglong)uVar10 >> 0x20) == 0)) goto LAB_0054a380;
    local_18 = 4;
  }
  else {
    for (; local_1c != 0; local_1c = local_1c + -1) {
      bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40);
      piVar4 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
      if ((*(int *)piVar4[9] == 0) || (piVar5 = (int *)piVar4[0xd], *piVar5 < 1)) {
        uVar8 = (**(code **)(*piVar4 + 0xc))(bVar1);
      }
      else {
        *piVar5 = *piVar5 + -1;
        pbVar6 = *(byte **)piVar4[9];
        *(byte **)piVar4[9] = pbVar6 + 1;
        *pbVar6 = bVar1;
        uVar8 = (uint)bVar1;
      }
      if (uVar8 == 0xffffffff) {
        local_18 = 4;
        break;
      }
    }
    if (local_18 == 0) goto LAB_0054a2ba;
LAB_0054a380:
    for (; local_1c != 0; local_1c = local_1c + -1) {
      bVar1 = *(byte *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
      piVar4 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      if ((*(int *)piVar4[9] == 0) || (piVar5 = (int *)piVar4[0xd], *piVar5 < 1)) {
        uVar9 = (**(code **)(*piVar4 + 0xc))(bVar1);
      }
      else {
        *piVar5 = *piVar5 + -1;
        pbVar6 = *(byte **)piVar4[9];
        *(byte **)piVar4[9] = pbVar6 + 1;
        *pbVar6 = bVar1;
        uVar9 = (uint)bVar1;
      }
      if (uVar9 == 0xffffffff) {
        local_18 = 4;
        break;
      }
    }
  }
  iVar2 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar2 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar2 + 0x24 + (int)param_1) = 0;
LAB_0054a301:
  local_8 = 1;
  if (local_18 != 0) {
    local_18 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_18;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      local_18 = local_18 | 4;
    }
    FUN_00401120(local_18,0);
  }
  local_8 = 4;
  cVar7 = thunk_FUN_00ab4d81();
  if (cVar7 == '\0') {
    FUN_00409590();
  }
  local_8 = 0xffffffff;
  piVar4 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

