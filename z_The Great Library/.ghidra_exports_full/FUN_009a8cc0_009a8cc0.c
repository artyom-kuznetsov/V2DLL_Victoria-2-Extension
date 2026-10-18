// FUN_009a8cc0 @ 009a8cc0 body=[[009a8cc0, 009a8ced]]


void FUN_009a8cc0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x13c) = param_1;
  (**(code **)(**(int **)(in_ECX + 0x70) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0x70) + 0x74))(param_1);
  return;
}

