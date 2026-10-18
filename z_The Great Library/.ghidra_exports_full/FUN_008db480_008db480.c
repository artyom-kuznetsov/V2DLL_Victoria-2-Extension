// FUN_008db480 @ 008db480 body=[[008db480, 008db553] [008db557, 008db57e] [008db582, 008db63a] [008db63e, 008db675] [008db679, 008db69d] [008db6a1, 008db813] [008db817, 008db846] [008db84a, 008db874] [008db878, 008db8a2] [008db8a6, 008db8d0] [008db8d4, 008db8fe] [008db902, 008db92c] [008db930, 008db954] [008db958, 008db973] [008db977, 008db992] [008db996, 008db9b7] [008db9bb, 008db9d4]]


undefined4 FUN_008db480(undefined4 param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  uint local_184;
  undefined1 local_180 [4];
  int local_17c;
  undefined4 local_178;
  undefined4 local_174;
  uint local_170;
  undefined4 local_16c;
  uint uStack_168;
  uint local_164 [3];
  undefined4 uStack_158;
  uint local_154;
  uint local_150;
  uint uStack_14c;
  uint local_148;
  undefined4 uStack_13c;
  uint local_138;
  uint local_134;
  undefined1 local_12c [4];
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc;
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e0;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint uStack_c4;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_a8;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_70;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 auStack_38 [5];
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b85e5e;
  pvStack_14 = ExceptionList;
  local_fc = 0;
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("IS_MISSION_TARGET",0x11);
  local_c = 0;
  FUN_009a8ee0(local_12c,local_118);
  local_c._0_1_ = 1;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_c._0_1_ = 4;
  FUN_009adb70();
  if (local_128 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  local_c._0_1_ = 5;
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  if (param_3 == *(char *)(local_184 + 0x1c)) {
    local_150 = 0xf;
    local_154 = 0;
    local_164[0] = local_164[0] & 0xffffff00;
    FUN_00409350("IS_NOT_MISSION_TARGET",0x15);
    local_c._0_1_ = 6;
    local_184 = FUN_009a8ee0(local_180,local_164);
    local_c._0_1_ = 7;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_c._0_1_ = 8;
    FUN_00408ed0();
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_134 = 0xf;
    local_138 = 0;
    local_148 = local_148 & 0xffffff00;
    local_c._0_1_ = 9;
    FUN_009adb70();
    if (local_17c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 5;
    local_17c = 0;
    local_178 = 0;
    local_174 = 0;
    if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_c._0_1_ = 5;
  local_150 = 0xf;
  local_154 = 0;
  local_164[0] = local_164[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfc7b4,3);
  local_c._0_1_ = 10;
  local_134 = 0xf;
  local_138 = 0;
  local_148 = local_148 & 0xffffff00;
  FUN_00409350(&DAT_00df7f68,3);
  local_c._0_1_ = 0xb;
  local_16c = 0xf;
  local_170 = 0;
  local_180[0] = 0;
  FUN_00409350(&DAT_00dfc964,3);
  local_c._0_1_ = 0xc;
  piVar1 = *(int **)(*(int *)(DAT_0125870c + 0x2238) + *(int *)(param_2 + 0x10) * 4);
  local_184 = FUN_0055dd40();
  local_c = CONCAT31(local_c._1_3_,0xd);
  uVar3 = (**(code **)(*piVar1 + 0x1c))();
  puStack_10._0_1_ = 0xe;
  FUN_00988fa0(uVar3);
  puStack_10._0_1_ = 0xf;
  FUN_00988f20(&local_184);
  puStack_10._0_1_ = 0x10;
  FUN_00988f20(auStack_38);
  puStack_10._0_1_ = 0x11;
  FUN_00988f20(&uStack_14c);
  puStack_10._0_1_ = 0x12;
  FUN_00988f20(unaff_EBX);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x13);
  FUN_00988f20(&uStack_168);
  if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_fc);
  }
  uStack_e8 = 0xf;
  uStack_ec = 0;
  local_fc = local_fc & 0xffffff00;
  if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_c4);
  }
  uStack_b0 = 0xf;
  uStack_b4 = 0;
  uStack_c4 = uStack_c4 & 0xffffff00;
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
  if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_e0);
  }
  uStack_cc = 0xf;
  uStack_d0 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  if (uStack_94 < 0x10) {
    uStack_94 = 0xf;
    uStack_98 = 0;
    uStack_a8 = uStack_a8 & 0xffffff00;
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_70);
    }
    uStack_5c = 0xf;
    uStack_60 = 0;
    uStack_70 = uStack_70 & 0xffffff00;
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184 = local_184 & 0xffffff00;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_14c);
    }
    local_138 = 0xf;
    uStack_13c = 0;
    uStack_14c = uStack_14c & 0xffffff00;
    if (local_154 < 0x10) {
      local_154 = 0xf;
      uStack_158 = 0;
      uStack_168 = uStack_168 & 0xffffff00;
      if (uStack_24 < 0x10) {
        ExceptionList = pvStack_18;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_38[0]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_168);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_a8);
}

