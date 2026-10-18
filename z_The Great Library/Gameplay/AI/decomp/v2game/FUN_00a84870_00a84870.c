// FUN_00a84870 @ 00a84870 body=[[00a84870, 00a8489e] [00a848a2, 00a848b9] [00a848c5, 00a848cb]]


void FUN_00a84870(int param_1)

{
  if (*(char *)(param_1 + 0x69) != '\0') {
    return;
  }
  FUN_00a84870(*(undefined4 *)(param_1 + 8));
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

