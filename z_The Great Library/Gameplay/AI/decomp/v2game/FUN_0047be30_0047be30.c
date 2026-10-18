// FUN_0047be30 @ 0047be30 body=[[0047be30, 0047be3c] [0047be40, 0047be4d] [0047be51, 0047be6b] [0047be6f, 0047be88]]


void FUN_0047be30(void)

{
  uint *puVar1;
  uint *in_EAX;
  uint *puVar2;
  uint *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar2 = in_EAX + 0xd;
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
      puVar1 = puVar2 + 6;
      puVar2 = puVar2 + 0x13;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

