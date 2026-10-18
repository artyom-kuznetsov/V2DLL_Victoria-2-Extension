// FUN_00456c70 @ 00456c70 body=[[00456c70, 00456c9d] [00456ca3, 00456cde] [00456cf5, 00456d06]]


void FUN_00456c70(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d498;
  local_10 = ExceptionList;
  if (*(char *)(param_1 + 0x21) == '\0') {
    ExceptionList = &local_10;
    FUN_00456c70(*(undefined4 *)(param_1 + 8));
    local_8 = 0;
    FUN_00445600(**(undefined4 **)(param_1 + 0x14),*(undefined4 **)(param_1 + 0x14));
    local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}

