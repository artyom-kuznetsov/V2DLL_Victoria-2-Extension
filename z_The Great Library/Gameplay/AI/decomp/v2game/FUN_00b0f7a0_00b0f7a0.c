// FUN_00b0f7a0 @ 00b0f7a0 body=[[00b0f7a0, 00b0f7de]]


void FUN_00b0f7a0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 10) = 1;
  in_ECX[9] = param_1;
  *in_ECX = 0xffffffff;
  *(undefined2 *)(in_ECX + 4) = 0x134;
  *(undefined2 *)(in_ECX + 8) = 0x134;
  return;
}

