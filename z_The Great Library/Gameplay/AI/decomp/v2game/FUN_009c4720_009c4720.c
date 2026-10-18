// FUN_009c4720 @ 009c4720 body=[[009c4720, 009c476d]]


void FUN_009c4720(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xd5) = 1;
  *(undefined4 *)(in_ECX + 0xdc) = param_2;
  *(undefined8 *)(in_ECX + 0xe0) = param_3;
  *(undefined8 *)(in_ECX + 0xe8) = param_4;
  *(undefined1 *)(in_ECX + 0xf0) = param_5;
  *(undefined1 *)(in_ECX + 0xf5) = 0;
  (**(code **)(**(int **)(in_ECX + 0x94) + 0x110))(in_ECX + 0xd8,1);
  return;
}

