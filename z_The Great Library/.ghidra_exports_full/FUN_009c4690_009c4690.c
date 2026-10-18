// FUN_009c4690 @ 009c4690 body=[[009c4690, 009c4711]]


void FUN_009c4690(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc4) = param_1;
  (**(code **)(**(int **)(in_ECX + 0x94) + 0xa8))(0,0,0,in_ECX + 0xa4);
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x9c))(*(undefined4 *)(in_ECX + 0xc4));
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x88))(*(undefined4 *)(in_ECX + 0xf8));
  return;
}

