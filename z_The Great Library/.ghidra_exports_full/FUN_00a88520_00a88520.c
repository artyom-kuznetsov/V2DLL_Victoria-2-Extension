// FUN_00a88520 @ 00a88520 body=[[00a88520, 00a8854b]]


void FUN_00a88520(int param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  *(undefined4 *)(param_1 + 0x1c) = 1;
  if (in_EAX == (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x18) = 3;
    return;
  }
  *(undefined4 *)(in_ECX + 0x18) = 4;
  *in_EAX = 1;
  in_EAX[1] = in_ECX;
  return;
}

