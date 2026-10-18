// FUN_00a2cdf0 @ 00a2cdf0 body=[[00a2cdf0, 00a2ce1e] [00a2ce22, 00a2ce39] [00a2ce45, 00a2ce4b]]


void FUN_00a2cdf0(int param_1)

{
  if (*(char *)(param_1 + 0x31) != '\0') {
    return;
  }
  FUN_00a2cdf0(*(undefined4 *)(param_1 + 8));
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

