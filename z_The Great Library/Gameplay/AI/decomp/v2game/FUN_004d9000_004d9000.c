// FUN_004d9000 @ 004d9000 body=[[004d9000, 004d902f]]


undefined1 * FUN_004d9000(undefined1 *param_1)

{
  int in_ECX;
  
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(in_ECX + 0x3c,0,0xffffffff);
  return param_1;
}

