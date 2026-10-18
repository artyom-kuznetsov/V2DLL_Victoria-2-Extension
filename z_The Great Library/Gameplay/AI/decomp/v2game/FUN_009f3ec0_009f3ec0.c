// FUN_009f3ec0 @ 009f3ec0 body=[[009f3ec0, 009f3f2a] [009f3f2e, 009f3f60]]


void FUN_009f3ec0(undefined4 param_1)

{
  int unaff_ESI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)(unaff_ESI + 0x50) == '\0') &&
     (ExceptionList = &local_10, *(int *)(unaff_ESI + 0x48) != 0)) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 0;
    (**(code **)(**(int **)(unaff_ESI + 0x48) + 0x54))(local_2c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  *(undefined1 *)(unaff_ESI + 0x50) = 0;
  if (*(int **)(unaff_ESI + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_ESI + 0x48) + 0x54))(param_1);
  }
  ExceptionList = local_10;
  return;
}

