// FUN_005c04f0 @ 005c04f0 body=[[005c04f0, 005c050a]]


void FUN_005c04f0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x34) = param_1;
  if (100000 < param_1) {
    *(undefined4 *)(in_ECX + 0x34) = 100000;
  }
  return;
}

