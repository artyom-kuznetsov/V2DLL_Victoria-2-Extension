// FUN_009cc8f0 @ 009cc8f0 body=[[009cc8f0, 009cc913]]


void FUN_009cc8f0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x70) = 10;
  (**(code **)(**(int **)(in_ECX + 0x208) + 8))();
  *(undefined4 *)(in_ECX + 0x230) = 0;
  return;
}

