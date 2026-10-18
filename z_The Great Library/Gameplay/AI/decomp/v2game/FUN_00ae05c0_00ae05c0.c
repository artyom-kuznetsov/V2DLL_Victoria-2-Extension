// FUN_00ae05c0 @ 00ae05c0 body=[[00ae05c0, 00ae0633]]


void FUN_00ae05c0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b379a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 3) = 0x1f6;
  local_4 = 1;
  *(undefined2 *)(in_ECX + 7) = 0x1f6;
  FUN_00ae0140(param_1);
  ExceptionList = local_c;
  return;
}

