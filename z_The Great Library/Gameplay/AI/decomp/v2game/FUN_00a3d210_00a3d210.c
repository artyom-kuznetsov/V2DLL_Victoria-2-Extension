// FUN_00a3d210 @ 00a3d210 body=[[00a3d210, 00a3d346]]


undefined4 * FUN_00a3d210(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48953;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = DAT_00f092fc;
  *param_1 = &PTR_FUN_00e40bb8;
  param_1[0x16] = in_EDX;
  param_1[0x18] = 0x18d;
  param_1[0x17] = CColor::vftable;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  local_8 = 1;
  param_1[0x25] = 1;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x36] = 0xf;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0x38] = 0;
  *(undefined2 *)(param_1 + 0x3f) = 0;
  param_1[0x41] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  ExceptionList = local_10;
  return param_1;
}

