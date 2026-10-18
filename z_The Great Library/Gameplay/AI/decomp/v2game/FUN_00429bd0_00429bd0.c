// FUN_00429bd0 @ 00429bd0 body=[[00429bd0, 00429c10]]


void FUN_00429bd0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x6c) - *(int *)(in_ECX + 0x68) & 0xfffffff8U) == 0) {
    in_EAX[1] = 0;
    *in_EAX = 0x2d2d2d;
    return;
  }
  uVar1 = **(undefined4 **)(in_ECX + 0x68);
  in_EAX[1] = (*(undefined4 **)(in_ECX + 0x68))[1];
  *in_EAX = uVar1;
  return;
}

