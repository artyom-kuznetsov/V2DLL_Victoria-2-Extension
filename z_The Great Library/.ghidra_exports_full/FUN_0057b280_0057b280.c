// FUN_0057b280 @ 0057b280 body=[[0057b280, 0057b2b6]]


void FUN_0057b280(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_EDX;
  undefined4 *unaff_ESI;
  
  if (in_EDX != unaff_ESI) {
    iVar2 = in_EAX;
    puVar3 = in_EDX + 4;
    do {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)((int)in_EDX + iVar2 + (8 - in_EAX));
      *(undefined4 *)(iVar2 + 0xc) = puVar3[-1];
      *(undefined4 *)(iVar2 + 0x10) = *puVar3;
      *(undefined4 *)(iVar2 + 0x14) = puVar3[1];
      puVar1 = puVar3 + 2;
      iVar2 = iVar2 + 0x18;
      puVar3 = puVar3 + 6;
    } while (puVar1 != unaff_ESI);
  }
  return;
}

