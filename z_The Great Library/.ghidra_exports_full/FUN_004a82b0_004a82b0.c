// FUN_004a82b0 @ 004a82b0 body=[[004a82b0, 004a82c1]]


void FUN_004a82b0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xc4);
  *in_EAX = *(undefined4 *)(in_ECX + 0xc0);
  in_EAX[1] = uVar1;
  return;
}

