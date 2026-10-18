// FUN_004da280 @ 004da280 body=[[004da280, 004da32d]]


void FUN_004da280(void)

{
  int in_EAX;
  undefined1 *in_ECX;
  
  if (in_EAX == 0) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *in_ECX = 0;
    FUN_00409350("factory",7);
    return;
  }
  if (in_EAX == 1) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *in_ECX = 0;
    FUN_00409350(&DAT_00dfda14,3);
    return;
  }
  if (in_EAX == 2) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *in_ECX = 0;
    FUN_00409350("infrastructure",0xe);
    return;
  }
  if (in_EAX == 3) {
    FUN_009885d0();
    return;
  }
  FUN_009885d0();
  return;
}

