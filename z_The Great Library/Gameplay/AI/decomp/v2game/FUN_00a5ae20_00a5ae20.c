// FUN_00a5ae20 @ 00a5ae20 body=[[00a5ae20, 00a5aec6]]


int FUN_00a5ae20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
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
    FUN_00408ed0(unaff_ESI + 0x78,0,0xffffffff);
    iVar1 = FUN_00a87130(iVar1,param_1,param_2,unaff_ESI,*(undefined2 *)(unaff_ESI + 0x94));
    if (iVar1 != 0) {
      ExceptionList = local_10;
      return iVar1 + 0x54;
    }
  }
  ExceptionList = local_10;
  return 0;
}

