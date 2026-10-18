// FUN_00748ce0 @ 00748ce0 body=[[00748ce0, 00748d3a]]


void FUN_00748ce0(void)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = in_EAX[0x16];
  if (*(int *)(iVar1 + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 4) + 0x18) + 0x38))();
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0x2d2d2d;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  FUN_00748e10(in_EAX);
  (**(code **)(*(int *)(*in_EAX + 0x18) + 0x34))();
  return;
}

