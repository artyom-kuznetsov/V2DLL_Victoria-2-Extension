// FUN_00a2fac0 @ 00a2fac0 body=[[00a2fac0, 00a2fb00]]


void FUN_00a2fac0(void)

{
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0x11c)) {
    FUN_009bcda0();
  }
  *(undefined4 *)(in_ECX + 0x11c) = 0xffffffff;
  if (-1 < *(int *)(in_ECX + 0xb0)) {
    FUN_009bcda0();
  }
  *(undefined4 *)(in_ECX + 0xb0) = 0xffffffff;
  return;
}

