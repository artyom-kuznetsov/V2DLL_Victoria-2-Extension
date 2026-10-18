// FUN_009d4010 @ 009d4010 body=[[009d4010, 009d4074]]


undefined1 * FUN_009d4010(undefined1 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8 = 0;
  FUN_009d4600(param_1 + 0x1c);
  ExceptionList = local_10;
  return param_1;
}

