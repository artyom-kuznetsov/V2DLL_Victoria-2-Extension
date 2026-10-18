// FUN_00a6b610 @ 00a6b610 body=[[00a6b610, 00a6b61c] [00a6b620, 00a6b62d] [00a6b631, 00a6b649]]


void FUN_00a6b610(void)

{
  uint *puVar1;
  uint *in_EAX;
  uint *puVar2;
  uint *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar2 = in_EAX + 6;
    do {
      if (0xf < *puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-5]);
      }
      *puVar2 = 0xf;
      puVar2[-1] = 0;
      *(undefined1 *)(puVar2 + -5) = 0;
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 8;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

