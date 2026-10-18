// FUN_00a3a000 @ 00a3a000 body=[[00a3a000, 00a3a02e] [00a3a032, 00a3a049] [00a3a055, 00a3a05b]]


void FUN_00a3a000(int param_1)

{
  if (*(char *)(param_1 + 0x41) != '\0') {
    return;
  }
  FUN_00a3a000(*(undefined4 *)(param_1 + 8));
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

