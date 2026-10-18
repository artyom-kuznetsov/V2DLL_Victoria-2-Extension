// FUN_0052b860 @ 0052b860 body=[[0052b860, 0052b925] [0052b929, 0052b9d7] [0052b9db, 0052ba16] [0052ba1a, 0052bbd1] [0052bbd5, 0052bc01] [0052bc05, 0052bc2c] [0052bc30, 0052bc70] [0052bc74, 0052bc94] [0052bc98, 0052bcb8] [0052bcbc, 0052bcde] [0052bce2, 0052be69] [0052be6d, 0052be93] [0052be97, 0052bebe] [0052bec2, 0052beff] [0052bf03, 0052bf29] [0052bf2d, 0052bf56] [0052bf5a, 0052bf7c] [0052bf80, 0052c108] [0052c10c, 0052c132] [0052c136, 0052c15d] [0052c161, 0052c19e] [0052c1a2, 0052c1c8] [0052c1cc, 0052c1f5] [0052c1f9, 0052c21b] [0052c21f, 0052c3a7] [0052c3ab, 0052c3d1] [0052c3d5, 0052c3fc] [0052c400, 0052c43d] [0052c441, 0052c467] [0052c46b, 0052c494] [0052c498, 0052c4ba] [0052c4be, 0052c5db] [0052c5df, 0052c605] [0052c609, 0052c642] [0052c646, 0052c66e] [0052c672, 0052c6a1]]


/* WARNING: Removing unreachable block (ram,0x0052c665) */
/* WARNING: Removing unreachable block (ram,0x0052c48b) */
/* WARNING: Removing unreachable block (ram,0x0052c212) */
/* WARNING: Removing unreachable block (ram,0x0052c18c) */
/* WARNING: Removing unreachable block (ram,0x0052bf4d) */
/* WARNING: Removing unreachable block (ram,0x0052bcd5) */
/* WARNING: Removing unreachable block (ram,0x0052beed) */
/* WARNING: Removing unreachable block (ram,0x0052bf73) */
/* WARNING: Removing unreachable block (ram,0x0052c1ec) */
/* WARNING: Removing unreachable block (ram,0x0052c42b) */
/* WARNING: Removing unreachable block (ram,0x0052c4b1) */
/* WARNING: Removing unreachable block (ram,0x0052ba38) */
/* WARNING: Removing unreachable block (ram,0x0052c669) */
/* WARNING: Removing unreachable block (ram,0x0052bcaf) */

undefined4 FUN_0052b860(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined8 uVar5;
  int local_144;
  uint local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined1 local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b74112;
  local_14 = ExceptionList;
  local_64 = 0xf;
  local_48 = 0xf;
  local_2c = 0xf;
  local_68 = 0;
  local_78 = 0;
  local_4c = 0;
  local_5c = 0;
  local_30 = 0;
  local_40 = 0;
  local_24 = 0;
  local_20 = 1;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_0096d650();
  local_c._0_1_ = 1;
  FUN_00408ed0();
  local_c._0_1_ = 0;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 0;
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x1338) + *(int *)(param_2 + 0x28) * 4);
  if ((uVar1 & 0x1ffff) == 0 && uVar1 >> 0x11 == 0) {
    FUN_00409350();
    local_c._0_1_ = 2;
    FUN_009a8ee0();
    local_c._0_1_ = 3;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c._0_1_ = 4;
    FUN_00408ed0();
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 5;
    FUN_009adb70();
    if (local_144 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_a8 = in_ECX + 0x12e8;
    uVar1 = **(uint **)(*(int *)(param_2 + 0x28) * 0x10 + *(int *)(in_ECX + 0x13a4));
    local_c._0_1_ = uVar2;
    uVar5 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
    local_9c = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_00409350();
    local_c._0_1_ = 6;
    FUN_00409350();
    local_c._0_1_ = 7;
    __allmul((int)uVar5,local_9c,0x320000,0);
    FUN_00988bb0(local_fc,1);
    local_c._0_1_ = 8;
    FUN_009a8ee0();
    local_c._0_1_ = 9;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c._0_1_ = 10;
    FUN_0043ec10(local_e0,&DAT_00dfd184,uVar4);
    local_c._0_1_ = 0xb;
    FUN_00988f20();
    local_c._0_1_ = 0xc;
    FUN_00448aa0();
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    local_c._0_1_ = 0xd;
    FUN_009adb70();
    if (local_144 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc[0] = local_fc[0] & 0xffffff00;
    local_c._0_1_ = 0;
    uVar1 = *(uint *)(*(int *)(*(int *)(param_2 + 0x28) * 0x10 + *(int *)(local_a8 + 0xbc)) + 4);
    uVar5 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
    local_9c = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_00409350();
    local_c._0_1_ = 0xe;
    FUN_00409350();
    local_c._0_1_ = 0xf;
    __allmul((int)uVar5,local_9c,0x320000,0);
    FUN_00988bb0(local_94,1);
    local_c._0_1_ = 0x10;
    FUN_009a8ee0();
    local_c._0_1_ = 0x11;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c._0_1_ = 0x12;
    FUN_0043ec10(local_c4,&DAT_00dfd184,uVar4);
    local_c._0_1_ = 0x13;
    FUN_00988f20();
    local_c._0_1_ = 0x14;
    FUN_00448aa0();
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc[0] = local_fc[0] & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    local_c._0_1_ = 0x15;
    FUN_009adb70();
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    local_c._0_1_ = 0;
    uVar1 = *(uint *)(*(int *)(*(int *)(param_2 + 0x28) * 0x10 + *(int *)(local_a8 + 0xbc)) + 8);
    uVar5 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
    local_9c = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_00409350();
    local_c._0_1_ = 0x16;
    FUN_00409350();
    local_c._0_1_ = 0x17;
    __allmul((int)uVar5,local_9c,0x320000,0);
    FUN_00988bb0(local_94,1);
    local_c._0_1_ = 0x18;
    FUN_009a8ee0();
    local_c._0_1_ = 0x19;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c._0_1_ = 0x1a;
    FUN_0043ec10(local_c4,&DAT_00dfd184,uVar4);
    local_c._0_1_ = 0x1b;
    FUN_00988f20();
    local_c._0_1_ = 0x1c;
    FUN_00448aa0();
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc[0] = local_fc[0] & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    local_c._0_1_ = 0x1d;
    FUN_009adb70();
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    local_c._0_1_ = 0;
    uVar1 = *(uint *)(*(int *)(*(int *)(param_2 + 0x28) * 0x10 + *(int *)(local_a8 + 0xbc)) + 0x10);
    uVar5 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
    local_9c = (undefined4)((ulonglong)uVar5 >> 0x20);
    FUN_00409350();
    local_c._0_1_ = 0x1e;
    FUN_00409350();
    local_c._0_1_ = 0x1f;
    __allmul((int)uVar5,local_9c,0x320000,0);
    FUN_00988bb0(local_94,1);
    local_c._0_1_ = 0x20;
    FUN_009a8ee0();
    local_c._0_1_ = 0x21;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c._0_1_ = 0x22;
    FUN_0043ec10(local_c4,&DAT_00dfd184,uVar4);
    local_c._0_1_ = 0x23;
    FUN_00988f20();
    local_c._0_1_ = 0x24;
    FUN_00448aa0();
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc[0] = local_fc[0] & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    local_c._0_1_ = 0x25;
    FUN_009adb70();
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    local_c._0_1_ = 0;
    FUN_0096a060();
    FUN_00409350();
    local_c._0_1_ = 0x26;
    __allmul(local_a8,local_a4,0x320000,0);
    FUN_00988bb0(local_e0,1);
    local_c._0_1_ = 0x27;
    FUN_009a8ee0();
    local_c._0_1_ = 0x28;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c._0_1_ = 0x29;
    FUN_0043ec10(local_fc,&DAT_00dfd184,uVar4);
    local_c._0_1_ = 0x2a;
    FUN_00448aa0();
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc[0] = local_fc[0] & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    local_c._0_1_ = 0x27;
    FUN_009a9740();
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
  }
  local_c = (uint)local_c._1_3_ << 8;
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_14;
  return param_1;
}

