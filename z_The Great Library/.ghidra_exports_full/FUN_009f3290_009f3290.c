// FUN_009f3290 @ 009f3290 body=[[009f3290, 009f32fa]]


undefined4 *
FUN_009f3290(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b526d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009f2a50(param_1,param_4,in_EDX,in_ECX,param_5);
  local_8 = 0;
  param_1[0x15] = param_2;
  *param_1 = &PTR_FUN_00e3d08c;
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

