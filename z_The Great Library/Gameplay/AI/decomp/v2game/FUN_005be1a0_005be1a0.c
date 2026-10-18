// FUN_005be1a0 @ 005be1a0 body=[[005be1a0, 005be2ae]]


undefined4 * FUN_005be1a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b71b8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_01268fec;
  param_1[3] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  *param_1 = CSubUnit::vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_00401000(0x47c35040);
  uVar1 = FUN_00b31c00();
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x16] = 0xf;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_8._0_1_ = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0x2d2d2d;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  if (DAT_01258820 == 0) {
    iVar2 = FUN_00aae9af(0x260);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (iVar2 == 0) {
      DAT_01258820 = 0;
    }
    else {
      DAT_01258820 = FUN_005be0f0();
    }
  }
  param_1[0xe] = DAT_01258820;
  ExceptionList = local_10;
  return param_1;
}

