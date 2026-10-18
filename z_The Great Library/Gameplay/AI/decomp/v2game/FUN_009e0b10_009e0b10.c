// FUN_009e0b10 @ 009e0b10 body=[[009e0b10, 009e0b25] [009e0b29, 009e0b59] [009e0b5d, 009e0b63]]


void FUN_009e0b10(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x158) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x158));
  }
  *(undefined4 *)(in_ECX + 0x158) = 0;
  *(undefined4 *)(in_ECX + 0x15c) = 0;
  *(undefined4 *)(in_ECX + 0x160) = 0;
  FUN_00a203f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

