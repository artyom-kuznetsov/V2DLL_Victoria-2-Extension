// FUN_0042c960 @ 0042c960 body=[[0042c960, 0042c9cd]]


void FUN_0042c960(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  
  if (in_ECX != unaff_ESI) {
    puVar2 = in_ECX + 2;
    do {
      *(undefined4 *)(in_EAX + 4) = puVar2[-1];
      *(undefined4 *)(in_EAX + 8) = *puVar2;
      *(undefined4 *)(in_EAX + 0xc) = puVar2[1];
      *(undefined4 *)(in_EAX + 0x10) = puVar2[2];
      *(undefined4 *)(in_EAX + 0x14) = puVar2[3];
      *(undefined4 *)(in_EAX + 0x18) = puVar2[4];
      *(undefined4 *)(in_EAX + 0x1c) = puVar2[5];
      *(undefined4 *)(in_EAX + 0x20) = puVar2[6];
      *(undefined4 *)(in_EAX + 0x24) = puVar2[7];
      *(undefined4 *)(in_EAX + 0x28) = puVar2[8];
      *(undefined4 *)(in_EAX + 0x2c) = puVar2[9];
      *(undefined4 *)(in_EAX + 0x30) = puVar2[10];
      *(undefined4 *)(in_EAX + 0x34) = puVar2[0xb];
      *(undefined1 *)(in_EAX + 0x38) = *(undefined1 *)(puVar2 + 0xc);
      *(undefined4 *)(in_EAX + 0x3c) = puVar2[0xd];
      puVar1 = puVar2 + 0xe;
      in_EAX = in_EAX + 0x40;
      puVar2 = puVar2 + 0x10;
    } while (puVar1 != unaff_ESI);
  }
  return;
}

