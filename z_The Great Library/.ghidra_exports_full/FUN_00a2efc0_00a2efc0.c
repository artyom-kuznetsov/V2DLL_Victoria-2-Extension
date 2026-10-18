// FUN_00a2efc0 @ 00a2efc0 body=[[00a2efc0, 00a2efda] [00a2efde, 00a2f008] [00a2f00c, 00a2f012]]


void FUN_00a2efc0(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x170)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x15c));
  }
  *(undefined4 *)(in_ECX + 0x170) = 0xf;
  *(undefined4 *)(in_ECX + 0x16c) = 0;
  *(undefined1 *)(in_ECX + 0x15c) = 0;
  FUN_00a203f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

