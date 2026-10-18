// FUN_00a88060 @ 00a88060 body=[[00a88060, 00a880a7]]


void FUN_00a88060(undefined8 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined8 *)(in_ECX + 0xa4) = param_1;
  *(undefined4 *)(in_ECX + 0xac) = param_2;
  (**(code **)(**(int **)(in_ECX + 0xb0) + 0xa8))(0,0,0,&param_1);
  return;
}

