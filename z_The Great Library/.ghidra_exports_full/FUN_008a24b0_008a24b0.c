// FUN_008a24b0 @ 008a24b0 body=[[008a24b0, 008a25a5]]


undefined4 * FUN_008a24b0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b90ae9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = 0x18d;
  *(undefined2 *)(param_1 + 7) = 0;
  iVar1 = DAT_012587ec;
  local_8 = 0;
  uStack_7 = 0;
  *param_1 = CTriggerUprising::vftable;
  param_1[8] = 0;
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af(0x98);
    local_8 = 1;
    if (iVar1 == 0) {
      iVar1 = 0;
      DAT_012587ec = iVar1;
    }
    else {
      iVar1 = FUN_00561080(iVar1);
      DAT_012587ec = iVar1;
    }
  }
  local_8 = 0;
  param_1[9] = iVar1;
  if (DAT_0125880c == 0) {
    iVar1 = FUN_00aae9af(0x74);
    local_8 = 2;
    if (iVar1 == 0) {
      DAT_0125880c = 0;
    }
    else {
      DAT_0125880c = FUN_00567560(iVar1);
    }
  }
  local_8 = 0;
  param_1[10] = DAT_0125880c;
  if (DAT_01258a34 == 0) {
    iVar1 = FUN_00aae9af(0x1dc);
    _local_8 = CONCAT31(uStack_7,3);
    if (iVar1 == 0) {
      DAT_01258a34 = 0;
    }
    else {
      DAT_01258a34 = FUN_00972e50();
    }
  }
  param_1[0xb] = DAT_01258a34;
  ExceptionList = local_10;
  return param_1;
}

