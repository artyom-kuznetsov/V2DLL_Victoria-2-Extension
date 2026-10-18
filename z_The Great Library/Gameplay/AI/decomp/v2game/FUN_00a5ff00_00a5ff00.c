// FUN_00a5ff00 @ 00a5ff00 body=[[00a5ff00, 00a60040]]


undefined4 * FUN_00a5ff00(undefined4 *param_1,undefined4 param_2)

{
  void *_Dst;
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b40dc2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e426a8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  local_8 = 3;
  uStack_7 = 0;
  param_1[0x17] = 0x1ff;
  param_1[0x16] = 0;
  _Dst = (void *)FUN_00aad56b(0x7fc);
  param_1[0x18] = _Dst;
  _memset(_Dst,0,param_1[0x17] * 4);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  _local_8 = CONCAT31(uStack_7,5);
  puVar1 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  param_1[0x15] = puVar1;
  param_1[7] = param_2;
  param_1[8] = 0xf;
  if (DAT_01258b2e == '\0') {
    DAT_01258b2e = '\x01';
    FUN_00a8b190();
    _atexit((_func_4879 *)&LAB_00a8b1e0);
  }
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uVar2 = (**(code **)(*DAT_00f20c18 + 4))();
  param_1[0x1a] = uVar2;
  FUN_00a6a600();
  ExceptionList = local_10;
  return param_1;
}

