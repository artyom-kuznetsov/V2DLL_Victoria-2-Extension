// FUN_006ba120 @ 006ba120 body=[[006ba120, 006ba167]]


bool FUN_006ba120(void)

{
  int in_ECX;
  
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x548) + 0x18) + 0x38))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x548) + 0x18) + 0x30))();
  *(undefined4 *)(in_ECX + 0x548) = 0;
  FUN_006b9240(in_ECX + -0x88);
  return *(int *)(in_ECX + 0x548) != 0;
}

