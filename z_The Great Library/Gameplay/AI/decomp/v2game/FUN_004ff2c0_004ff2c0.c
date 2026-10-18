// FUN_004ff2c0 @ 004ff2c0 body=[[004ff2c0, 004ff2d2] [004ff2d6, 004ff2f6] [004ff2fa, 004ff300]]


void FUN_004ff2c0(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

