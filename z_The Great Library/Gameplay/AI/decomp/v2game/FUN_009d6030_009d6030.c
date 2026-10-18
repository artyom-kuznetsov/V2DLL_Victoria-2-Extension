// FUN_009d6030 @ 009d6030 body=[[009d6030, 009d60bc]]


int * FUN_009d6030(int *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4992f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&PTR_00e296f8;
  param_1[0x14] = (int)&PTR_FUN_00e3b474;
  piVar1 = param_1 + 1;
  local_8 = 0;
  FUN_009d6780(param_1,piVar1);
  local_8 = 1;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) = &PTR_FUN_00e3b4f4;
  FUN_009d6910(piVar1);
  *piVar1 = (int)&PTR_FUN_00e3b4b8;
  param_1[0x10] = 0;
  param_1[0x11] = 4;
  ExceptionList = local_10;
  return param_1;
}

