// FUN_0079ef90 @ 0079ef90 body=[[0079ef90, 0079ef9c] [0079efa0, 0079efad] [0079efb1, 0079efc9]]


void FUN_0079ef90(void)

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
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 0xb;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

