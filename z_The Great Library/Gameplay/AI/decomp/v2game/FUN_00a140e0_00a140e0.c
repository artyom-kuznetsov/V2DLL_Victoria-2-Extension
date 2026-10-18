// FUN_00a140e0 @ 00a140e0 body=[[00a140e0, 00a1424d]]


undefined4 * FUN_00a140e0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 in_EDX;
  int *piVar1;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b5d3fa;
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
  *param_1 = &PTR_FUN_00e3eec8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  local_8 = 2;
  uStack_7 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x400;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = in_EDX;
  param_1[0x2a] = 0xf;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 3;
  param_1[0x2c] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[0x33] = 0xf;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  FUN_00409350("undefined error",0xf);
  _local_8 = CONCAT31(uStack_7,4);
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  if ((param_3 == DAT_01268ff0) && (param_2 == DAT_01268fec)) {
    DAT_0131ca68 = FUN_009c12d0();
    DAT_01258a9c = DAT_01258a9c + 1;
    local_1c = DAT_01258a90 + 0x1268;
    piVar1 = &local_1c;
    local_18 = DAT_01258a9c;
  }
  else {
    piVar1 = &param_2;
  }
  FUN_009c1390(piVar1);
  ExceptionList = local_10;
  return param_1;
}

