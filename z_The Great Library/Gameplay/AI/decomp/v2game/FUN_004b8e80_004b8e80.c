// FUN_004b8e80 @ 004b8e80 body=[[004b8e80, 004b9143]]


int * FUN_004b8e80(int param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_64 [20];
  undefined4 uStack_50;
  int iStack_4c;
  int *piStack_48;
  int *piStack_44;
  int local_2c;
  int iStack_28;
  int *local_24;
  undefined1 *puStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba88f6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_3 == '\0') {
    piStack_44 = (int *)0x4b8eba;
    ExceptionList = &local_14;
    local_24 = (int *)FUN_004bcae0();
    if ((param_2 == local_24) || (param_2[0x19] == param_1)) {
      if (DAT_01258a10 != (int *)0x0) {
        ExceptionList = local_14;
        return DAT_01258a10;
      }
      piStack_44 = (int *)0x278;
      piStack_48 = (int *)0x4b8f1c;
      piVar5 = (int *)FUN_00aae9af();
      local_c = 5;
      if (piVar5 != (int *)0x0) {
        piStack_48 = (int *)0x4b8f37;
        piStack_44 = piVar5;
        local_24 = piVar5;
        FUN_00954a40();
        *piVar5 = (int)CNullPop::vftable;
        DAT_01258a10 = piVar5;
        ExceptionList = local_14;
        return piVar5;
      }
      DAT_01258a10 = (int *)0x0;
      ExceptionList = local_14;
      return (int *)0x0;
    }
    piStack_44 = (int *)0x4b8ed2;
    cVar3 = (**(code **)(*local_24 + 0x20))();
    if (cVar3 != '\0') {
      piStack_44 = (int *)0x1;
      piStack_48 = param_2;
      iStack_4c = 0x4b8ee2;
      FUN_00964370();
      piStack_44 = (int *)param_2[0x19];
      piStack_48 = (int *)0x4b8eed;
      FUN_004b9250();
      ExceptionList = local_14;
      return local_24;
    }
  }
  local_2c = 0;
  if (param_2[0x19] != 0) {
    local_2c = *(int *)(param_2[0x19] + 0x58);
  }
  piStack_48 = (int *)param_2[0x1a];
  piStack_44 = (int *)param_1;
  iStack_4c = 0x4b8f95;
  piStack_44 = (int *)FUN_004b8c80();
  if ((int *)param_2[0x1a] != piStack_44) {
    piStack_48 = (int *)0x4b8fa5;
    FUN_00955d90();
  }
  piStack_44 = (int *)param_1;
  piStack_48 = (int *)0x4b8fad;
  FUN_00955f20();
  local_24 = (int *)(*(int *)(param_2[0x1a] + 0x28) * 0x10);
  piVar5 = (int *)(*(int *)(param_1 + 0x194) + (int)local_24);
  iVar1 = piVar5[1];
  piStack_44 = (int *)0x288;
  piStack_48 = (int *)0x4b8fd6;
  iVar4 = FUN_00aae9af();
  local_c = 6;
  puStack_20 = (undefined1 *)iVar4;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    piStack_44 = param_2;
    iStack_4c = 0x4b8ff2;
    piStack_48 = (int *)iVar4;
    FUN_00955450();
    *(int *)(iVar4 + 0x278) = iVar1;
    *(undefined4 *)(iVar4 + 0x27c) = 0;
    *(undefined1 *)(iVar4 + 0x280) = 0;
  }
  local_c = 0xffffffff;
  iVar2 = piVar5[2];
  piVar5[1] = iVar4;
  piVar5[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *piVar5 = iVar4;
  }
  else {
    *(int *)(iVar1 + 0x27c) = iVar4;
  }
  if (0 < local_2c) {
    piStack_44 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + local_2c * 4);
    piStack_48 = (int *)0x4b9056;
    FUN_004b9250();
    param_2 = *(int **)((int)local_24 + 4 + *(int *)(param_1 + 0x194));
  }
  iStack_28 = DAT_00f09568;
  local_2c = 0x2e;
  piStack_44 = &local_2c;
  piStack_48 = (int *)0x4b909f;
  DAT_00f09568 = DAT_00f09568 + 1;
  (**(code **)(**(int **)((int)local_24 + 4 + *(int *)(param_1 + 0x194)) + 0x18))();
  if (param_3 != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x194) + 4 + *(int *)(param_2[0x1a] + 0x28) * 0x10);
    piStack_44 = *(int **)(iVar1 + 0x268);
    if (piStack_44 != (int *)0x0) {
      piStack_48 = *(int **)(iVar1 + 100);
      iStack_4c = DAT_012588e8;
      uStack_50 = 0x4b90d2;
      piStack_44 = (int *)FUN_0068bba0();
      if (piStack_44 == (int *)0x0) {
        piStack_48 = (int *)0x2d2d2d;
        puStack_20 = auStack_64;
        FUN_009885d0();
        piStack_48 = (int *)FUN_0068bc90(DAT_012588e8,iVar1,*(undefined4 *)(iVar1 + 0x268));
        iStack_4c = 0x4b9112;
        piStack_44 = (int *)iVar1;
        FUN_004e7c00();
      }
      else {
        iStack_4c = 0x4b911e;
        piStack_48 = piStack_44;
        piStack_44 = (int *)iVar1;
        FUN_004e7c00();
      }
    }
  }
  ExceptionList = local_14;
  return *(int **)(*(int *)(param_1 + 0x194) + 4 + *(int *)(param_2[0x1a] + 0x28) * 0x10);
}

