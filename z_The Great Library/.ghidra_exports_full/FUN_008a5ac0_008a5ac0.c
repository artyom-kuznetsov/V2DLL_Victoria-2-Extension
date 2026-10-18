// FUN_008a5ac0 @ 008a5ac0 body=[[008a5ac0, 008a5c3c]]


undefined4 * FUN_008a5ac0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c30c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[1] = 0x18d;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  *param_1 = CEvent::vftable;
  param_1[0xd] = 0x18d;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0xc] = CAndTrigger::vftable;
  FUN_008a5c70();
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0x18d;
  param_1[0x30] = CMeanTimeToHappen::vftable;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 1000;
  param_1[0x3c] = 0xf;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x43] = 0xf;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x4a] = 0xf;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x51] = 0xf;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x58] = 0xf;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x5f] = 0xf;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x66] = 0xf;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x6f] = 0xf;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((int)param_1 + 0x1a2) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  ExceptionList = local_10;
  return param_1;
}

