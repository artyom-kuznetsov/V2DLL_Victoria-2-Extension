// FUN_00a16b60 @ 00a16b60 body=[[00a16b60, 00a16c23]]


void FUN_00a16b60(void)

{
  int in_EAX;
  undefined1 *in_ECX;
  
  if (in_EAX == 0) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *in_ECX = 0;
    FUN_00409350(&DAT_00e03350,3);
    return;
  }
  if (in_EAX == 1) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *in_ECX = 0;
    FUN_00409350("RUNNING",7);
    return;
  }
  if (in_EAX == 2) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0xf;
    *in_ECX = 0;
    FUN_00409350("FINNISHED",9);
    return;
  }
  if (in_EAX == 3) {
    FUN_009885d0();
    return;
  }
  if (in_EAX == 4) {
    FUN_009885d0();
    return;
  }
  FUN_009885d0();
  return;
}

