// FUN_004464f0 @ 004464f0 body=[[004464f0, 0044675a]]


void FUN_004464f0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int local_60;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b53c90;
  local_14 = ExceptionList;
  if (0x507 < param_2) {
    if (param_2 < 0x945) {
      if (param_2 == 0x944) {
        ExceptionList = &local_14;
        iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i");
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
        FUN_009a1140();
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0x56b) {
        if (param_2 != 0x712) {
          return;
        }
        ExceptionList = &local_14;
        FUN_009a1c10();
        ExceptionList = local_14;
        return;
      }
    }
    else if (param_2 != 0xa36) {
      return;
    }
    ExceptionList = &local_14;
    FUN_009a1bb0();
    ExceptionList = local_14;
    return;
  }
  if (param_2 == 0x507) {
    ExceptionList = &local_14;
    FUN_009a1ce0();
    ExceptionList = local_14;
    return;
  }
  if (0x2c9 < param_2) {
    if (param_2 == 0x2f0) {
      local_c = 1;
      ExceptionList = &local_14;
      FUN_009a1750();
      FUN_0055c6c0(DAT_012587e4);
      *(undefined4 *)(in_ECX + 0x40) =
           *(undefined4 *)(*(int *)(DAT_012588e8 + 0xadc) + local_60 * 4);
      FUN_00408ad0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0x416) {
      return;
    }
    ExceptionList = &local_14;
    FUN_009a1c10();
    ExceptionList = local_14;
    return;
  }
  if (param_2 == 0x2c9) {
    ExceptionList = &local_14;
    FUN_009a1c10();
    ExceptionList = local_14;
    return;
  }
  if (param_2 != 0x19c) {
    if (param_2 != 0x1d4) {
      return;
    }
    ExceptionList = &local_14;
    FUN_009a19f0();
    FUN_009c16d0();
    FUN_0072d4e0();
    local_c = 0;
    FUN_004c0270();
    FUN_00584e60();
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  FUN_00409810();
  ExceptionList = local_14;
  return;
}

