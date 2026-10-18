// FUN_00a58950 @ 00a58950 body=[[00a58950, 00a58a01] [00a58a05, 00a58a33]]


/* WARNING: Removing unreachable block (ram,0x00a589f9) */

undefined4 * FUN_00a58950(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b486e3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_00e41cf4;
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_8 = 1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  uVar1 = FUN_00a581e0();
  param_1[0x24] = uVar1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 2;
  param_1[0x26] = 1;
  ExceptionList = local_10;
  return param_1;
}

