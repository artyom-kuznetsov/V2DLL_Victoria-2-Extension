// FUN_00898ea0 @ 00898ea0 body=[[00898ea0, 00898f12] [00898f16, 00898f9f] [00898fa3, 00898fbd] [00898fc1, 008990a3] [008990a7, 008990d1] [008990d5, 008990f4] [008990f8, 00899112] [00899116, 00899168] [0089916c, 00899183] [00899187, 0089919b]]


undefined4 FUN_00898ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint in_stack_00000020;
  undefined8 uStack_d4;
  uint *puStack_cc;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined4 local_4c;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68907;
  local_10 = ExceptionList;
  local_4c = 0;
  local_8 = 1;
  puStack_cc = (uint *)0x1c;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  uStack_d4 = 0xe2a46400898eef;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_00409350();
  puStack_cc = local_84;
  local_8._0_1_ = 2;
  uStack_d4 = CONCAT44(local_48,0x898f00);
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_70) {
    puStack_cc = (uint *)local_84[0];
    uStack_d4 = CONCAT44(&UNK_00898f13,(char *)uStack_d4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puStack_cc = (uint *)0x8;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  uStack_d4 = 0xdfdc5400898f37;
  FUN_00409350();
  local_8._0_1_ = 5;
  puStack_cc = local_68;
  uStack_d4 = CONCAT44(0x898f49,(char *)uStack_d4);
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))();
  local_8._0_1_ = 6;
  uStack_d4 = 0x4000898f56;
  local_18 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_18 == (undefined1 *)0x0) {
    local_18 = (undefined1 *)0x0;
  }
  else {
    uStack_d4 = CONCAT44(uVar2,local_48);
    local_18 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
  uStack_d4 = CONCAT44(&local_18,local_34);
  FUN_009e6810();
  if (0xf < local_54) {
    uStack_d4 = CONCAT44(local_68[0],&UNK_00898fa0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_54 = 0xf;
  local_58 = 0;
  uVar1 = local_68[0] >> 8;
  local_68[0] = uVar1 << 8;
  if (0xf < local_20) {
    uStack_d4 = CONCAT44(local_34[0],&UNK_00898fbe);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_d4 = 0x100df9644;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = uVar1 << 8;
  FUN_00409350();
  local_8._0_1_ = 8;
  uStack_d4._4_4_ = 10;
  uStack_d4._0_4_ = "PERCENTAGE";
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_18 = (undefined1 *)&uStack_d4;
  local_8._0_1_ = 9;
  uStack_d4 = CONCAT44(uStack_d4._4_4_,*(undefined4 *)(local_14 + 0x20));
  uStack_d4 = __allmul(*(undefined4 *)(local_14 + 0x20),*(undefined4 *)(local_14 + 0x24),0x320000,0)
  ;
  uStack_d4 = uStack_d4 >> 0xf;
  FUN_00988bb0(local_bc,0);
  local_8._0_1_ = 10;
  uStack_d4 = CONCAT44(local_68,0x899047);
  uVar2 = FUN_00988f20();
  local_8._0_1_ = 0xb;
  uStack_d4 = 0x4000899054;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 0xc;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    uStack_d4 = CONCAT44(uVar2,local_48);
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0xb;
  uStack_d4 = CONCAT44(&local_14,local_34);
  FUN_009e6810();
  if (0xf < local_8c) {
    uStack_d4 = CONCAT44(local_a0,&UNK_008990a4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_a8) {
    uStack_d4 = CONCAT44(local_bc[0],&UNK_008990d2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_20) {
    uStack_d4 = CONCAT44(local_34[0],&UNK_008990f5);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_54) {
    uStack_d4 = CONCAT44(local_68[0],&UNK_00899113);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_d4 = CONCAT44(0x89911b,(char *)uStack_d4);
  iVar3 = FUN_00475500();
  uStack_d4 = *(undefined8 *)(iVar3 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_4c = 1;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  uStack_d4 = CONCAT44(0x899151,(char *)uStack_d4);
  FUN_009adb70();
  if (local_44 != 0) {
    uStack_d4 = CONCAT44(0x899160,(char *)uStack_d4);
    FUN_009e6a80();
    uStack_d4 = CONCAT44(local_44,&UNK_00899169);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  if (0xf < in_stack_00000020) {
    uStack_d4 = CONCAT44(param_3,&UNK_00899184);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

