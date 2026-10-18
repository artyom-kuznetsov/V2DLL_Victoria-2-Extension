// FUN_00a37660 @ 00a37660 body=[[00a37660, 00a376cc] [00a376d0, 00a37701] [00a37723, 00a37801] [00a37823, 00a37899]]


void FUN_00a37660(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0099e240();
  uVar2 = param_4 - *(int *)(iVar1 + 8);
  if (param_7 != param_10) {
    if (*(uint *)(param_1 + 0x10) >> 1 < uVar2) {
      local_8 = 2;
      for (; param_7 != param_10; param_7 = param_7 + 1) {
        FUN_00868200();
      }
      local_8 = 0xffffffff;
      FUN_00816010();
      FUN_0099e240();
      FUN_00868600();
      FUN_0099e240(uVar2);
      FUN_00868600(uVar2);
    }
    else {
      local_8 = 0;
      for (; param_7 != param_10; param_7 = param_7 + 1) {
        FUN_00a379d0();
      }
      local_8 = 0xffffffff;
      FUN_0099e240();
      FUN_00868600();
      FUN_0099e240();
      FUN_00a37b10();
      FUN_0099e240();
      FUN_00868600();
      FUN_00868600();
      FUN_0099e240();
      FUN_00868600();
      FUN_0099e240();
    }
    FUN_00a37b70();
  }
  ExceptionList = local_10;
  return;
}

