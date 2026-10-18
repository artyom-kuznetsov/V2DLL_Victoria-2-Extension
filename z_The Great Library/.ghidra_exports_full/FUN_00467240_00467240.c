// FUN_00467240 @ 00467240 body=[[00467240, 004672cc]]


undefined4 FUN_00467240(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00408ed0(*param_1 + unaff_EDI * 0x1c,0,0xffffffff);
    uVar2 = FUN_00464710(iVar1);
    ExceptionList = local_10;
    return uVar2;
  }
  ExceptionList = local_10;
  return 0;
}

