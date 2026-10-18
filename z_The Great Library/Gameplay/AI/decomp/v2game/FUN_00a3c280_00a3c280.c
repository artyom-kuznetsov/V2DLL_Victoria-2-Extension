// FUN_00a3c280 @ 00a3c280 body=[[00a3c280, 00a3c381]]


undefined4 FUN_00a3c280(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *pvStack_58;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af();
  local_c = 0;
  if (iVar1 != 0) {
    FUN_00408ed0(in_ECX + 0x94,0,0xffffffff);
    uVar2 = FUN_00a7ba40(iVar1);
    ExceptionList = pvStack_58;
    return uVar2;
  }
  ExceptionList = local_14;
  return 0;
}

