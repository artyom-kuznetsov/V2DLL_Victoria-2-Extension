// FUN_009d7420 @ 009d7420 body=[[009d7420, 009d746f]]


void FUN_009d7420(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a7a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_009d75b0(*param_1,param_2,param_3,param_1);
  ExceptionList = local_10;
  return;
}

