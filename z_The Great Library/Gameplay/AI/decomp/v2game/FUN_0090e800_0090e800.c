// FUN_0090e800 @ 0090e800 body=[[0090e800, 0090e82f]]


undefined1 * FUN_0090e800(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350("CANCEL_UNIT_COMMAND",0x13);
  return param_1;
}

