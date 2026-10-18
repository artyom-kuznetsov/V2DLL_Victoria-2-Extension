// FUN_0040a110 @ 0040a110 body=[[0040a110, 0040a12d] [0040a131, 0040a14b] [0040a14f, 0040a168] [0040a16c, 0040a183]]


void FUN_0040a110(uint *param_1)

{
  uint *puVar1;
  uint *in_EAX;
  uint *puVar2;
  
  if (in_EAX != param_1) {
    puVar2 = in_EAX + 0x13;
    do {
      if (0xf < *puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-5]);
      }
      *puVar2 = 0xf;
      puVar2[-1] = 0;
      *(undefined1 *)(puVar2 + -5) = 0;
      if (0xf < puVar2[-10]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-0xf]);
      }
      puVar2[-10] = 0xf;
      puVar2[-0xb] = 0;
      *(undefined1 *)(puVar2 + -0xf) = 0;
      if (puVar2[-0x13] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar2[-0x13]);
      }
      puVar2[-0x13] = 0;
      puVar2[-0x12] = 0;
      puVar2[-0x11] = 0;
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 0x16;
    } while (puVar1 != param_1);
  }
  return;
}

