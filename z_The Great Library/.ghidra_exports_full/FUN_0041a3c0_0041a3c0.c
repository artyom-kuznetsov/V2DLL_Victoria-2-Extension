// FUN_0041a3c0 @ 0041a3c0 body=[[0041a3c0, 0041a3f2]]


void FUN_0041a3c0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  if (DAT_012586f2 != '\0') {
    uVar1 = *(undefined4 *)(in_ECX + 0xe84);
    *in_EAX = *(undefined4 *)(in_ECX + 0xe80);
    in_EAX[1] = uVar1;
    return;
  }
  uVar1 = *(undefined4 *)(in_ECX + 0xe7c);
  *in_EAX = *(undefined4 *)(in_ECX + 0xe78);
  in_EAX[1] = uVar1;
  return;
}

