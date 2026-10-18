// FUN_00b0f7e0 @ 00b0f7e0 body=[[00b0f7e0, 00b0f869]]


void FUN_00b0f7e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39786;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 10) = 1;
  local_4 = 1;
  *(undefined2 *)(in_ECX + 4) = 0x134;
  in_ECX[9] = param_2;
  *(undefined2 *)(in_ECX + 8) = 0x134;
  uVar1 = FUN_00b157e0(param_1);
  *in_ECX = uVar1;
  ExceptionList = local_c;
  return;
}

