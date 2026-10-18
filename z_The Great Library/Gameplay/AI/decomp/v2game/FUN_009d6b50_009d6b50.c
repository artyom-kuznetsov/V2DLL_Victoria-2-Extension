// FUN_009d6b50 @ 009d6b50 body=[[009d6b50, 009d6ccc] [009d6cd0, 009d6d43] [009d6d77, 009d6df6]]


int * FUN_009d6b50(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  short *psVar6;
  undefined2 *puVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  bool bVar11;
  undefined8 local_24;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b498da;
  local_10 = ExceptionList;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = 0;
  ExceptionList = &local_10;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00989b80();
  }
  iVar2 = *(int *)(*param_1 + 4);
  if (*(int *)((int)param_1 + iVar2 + 0xc) == 0) {
    iVar3 = *(int *)((int)param_1 + iVar2 + 0x24);
    uVar4 = *(uint *)((int)param_1 + iVar2 + 0x20);
    if ((iVar3 < 1) && ((iVar3 < 0 || (uVar4 < 2)))) {
      local_24 = 0;
      local_24._0_4_ = 0;
      iVar10 = (int)local_24;
    }
    else {
      iVar10 = uVar4 - 1;
      local_24 = CONCAT44(iVar3 - (uint)(uVar4 == 0),iVar10);
    }
    local_8 = 2;
    if ((*(uint *)((int)param_1 + iVar2 + 0x14) & 0x1c0) == 0x40) {
LAB_009d6c82:
      piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      if ((*(int *)piVar1[9] == 0) || (piVar5 = (int *)piVar1[0xd], *piVar5 < 1)) {
        param_2 = (**(code **)(*piVar1 + 0xc))(param_2);
      }
      else {
        *piVar5 = *piVar5 + -1;
        puVar7 = *(undefined2 **)piVar1[9];
        *(undefined2 **)piVar1[9] = puVar7 + 1;
        *puVar7 = (short)param_2;
      }
      if ((short)param_2 == -1) {
        local_18 = 4;
      }
      for (; ((local_18 == 0 && (-1 < local_24)) && ((0 < local_24._4_4_ || (iVar10 != 0))));
          iVar10 = iVar10 + -1) {
        piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
        sVar9 = *(short *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
        if ((*(int *)piVar1[9] == 0) || (piVar5 = (int *)piVar1[0xd], *piVar5 < 1)) {
          sVar9 = (**(code **)(*piVar1 + 0xc))(sVar9);
        }
        else {
          *piVar5 = *piVar5 + -1;
          psVar6 = *(short **)piVar1[9];
          *(short **)piVar1[9] = psVar6 + 1;
          *psVar6 = sVar9;
        }
        if (sVar9 == -1) {
          local_18 = 4;
        }
        local_24 = CONCAT44(local_24._4_4_ + -1 + (uint)(iVar10 != 0),(int)local_24);
      }
    }
    else {
      while (local_18 == 0) {
        if ((local_24 < 0) || ((local_24._4_4_ < 1 && (iVar10 == 0)))) goto LAB_009d6c82;
        piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
        sVar9 = *(short *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
        if ((*(int *)piVar1[9] == 0) || (piVar5 = (int *)piVar1[0xd], *piVar5 < 1)) {
          sVar9 = (**(code **)(*piVar1 + 0xc))(sVar9);
        }
        else {
          *piVar5 = *piVar5 + -1;
          psVar6 = *(short **)piVar1[9];
          *(short **)piVar1[9] = psVar6 + 1;
          *psVar6 = sVar9;
          iVar10 = (int)local_24;
        }
        if (sVar9 == -1) {
          local_18 = 4;
        }
        bVar11 = iVar10 != 0;
        iVar10 = iVar10 + -1;
        local_24 = CONCAT44(local_24._4_4_ + -1 + (uint)bVar11,iVar10);
      }
    }
  }
  local_8 = 1;
  iVar2 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar2 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar2 + 0x24 + (int)param_1) = 0;
  if (local_18 != 0) {
    local_18 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_18;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      local_18 = local_18 | 4;
    }
    FUN_00401120(local_18,0);
  }
  local_8 = 4;
  cVar8 = thunk_FUN_00ab4d81();
  if (cVar8 == '\0') {
    FUN_00409590();
  }
  local_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

