// FUN_004c6aa0 @ 004c6aa0 body=[[004c6aa0, 004c6ac6]]


void FUN_004c6aa0(int param_1)

{
  undefined4 uVar1;
  undefined8 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(param_1 + in_ECX * 0xc + 0x108);
  *in_EAX = *(undefined8 *)(param_1 + 0x100 + in_ECX * 0xc);
  *(undefined4 *)(in_EAX + 1) = uVar1;
  return;
}

