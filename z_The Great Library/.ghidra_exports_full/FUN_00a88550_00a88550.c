// FUN_00a88550 @ 00a88550 body=[[00a88550, 00a88591]]


void FUN_00a88550(int param_1)

{
  int in_EAX;
  undefined4 *in_ECX;
  
  if (2 < *(int *)(in_EAX + 0x18)) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  if (*(int *)(in_EAX + 0x18) < 4) {
    FUN_00a8a360();
    return;
  }
  if (in_ECX == (undefined4 *)0x0) {
    *(undefined4 *)(in_EAX + 0x18) = 7;
    return;
  }
  *in_ECX = 2;
  in_ECX[1] = in_EAX;
  in_ECX[3] = 0;
  FUN_00a8a360();
  return;
}

