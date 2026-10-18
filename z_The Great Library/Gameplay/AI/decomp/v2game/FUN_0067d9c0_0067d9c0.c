// FUN_0067d9c0 @ 0067d9c0 body=[[0067d9c0, 0067daa5]]


undefined4 * FUN_0067d9c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b59ed0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0067f790(param_1);
  local_8 = 0;
  *param_1 = CCurrentGameState::vftable;
  *(undefined2 *)(param_1 + 0x344) = 0;
  param_1[0x345] = 0;
  param_1[0x346] = 0;
  *(undefined2 *)(param_1 + 0x347) = 0;
  *(undefined1 *)((int)param_1 + 0xd25) = 0;
  puVar1 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_009d9610(0x20);
  }
  local_8 = local_8 & 0xffffff00;
  param_1[0x348] = puVar1;
  puVar1 = (undefined4 *)FUN_00aae9af(0x20);
  if (puVar1 == (undefined4 *)0x0) {
    param_1[0x304] = 0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    local_8 = CONCAT31((int3)(local_8 >> 8),4);
    puVar1[4] = DAT_0125a35c;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    FUN_004454a0();
    FUN_00444ea0();
    param_1[0x304] = puVar1;
  }
  ExceptionList = local_10;
  return param_1;
}

