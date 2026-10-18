// FUN_00633800 @ 00633800 body=[[00633800, 00633886] [0063388a, 006338a5] [006338a9, 006339b1] [006339b5, 00633ae0] [00633ae4, 00633b88] [00633b8c, 00633baa] [00633bae, 00633c0c] [00633c10, 00633c24]]


undefined4 * FUN_00633800(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_fc [16];
  undefined4 local_ec;
  char *local_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined **local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 uStack_94;
  undefined4 *puStack_90;
  undefined4 uStack_8c;
  uint *local_88;
  uint *local_84;
  uint *local_80;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  undefined1 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5f04d;
  local_10 = ExceptionList;
  local_14 = 0;
  local_80 = (uint *)0x8;
  local_84 = (uint *)0xe0764c;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_88 = (uint *)0x633843;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  local_80 = (uint *)0xa;
  local_84 = (uint *)0xe07658;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_88 = (uint *)0x63385e;
  FUN_00409350();
  local_80 = local_54;
  local_8._0_1_ = 1;
  local_84 = local_38;
  local_88 = (uint *)param_3;
  uStack_8c = param_2;
  puStack_90 = param_1;
  uStack_94 = 0x633878;
  FUN_009decb0();
  if (0xf < local_24) {
    local_80 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    local_84 = (uint *)&UNK_00633887;
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_8._0_1_ = 4;
  if (0xf < local_40) {
    local_80 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
    local_84 = (uint *)&UNK_006338a6;
    FUN_00aae91b();
  }
  local_80 = (uint *)0x8;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  *param_1 = CEU3Application::vftable;
  param_1[2] = CEU3Application::vftable;
  local_84 = (uint *)0x6338c6;
  local_80 = (uint *)FUN_00aae9af();
  local_8._0_1_ = 5;
  if (local_80 == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    local_84 = (uint *)0x6338da;
    uVar1 = FUN_009e7e60();
  }
  param_1[0x46] = uVar1;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  local_8._0_1_ = 9;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_80 = (uint *)0x0;
  param_1[0x52] = 0xf;
  param_1[0x51] = 0;
  local_84 = (uint *)&DAT_00ded94d;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  local_88 = (uint *)0x63391f;
  FUN_00409350();
  local_8._0_1_ = 10;
  local_80 = (uint *)0x0;
  param_1[0x59] = 0xf;
  param_1[0x58] = 0;
  local_84 = (uint *)&DAT_00ded94d;
  *(undefined1 *)(param_1 + 0x54) = 0;
  local_88 = (uint *)0x63393c;
  FUN_00409350();
  local_8._0_1_ = 0xb;
  local_80 = (uint *)0x11;
  local_84 = (uint *)0xe07664;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_88 = (uint *)0x63395e;
  FUN_00409350();
  param_1[0x5e] = 0x18d;
  param_1[0x5d] = CVersion::vftable;
  param_1[0x5f] = 0;
  param_1[0x67] = 0xf;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  local_80 = (uint *)0xffffffff;
  local_84 = (uint *)0x0;
  local_88 = local_54;
  local_8._0_1_ = 0xd;
  uStack_8c = 0x633996;
  FUN_00408ed0();
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  local_8._0_1_ = 0xf;
  if (0xf < local_40) {
    local_80 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
    local_84 = (uint *)&UNK_006339b2;
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_80 = (uint *)0x447c9fff;
  local_84 = (uint *)0x6339d6;
  FUN_00401000();
  local_84 = (uint *)0x6339db;
  uVar1 = FUN_00b31c00();
  local_84 = (uint *)0x260;
  param_1[10] = uVar1;
  local_88 = (uint *)0x6339e8;
  iVar2 = FUN_00aae9af();
  local_8 = CONCAT31(local_8._1_3_,0x10);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_80 = (uint *)0x0;
    local_84 = (uint *)&DAT_00ded94d;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_88 = (uint *)0x633a11;
    FUN_00409350();
    local_18 = (undefined1 *)&local_ac;
    local_a8 = 0x18d;
    local_ac = CVersion::vftable;
    local_a4 = 0;
    local_84 = (uint *)0xf;
    local_88 = (uint *)0x0;
    local_14 = 1;
    local_98 = 0;
    uStack_b0 = 0xffffffff;
    uStack_b4 = 0;
    puStack_b8 = local_38;
    local_8 = 0x12;
    uStack_bc = 0x633a55;
    FUN_00408ed0();
    local_9c = 0;
    local_a0 = 0;
    local_a4 = 0;
    uStack_b0 = 0;
    uStack_b4 = 0;
    puStack_b8 = (uint *)0x0;
    uStack_bc = 0x20;
    uStack_c0 = 0x29a;
    uStack_c4 = 2;
    local_18 = local_e0;
    local_8 = 0x13;
    uStack_e4 = 8;
    local_cc = 0xf;
    local_d0 = 0;
    local_e8 = "NoAdress";
    local_e0[0] = 0;
    local_ec = 0x633a92;
    FUN_00409350();
    local_1c = local_fc;
    local_8._0_1_ = 0x14;
    local_e8 = (char *)0xf;
    local_ec = 0;
    local_fc[0] = 0;
    FUN_00409350("InitialSession",0xe);
    local_8 = CONCAT31(local_8._1_3_,0x11);
    uVar1 = FUN_009aeb90(iVar2);
  }
  local_8 = 0xf;
  param_1[0x4b] = uVar1;
  if ((local_14 & 1) != 0) {
    if (0xf < local_24) {
      local_80 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
      local_84 = (uint *)&UNK_00633ae1;
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  if (DAT_00f20c18 == (int *)0x0) {
    local_80 = (uint *)0x4;
    local_84 = (uint *)0x633afe;
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  local_80 = (uint *)0x633b1e;
  uVar1 = (**(code **)(*DAT_00f20c18 + 4))();
  param_1[0x4a] = uVar1;
  local_80 = (uint *)0x633b2b;
  FUN_008688b0();
  local_80 = (uint *)0x0;
  local_84 = (uint *)&DAT_00ded94d;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_88 = (uint *)0x633b42;
  FUN_00409350();
  local_8._0_1_ = 0x16;
  local_80 = (uint *)0x13;
  local_84 = (uint *)0xe07694;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_88 = (uint *)0x633b5e;
  FUN_00409350();
  local_80 = local_70;
  local_8._0_1_ = 0x17;
  local_84 = (uint *)0x633b6d;
  local_84 = (uint *)FUN_009be180();
  local_88 = (uint *)0x633b76;
  FUN_009be210();
  if (local_24 < 0x10) {
    local_8._0_1_ = 0xf;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_80 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_84 = (uint *)&UNK_00633bab;
      FUN_00aae91b();
    }
    local_80 = (uint *)0x4;
    local_84 = (uint *)0x633bb5;
    puVar3 = (undefined4 *)FUN_00aae9af();
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = CDefinesReloader::vftable;
    }
    local_80 = (uint *)0x7;
    local_84 = (uint *)0xdf3310;
    param_1[0x5c] = puVar3;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_88 = (uint *)0x633be8;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x18);
    local_80 = (uint *)param_1[0x5c];
    local_84 = local_70;
    local_88 = (uint *)0x633bfc;
    FUN_009a4bd0();
    if (local_5c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_80 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
    local_84 = (uint *)&UNK_00633c0d;
    FUN_00aae91b();
  }
  local_80 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
  local_84 = (uint *)&UNK_00633b89;
  FUN_00aae91b();
}

