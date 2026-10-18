// FUN_0045af30 @ 0045af30 body=[[0045af30, 0045af7d]]


undefined4 * FUN_0045af30(int param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a7d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_8 = 0;
  FUN_009beeb0(param_1 + 0x18);
  ExceptionList = local_10;
  return param_2;
}

