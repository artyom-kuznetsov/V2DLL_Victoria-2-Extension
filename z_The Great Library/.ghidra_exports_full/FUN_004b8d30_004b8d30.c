// FUN_004b8d30 @ 004b8d30 body=[[004b8d30, 004b8e70]]


int * FUN_004b8d30(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int local_298;
  int local_294;
  undefined1 local_290 [632];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fdab;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar3 = FUN_004b8c80(param_2,param_1);
  uVar4 = FUN_00954a40(local_290);
  local_c = 0;
  piVar6 = (int *)(*(int *)(iVar3 + 0x28) * 0x10 + *(int *)(param_1 + 0x194));
  iVar1 = piVar6[1];
  iVar5 = FUN_00aae9af(0x288);
  local_c = CONCAT31(local_c._1_3_,1);
  local_298 = iVar5;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_00955450(iVar5,uVar4);
    *(int *)(iVar5 + 0x278) = iVar1;
    *(undefined4 *)(iVar5 + 0x27c) = 0;
    *(undefined1 *)(iVar5 + 0x280) = 0;
  }
  iVar2 = piVar6[2];
  piVar6[1] = iVar5;
  piVar6[2] = iVar2 + 1;
  if (iVar2 == 0) {
    *piVar6 = iVar5;
  }
  else {
    *(int *)(iVar1 + 0x27c) = iVar5;
  }
  local_c = 0xffffffff;
  FUN_00955ae0(local_290);
  piVar6 = *(int **)(*(int *)(param_1 + 0x194) + 4 + *(int *)(iVar3 + 0x28) * 0x10);
  local_294 = DAT_00f09568;
  local_298 = 0x2e;
  DAT_00f09568 = DAT_00f09568 + 1;
  (**(code **)(*piVar6 + 0x18))(&local_298);
  FUN_00955d90(iVar3);
  FUN_00955f20(param_1);
  ExceptionList = pvStack_18;
  return piVar6;
}

