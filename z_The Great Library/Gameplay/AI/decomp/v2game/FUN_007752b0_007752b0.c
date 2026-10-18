// FUN_007752b0 @ 007752b0 body=[[007752b0, 0077538a] [0077538e, 007753ec] [007753f0, 007754b8] [007754bc, 007754e4] [007754e8, 00775507] [0077550b, 0077552d] [00775531, 0077555e] [00775562, 00775695] [00775699, 007756bc] [007756c0, 007756fd] [00775701, 0077580c] [00775810, 00775833] [00775837, 00775874] [00775878, 0077589a] [0077589e, 007758c6] [007758ca, 007758f8] [007758fc, 00775912]]


/* WARNING: Removing unreachable block (ram,0x0077568c) */
/* WARNING: Removing unreachable block (ram,0x00775803) */

void FUN_007752b0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_e8;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  int local_84;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6cad6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)(in_ECX + 0x594) = param_1;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  local_84 = in_ECX;
  FUN_00409350(&DAT_00ded94d,0);
  local_44 = 0x18d;
  local_48 = CVersion::vftable;
  local_40 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  FUN_00408ed0();
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_c._0_1_ = 3;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  FUN_00988fa0();
  local_c._0_1_ = 4;
  FUN_00475500();
  iVar2 = FUN_0040b410();
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(iVar2 + 0x10) != 0) {
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    FUN_00409350("/save games/",0xc);
    local_c._0_1_ = 5;
    FUN_00475500();
    FUN_0040b410();
    local_c._0_1_ = 6;
    FUN_00988fa0();
    local_c._0_1_ = 7;
    FUN_00988f20();
    local_c._0_1_ = 8;
    FUN_00988f20();
    local_c._0_1_ = 9;
    FUN_00408ed0();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 4;
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  uVar3 = FUN_009da400();
  *(undefined4 *)(in_ECX + 0x570) = uVar3;
  FUN_00408ed0();
  iVar2 = *(int *)(in_ECX + 0x594);
  if (*(int *)(in_ECX + 0x570) == *(int *)(iVar2 + 0xb0)) {
    *(undefined4 *)(iVar2 + 0x80) = *(undefined4 *)(iVar2 + 0x7c);
    FUN_00a14950();
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    FUN_00409350("LOADING_LOCAL_SAVE",0x12);
    local_c._0_1_ = 10;
    FUN_009a8ee0(&local_bc,local_d8);
    local_c._0_1_ = 0xb;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_c._0_1_ = 0xc;
    FUN_00408ed0();
    local_c._0_1_ = 0xd;
    FUN_00771510();
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0xe);
    FUN_009adb70();
    uVar1 = local_c4;
    if (local_b8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350("TRANSERING_SAVE",0xf);
    local_c._0_1_ = 0xf;
    FUN_009a8ee0(&local_bc,local_80);
    local_c._0_1_ = 0x10;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_c._0_1_ = 0x11;
    FUN_00408ed0();
    local_c._0_1_ = 0x12;
    FUN_00771510();
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0x13);
    FUN_009adb70();
    uVar1 = local_6c;
    if (local_b8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0xf < uVar1) {
    local_b0 = 0;
    local_b4 = 0;
    local_b8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0;
  local_b4 = 0;
  local_b8 = 0;
  *(undefined1 *)(local_84 + 0x580) = 1;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

