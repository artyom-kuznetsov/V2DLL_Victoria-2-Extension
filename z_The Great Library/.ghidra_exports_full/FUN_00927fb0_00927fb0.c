// FUN_00927fb0 @ 00927fb0 body=[[00927fb0, 009280ee] [009280f2, 0092811b] [0092811f, 00928140] [00928144, 0092816e] [00928172, 00928196] [0092819a, 009281b5] [009281b9, 009281d4] [009281d8, 009281f1]]


undefined4 FUN_00927fb0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  uint local_e0;
  undefined1 local_dc;
  undefined4 uStack_d0;
  uint local_cc;
  undefined4 local_c8;
  uint uStack_c4;
  undefined1 local_c0;
  undefined4 uStack_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined1 local_a4;
  uint local_94;
  undefined4 local_90;
  uint uStack_8c;
  undefined1 local_88 [12];
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_70;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b652f1;
  pvStack_14 = ExceptionList;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("WARGOAL",7);
  local_c = 0;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = 0;
  FUN_00409350("ACTOR",5);
  local_c._0_1_ = 1;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = 0;
  FUN_00409350("_OFFER",6);
  local_c._0_1_ = 2;
  local_e0 = FUN_0094c600(in_ECX + 10,local_34);
  local_c._0_1_ = 3;
  uVar1 = FUN_0055dd40();
  local_c = CONCAT31(local_c._1_3_,4);
  (**(code **)(*in_ECX + 0x24))(local_88);
  puStack_10._0_1_ = 5;
  uVar2 = FUN_00988f20(&local_e0);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
  FUN_00928600(param_1,uVar2,unaff_EBX,uVar1);
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_8c);
  }
  uStack_78 = 0xf;
  uStack_7c = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
  uStack_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  uStack_24 = 0xf;
  uStack_28 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0);
  }
  local_cc = 0xf;
  uStack_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_c4);
  }
  local_b0 = 0xf;
  uStack_b4 = 0;
  uStack_c4 = uStack_c4 & 0xffffff00;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_a8);
  }
  ExceptionList = pvStack_18;
  return param_1;
}

