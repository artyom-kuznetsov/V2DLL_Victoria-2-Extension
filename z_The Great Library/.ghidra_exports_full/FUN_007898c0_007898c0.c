// FUN_007898c0 @ 007898c0 body=[[007898c0, 007898d7] [007898db, 00789902] [00789906, 0078990c]]


void FUN_007898c0(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x8c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x78));
  }
  *(undefined4 *)(in_ECX + 0x8c) = 0xf;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined1 *)(in_ECX + 0x78) = 0;
  FUN_00640880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

