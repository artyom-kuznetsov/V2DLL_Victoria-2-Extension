// FUN_00a6b5d0 @ 00a6b5d0 body=[[00a6b5d0, 00a6b5dc] [00a6b5e0, 00a6b5ed] [00a6b5f1, 00a6b609]]


void FUN_00a6b5d0(void)

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
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 9;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

