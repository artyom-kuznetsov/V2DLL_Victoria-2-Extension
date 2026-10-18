// FUN_00a3ece0 @ 00a3ece0 body=[[00a3ece0, 00a3ecfa]]


void FUN_00a3ece0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xa4);
  *param_1 = *(undefined4 *)(in_ECX + 0xa0);
  param_1[1] = uVar1;
  return;
}

