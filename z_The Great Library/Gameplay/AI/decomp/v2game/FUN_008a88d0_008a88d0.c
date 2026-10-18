// FUN_008a88d0 @ 008a88d0  (requested 008A88D0, first bytes: C7 40 04 8D 01 00 00 C7)


void FUN_008a88d0(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  in_EAX[1] = 0x18d;
  *in_EAX = CEventScope::vftable;
  in_EAX[2] = *(undefined4 *)(in_ECX + 8);
  in_EAX[3] = *(undefined4 *)(in_ECX + 0xc);
  in_EAX[4] = *(undefined4 *)(in_ECX + 0x10);
  in_EAX[5] = *(undefined4 *)(in_ECX + 0x14);
  in_EAX[6] = *(undefined4 *)(in_ECX + 0x18);
  *(undefined1 *)(in_EAX + 7) = *(undefined1 *)(in_ECX + 0x1c);
  *(undefined1 *)((int)in_EAX + 0x1d) = *(undefined1 *)(in_ECX + 0x1d);
  in_EAX[8] = *(undefined4 *)(in_ECX + 0x20);
  in_EAX[9] = *(undefined4 *)(in_ECX + 0x24);
  in_EAX[10] = *(undefined4 *)(in_ECX + 0x28);
  in_EAX[0xb] = *(undefined4 *)(in_ECX + 0x2c);
  in_EAX[0xc] = *(undefined4 *)(in_ECX + 0x30);
  in_EAX[0xd] = *(undefined4 *)(in_ECX + 0x34);
  in_EAX[0xe] = *(undefined4 *)(in_ECX + 0x38);
  in_EAX[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  in_EAX[0x10] = 1;
  return;
}

