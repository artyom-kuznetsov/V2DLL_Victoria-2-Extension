// FUN_00972880 @ 00972880 body=[[00972880, 00972895] [00972899, 009728ba] [009728be, 009728d2] [009728d6, 009728dd]]


void FUN_00972880(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x20));
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_004651b0(*(undefined4 *)(in_ECX + 0xc));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 8));
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

