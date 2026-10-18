// FUN_009f0010 @ 009f0010 body=[[009f0010, 009f002d]]


void FUN_009f0010(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x144) = param_1;
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x60))(param_1);
  return;
}

