// FUN_0098a880 @ 0098a880 body=[[0098a880, 0098aa5f] [0098aa93, 0098ab12]]


int * FUN_0098a880(int *param_1,byte param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_24;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a3da;
  local_10 = ExceptionList;
  piVar2 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = 0;
  ExceptionList = &local_10;
  if (piVar2 != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*piVar2 + 4))();
  }
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  iVar3 = *(int *)(*param_1 + 4);
  if (*(int *)((int)param_1 + iVar3 + 0xc) == 0) {
    iVar4 = *(int *)((int)param_1 + iVar3 + 0x24);
    uVar8 = *(uint *)((int)param_1 + iVar3 + 0x20);
    if ((iVar4 < 1) && ((iVar4 < 0 || (uVar8 < 2)))) {
      local_24 = 0;
      local_24._0_4_ = 0;
      iVar9 = (int)local_24;
    }
    else {
      iVar9 = uVar8 - 1;
      local_24 = CONCAT44(iVar4 - (uint)(uVar8 == 0),iVar9);
    }
    local_8 = 2;
    if ((*(uint *)((int)param_1 + iVar3 + 0x14) & 0x1c0) == 0x40) {
LAB_0098a9ad:
      piVar2 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      if ((*(int *)piVar2[9] == 0) || (piVar5 = (int *)piVar2[0xd], *piVar5 < 1)) {
        uVar8 = (**(code **)(*piVar2 + 0xc))(param_2);
      }
      else {
        *piVar5 = *piVar5 + -1;
        pbVar6 = *(byte **)piVar2[9];
        *(byte **)piVar2[9] = pbVar6 + 1;
        *pbVar6 = param_2;
        uVar8 = (uint)param_2;
      }
      if (uVar8 == 0xffffffff) {
        local_18 = 4;
      }
      for (; ((local_18 == 0 && (-1 < local_24)) && ((0 < local_24._4_4_ || (iVar9 != 0))));
          iVar9 = iVar9 + -1) {
        bVar1 = *(byte *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
        piVar2 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
        if ((*(int *)piVar2[9] == 0) || (piVar5 = (int *)piVar2[0xd], *piVar5 < 1)) {
          uVar8 = (**(code **)(*piVar2 + 0xc))(bVar1);
        }
        else {
          *piVar5 = *piVar5 + -1;
          pbVar6 = *(byte **)piVar2[9];
          *(byte **)piVar2[9] = pbVar6 + 1;
          *pbVar6 = bVar1;
          uVar8 = (uint)bVar1;
        }
        if (uVar8 == 0xffffffff) {
          local_18 = 4;
        }
        local_24 = CONCAT44(local_24._4_4_ + -1 + (uint)(iVar9 != 0),(int)local_24);
      }
    }
    else {
      while (local_18 == 0) {
        if ((local_24 < 0) || ((local_24._4_4_ < 1 && (iVar9 == 0)))) goto LAB_0098a9ad;
        bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40);
        piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
        if ((*(int *)piVar2[9] == 0) || (piVar5 = (int *)piVar2[0xd], *piVar5 < 1)) {
          uVar8 = (**(code **)(*piVar2 + 0xc))(bVar1);
        }
        else {
          *piVar5 = *piVar5 + -1;
          pbVar6 = *(byte **)piVar2[9];
          *(byte **)piVar2[9] = pbVar6 + 1;
          *pbVar6 = bVar1;
          uVar8 = (uint)bVar1;
          iVar9 = (int)local_24;
        }
        if (uVar8 == 0xffffffff) {
          local_18 = 4;
        }
        bVar10 = iVar9 != 0;
        iVar9 = iVar9 + -1;
        local_24 = CONCAT44(local_24._4_4_ + -1 + (uint)bVar10,iVar9);
      }
    }
  }
  local_8 = 1;
  iVar3 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar3 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar3 + 0x24 + (int)param_1) = 0;
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
  piVar2 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

