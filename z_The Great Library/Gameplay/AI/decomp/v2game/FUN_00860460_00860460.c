// FUN_00860460 @ 00860460 body=[[00860460, 00860478] [0086047c, 0086049a] [0086049e, 008604b2] [008604b6, 008604bd]]


void FUN_00860460(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0xa8));
  }
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  if (*(int *)(in_ECX + 0x50) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x50));
  }
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

