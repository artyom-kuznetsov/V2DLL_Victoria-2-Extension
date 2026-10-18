// FUN_00a6e810 @ 00a6e810 body=[[00a6e810, 00a6e981]]


undefined4 FUN_00a6e810(int param_1)

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  short local_c [2];
  short local_8;
  
  iVar4 = param_1;
  local_8 = *(short *)(param_1 + 0x1c4);
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0xf4))(&local_10);
  psVar1 = (short *)(**(code **)(**(int **)(iVar4 + 0x1bc) + 0xf4))(local_c);
  local_c[0] = *psVar1 + *(short *)(iVar4 + 0x1c4);
  iVar6 = *(int *)(iVar4 + 0x260);
  if (iVar6 != 0) {
    piVar5 = (int *)(iVar4 + 0x1f0);
    do {
      piVar2 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      psVar1 = (short *)(**(code **)(*piVar2 + 0x3c))(local_14);
      if (*psVar1 < local_8) {
        return 1;
      }
      piVar2 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      piVar3 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      psVar1 = (short *)(**(code **)(*piVar3 + 0xf4))(local_18);
      local_10 = (int)*psVar1;
      psVar1 = (short *)(**(code **)(*piVar2 + 0x3c))(local_1c);
      if ((int)local_c[0] < *psVar1 + local_10) {
        return 1;
      }
      iVar6 = *(int *)(iVar6 + 0x20);
      iVar4 = param_1;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(iVar4 + 0x270);
  if (iVar6 != 0) {
    piVar5 = (int *)(iVar4 + 0x214);
    do {
      piVar2 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      psVar1 = (short *)(**(code **)(*piVar2 + 0x3c))(local_1c);
      if (*psVar1 < local_8) {
        return 1;
      }
      piVar2 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      iVar4 = (**(code **)(*piVar5 + 4))(iVar6);
      (**(code **)(**(int **)(iVar4 + 0x58) + 0xd8))(&param_1);
      psVar1 = (short *)(**(code **)(*piVar2 + 0x3c))(local_18);
      if ((int)local_c[0] < (int)*psVar1 + (int)(short)param_1) {
        return 1;
      }
      iVar6 = *(int *)(iVar6 + 0x20);
    } while (iVar6 != 0);
  }
  return 0;
}

