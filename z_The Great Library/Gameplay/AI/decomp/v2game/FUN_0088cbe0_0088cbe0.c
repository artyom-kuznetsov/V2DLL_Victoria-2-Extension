// FUN_0088cbe0 @ 0088cbe0 body=[[0088cbe0, 0088cccc]]


void FUN_0088cbe0(int param_1)

{
  int *piVar1;
  int in_ECX;
  int local_28;
  int local_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  local_28 = FUN_00aae9af(0x144);
  local_c = 0;
  if (local_28 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_005b61c0(local_28);
  }
  local_c = 0xffffffff;
  local_24 = DAT_00f096c4;
  local_28 = 0x25;
  DAT_00f096c4 = DAT_00f096c4 + 1;
  (**(code **)(*piVar1 + 0x18))(&local_28);
  piVar1[0x2c] = 0;
  FUN_00408ed0(in_ECX + 0x20,0,0xffffffff);
  FUN_005b8030(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  piVar1[0x1f] = *(int *)(in_ECX + 0x3c);
  FUN_005b5ef0(piVar1);
  piVar1[0x20] = *(int *)(in_ECX + 0x40);
  FUN_005b5ef0(piVar1);
  local_24 = *(undefined4 *)(param_1 + 8);
  FUN_0050e760(piVar1,1);
  ExceptionList = pvStack_18;
  return;
}

