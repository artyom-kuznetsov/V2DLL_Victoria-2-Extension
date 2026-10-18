// FUN_008160c0 @ 008160c0 body=[[008160c0, 0081612c] [00816130, 00816161] [0081619d, 00816274] [00816295, 00816305]]


void FUN_008160c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
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
  puStack_c = &LAB_00b3c730;
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
        FUN_008159a0();
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
        FUN_00816310();
      }
      FUN_0099e240();
      FUN_00868600();
      FUN_0099e240();
      FUN_008163b0();
      FUN_0099e240();
      FUN_00868600();
      FUN_00868600();
      FUN_0099e240();
      FUN_00868600();
      FUN_0099e240();
      puVar2 = local_4c;
    }
    FUN_00816410(puVar2);
  }
  ExceptionList = local_10;
  return;
}

