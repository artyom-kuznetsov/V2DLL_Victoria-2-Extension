// FUN_00429c20 @ 00429c20 body=[[00429c20, 00429c60]]


void FUN_00429c20(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x7c) - *(int *)(in_ECX + 0x78) & 0xfffffff8U) == 0) {
    in_EAX[1] = 0;
    *in_EAX = 0x2d2d2d;
    return;
  }
  uVar1 = **(undefined4 **)(in_ECX + 0x78);
  in_EAX[1] = (*(undefined4 **)(in_ECX + 0x78))[1];
  *in_EAX = uVar1;
  return;
}

