// FUN_00a699c0 @ 00a699c0 body=[[00a699c0, 00a69abc]]


void FUN_00a699c0(int *param_1)

{
  int iVar1;
  int in_ECX;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  char local_23;
  int local_20;
  undefined4 *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ca13;
  pvStack_10 = ExceptionList;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x54);
  local_14 = &stack0xffffffc4;
  if (0x7fff < iVar1) {
    iVar1 = 0;
  }
  ExceptionList = &pvStack_10;
  *(short *)(param_1 + 0xd) = (short)iVar1;
  local_18 = (undefined4 *)FUN_00aae9af(0x3c);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    *local_18 = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    local_18[0xd] = 0xf;
    local_18[0xc] = 0;
    *(undefined1 *)(local_18 + 8) = 0;
  }
  local_8 = 0;
  local_20 = FUN_00aae9af(0x3c);
  local_8._0_1_ = 1;
  if (local_20 == 0) {
    local_28 = (undefined4 *)0x0;
  }
  else {
    local_28 = (undefined4 *)FUN_009d5450(local_20,local_18,1,0,0);
  }
  local_30 = &PTR_FUN_00e38528;
  local_2c = 0;
  local_23 = '\x01';
  local_24 = *(char *)((int)local_28 + 0x13) != '\0';
  local_8._0_1_ = 2;
  (**(code **)(*param_1 + 0x1c))();
  FUN_009a0940(&local_30);
  (**(code **)(*param_1 + 4))(&local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  local_30 = &PTR_FUN_00e38528;
  if ((local_28 != (undefined4 *)0x0) && (local_23 != '\0')) {
    (**(code **)*local_28)(1);
  }
  local_8 = 0xffffffff;
  FUN_00a69acf();
  return;
}

