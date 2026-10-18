// FUN_006a81a0 @ 006a81a0 body=[[006a81a0, 006a81b8] [006a81bc, 006a81d7] [006a81db, 006a81fb] [006a81ff, 006a820e]]


void FUN_006a81a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessage::vftable;
  if (0xf < (uint)in_ECX[0x1c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x17]);
  }
  in_ECX[0x1c] = 0xf;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  if (in_ECX[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  FUN_0042b9f0(in_ECX + 9);
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0xf;
  *(undefined1 *)(in_ECX + 1) = 0;
  return;
}

