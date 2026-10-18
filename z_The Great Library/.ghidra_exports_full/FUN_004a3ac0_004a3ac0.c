// FUN_004a3ac0 @ 004a3ac0 body=[[004a3ac0, 004a3acc] [004a3ad0, 004a3add] [004a3ae1, 004a3afb] [004a3aff, 004a3b18]]


void FUN_004a3ac0(void)

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
      puVar1 = puVar2 + 4;
      puVar2 = puVar2 + 0x10;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

