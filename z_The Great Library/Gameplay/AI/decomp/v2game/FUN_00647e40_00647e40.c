// FUN_00647e40 @ 00647e40 body=[[00647e40, 00647e59] [00647e5d, 00647e78] [00647e82, 00647e99] [00647e9d, 00647eb6] [00647eba, 00647ed8] [00647ee2, 00647ef4]]


void FUN_00647e40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CEU3Idler::vftable;
  if (in_ECX[0x1e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1e]);
  }
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  if (in_ECX[0x18] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x18]);
  }
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  if (0xf < (uint)in_ECX[0x12]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd]);
  }
  in_ECX[0x12] = 0xf;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  if (in_ECX[9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  if (in_ECX[3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[3]);
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *in_ECX = CIdler::vftable;
  return;
}

