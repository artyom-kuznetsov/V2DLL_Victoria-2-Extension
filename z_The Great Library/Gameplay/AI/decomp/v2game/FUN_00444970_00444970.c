// FUN_00444970 @ 00444970 body=[[00444970, 004449c9] [004449d4, 004449e9]]


void FUN_00444970(int *param_1,char param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49a58;
  local_10 = ExceptionList;
  if (*param_1 != 0) {
    ExceptionList = &local_10;
    FUN_0093d690();
    if (param_2 != '\0') {
      iVar1 = *param_1;
      if (iVar1 != 0) {
        local_8 = 0;
        FUN_00445600(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(iVar1 + 4));
      }
      *param_1 = 0;
    }
  }
  ExceptionList = local_10;
  return;
}

