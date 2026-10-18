// FUN_00536790 @ 00536790 body=[[00536790, 005367a1]]


void FUN_00536790(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x147c);
  *in_EAX = *(undefined4 *)(in_ECX + 0x1478);
  in_EAX[1] = uVar1;
  return;
}

