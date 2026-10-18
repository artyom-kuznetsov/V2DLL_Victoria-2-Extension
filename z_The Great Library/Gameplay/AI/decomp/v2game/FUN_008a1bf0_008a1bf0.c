// FUN_008a1bf0 @ 008a1bf0 body=[[008a1bf0, 008a1c78] [008a1c7c, 008a1da1] [008a1da5, 008a1dc6] [008a1dcf, 008a1df4] [008a1dfd, 008a1e1c] [008a1e25, 008a1e3f] [008a1e48, 008a1f8f] [008a1f93, 008a1fd5] [008a1fd9, 008a2019] [008a201d, 008a2067] [008a206b, 008a2089] [008a208d, 008a20c8] [008a20cc, 008a2105] [008a2109, 008a2148] [008a214c, 008a2160]]


undefined1 * FUN_008a1bf0(undefined1 *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  float10 fVar7;
  uint in_stack_00000020;
  undefined8 uVar8;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [2];
  undefined1 local_b4 [8];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  int local_84;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b681b0;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int **)(in_ECX + 0x28) == (int *)0x0) ||
     (ExceptionList = &local_10, local_84 = in_ECX,
     cVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x20))(), cVar3 == '\0')) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    goto joined_r0x008a213e;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("UPPER_HOUSE_EFFECT",0x12);
  local_8._0_1_ = 1;
  FUN_009a8ee0(local_80,local_34);
  local_8._0_1_ = 3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  local_8._0_1_ = 4;
  iVar6 = *(int *)(in_ECX + 0x24);
  if (iVar6 < 0) {
LAB_008a1cd0:
    uVar8 = 0x200df8510;
LAB_008a1cd7:
    FUN_00409350(uVar8);
  }
  else {
    if ((0 < iVar6) || (*(int *)(in_ECX + 0x20) != 0)) {
      uVar8 = 0x200df8518;
      goto LAB_008a1cd7;
    }
    if ((iVar6 < 1) && (iVar6 < 0)) goto LAB_008a1cd0;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("VALUE",5);
  local_8._0_1_ = 5;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 6;
  local_18 = (undefined4 *)
             ((float)((float10)*(longlong *)(in_ECX + 0x20) * (float10)3.0517578125e-05) * 100.0);
  fVar7 = (float10)FUN_0040b340();
  local_18 = (undefined4 *)(float)fVar7;
  FUN_00988d00(local_bc,2);
  local_8._0_1_ = 7;
  FUN_00988f20();
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  FUN_009a9980();
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  uVar1 = local_6c[0] >> 8;
  local_6c[0] = uVar1 << 8;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 4;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(in_ECX + 0x24) < 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350(&DAT_00e29bb4,4);
    local_8 = 0xc;
    local_14 = 4;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_b4,local_50);
    local_8 = 0xd;
    local_14 = 0xc;
  }
  else {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = uVar1 << 8;
    FUN_00409350(&DAT_00e29bac,4);
    local_8 = CONCAT31(local_8._1_3_,10);
    local_14 = 1;
    puVar4 = (undefined4 *)FUN_009a8ee0(local_d0,local_6c);
    local_8 = 0xb;
    local_14 = 3;
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("DIRECTION",9);
  local_8 = 0xe;
  puVar5 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xf;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &PTR_FUN_00e38ecc;
    puVar5[1] = local_80;
    puVar5[7] = 0xf;
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 2) = 0;
    local_18 = puVar5;
    FUN_00408ed0();
    *puVar5 = &PTR_FUN_00e38f08;
    puVar5[9] = *puVar4;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    local_8._0_1_ = 0x11;
    FUN_009a97b0();
  }
  local_8 = CONCAT31(local_8._1_3_,0xe);
  local_18 = puVar5;
  FUN_009e6810(local_34,&local_18);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xc;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    FUN_009a9740();
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
  }
  local_8 = 10;
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    FUN_009a9740();
  }
  local_8 = 4;
  if (((local_14 & 1) != 0) && (0xf < local_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfbf14,4);
  local_8._0_1_ = 0x12;
  (**(code **)(**(int **)(local_84 + 0x28) + 0x18))();
  local_8._0_1_ = 0x13;
  FUN_009a9980();
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar6 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x14);
  FUN_009adb70();
  if (local_7c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
joined_r0x008a213e:
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

