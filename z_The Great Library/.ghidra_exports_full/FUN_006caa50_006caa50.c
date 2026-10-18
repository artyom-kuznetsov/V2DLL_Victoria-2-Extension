// FUN_006caa50 @ 006caa50 body=[[006caa50, 006caab4] [006caad4, 006caaf9] [006caafd, 006cab14]]


void FUN_006caa50(void)

{
  int in_ECX;
  int local_8;
  
  while (*(int *)(in_ECX + 0x10) != 0) {
    FUN_006ca9a0();
  }
  local_8 = *(int *)(in_ECX + 8);
  do {
    if (local_8 == 0) {
      if (*(int *)(in_ECX + 4) == 0) {
        *(undefined4 *)(in_ECX + 8) = 0;
        *(undefined4 *)(in_ECX + 4) = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(in_ECX + 4));
    }
    local_8 = local_8 + -1;
  } while (*(int *)(*(int *)(in_ECX + 4) + local_8 * 4) == 0);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(*(int *)(in_ECX + 4) + local_8 * 4));
}

