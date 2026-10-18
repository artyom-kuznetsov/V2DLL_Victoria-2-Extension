// FUN_00a7a4a0 @ 00a7a4a0 body=[[00a7a4a0, 00a7a4c1]]


void FUN_00a7a4a0(int *param_1)

{
  int *in_ECX;
  
  in_ECX[0x22] = *param_1;
  in_ECX[0x23] = param_1[1];
  (**(code **)(*in_ECX + 0x5c))();
  return;
}

