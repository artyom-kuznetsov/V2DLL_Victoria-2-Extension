// FUN_0067a290 @ 0067a290 body=[[0067a290, 0067a2c8] [0067a2d4, 0067a2e2] [0067a2ef, 0067a2f6]]


void FUN_0067a290(int param_1)

{
  if (*(char *)(param_1 + 0x21) != '\0') {
    return;
  }
  FUN_0067a290(*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

