// FUN_00ae6820 @ 00ae6820 body=[[00ae6820, 00ae68c0]]


void FUN_00ae6820(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b37e2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  *(undefined1 *)(in_ECX + 2) = *(undefined1 *)(param_1 + 2);
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 1;
  FUN_00ae6590(param_1 + 5);
  local_4 = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *(undefined2 *)(in_ECX + 0xc) = 1;
  FUN_00ae66b0(param_1 + 9);
  ExceptionList = local_c;
  return;
}

