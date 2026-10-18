// FUN_007a4620 @ 007a4620 body=[[007a4620, 007a4710]]


undefined4 * FUN_007a4620(undefined4 *param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b598e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  DAT_013f08b0 = DAT_013f08b0 + 1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xc] = CLoginObservable::vftable;
  local_8 = 3;
  uStack_7 = 0;
  *param_1 = CLoginHandler::vftable;
  param_1[0xc] = CLoginHandler::vftable;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 4;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  _local_8 = CONCAT31(uStack_7,5);
  if (param_2 != 0) {
    FUN_009c1390(&DAT_00f0d8a8);
  }
  ExceptionList = local_10;
  return param_1;
}

