// FUN_0054b6d0 @ 0054b6d0 body=[[0054b6d0, 0054b703]]


void FUN_0054b6d0(void)

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
      *(undefined1 *)(in_EAX + 0x10) = *(undefined1 *)(puVar2 + 2);
      *(undefined1 *)(in_EAX + 0x11) = *(undefined1 *)((int)puVar2 + 9);
      puVar1 = puVar2 + 4;
      in_EAX = in_EAX + 0x18;
      puVar2 = puVar2 + 6;
    } while (puVar1 != unaff_ESI);
  }
  return;
}

