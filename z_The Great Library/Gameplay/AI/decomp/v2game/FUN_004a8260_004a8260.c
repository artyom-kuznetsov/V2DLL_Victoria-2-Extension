// FUN_004a8260 @ 004a8260 body=[[004a8260, 004a826b]]


void FUN_004a8260(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xc);
  *in_EAX = *(undefined4 *)(in_ECX + 8);
  in_EAX[1] = uVar1;
  return;
}

