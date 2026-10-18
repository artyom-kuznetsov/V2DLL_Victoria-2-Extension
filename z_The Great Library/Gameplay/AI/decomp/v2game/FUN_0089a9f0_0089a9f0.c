// FUN_0089a9f0 @ 0089a9f0 body=[[0089a9f0, 0089aa5f] [0089aa63, 0089abb4] [0089abb8, 0089abe2] [0089abe6, 0089ac05] [0089ac09, 0089ac1f] [0089ac23, 0089ac3d] [0089ac41, 0089ad81] [0089ad85, 0089adc3] [0089adc7, 0089ade8] [0089adec, 0089ae31] [0089ae35, 0089ae6c] [0089ae70, 0089aeb3] [0089aeb7, 0089aef0] [0089aef4, 0089af0b] [0089af0f, 0089af23]]


/* WARNING: Removing unreachable block (ram,0x0089aea8) */

undefined4 FUN_0089a9f0(undefined4 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  float10 fVar6;
  uint in_stack_00000020;
  undefined8 uVar7;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [2];
  undefined1 local_7c [4];
  int local_78;
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68794;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("CONSCIOUSNESS_EFFECT",0x14);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_4c,local_38);
  local_8._0_1_ = 4;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  local_1c = (int *)(in_ECX + 0x20);
  local_8._0_1_ = 5;
  if (*local_1c < 0) {
    uVar7 = 0x200df8518;
  }
  else {
    if (*local_1c < 1) goto LAB_0089aabd;
    uVar7 = 0x200df8510;
  }
  FUN_00409350(uVar7);
LAB_0089aabd:
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("VALUE",5);
  local_8._0_1_ = 6;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 7;
  fVar6 = (float10)FUN_0040b340();
  local_18 = (int *)(float)fVar6;
  FUN_00988d00(local_84,2);
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  FUN_00988f20();
  local_8._0_1_ = 10;
  local_18 = (int *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (local_18 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    local_18 = (int *)FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  FUN_009e6810(local_68,&local_18);
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  uVar1 = local_bc[0] >> 8;
  local_bc[0] = uVar1 << 8;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 5;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*local_1c < 0) {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350(&DAT_00e29bb4,4);
    local_8 = 0xe;
    local_14 = 4;
    piVar3 = (int *)FUN_009a8ee0(local_7c,local_68);
    local_8 = 0xf;
    local_14 = 0xc;
  }
  else {
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = uVar1 << 8;
    FUN_00409350(&DAT_00e29bac,4);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    local_14 = 1;
    piVar3 = (int *)FUN_009a8ee0(local_98,local_bc);
    local_8 = 0xd;
    local_14 = 3;
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("DIRECTION",9);
  local_8 = 0x10;
  piVar4 = (int *)FUN_00aae9af();
  local_8._0_1_ = 0x11;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = (int)&PTR_FUN_00e38ecc;
    piVar4[1] = (int)local_4c;
    piVar4[7] = 0xf;
    piVar4[6] = 0;
    *(undefined1 *)(piVar4 + 2) = 0;
    local_1c = piVar4;
    FUN_00408ed0();
    *piVar4 = (int)&PTR_FUN_00e38f08;
    local_18 = piVar4 + 9;
    *local_18 = *piVar3;
    piVar4[10] = 0;
    piVar4[0xb] = 0;
    piVar4[0xc] = 0;
    local_8._0_1_ = 0x13;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0x10);
  local_1c = piVar4;
  FUN_009e6810(local_38,&local_1c);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    local_8 = 0x14;
    FUN_009adb70();
    if (local_78 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    local_8 = 0x15;
    FUN_009adb70();
    if (local_94 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
  }
  local_8 = 5;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  local_14 = local_14 | 0x10;
  local_8 = CONCAT31(local_8._1_3_,0x16);
  FUN_009adb70();
  if (local_48 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

