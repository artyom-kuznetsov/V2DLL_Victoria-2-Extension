// FUN_00b0aae0 @ 00b0aae0 body=[[00b0aae0, 00b0ab64]]


undefined4 FUN_00b0aae0(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39248;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  FUN_00b0a9b0(local_18);
  puVar2 = (undefined1 *)*param_2;
  local_4 = 1;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_00ded94d;
  }
  FUN_00b0b5b0(param_1,puVar2);
  local_4 = local_4 & 0xffffff00;
  FUN_00b13650(uVar1);
  ExceptionList = local_c;
  return param_1;
}

