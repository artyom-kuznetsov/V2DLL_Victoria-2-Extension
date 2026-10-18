// FUN_006a2140 @ 006a2140 body=[[006a2140, 006a214c] [006a2150, 006a215d] [006a2161, 006a217b] [006a217f, 006a2198]]


void FUN_006a2140(void)

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
      if (0xf < puVar2[-8]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-0xd]);
      }
      puVar2[-8] = 0xf;
      puVar2[-9] = 0;
      *(undefined1 *)(puVar2 + -0xd) = 0;
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 0x10;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

