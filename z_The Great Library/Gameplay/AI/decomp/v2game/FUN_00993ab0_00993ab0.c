// FUN_00993ab0 @ 00993ab0 body=[[00993ab0, 00993b7d]]


int FUN_00993ab0(void)

{
  uint in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c282;
  local_10 = ExceptionList;
  if ((in_ECX < DAT_0131c8f0) && (DAT_0131c8ec <= in_ECX)) {
    iVar1 = in_ECX - DAT_0131c8ec;
    ExceptionList = &local_10;
    if (DAT_0131c8f0 == DAT_0131c8f4) {
      ExceptionList = &local_10;
      FUN_00993bf0();
    }
    iVar1 = (iVar1 / 0x38) * 7;
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (DAT_0131c8f0 == DAT_0131c8f4) {
      ExceptionList = &local_10;
      FUN_00993bf0();
    }
    local_8 = 1;
    iVar1 = 0;
  }
  if (DAT_0131c8f0 != 0) {
    iVar1 = FUN_00a3ab70(DAT_0131c8f0);
  }
  DAT_0131c8f0 = DAT_0131c8f0 + 0x38;
  ExceptionList = local_10;
  return iVar1;
}

