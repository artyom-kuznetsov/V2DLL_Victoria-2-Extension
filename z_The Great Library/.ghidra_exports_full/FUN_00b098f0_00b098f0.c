// FUN_00b098f0 @ 00b098f0 body=[[00b098f0, 00b09915]]


void FUN_00b098f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0x135;
  in_ECX[5] = param_1;
  in_ECX[4] = param_2;
  return;
}

