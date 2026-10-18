// FUN_00832400 @ 00832400 body=[[00832400, 0083242f]]


undefined1 * FUN_00832400(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350("CANCELASKMILITARYACCESS",0x17);
  return param_1;
}

