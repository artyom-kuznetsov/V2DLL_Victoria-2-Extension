// FUN_00a3ab10 @ 00a3ab10 body=[[00a3ab10, 00a3ab1c] [00a3ab20, 00a3ab2d] [00a3ab31, 00a3ab4b] [00a3ab4f, 00a3ab68]]


void FUN_00a3ab10(void)

{
  uint *puVar1;
  uint *in_EAX;
  uint *puVar2;
  uint *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar2 = in_EAX + 0xc;
    do {
      if (0xf < *puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-5]);
      }
      *puVar2 = 0xf;
      puVar2[-1] = 0;
      *(undefined1 *)(puVar2 + -5) = 0;
      if (0xf < puVar2[-7]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-0xc]);
      }
      puVar2[-7] = 0xf;
      puVar2[-8] = 0;
      *(undefined1 *)(puVar2 + -0xc) = 0;
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 0xe;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

