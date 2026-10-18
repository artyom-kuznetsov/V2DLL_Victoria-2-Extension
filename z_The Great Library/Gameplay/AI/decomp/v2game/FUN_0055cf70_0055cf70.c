// FUN_0055cf70 @ 0055cf70 body=[[0055cf70, 0055cfa2] [0055cfa6, 0055cfc1] [0055cfc5, 0055cfd7] [0055cfe2, 0055cfea]]


void FUN_0055cf70(int param_1)

{
  if (*(char *)(param_1 + 0x45) != '\0') {
    return;
  }
  FUN_0055cf70(*(undefined4 *)(param_1 + 8));
  if (0xf < *(uint *)(param_1 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
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

