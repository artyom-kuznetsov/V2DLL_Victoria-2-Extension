// FUN_00b0dd10 @ 00b0dd10 body=[[00b0dd10, 00b0ddb8]]


void FUN_00b0dd10(undefined4 param_1,char param_2)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39583;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b13100(param_1,0);
  *in_ECX = &PTR_FUN_00de0044;
  *(undefined2 *)(in_ECX + 6) = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined2 *)(in_ECX + 10) = 1;
  in_ECX[0xb] = 2;
  local_4 = 1;
  if (param_2 != '\0') {
    in_ECX[0xb] = 2;
    FUN_00b0e160(param_1,0);
  }
  *(undefined2 *)(in_ECX + 10) = 0xcc;
  *(undefined2 *)(in_ECX + 6) = 0xcc;
  ExceptionList = local_c;
  return;
}

