// FUN_009f3a90 @ 009f3a90 body=[[009f3a90, 009f3b86]]


undefined4 FUN_009f3a90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5695c;
  local_10 = ExceptionList;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&DAT_009f3b9c)[param_1]) {
  case 0:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x40);
    local_8 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_009f25c0(iVar1);
      ExceptionList = local_10;
      return uVar2;
    }
    break;
  case 1:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x40);
    local_8 = 1;
    if (iVar1 != 0) {
      uVar2 = FUN_009f25c0(iVar1);
      ExceptionList = local_10;
      return uVar2;
    }
    break;
  case 2:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x54);
    local_8 = 2;
    if (iVar1 != 0) {
      uVar2 = FUN_009f2ba0(iVar1);
      ExceptionList = local_10;
      return uVar2;
    }
    break;
  case 3:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x74);
    local_8 = 3;
    if (iVar1 != 0) {
      uVar2 = FUN_009f3350(iVar1);
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

