// FUN_00b131a0 @ 00b131a0 body=[[00b131a0, 00b131c1]]


void FUN_00b131a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  *(undefined2 *)(in_ECX + 3) = param_4;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}

