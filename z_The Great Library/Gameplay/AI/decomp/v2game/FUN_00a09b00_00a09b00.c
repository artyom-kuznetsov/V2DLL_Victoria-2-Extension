// FUN_00a09b00 @ 00a09b00 body=[[00a09b00, 00a09b99]]


void FUN_00a09b00(void)

{
  undefined4 *unaff_ESI;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 uStack_48;
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56738;
  local_10 = ExceptionList;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 1;
  local_14 = local_44;
  uStack_48 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_4c = &DAT_00ded94d;
  local_44[0] = 0;
  local_50 = 0xa09b46;
  ExceptionList = &local_10;
  FUN_00409350();
  local_18 = local_60;
  local_8 = 0;
  local_4c = (undefined1 *)0xf;
  local_50 = 0;
  local_60[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0xffffffff;
  FUN_009fa9f0(unaff_ESI,0xf8);
  *unaff_ESI = &PTR_FUN_00e3ea48;
  ExceptionList = local_10;
  return;
}

