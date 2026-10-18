// FUN_004c0bc0 @ 004c0bc0 body=[[004c0bc0, 004c0bf0]]


void FUN_004c0bc0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_EDX;
  undefined4 *unaff_ESI;
  
  if (in_EDX != unaff_ESI) {
    iVar2 = in_EAX;
    puVar3 = in_EDX + 3;
    do {
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)((int)in_EDX + iVar2 + (4 - in_EAX));
      *(undefined4 *)(iVar2 + 8) = puVar3[-1];
      *(undefined4 *)(iVar2 + 0xc) = *puVar3;
      puVar1 = puVar3 + 1;
      iVar2 = iVar2 + 0x10;
      puVar3 = puVar3 + 4;
    } while (puVar1 != unaff_ESI);
  }
  return;
}

