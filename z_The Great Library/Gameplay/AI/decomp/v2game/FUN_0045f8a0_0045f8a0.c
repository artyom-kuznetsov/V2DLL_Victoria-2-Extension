// FUN_0045f8a0 @ 0045f8a0 body=[[0045f8a0, 0045f8d5] [0045f8d9, 0045f90f]]


void FUN_0045f8a0(int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b406ec;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    ExceptionList = &pvStack_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x9c));
  }
  ExceptionList = &pvStack_10;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  local_8 = 4;
  FUN_00462440(**(undefined4 **)(param_1 + 0x90),*(undefined4 **)(param_1 + 0x90));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 0x90));
}

