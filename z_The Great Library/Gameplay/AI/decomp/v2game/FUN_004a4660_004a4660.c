// FUN_004a4660 @ 004a4660 body=[[004a4660, 004a4672] [004a4676, 004a4696] [004a469a, 004a46a0]]


void FUN_004a4660(byte param_1)

{
  int in_ECX;
  
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

