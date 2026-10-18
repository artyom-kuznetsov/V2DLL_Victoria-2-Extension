// FUN_00648c80 @ 00648c80 body=[[00648c80, 00648c94] [00648c98, 00648cb2] [00648cb6, 00648cbc]]


void FUN_00648c80(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x14));
  }
  *(undefined4 *)(in_ECX + 0x28) = 0xf;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

