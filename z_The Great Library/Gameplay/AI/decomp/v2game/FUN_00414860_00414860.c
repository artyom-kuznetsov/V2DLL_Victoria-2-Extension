// FUN_00414860 @ 00414860 body=[[00414860, 00414874] [00414878, 00414896] [0041489a, 004148b3] [004148b7, 004148bd]]


void FUN_00414860(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x28));
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0xf;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined1 *)(in_ECX + 0x28) = 0;
  if (0xf < *(uint *)(in_ECX + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0xf;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

