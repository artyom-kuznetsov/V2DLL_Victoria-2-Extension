// FUN_00615e90 @ 00615e90 body=[[00615e90, 00615ef3] [00615ef7, 00615f8a] [00615f8e, 00615fc5] [00615fc9, 0061600f] [00616013, 0061609d] [006160a1, 00616106] [0061610a, 0061614c] [00616150, 00616199] [0061619d, 006161ae] [006161b2, 00616232] [00616236, 0061626c] [00616270, 0061628b] [0061628f, 0061630f] [00616313, 0061634d] [00616353, 0061636d] [00616371, 00616390]]


undefined4 * FUN_00615e90(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 in_ECX;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  int local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [2];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb6290;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultDiplomacyDialog",0x16);
  local_8 = 0;
  FUN_00640680(param_1,local_50);
  local_8._0_1_ = 2;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  param_1[0x1a] = in_ECX;
  *param_1 = CStandardDiplomacyDialogue::vftable;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  iVar1 = (**(code **)(*param_2 + 0x30))();
  param_1[0x1b] = iVar1;
  param_1[0x1d] = param_3;
  param_1[0x1c] = param_2;
  local_18 = *(undefined4 *)(iVar1 + 8);
  local_14 = *(undefined4 *)(iVar1 + 0xc);
  FUN_00641630();
  local_18 = *(undefined4 *)(param_1[0x1b] + 0x10);
  local_14 = *(undefined4 *)(param_1[0x1b] + 0x14);
  FUN_006416a0();
  (**(code **)(*param_2 + 0x1c))(local_88);
  local_8._0_1_ = 3;
  FUN_00641710();
  local_8._0_1_ = 2;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  (**(code **)(*param_2 + 0x3c))(local_88);
  local_8._0_1_ = 4;
  FUN_006417b0();
  local_8._0_1_ = 2;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  iVar1 = (**(code **)(*(int *)param_1[1] + 0x3c))(local_34);
  local_8._0_1_ = 2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (iVar1 == 0) goto LAB_006161b2;
  FUN_006153a0();
  local_8._0_1_ = 6;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("chance_string",0xd);
  local_8._0_1_ = 7;
  (**(code **)(*(int *)param_1[1] + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0(local_6c,0);
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_5c == 0) {
LAB_006160bd:
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("chance_string",0xd);
    local_8._0_1_ = 8;
    piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x3c))();
    (**(code **)(*piVar2 + 0x38))();
    local_8._0_1_ = 6;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 9;
    iVar1 = (**(code **)(*(int *)param_1[1] + 0x44))(local_34);
    local_8._0_1_ = 6;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (iVar1 != 0) {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("chance_info_icon",0x10);
      local_8._0_1_ = 10;
      piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
      (**(code **)(*piVar2 + 0x38))();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x20))();
    if (iVar1 == 0x8cb) goto LAB_006160bd;
  }
  local_8._0_1_ = 2;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_006161b2:
  local_8._0_1_ = 2;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350("PROCEED",7);
  local_8._0_1_ = 0xb;
  FUN_009a8ee0(local_2c,local_6c);
  local_8._0_1_ = 0xc;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 0xd;
  FUN_00641850();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  local_8._0_1_ = 0xe;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350("DECLINE",7);
  local_8._0_1_ = 0xf;
  FUN_009a8ee0(local_2c,local_6c);
  local_8._0_1_ = 0x10;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 0x11;
  FUN_006418f0();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  local_8._0_1_ = 0x12;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,2);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(*(int *)param_1[1] + 0x28))();
  ExceptionList = local_10;
  return param_1;
}

