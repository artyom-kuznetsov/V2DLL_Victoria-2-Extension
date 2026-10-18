// FUN_004bd400 @ 004bd400 body=[[004bd400, 004bd564]]


void FUN_004bd400(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00408ed0(param_2);
  iVar1 = FUN_004bd2d0();
  if (iVar1 != 0) {
    FUN_00977100();
    *(undefined4 *)(iVar1 + 8) = local_20;
    *(undefined4 *)(iVar1 + 0xc) = local_1c;
    ExceptionList = local_14;
    return;
  }
  iVar1 = FUN_00aae9af();
  local_c = 0;
  if (iVar1 != 0) {
    FUN_00977100();
    FUN_00408ed0(param_2,0,0xffffffff);
    FUN_00976e00();
  }
  local_c = 0xffffffff;
  FUN_0068f390();
  ExceptionList = local_14;
  return;
}

