// FUN_0088bbc0 @ 0088bbc0 body=[[0088bbc0, 0088bc98]]


void FUN_0088bbc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_ECX;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3e8b8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  piVar5 = (int *)FUN_00aae9af(0x28);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_008852b0(in_ECX);
    iVar1 = *piVar6;
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(DAT_012588e8 + 0xb0c);
    piVar5[5] = piVar6[1];
    piVar5[1] = 0x18d;
    piVar5[2] = iVar2;
    piVar5[3] = iVar3;
    piVar5[4] = iVar1;
    piVar5[6] = iVar4;
    piVar5[7] = iVar4;
    *(undefined1 *)(piVar5 + 8) = 0;
    piVar5[9] = 0;
    *piVar5 = (int)CAllianceAction::vftable;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = (void *)((uint)local_1c & 0xffffff00);
  local_c = 0;
  (**(code **)(*piVar5 + 0x80))(&local_28);
  (**(code **)*piVar5)(1);
  FUN_0042b9f0(local_30);
  ExceptionList = local_1c;
  return;
}

