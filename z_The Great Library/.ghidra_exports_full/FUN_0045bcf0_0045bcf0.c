// FUN_0045bcf0 @ 0045bcf0 body=[[0045bcf0, 0045bd86]]


void FUN_0045bcf0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d47b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x88);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00464560(iVar1);
  }
  local_8 = 0xffffffff;
  FUN_00408ed0(param_4,0,0xffffffff);
  FUN_0068f390();
  FUN_0068f390();
  *(undefined1 *)(param_3 + 0x84) = 1;
  ExceptionList = local_10;
  return;
}

