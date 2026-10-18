// FUN_0098b820 @ 0098b820 body=[[0098b820, 0098b85a]]


void FUN_0098b820(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x134) = 1;
  (**(code **)(*param_1 + 0x40))();
  (**(code **)(*param_1 + 0x74))(in_ECX + 0x2c);
  puVar1 = (undefined4 *)FUN_0098bce0();
  *puVar1 = param_1;
  return;
}

