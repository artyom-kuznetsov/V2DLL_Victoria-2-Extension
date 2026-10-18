// FUN_00455fa0 @ 00455fa0 body=[[00455fa0, 00455fdd]]


void FUN_00455fa0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x38))();
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0x2d2d2d;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}

