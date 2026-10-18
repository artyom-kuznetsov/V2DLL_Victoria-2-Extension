// FUN_0060b090 @ 0060b090 body=[[0060b090, 0060b2a1] [0060b2a5, 0060b2ba]]


undefined4
FUN_0060b090(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined1 auStack_e8 [80];
  undefined4 uStack_98;
  undefined **local_70;
  undefined4 local_6c;
  undefined1 local_68 [64];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b7f7b0;
  pvStack_14 = ExceptionList;
  local_6c = 0x18d;
  local_70 = CGoodsPool::vftable;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_c = 0;
  uStack_98 = 0x60b0ea;
  ExceptionList = &pvStack_14;
  _memset(local_68,0,0x40);
  FUN_00423920();
  local_c = 1;
  if (param_4 == 0) {
    FUN_0047dbb0();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x130) + 0x54) + 0x10))();
  }
  else if (param_4 == 1) {
    FUN_0047dbb0();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x134) + 0x54) + 0x10))();
  }
  else {
    if (param_4 != 2) goto LAB_0060b265;
    FUN_0047dbb0();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x138) + 0x54) + 0x10))();
  }
  FUN_00b31c36();
LAB_0060b265:
  FUN_0047db00(auStack_e8,&local_70);
  FUN_0060b2c0(param_2,param_5);
  if (local_28 == 0) {
    ExceptionList = pvStack_14;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

