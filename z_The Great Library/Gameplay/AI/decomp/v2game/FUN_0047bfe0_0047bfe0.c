// FUN_0047bfe0 @ 0047bfe0 body=[[0047bfe0, 0047c031]]


undefined4 * FUN_0047bfe0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 *in_ECX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar3 = (undefined8 *)(in_ECX + 3);
    puVar2 = (undefined8 *)(in_EAX + 0xc);
    do {
      if (in_ECX != (undefined4 *)0x0) {
        *in_ECX = *(undefined4 *)((int)puVar2 + -0xc);
        *(undefined4 *)((int)puVar3 + -4) = *(undefined4 *)((int)puVar2 + -4);
        *(undefined ***)(puVar3 + -1) = CColor::vftable;
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar2 + 2);
      }
      iVar1 = (int)puVar2 + 0x14;
      in_ECX = in_ECX + 8;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar1 != unaff_EDI);
  }
  return in_ECX;
}

