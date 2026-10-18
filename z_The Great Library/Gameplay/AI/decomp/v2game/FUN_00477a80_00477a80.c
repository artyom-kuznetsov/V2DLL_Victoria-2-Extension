// FUN_00477a80 @ 00477a80 body=[[00477a80, 00477ab7]]


void FUN_00477a80(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x38))();
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 8) = 0x2d2d2d;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}

