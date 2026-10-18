// FUN_00a479d0 @ 00a479d0 body=[[00a479d0, 00a47a3c] [00a47a40, 00a47a7b] [00a47abf, 00a47ba0] [00a47bcf, 00a47c3f]]


void FUN_00a479d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 local_4c [24];
  undefined1 local_34 [24];
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d930;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  ExceptionList = &local_10;
  iVar1 = FUN_0099e240();
  uVar3 = param_4 - *(int *)(iVar1 + 8);
  local_18 = *(uint *)(param_1 + 0x10);
  if (param_7 != param_10) {
    local_1c = uVar3;
    if (local_18 >> 1 < uVar3) {
      local_8 = 2;
      for (; param_7 != param_10; param_7 = param_7 + 1) {
        FUN_00a46b50();
      }
      FUN_00816010();
      FUN_0099e240();
      FUN_00868600();
      FUN_0099e240(uVar3);
      FUN_00868600(uVar3);
      puVar2 = local_34;
    }
    else {
      local_8 = 0;
      for (; param_7 != param_10; param_7 = param_7 + 1) {
        FUN_00a47c40();
      }
      FUN_0099e240();
      FUN_00868600();
      FUN_0099e240();
      FUN_00a47cf0();
      FUN_0099e240();
      FUN_00868600();
      FUN_00868600();
      FUN_0099e240();
      FUN_00868600();
      FUN_0099e240();
      puVar2 = local_4c;
    }
    FUN_00a47d50(puVar2);
  }
  ExceptionList = local_10;
  return;
}

