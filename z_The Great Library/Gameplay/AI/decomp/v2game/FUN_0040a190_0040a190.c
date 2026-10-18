// FUN_0040a190 @ 0040a190 body=[[0040a190, 0040a19c] [0040a1a0, 0040a1ad] [0040a1b1, 0040a1c9]]


void FUN_0040a190(void)

{
  uint *puVar1;
  uint *in_EAX;
  uint *puVar2;
  uint *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar2 = in_EAX + 7;
    do {
      if (0xf < *puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-5]);
      }
      *puVar2 = 0xf;
      puVar2[-1] = 0;
      *(undefined1 *)(puVar2 + -5) = 0;
      puVar1 = puVar2 + 6;
      puVar2 = puVar2 + 0xd;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

