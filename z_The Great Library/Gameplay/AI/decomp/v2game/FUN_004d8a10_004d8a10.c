// FUN_004d8a10 @ 004d8a10 body=[[004d8a10, 004d8a24] [004d8a28, 004d8a46] [004d8a4a, 004d8a63] [004d8a67, 004d8a6d]]


void FUN_004d8a10(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x24));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0xf;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  if (0xf < *(uint *)(in_ECX + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0xf;
  *(undefined1 *)(in_ECX + 8) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

