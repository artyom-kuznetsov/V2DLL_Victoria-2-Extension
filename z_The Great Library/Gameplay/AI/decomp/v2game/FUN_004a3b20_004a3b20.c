// FUN_004a3b20 @ 004a3b20 body=[[004a3b20, 004a3b2c] [004a3b30, 004a3b3d] [004a3b41, 004a3b5b] [004a3b5f, 004a3b78]]


void FUN_004a3b20(void)

{
  uint *puVar1;
  uint *in_EAX;
  uint *puVar2;
  uint *unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar2 = in_EAX + 0x10;
    do {
      if (0xf < *puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-5]);
      }
      *puVar2 = 0xf;
      puVar2[-1] = 0;
      *(undefined1 *)(puVar2 + -5) = 0;
      if (0xf < puVar2[-9]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-0xe]);
      }
      puVar2[-9] = 0xf;
      puVar2[-10] = 0;
      *(undefined1 *)(puVar2 + -0xe) = 0;
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 0x12;
    } while (puVar1 != unaff_EDI);
  }
  return;
}

