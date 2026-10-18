// FUN_00462290 @ 00462290 body=[[00462290, 004622be] [004622c2, 004622d9] [004622e5, 004622eb]]


void FUN_00462290(int param_1)

{
  if (*(char *)(param_1 + 0x2d) != '\0') {
    return;
  }
  FUN_00462290(*(undefined4 *)(param_1 + 8));
  if (0xf < *(uint *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

