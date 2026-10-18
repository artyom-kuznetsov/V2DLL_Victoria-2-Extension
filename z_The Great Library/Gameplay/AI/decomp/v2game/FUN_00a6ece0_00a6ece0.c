// FUN_00a6ece0 @ 00a6ece0 body=[[00a6ece0, 00a6eed0]]


int FUN_00a6ece0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  iVar6 = *(int *)(param_1 + 0x260);
  local_8 = 32000;
  iVar4 = -32000;
  if (iVar6 != 0) {
    piVar5 = (int *)(param_1 + 0x1f0);
    do {
      local_c = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      iVar2 = (**(code **)(*piVar1 + 0xf4))(local_14);
      local_10 = (int)*(short *)(iVar2 + 2);
      iVar2 = (**(code **)(*local_c + 0x3c))(local_18);
      if (iVar4 < *(short *)(iVar2 + 2) + local_10) {
        piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        piVar3 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        iVar4 = (**(code **)(*piVar3 + 0xf4))(local_1c);
        local_10 = (int)*(short *)(iVar4 + 2);
        iVar4 = (**(code **)(*piVar1 + 0x3c))(local_20);
        iVar4 = *(short *)(iVar4 + 2) + local_10;
      }
      piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      iVar2 = (**(code **)(*piVar1 + 0x3c))(local_24);
      if (*(short *)(iVar2 + 2) < local_8) {
        piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        iVar2 = (**(code **)(*piVar1 + 0x3c))(local_28);
        local_8 = (int)*(short *)(iVar2 + 2);
      }
      iVar6 = *(int *)(iVar6 + 0x20);
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(param_1 + 0x270);
  if (iVar6 != 0) {
    piVar5 = (int *)(param_1 + 0x214);
    do {
      piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      iVar2 = (**(code **)(*piVar5 + 4))(iVar6);
      (**(code **)(**(int **)(iVar2 + 0x58) + 0xd8))(&local_10);
      iVar2 = (**(code **)(*piVar1 + 0x3c))(local_28);
      if (iVar4 < (int)*(short *)(iVar2 + 2) + (int)local_10._2_2_) {
        piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        iVar4 = (**(code **)(*piVar5 + 4))(iVar6);
        (**(code **)(**(int **)(iVar4 + 0x58) + 0xd8))(&local_c);
        iVar4 = (**(code **)(*piVar1 + 0x3c))(local_24);
        iVar4 = (int)*(short *)(iVar4 + 2) + (int)local_c._2_2_;
      }
      piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
      iVar2 = (**(code **)(*piVar1 + 0x3c))(local_20);
      if (*(short *)(iVar2 + 2) < local_8) {
        piVar1 = (int *)(**(code **)(*piVar5 + 4))(iVar6);
        iVar2 = (**(code **)(*piVar1 + 0x3c))(local_1c);
        local_8 = (int)*(short *)(iVar2 + 2);
      }
      iVar6 = *(int *)(iVar6 + 0x20);
    } while (iVar6 != 0);
  }
  return iVar4 - local_8;
}

