// FUN_00993720 @ 00993720 body=[[00993720, 0099380c] [00993810, 009938b3]]


void FUN_00993720(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  longlong lVar1;
  undefined1 local_fc [8];
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 *local_ec;
  undefined ***local_e8;
  undefined *puStack_e4;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  undefined1 *local_b8;
  undefined **local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined **local_58;
  undefined4 local_54;
  undefined1 local_50 [28];
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4a326;
  local_14 = ExceptionList;
  puStack_e4 = (undefined *)0x1;
  local_e8 = (undefined ***)param_2;
  uStack_f0 = *(undefined4 *)(in_ECX + 0x30);
  local_ec = (undefined1 *)param_1;
  uStack_f4 = 0x993756;
  ExceptionList = &local_14;
  lVar1 = PHYSFS_write();
  if (lVar1 == 1) {
    ExceptionList = local_14;
    return;
  }
  puStack_e4 = (undefined *)0x15;
  local_e8 = (undefined ***)0xe37ccc;
  local_60 = 0xf;
  local_64 = 0;
  local_74 = 0;
  local_ec = (undefined1 *)0x99378f;
  FUN_00409350();
  local_c = 0;
  puStack_e4 = (undefined *)0x18;
  local_e8 = (undefined ***)0xe37d98;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  local_ec = (undefined1 *)0x9937b2;
  FUN_00409350();
  local_b8 = local_fc;
  local_c._0_1_ = 1;
  local_e8 = (undefined ***)0xf;
  local_ec = (undefined1 *)0x0;
  local_fc[0] = 0;
  FUN_00408ed0(local_d8,0,0xffffffff);
  FUN_009e7a90(&local_58,0x2eb);
  local_58 = &PTR_FUN_00e37db4;
  if (local_c4 < 0x10) {
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    local_c._0_1_ = 2;
    puStack_e4 = (undefined *)0xffffffff;
    local_e8 = (undefined ***)0x0;
    local_ec = local_50;
    local_b4 = &PTR_FUN_00e37db4;
    local_b0 = local_54;
    local_98 = 0xf;
    local_9c = 0;
    local_ac = 0;
    uStack_f0 = 0x993857;
    FUN_00408ed0();
    puStack_e4 = (undefined *)0xffffffff;
    local_e8 = (undefined ***)0x0;
    local_ec = local_34;
    local_c._0_1_ = 3;
    local_7c = 0xf;
    local_80 = 0;
    local_90 = 0;
    uStack_f0 = 0x99387f;
    FUN_00408ed0();
    puStack_e4 = &DAT_00e6fc00;
    local_e8 = &local_b4;
    local_c = CONCAT31(local_c._1_3_,2);
    local_b4 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
    local_ec = (undefined1 *)0x99389e;
    __CxxThrowException_8();
  }
  puStack_e4 = (undefined *)local_d8[0];
                    /* WARNING: Subroutine does not return */
  local_e8 = (undefined ***)&UNK_0099380d;
  FUN_00aae91b();
}

