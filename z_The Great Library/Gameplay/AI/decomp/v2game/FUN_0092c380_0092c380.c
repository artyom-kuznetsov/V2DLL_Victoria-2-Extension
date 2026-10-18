// FUN_0092c380 @ 0092c380 body=[[0092c380, 0092c3ed]]


void FUN_0092c380(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  
  if (unaff_ESI != in_ECX) {
    puVar2 = in_ECX + 2;
    do {
      *(undefined4 *)(in_EAX + -0x3c) = puVar2[-0x11];
      *(undefined4 *)(in_EAX + -0x38) = puVar2[-0x10];
      *(undefined4 *)(in_EAX + -0x34) = puVar2[-0xf];
      *(undefined4 *)(in_EAX + -0x30) = puVar2[-0xe];
      *(undefined4 *)(in_EAX + -0x2c) = puVar2[-0xd];
      *(undefined4 *)(in_EAX + -0x28) = puVar2[-0xc];
      *(undefined4 *)(in_EAX + -0x24) = puVar2[-0xb];
      *(undefined4 *)(in_EAX + -0x20) = puVar2[-10];
      *(undefined4 *)(in_EAX + -0x1c) = puVar2[-9];
      *(undefined4 *)(in_EAX + -0x18) = puVar2[-8];
      *(undefined4 *)(in_EAX + -0x14) = puVar2[-7];
      *(undefined4 *)(in_EAX + -0x10) = puVar2[-6];
      *(undefined4 *)(in_EAX + -0xc) = puVar2[-5];
      *(undefined1 *)(in_EAX + -8) = *(undefined1 *)(puVar2 + -4);
      *(undefined4 *)(in_EAX + -4) = puVar2[-3];
      puVar1 = puVar2 + -0x12;
      in_EAX = in_EAX + -0x40;
      puVar2 = puVar2 + -0x10;
    } while (puVar1 != unaff_ESI);
  }
  return;
}

