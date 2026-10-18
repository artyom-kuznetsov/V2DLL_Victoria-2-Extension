// FUN_008b7e40 @ 008b7e40 body=[[008b7e40, 008b7e54] [008b7e58, 008b7e79] [008b7e7d, 008b7e83]]


void FUN_008b7e40(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 0x30) = 0xf;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  FUN_008b32d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

