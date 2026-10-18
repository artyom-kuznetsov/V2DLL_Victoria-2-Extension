// FUN_009c4300 @ 009c4300 body=[[009c4300, 009c4387]]


void FUN_009c4300(undefined8 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined8 *)(in_ECX + 0xa4) = param_1;
  *(undefined4 *)(in_ECX + 0xac) = param_2;
  (**(code **)(**(int **)(in_ECX + 0x94) + 0xa8))(0,0,0,&param_1);
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x9c))(*(undefined4 *)(in_ECX + 0xc4));
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x88))(*(undefined4 *)(in_ECX + 0xf8));
  return;
}

