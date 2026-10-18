// FUN_00a409d0 @ 00a409d0 body=[[00a409d0, 00a409dc] [00a409e0, 00a409ed] [00a409f1, 00a40a09]]


void FUN_00a409d0(void)

{
  uint *puVar1;
  uint *in_EAX;
  uint *puVar2;
  uint *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar2 = in_EAX + 0x1b;
    do {
      if (0xf < *puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-5]);
      }
      *puVar2 = 0xf;
      puVar2[-1] = 0;
      *(undefined1 *)(puVar2 + -5) = 0;
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 0x1d;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

