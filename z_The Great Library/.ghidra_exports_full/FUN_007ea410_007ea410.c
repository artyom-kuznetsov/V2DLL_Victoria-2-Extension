// FUN_007ea410 @ 007ea410 body=[[007ea410, 007ea4b3]]


undefined4 * FUN_007ea410(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  float10 fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4af78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,param_2);
  local_8 = 0;
  bVar1 = DAT_00f20c18 == (undefined4 *)0x0;
  *param_1 = CProjectionObject::vftable;
  param_1[0x4f] = param_3;
  *(undefined1 *)(param_1 + 0x52) = 0;
  if (bVar1) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  fVar2 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  param_1[0x50] = (float)fVar2;
  param_1[0x51] = (float)fVar2;
  ExceptionList = local_10;
  return param_1;
}

