// FUN_00916840 @ 00916840 body=[[00916840, 009168cb]]


undefined4 FUN_00916840(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba00fb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af(0xac);
  local_c = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0093fa90(iVar1,param_1,0x2d2d2d,0,0x2d2d2d,0);
    ExceptionList = local_14;
    return uVar2;
  }
  ExceptionList = local_14;
  return 0;
}

