// FUN_00988e80 @ 00988e80 body=[[00988e80, 00988ef8]]


undefined1 * FUN_00988e80(undefined1 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e5b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00409450(1,0xffffffff);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_00448860(1,param_2);
  ExceptionList = local_10;
  return param_1;
}

