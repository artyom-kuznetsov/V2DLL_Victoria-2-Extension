// FUN_007c8150 @ 007c8150 body=[[007c8150, 007c815c] [007c8160, 007c816d] [007c8171, 007c8189]]


void FUN_007c8150(void)

{
  uint *puVar1;
  uint *in_EAX;
  uint *puVar2;
  uint *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar2 = in_EAX + 8;
    do {
      if (0xf < *puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-5]);
      }
      *puVar2 = 0xf;
      puVar2[-1] = 0;
      *(undefined1 *)(puVar2 + -5) = 0;
      puVar1 = puVar2 + 9;
      puVar2 = puVar2 + 0x11;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

