// FUN_00a6eb10 @ 00a6eb10 body=[[00a6eb10, 00a6ecd4]]


int FUN_00a6eb10(int param_1)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  int *local_c;
  int local_8;
  
  iVar6 = *(int *)(param_1 + 0x260);
  local_8 = 32000;
  iVar4 = -32000;
  if (iVar6 != 0) {
    piVar5 = (int *)(param_1 + 0x1f0);
    do {
      local_c = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      psVar2 = (short *)(**(code **)(*piVar1 + 0xf4))(local_14);
      local_10 = (int)*psVar2;
      psVar2 = (short *)(**(code **)(*local_c + 0x3c))(local_18);
      if (iVar4 < *psVar2 + local_10) {
        piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        psVar2 = (short *)(**(code **)(*piVar1 + 0x3c))(local_1c);
        iVar4 = (int)*psVar2;
      }
      piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      psVar2 = (short *)(**(code **)(*piVar1 + 0x3c))(local_20);
      if (*psVar2 < local_8) {
        piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        psVar2 = (short *)(**(code **)(*piVar1 + 0x3c))(local_24);
        local_8 = (int)*psVar2;
      }
      iVar6 = *(int *)(iVar6 + 0x20);
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(param_1 + 0x270);
  if (iVar6 != 0) {
    piVar5 = (int *)(param_1 + 0x214);
    do {
      piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      iVar3 = (**(code **)(*piVar5 + 4))(iVar6);
      (**(code **)(**(int **)(iVar3 + 0x58) + 0xd8))(&local_10);
      psVar2 = (short *)(**(code **)(*piVar1 + 0x3c))(local_24);
      if (iVar4 < (int)(short)local_10 + (int)*psVar2) {
        piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        iVar4 = (**(code **)(*piVar5 + 4))(iVar6);
        (**(code **)(**(int **)(iVar4 + 0x58) + 0xd8))(&local_c);
        psVar2 = (short *)(**(code **)(*piVar1 + 0x3c))(local_20);
        iVar4 = (int)*psVar2 + (int)(short)local_c;
      }
      piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      psVar2 = (short *)(**(code **)(*piVar1 + 0x3c))(local_1c);
      if (*psVar2 < local_8) {
        piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        psVar2 = (short *)(**(code **)(*piVar1 + 0x3c))(local_18);
        local_8 = (int)*psVar2;
      }
      iVar6 = *(int *)(iVar6 + 0x20);
    } while (iVar6 != 0);
  }
  return iVar4 - local_8;
}

