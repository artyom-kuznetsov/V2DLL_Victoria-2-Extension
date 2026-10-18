// FUN_0086ed20 @ 0086ed20 body=[[0086ed20, 0086ed94]]


void FUN_0086ed20(undefined4 param_1)

{
  int *piVar1;
  uint local_1c;
  uint local_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c460;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)lua_touserdata(param_1,0xffffd8ed);
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  local_1c = local_1c & 0xffffff00;
  FUN_00871c70(param_1,*piVar1,*piVar1 + 0x30,local_1c,local_18,0);
  local_8 = 0xffffffff;
  FUN_0086edc1();
  return;
}

