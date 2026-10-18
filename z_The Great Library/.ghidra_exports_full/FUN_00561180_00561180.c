// FUN_00561180 @ 00561180 body=[[00561180, 005611ea]]


void FUN_00561180(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_012587ec == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x98);
    local_8 = 0;
    if (iVar1 != 0) {
      DAT_012587ec = FUN_00561080(iVar1);
      ExceptionList = local_10;
      return;
    }
    DAT_012587ec = 0;
  }
  ExceptionList = local_10;
  return;
}

