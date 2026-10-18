// FUN_00849b60 @ 00849b60 body=[[00849b60, 00849b6c] [00849b70, 00849c17]]


void FUN_00849b60(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  int unaff_ESI;
  
  if (unaff_ESI != in_ECX) {
    iVar2 = in_ECX + 8;
    do {
      *(undefined4 *)(in_EAX + -100) = *(undefined4 *)(iVar2 + -0x6c);
      *(undefined4 *)(in_EAX + -0x60) = *(undefined4 *)(iVar2 + -0x68);
      *(undefined4 *)(in_EAX + -0x5c) = *(undefined4 *)(iVar2 + -100);
      *(undefined4 *)(in_EAX + -0x58) = *(undefined4 *)(iVar2 + -0x60);
      *(undefined4 *)(in_EAX + -0x54) = *(undefined4 *)(iVar2 + -0x5c);
      *(undefined4 *)(in_EAX + -0x50) = *(undefined4 *)(iVar2 + -0x58);
      *(undefined4 *)(in_EAX + -0x4c) = *(undefined4 *)(iVar2 + -0x54);
      *(undefined4 *)(in_EAX + -0x48) = *(undefined4 *)(iVar2 + -0x50);
      *(undefined4 *)(in_EAX + -0x44) = *(undefined4 *)(iVar2 + -0x4c);
      *(undefined4 *)(in_EAX + -0x40) = *(undefined4 *)(iVar2 + -0x48);
      *(undefined4 *)(in_EAX + -0x3c) = *(undefined4 *)(iVar2 + -0x44);
      *(undefined4 *)(in_EAX + -0x38) = *(undefined4 *)(iVar2 + -0x40);
      *(undefined4 *)(in_EAX + -0x34) = *(undefined4 *)(iVar2 + -0x3c);
      *(undefined4 *)(in_EAX + -0x30) = *(undefined4 *)(iVar2 + -0x38);
      *(undefined4 *)(in_EAX + -0x2c) = *(undefined4 *)(iVar2 + -0x34);
      *(undefined4 *)(in_EAX + -0x28) = *(undefined4 *)(iVar2 + -0x30);
      *(undefined4 *)(in_EAX + -0x24) = *(undefined4 *)(iVar2 + -0x2c);
      *(undefined4 *)(in_EAX + -0x20) = *(undefined4 *)(iVar2 + -0x28);
      *(undefined4 *)(in_EAX + -0x1c) = *(undefined4 *)(iVar2 + -0x24);
      *(undefined4 *)(in_EAX + -0x18) = *(undefined4 *)(iVar2 + -0x20);
      *(undefined4 *)(in_EAX + -0x14) = *(undefined4 *)(iVar2 + -0x1c);
      *(undefined4 *)(in_EAX + -0x10) = *(undefined4 *)(iVar2 + -0x18);
      *(undefined4 *)(in_EAX + -0xc) = *(undefined4 *)(iVar2 + -0x14);
      *(undefined1 *)(in_EAX + -8) = *(undefined1 *)(iVar2 + -0x10);
      *(undefined4 *)(in_EAX + -4) = *(undefined4 *)(iVar2 + -0xc);
      iVar1 = iVar2 + -0x6c;
      in_EAX = in_EAX + -100;
      iVar2 = iVar2 + -100;
    } while (iVar1 != unaff_ESI);
  }
  return;
}

