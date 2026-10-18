// FUN_009a5820 @ 009a5820 body=[[009a5820, 009a5870] [009a5898, 009a58ad]]


void FUN_009a5820(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_0131c974;
  puStack_c = &LAB_00b40698;
  local_10 = ExceptionList;
  if ((param_1 != DAT_0131c974) && (DAT_0131c974 != 0)) {
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a58f0(**(undefined4 **)(DAT_0131c974 + 4),*(undefined4 **)(DAT_0131c974 + 4));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar1 + 4));
  }
  DAT_0131c974 = param_1;
  return;
}

