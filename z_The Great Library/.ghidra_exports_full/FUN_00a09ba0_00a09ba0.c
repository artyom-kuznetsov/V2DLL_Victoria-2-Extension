// FUN_00a09ba0 @ 00a09ba0 body=[[00a09ba0, 00a09c3b]]


void FUN_00a09ba0(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56738;
  local_10 = ExceptionList;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 1;
  local_14 = local_3c;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = 0;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8 = 0;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_8 = 0xffffffff;
  FUN_009fa9f0(unaff_ESI,0xf8);
  *unaff_ESI = &PTR_FUN_00e3ea48;
  ExceptionList = local_10;
  return;
}

