// FUN_005d3950 @ 005d3950  (requested 005D3950, first bytes: F3 0F 11 80 B8 00 00 00)


void FUN_005d3950(void)

{
  int in_EAX;
  undefined4 in_XMM0_Da;
  
  *(undefined4 *)(in_EAX + 0xb8) = in_XMM0_Da;
  *(undefined4 *)(in_EAX + 0xb4) = in_XMM0_Da;
  if (*(int **)(in_EAX + 0x10c) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0x10c) + 0x94))();
  }
  return;
}

