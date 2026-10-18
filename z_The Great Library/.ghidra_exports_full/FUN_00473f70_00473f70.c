// FUN_00473f70 @ 00473f70 body=[[00473f70, 0047403a] [00474044, 00474061]]


undefined4 * FUN_00473f70(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b51c56;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CRule::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  puVar2 = param_1 + 6;
  local_14 = 0x20;
  iVar1 = DAT_012586f8;
  do {
    *(undefined1 *)puVar2 = 0;
    if (iVar1 == 0) {
      iVar1 = FUN_00aae9af(0x2c);
      local_8._0_1_ = 1;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00473ed0(iVar1);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      DAT_012586f8 = iVar1;
    }
    puVar2[1] = iVar1;
    puVar2 = puVar2 + 2;
    local_14 = local_14 + -1;
  } while (-1 < local_14);
  param_1[0x48] = 0;
  iVar1 = 0;
  puVar2 = param_1 + 7;
  do {
    *puVar2 = *(undefined4 *)(iVar1 + DAT_0125b5d0);
    iVar1 = iVar1 + 4;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 0x84);
  puVar2 = param_1 + 6;
  iVar1 = 0x21;
  do {
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_10;
  return param_1;
}

