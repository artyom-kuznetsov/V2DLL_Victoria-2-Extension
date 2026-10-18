// FUN_006a2070 @ 006a2070 body=[[006a2070, 006a20b6]]


undefined4 * FUN_006a2070(void)

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
      *in_ECX = *(undefined4 *)((int)puVar2 + -0xc);
      *(undefined4 *)((int)puVar3 + -4) = *(undefined4 *)((int)puVar2 + -4);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar2 + 2);
      iVar1 = (int)puVar2 + 0x14;
      in_ECX = in_ECX + 8;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar1 != unaff_EDI);
  }
  return in_ECX;
}

