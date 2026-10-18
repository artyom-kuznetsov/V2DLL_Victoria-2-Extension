// FUN_007e7320 @ 007e7320 body=[[007e7320, 007e7334] [007e7338, 007e7352] [007e7356, 007e735c]]


void FUN_007e7320(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0x20) = 0xf;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

