// FUN_00418e30 @ 00418e30 body=[[00418e30, 0041902a] [00419030, 00419095]]


int * FUN_00418e30(int *param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte *pbVar5;
  char cVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_24;
  int iStack_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4dcaa;
  local_10 = ExceptionList;
  local_18 = 0;
  pcVar7 = param_2;
  do {
    cVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar6 != '\0');
  uVar8 = (int)pcVar7 - (int)(param_2 + 1);
  iVar2 = *(int *)(*param_1 + 4);
  iStack_20 = *(int *)(iVar2 + 0x24 + (int)param_1);
  uVar9 = *(uint *)(iVar2 + 0x20 + (int)param_1);
  if ((iStack_20 < 0) ||
     ((((iStack_20 < 1 && (uVar9 == 0)) || (iStack_20 < 0)) || ((iStack_20 < 1 && (uVar9 <= uVar8)))
      ))) {
    iStack_20 = 0;
    local_24 = 0;
  }
  else {
    local_24 = uVar9 - uVar8;
    iStack_20 = iStack_20 - (uint)(uVar9 < uVar8);
  }
  piVar3 = *(int **)(iVar2 + 0x38 + (int)param_1);
  ExceptionList = &local_10;
  if (piVar3 != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*piVar3 + 4))();
  }
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) != 0) {
    local_18 = 4;
    goto LAB_00418fb6;
  }
  local_8 = 2;
  if ((*(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 0x1c0) == 0x40) {
LAB_00418f70:
    uVar11 = FUN_00419180(param_2,uVar8,0);
    if (((uint)uVar11 == uVar8) && ((int)((ulonglong)uVar11 >> 0x20) == 0)) {
      while( true ) {
        if ((iStack_20 < 0) || ((iStack_20 < 1 && (local_24 == 0)))) goto LAB_00418f9d;
        bVar1 = *(byte *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
        piVar3 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
        if ((*(int *)piVar3[9] == 0) || (piVar4 = (int *)piVar3[0xd], *piVar4 < 1)) {
          uVar9 = (**(code **)(*piVar3 + 0xc))(bVar1);
        }
        else {
          *piVar4 = *piVar4 + -1;
          pbVar5 = *(byte **)piVar3[9];
          *(byte **)piVar3[9] = pbVar5 + 1;
          *pbVar5 = bVar1;
          uVar9 = (uint)bVar1;
        }
        if (uVar9 == 0xffffffff) break;
        bVar10 = local_24 != 0;
        local_24 = local_24 + -1;
        iStack_20 = iStack_20 + -1 + (uint)bVar10;
      }
      local_18 = 4;
    }
    else {
      local_18 = 4;
    }
  }
  else {
    while( true ) {
      if ((iStack_20 < 0) || ((iStack_20 < 1 && (local_24 == 0)))) goto LAB_00418f6a;
      bVar1 = *(byte *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
      piVar3 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      if ((*(int *)piVar3[9] == 0) || (piVar4 = (int *)piVar3[0xd], *piVar4 < 1)) {
        uVar9 = (**(code **)(*piVar3 + 0xc))(bVar1);
      }
      else {
        *piVar4 = *piVar4 + -1;
        pbVar5 = *(byte **)piVar3[9];
        *(byte **)piVar3[9] = pbVar5 + 1;
        *pbVar5 = bVar1;
        uVar9 = (uint)bVar1;
      }
      if (uVar9 == 0xffffffff) break;
      bVar10 = local_24 != 0;
      local_24 = local_24 + -1;
      iStack_20 = iStack_20 + -1 + (uint)bVar10;
    }
    local_18 = 4;
LAB_00418f6a:
    if (local_18 == 0) goto LAB_00418f70;
  }
LAB_00418f9d:
  iVar2 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar2 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar2 + 0x24 + (int)param_1) = 0;
LAB_00418fb6:
  local_8 = 1;
  if (local_18 != 0) {
    local_18 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_18;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      local_18 = local_18 | 4;
    }
    FUN_00401120(local_18,0);
  }
  local_8 = 4;
  cVar6 = thunk_FUN_00ab4d81();
  if (cVar6 == '\0') {
    FUN_00409590();
  }
  local_8 = 0xffffffff;
  piVar3 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

