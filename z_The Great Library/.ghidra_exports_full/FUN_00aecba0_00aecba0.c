// FUN_00aecba0 @ 00aecba0 body=[[00aecba0, 00aecbff]]


void FUN_00aecba0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3823b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 0;
  *(undefined2 *)(in_ECX + 3) = 0x1f5;
  FUN_00aed3f0(param_1);
  ExceptionList = local_c;
  return;
}

