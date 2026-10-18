// FUN_005b6140 @ 005b6140 body=[[005b6140, 005b61b3]]


void FUN_005b6140(void)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  if (DAT_0125881c == 0) {
    ExceptionList = &local_14;
    iVar1 = FUN_00aae9af(0x144);
    local_c = 0;
    if (iVar1 != 0) {
      DAT_0125881c = FUN_005b5fe0(iVar1);
      ExceptionList = local_14;
      return;
    }
    DAT_0125881c = 0;
  }
  ExceptionList = local_14;
  return;
}

