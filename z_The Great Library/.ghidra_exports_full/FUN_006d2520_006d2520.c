// FUN_006d2520 @ 006d2520 body=[[006d2520, 006d2546]]


void FUN_006d2520(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x38))();
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))();
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  return;
}

