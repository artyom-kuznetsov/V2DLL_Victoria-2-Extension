// FUN_00b09cc0 @ 00b09cc0 body=[[00b09cc0, 00b09cec]]


void FUN_00b09cc0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00ddfe0c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0x12d;
  in_ECX[6] = 0xffffffff;
  return;
}

