// FUN_0047e450 @ 0047e450 body=[[0047e450, 0047e462] [0047e466, 0047e486] [0047e48a, 0047e490]]


void FUN_0047e450(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x48));
  }
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

