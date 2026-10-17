// FUN_005061e0 @ 005061e0  (requested 005061E0, first bytes: 55 8B EC 83 E4 F8 6A FF)


undefined4 * FUN_005061e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8f413;
  local_14 = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 0x54);
  ExceptionList = &local_14;
  FUN_0042b9f0(puVar1);
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  FUN_00409350("COUNTRY",7);
  local_c = 0;
  uVar5 = FUN_004f97a0();
  local_c._0_1_ = 1;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  FUN_00408ed0(local_c0,0,0xffffffff);
  local_c._0_1_ = 2;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  FUN_00408ed0(uVar5,0,0xffffffff);
  local_c._0_1_ = 3;
  iVar2 = *(int *)(param_1 + 0x58);
  puVar6 = (undefined1 *)FUN_00aae9af(0x44);
  local_c._0_1_ = 4;
  uVar4 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0(local_f8,0,0xffffffff);
    local_c._0_1_ = 5;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0(local_dc,0,0xffffffff);
    *(int *)(puVar6 + 0x38) = iVar2;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  *(undefined1 **)(param_1 + 0x58) = puVar6;
  *(int *)(param_1 + 0x5c) = iVar3 + 1;
  if (iVar3 == 0) {
    *puVar1 = puVar6;
  }
  else {
    *(undefined1 **)(iVar2 + 0x3c) = puVar6;
  }
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_dc[0]);
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f8[0]);
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_c = 0xffffffff;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0[0]);
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  FUN_00409350("MONARCHTITLE",0xc);
  local_c = 6;
  uVar5 = FUN_0051eb10();
  local_c._0_1_ = 7;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  FUN_00408ed0(local_c0,0,0xffffffff);
  local_c._0_1_ = 8;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  FUN_00408ed0(uVar5,0,0xffffffff);
  local_c._0_1_ = 9;
  iVar2 = *(int *)(param_1 + 0x58);
  puVar6 = (undefined1 *)FUN_00aae9af(0x44);
  local_c._0_1_ = 10;
  uVar4 = (undefined1)local_c;
  local_c._0_1_ = 10;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0(local_f8,0,0xffffffff);
    local_c._0_1_ = 0xb;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0(local_dc,0,0xffffffff);
    *(int *)(puVar6 + 0x38) = iVar2;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  *(undefined1 **)(param_1 + 0x58) = puVar6;
  *(int *)(param_1 + 0x5c) = iVar3 + 1;
  if (iVar3 == 0) {
    *puVar1 = puVar6;
  }
  else {
    *(undefined1 **)(iVar2 + 0x3c) = puVar6;
  }
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_dc[0]);
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f8[0]);
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_c = 0xffffffff;
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("TITLE",5);
  local_c = 0xc;
  uVar5 = FUN_0051eb10();
  local_c._0_1_ = 0xd;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00408ed0(local_50,0,0xffffffff);
  local_c._0_1_ = 0xe;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00408ed0(uVar5,0,0xffffffff);
  local_c._0_1_ = 0xf;
  iVar2 = *(int *)(param_1 + 0x58);
  puVar6 = (undefined1 *)FUN_00aae9af(0x44);
  local_c._0_1_ = 0x10;
  uVar4 = (undefined1)local_c;
  local_c._0_1_ = 0x10;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0(local_88,0,0xffffffff);
    local_c._0_1_ = 0x11;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0(local_6c,0,0xffffffff);
    *(int *)(puVar6 + 0x38) = iVar2;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  *(undefined1 **)(param_1 + 0x58) = puVar6;
  *(int *)(param_1 + 0x5c) = iVar3 + 1;
  if (iVar3 == 0) {
    *puVar1 = puVar6;
  }
  else {
    *(undefined1 **)(iVar2 + 0x3c) = puVar6;
  }
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = local_14;
  return puVar1;
}

