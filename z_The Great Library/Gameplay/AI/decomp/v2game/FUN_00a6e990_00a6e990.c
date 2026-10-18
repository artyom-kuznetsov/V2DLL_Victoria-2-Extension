// FUN_00a6e990 @ 00a6e990 body=[[00a6e990, 00a6eb03]]


undefined4 FUN_00a6e990(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int *local_10;
  uint local_c;
  short local_6;
  
  iVar4 = param_1;
  local_6 = *(short *)(param_1 + 0x1c6);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x1bc) + 0xf4))(&local_10);
  local_c = (uint)(ushort)(*(short *)(iVar2 + 2) + *(short *)(iVar4 + 0x1c6));
  (**(code **)(**(int **)(iVar4 + 0x1bc) + 0xf4))(local_14);
  iVar2 = *(int *)(iVar4 + 0x260);
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar4 + 0x1f0);
    do {
      piVar3 = (int *)(**(code **)(*piVar6 + 4))(iVar2);
      iVar4 = (**(code **)(*piVar3 + 0x3c))(local_14);
      if (*(short *)(iVar4 + 2) < local_6) {
        return 1;
      }
      piVar3 = (int *)(**(code **)(*piVar6 + 4))(iVar2);
      local_10 = (int *)(**(code **)(*piVar6 + 4))(iVar2);
      iVar4 = (**(code **)(*piVar3 + 0x3c))(local_18);
      sVar1 = *(short *)(iVar4 + 2);
      psVar5 = (short *)(**(code **)(*local_10 + 0xf4))(local_1c);
      if ((int)(short)local_c < (int)*psVar5 + (int)sVar1) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      iVar4 = param_1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(iVar4 + 0x270);
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar4 + 0x214);
    do {
      piVar3 = (int *)(**(code **)(*piVar6 + 4))(iVar2);
      iVar4 = (**(code **)(*piVar3 + 0x3c))(local_1c);
      if (*(short *)(iVar4 + 2) < local_6) {
        return 1;
      }
      piVar3 = (int *)(**(code **)(*piVar6 + 4))(iVar2);
      iVar4 = (**(code **)(*piVar6 + 4))(iVar2);
      (**(code **)(**(int **)(iVar4 + 0x58) + 0xd8))(&param_1);
      iVar4 = (**(code **)(*piVar3 + 0x3c))(local_18);
      if ((int)(short)local_c < (int)*(short *)(iVar4 + 2) + (int)param_1._2_2_) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x20);
    } while (iVar2 != 0);
  }
  return 0;
}

