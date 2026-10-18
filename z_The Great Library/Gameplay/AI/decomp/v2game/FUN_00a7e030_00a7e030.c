// FUN_00a7e030 @ 00a7e030 body=[[00a7e030, 00a7e04c] [00a7e050, 00a7e082]]


void FUN_00a7e030(int param_1)

{
  undefined1 *in_EAX;
  undefined1 *puVar1;
  int in_ECX;
  int iVar2;
  
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x60) {
    iVar2 = 0x40;
    puVar1 = in_EAX;
    do {
      *puVar1 = puVar1[in_ECX - (int)in_EAX];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00a7dbc0(in_ECX + 0x40);
    FUN_00a7dd30(in_ECX + 0x50);
    in_EAX = in_EAX + 0x60;
  }
  return;
}

