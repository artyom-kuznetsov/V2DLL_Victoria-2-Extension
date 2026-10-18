// FUN_005edd10 @ 005edd10 body=[[005edd10, 005ede2e]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_005edd10(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cd74;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_8 = 4;
  puVar1 = (undefined4 *)FUN_00aae9af(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    _DAT_012588d0 = _DAT_012588d0 + 1;
    *puVar1 = CHistoryContainer::vftable;
    puVar1[1] = 0x18d;
    puVar1[2] = 43800000;
    puVar1[2] = DAT_01259abc;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    *puVar1 = CDiplomaticHistory::vftable;
  }
  param_1[8] = puVar1;
  puVar1 = (undefined4 *)FUN_00aae9af(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    _DAT_012588d0 = _DAT_012588d0 + 1;
    *puVar1 = CHistoryContainer::vftable;
    puVar1[1] = 0x18d;
    puVar1[2] = 43800000;
    puVar1[2] = DAT_01259abc;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
    *puVar1 = CWarHistory::vftable;
    puVar1[8] = 0;
    param_1[9] = puVar1;
    ExceptionList = local_10;
    return param_1;
  }
  param_1[9] = 0;
  ExceptionList = local_10;
  return param_1;
}

