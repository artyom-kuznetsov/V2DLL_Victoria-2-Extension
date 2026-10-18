// FUN_00647b90 @ 00647b90 body=[[00647b90, 00647bb2] [00647bb7, 00647bde] [00647be2, 00647be8]]


void FUN_00647b90(uint param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6c) != 0) {
    FUN_005e5d30(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x6c));
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  FUN_00640880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

