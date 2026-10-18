// FUN_009c4450 @ 009c4450 body=[[009c4450, 009c446b]]


void FUN_009c4450(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x70) = param_1;
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(param_1 + 1);
  return;
}

