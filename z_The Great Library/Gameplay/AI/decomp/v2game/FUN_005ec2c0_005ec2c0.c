// FUN_005ec2c0 @ 005ec2c0 body=[[005ec2c0, 005ec3bb]]


void FUN_005ec2c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45648;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = (**(code **)(*DAT_012588e8 + 0x1c))();
  for (local_1c = 0; local_1c < iVar2; local_1c = local_1c + 1) {
    FUN_00423910();
    cVar1 = FUN_0048b620();
    if (cVar1 != '\0') {
      FUN_00416e60();
      FUN_004010c0();
      FUN_009885d0();
      local_8 = 0;
      uVar3 = FUN_00423910();
      FUN_004236a0(uVar3);
      FUN_0099f370();
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
  }
  ExceptionList = local_10;
  return;
}

