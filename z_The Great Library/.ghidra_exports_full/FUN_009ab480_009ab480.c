// FUN_009ab480 @ 009ab480 body=[[009ab480, 009ab4b7] [009ab4bb, 009ab4e0]]


void FUN_009ab480(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bdeb;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_009adbb0();
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_10;
  return;
}

