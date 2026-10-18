// FUN_00a8dd50 @ 00a8dd50 body=[[00a8dd50, 00a8dd98]]


undefined4 * FUN_00a8dd50(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar3 = in_ECX + 3;
    puVar2 = in_EAX + 3;
    do {
      if (in_ECX != (undefined4 *)0x0) {
        *in_ECX = puVar2[-3];
        puVar3[-2] = puVar2[-2];
        puVar3[-1] = puVar2[-1];
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar2 + 2);
      }
      puVar1 = puVar2 + 3;
      in_ECX = in_ECX + 6;
      puVar3 = puVar3 + 6;
      puVar2 = puVar2 + 6;
    } while (puVar1 != unaff_EDI);
  }
  return in_ECX;
}

