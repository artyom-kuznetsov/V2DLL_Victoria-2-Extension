// FUN_005e5d30 @ 005e5d30 body=[[005e5d30, 005e5d3c] [005e5d40, 005e5d4d] [005e5d51, 005e5d69]]


void FUN_005e5d30(void)

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
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 10;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

