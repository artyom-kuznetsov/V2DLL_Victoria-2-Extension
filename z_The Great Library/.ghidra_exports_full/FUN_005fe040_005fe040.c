// FUN_005fe040 @ 005fe040 body=[[005fe040, 005fe06a]]


void FUN_005fe040(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x10))();
  (**(code **)(*(int *)(in_ECX[8] + 0x18) + 0x38))();
  (**(code **)(*(int *)in_ECX[8] + 0x50))();
  in_ECX[8] = 0;
  return;
}

