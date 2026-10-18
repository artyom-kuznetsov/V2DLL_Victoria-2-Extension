// FUN_009efde0 @ 009efde0 body=[[009efde0, 009efe13]]


void FUN_009efde0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x120) = param_1;
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x80))();
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x74))(param_1);
  return;
}

