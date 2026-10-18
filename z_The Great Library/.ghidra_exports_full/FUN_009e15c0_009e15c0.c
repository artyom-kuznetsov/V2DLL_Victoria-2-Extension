// FUN_009e15c0 @ 009e15c0 body=[[009e15c0, 009e160c]]


undefined4 * FUN_009e15c0(void)

{
  undefined8 *puVar1;
  undefined8 *in_EAX;
  undefined4 *in_ECX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar3 = (undefined8 *)(in_ECX + 3);
    puVar2 = (undefined8 *)((int)in_EAX + 0xc);
    do {
      *in_ECX = *(undefined4 *)((int)puVar2 + -0xc);
      *(undefined4 *)((int)puVar3 + -4) = *(undefined4 *)((int)puVar2 + -4);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar2 + 2);
      *(undefined4 *)((int)puVar3 + 0x14) = *(undefined4 *)((int)puVar2 + 0x14);
      puVar1 = puVar2 + 3;
      in_ECX = in_ECX + 9;
      puVar3 = (undefined8 *)((int)puVar3 + 0x24);
      puVar2 = (undefined8 *)((int)puVar2 + 0x24);
    } while (puVar1 != unaff_EDI);
  }
  return in_ECX;
}

