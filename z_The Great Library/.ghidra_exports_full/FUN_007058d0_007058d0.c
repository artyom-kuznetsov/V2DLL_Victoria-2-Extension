// FUN_007058d0 @ 007058d0 body=[[007058d0, 00705906]]


void FUN_007058d0(void)

{
  undefined1 *puVar1;
  int in_EAX;
  int iVar2;
  undefined1 *in_ECX;
  undefined1 *puVar3;
  undefined1 *unaff_EDI;
  
  if (in_ECX != unaff_EDI) {
    iVar2 = in_EAX;
    puVar3 = in_ECX + 0xc;
    do {
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(in_ECX + iVar2 + (4 - in_EAX));
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(puVar3 + -4);
      *(undefined1 *)(iVar2 + 0xc) = *puVar3;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(puVar3 + 4);
      puVar1 = puVar3 + 8;
      iVar2 = iVar2 + 0x14;
      puVar3 = puVar3 + 0x14;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

