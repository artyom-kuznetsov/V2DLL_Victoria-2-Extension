// FUN_009b5fb0 @ 009b5fb0 body=[[009b5fb0, 009b6001]]


void FUN_009b5fb0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18c) = param_1;
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0x110) + 0x74))(param_1);
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0x114) + 0x74))(param_1);
  return;
}

