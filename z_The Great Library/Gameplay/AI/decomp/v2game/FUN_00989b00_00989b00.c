// FUN_00989b00 @ 00989b00 body=[[00989b00, 00989b2c]]


undefined1 * FUN_00989b00(undefined1 *param_1)

{
  undefined4 in_ECX;
  
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(in_ECX,0,0xffffffff);
  return param_1;
}

