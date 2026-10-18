// FUN_009f3300 @ 009f3300 body=[[009f3300, 009f3314] [009f3318, 009f3337] [009f333b, 009f3341]]


void FUN_009f3300(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x58));
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0xf;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined1 *)(in_ECX + 0x58) = 0;
  FUN_009f2b40();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

