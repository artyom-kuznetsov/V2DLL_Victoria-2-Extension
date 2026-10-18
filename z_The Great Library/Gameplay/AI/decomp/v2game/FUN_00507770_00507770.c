// FUN_00507770 @ 00507770 body=[[00507770, 005079b9] [005079bd, 00507b31] [00507b35, 00507b53] [00507b57, 00507b78] [00507b7c, 00507ba8] [00507bac, 00507ce7] [00507ceb, 00507d15] [00507d19, 00507d3d] [00507d41, 00507d64] [00507d68, 00507e6b] [00507e6f, 00507e92] [00507e96, 00507f0c] [00507f10, 005080e5] [005080e9, 00508122] [00508126, 00508149] [0050814d, 00508240] [00508244, 0050825f] [00508263, 00508278] [0050827c, 00508321]]


/* WARNING: Removing unreachable block (ram,0x00507fbf) */
/* WARNING: Removing unreachable block (ram,0x00507f03) */
/* WARNING: Removing unreachable block (ram,0x00507d5b) */
/* WARNING: Removing unreachable block (ram,0x00507b9f) */
/* WARNING: Removing unreachable block (ram,0x00507e89) */
/* WARNING: Removing unreachable block (ram,0x00508119) */
/* WARNING: Removing unreachable block (ram,0x00508237) */
/* WARNING: Removing unreachable block (ram,0x005079b0) */

void FUN_00507770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 **ppuVar12;
  undefined4 uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_1c8 [108];
  undefined4 uStack_15c;
  int local_138;
  undefined1 *local_130;
  int *piStack_110;
  undefined1 *local_108;
  undefined1 *local_104;
  undefined4 local_100;
  uint local_fc;
  uint auStack_f8 [3];
  undefined4 uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_d0;
  uint uStack_cc;
  char acStack_c4 [4];
  uint uStack_c0;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a4;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba7718;
  local_14 = ExceptionList;
  iVar5 = *(int *)(param_1 + 0x4c4);
  while( true ) {
    if (iVar5 == 0) {
      ExceptionList = &local_14;
      *(int *)(param_1 + 0xe3c) = *(int *)(param_1 + 0xe3c) + param_2;
      FUN_00538150();
      FUN_00401000();
      FUN_00b31c00();
      uStack_15c = 0x5077f7;
      iVar5 = __alldiv();
      if (*(char *)(param_1 + 0x12d0) == '\0') {
        iVar5 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x158);
      }
      if (*(int *)(param_1 + 0xe3c) <= iVar5) {
        ExceptionList = local_14;
        return;
      }
      *(int *)(param_1 + 0xe3c) = iVar5;
      ExceptionList = local_14;
      return;
    }
    if (*(char *)(iVar5 + 0x1c) != '\0') break;
    iVar5 = *(int *)(iVar5 + 0x2c);
  }
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0xe3c) = 0;
  piVar6 = (int *)FUN_00579ee0();
  *(int *)(param_1 + 0xe3c) = *(int *)(param_1 + 0xe3c) + *piVar6;
  if (*(int *)(iVar5 + 8) < *(int *)(iVar5 + 0xc)) {
    if (DAT_012587e1 == '\0') {
      ExceptionList = local_14;
      return;
    }
    if (*(int *)(DAT_012588e8 + 0xb60) != *(int *)(param_1 + 0x20)) {
      ExceptionList = local_14;
      return;
    }
  }
  puVar8 = *(undefined1 **)(iVar5 + 0x24);
  iVar5 = *(int *)(param_1 + 0xbcc);
  iVar1 = *(int *)(iVar5 + 0x2b8);
  iVar2 = *(int *)(puVar8 + 0x2e4);
  iVar11 = *(int *)(iVar1 + iVar2 * 4) + 1;
  if ((iVar11 != *(int *)(iVar1 + iVar2 * 4)) && (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) {
    FUN_00469980();
    FUN_00457b00();
  }
  *(int *)(*(int *)(iVar5 + 0x2b8) + iVar2 * 4) = iVar11;
  FUN_00568dc0();
  FUN_00508330();
  if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
    local_108 = (undefined1 *)0x0;
    local_104 = (undefined1 *)0x0;
    local_100 = 0;
    local_fc = local_fc & 0xffffff00;
    local_c = 7;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,8);
    piVar6 = (int *)FUN_009c7290();
    (**(code **)(*piVar6 + 0x60))();
    puStack_10._0_1_ = 7;
    FUN_00409350();
    uStack_78 = 0xf;
    uStack_7c = 0;
    uStack_8c = uStack_8c & 0xffffff00;
    puStack_10._0_1_ = 10;
    uStack_15c = 0x507a1f;
    pcVar7 = __itoa(*(int *)(*(int *)(*(int *)(param_1 + 0xbcc) + 0x2b8) + piStack_110[0xb9] * 4),
                    acStack_c4,10);
    do {
      cVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar4 != '\0');
    FUN_00409350();
    puStack_10._0_1_ = 0xb;
    uStack_e8 = 0xf;
    uStack_ec = 0;
    local_fc = local_fc & 0xffffff00;
    uStack_15c = 0x507a6c;
    FUN_00408ed0();
    puStack_10._0_1_ = 0xc;
    uStack_cc = 0xf;
    uStack_d0 = 0;
    uStack_e0 = uStack_e0 & 0xffffff00;
    uStack_15c = 0x507a9a;
    FUN_00408ed0();
    puStack_10._0_1_ = 0xd;
    puVar8 = (undefined1 *)FUN_00aae9af();
    puStack_10._0_1_ = 0xe;
    uVar3 = puStack_10._0_1_;
    puStack_10._0_1_ = 0xe;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
      puStack_10._0_1_ = uVar3;
    }
    else {
      *(undefined4 *)(puVar8 + 0x14) = 0xf;
      *(undefined4 *)(puVar8 + 0x10) = 0;
      *puVar8 = 0;
      uStack_15c = 0x507ad5;
      FUN_00408ed0();
      puStack_10._0_1_ = 0xf;
      *(undefined4 *)(puVar8 + 0x30) = 0xf;
      *(undefined4 *)(puVar8 + 0x2c) = 0;
      puVar8[0x1c] = 0;
      uStack_15c = 0x507af5;
      FUN_00408ed0();
      *(undefined4 *)(puVar8 + 0x38) = 0;
      *(undefined4 *)(puVar8 + 0x3c) = 0;
      puVar8[0x40] = 0;
    }
    local_104 = (undefined1 *)0x1;
    local_108 = puVar8;
    if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_cc = 0xf;
    uStack_d0 = 0;
    uStack_e0 = uStack_e0 & 0xffffff00;
    if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_e8 = 0xf;
    uStack_ec = 0;
    local_fc = local_fc & 0xffffff00;
    if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 7;
    uStack_78 = 0xf;
    uStack_7c = 0;
    uStack_8c = uStack_8c & 0xffffff00;
    FUN_00409350();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x10);
    (**(code **)(*piStack_110 + 0x18))();
    local_c._0_1_ = 0x11;
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    FUN_00408ed0();
    local_c._0_1_ = 0x12;
    uStack_90 = 0xf;
    uStack_94 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
    FUN_00408ed0();
    local_c._0_1_ = 0x13;
    local_130 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 0x14;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 0x14;
    if (local_130 == (undefined1 *)0x0) {
      local_130 = (undefined1 *)0x0;
      local_c._0_1_ = uVar3;
    }
    else {
      *(undefined4 *)(local_130 + 0x14) = 0xf;
      *(undefined4 *)(local_130 + 0x10) = 0;
      *local_130 = 0;
      FUN_00408ed0();
      local_c._0_1_ = 0x15;
      *(undefined4 *)(local_130 + 0x30) = 0xf;
      *(undefined4 *)(local_130 + 0x2c) = 0;
      local_130[0x1c] = 0;
      FUN_00408ed0();
      *(int *)(local_130 + 0x38) = iVar2;
      *(undefined4 *)(local_130 + 0x3c) = 0;
      local_130[0x40] = 0;
    }
    *(undefined1 **)(iVar2 + 0x3c) = local_130;
    local_100 = 2;
    local_104 = local_130;
    if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_90 = 0xf;
    uStack_94 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 7;
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    auStack_f8[0] = auStack_f8[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0x16;
    FUN_0051eb10();
    local_c._0_1_ = 0x17;
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    FUN_00408ed0();
    local_c._0_1_ = 0x18;
    uStack_90 = 0xf;
    uStack_94 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
    FUN_00408ed0();
    local_c._0_1_ = 0x19;
    iVar5 = FUN_00aae9af();
    local_c._0_1_ = 0x1a;
    if (iVar5 == 0) {
      local_138 = 0;
    }
    else {
      local_138 = FUN_0042b900();
    }
    local_100 = 3;
    *(int *)(local_130 + 0x3c) = local_138;
    local_104 = (undefined1 *)local_138;
    FUN_00a39a80();
    if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 7;
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    auStack_f8[0] = auStack_f8[0] & 0xffffff00;
    uStack_15c = 0x507eb3;
    FUN_0056aef0();
    local_c._0_1_ = 0x1b;
    FUN_00409350();
    local_c._0_1_ = 0x1c;
    cVar4 = FUN_00416db0();
    local_c._0_1_ = 0x1b;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 0x1b;
    if (cVar4 == '\0') {
      FUN_00409350();
      local_c._0_1_ = 0x1d;
      FUN_00424aa0();
      local_c._0_1_ = 0x1e;
      iVar5 = FUN_00aae9af();
      local_c._0_1_ = 0x1f;
      if (iVar5 == 0) {
        local_104 = (undefined1 *)0x0;
      }
      else {
        local_104 = (undefined1 *)FUN_0042b900();
      }
      local_100 = 4;
      *(undefined1 **)(local_138 + 0x3c) = local_104;
      FUN_00a39a80();
    }
    else {
      uStack_e4 = 0xf;
      uStack_e8 = 0;
      auStack_f8[0] = auStack_f8[0] & 0xffffff00;
      local_c._0_1_ = uVar3;
      FUN_00409350();
      local_c._0_1_ = 0x20;
      FUN_00409350();
      local_c._0_1_ = 0x21;
      FUN_009a8ee0();
      local_c._0_1_ = 0x22;
      FUN_00475500();
      uStack_15c = 0x50805c;
      FUN_009a9880();
      local_c._0_1_ = 0x23;
      FUN_00424aa0();
      local_c._0_1_ = 0x24;
      iVar5 = FUN_00aae9af();
      local_c._0_1_ = 0x25;
      if (iVar5 == 0) {
        local_104 = (undefined1 *)0x0;
      }
      else {
        local_104 = (undefined1 *)FUN_0042b900();
      }
      local_100 = 4;
      *(undefined1 **)(local_138 + 0x3c) = local_104;
      FUN_00a39a80();
      if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_ac = 0xf;
      uStack_b0 = 0;
      uStack_c0 = uStack_c0 & 0xffffff00;
      local_c._0_1_ = 0x21;
      FUN_009a9740();
      if (0xf < uStack_e4) {
        local_c._0_1_ = 0x1b;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_c._0_1_ = 0x1b;
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    auStack_f8[0] = auStack_f8[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0x26;
    FUN_00409350();
    local_c._0_1_ = 0x27;
    uVar18 = 0;
    uVar17 = 0x2d2d2d;
    uVar10 = *(undefined4 *)(param_1 + 0x20);
    uVar16 = *(undefined4 *)(param_1 + 0x1c);
    uVar15 = 0;
    puVar14 = auStack_f8;
    ppuVar12 = &local_108;
    uVar13 = 0;
    FUN_006a4f40(ppuVar12,0,puVar14,0,uVar16,uVar10,0x2d2d2d,0);
    uVar9 = FUN_006a55b0();
    FUN_006a7ed0(auStack_1c8,uVar9,ppuVar12,uVar13,puVar14,uVar15,uVar16,uVar10,uVar17,uVar18);
    local_c._0_1_ = 0x28;
    uVar10 = FUN_006a4f40();
    local_c = CONCAT31(local_c._1_3_,0x27);
    FUN_00549b30(uVar10);
    if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    uStack_6c = uStack_6c & 0xffffff00;
    local_c = 0xffffffff;
    FUN_0042b9f0();
  }
  if (*(int *)(puVar8 + 0x34) != 0) {
    uStack_15c = 0x5082c2;
    __allmul();
    uStack_15c = 0x5082cf;
    iVar5 = __alldiv();
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + iVar5;
    if (*(int *)(param_1 + 0x1a8) < 1000) {
      *(undefined4 *)(param_1 + 0x1a8) = 1000;
    }
    if (100000 < *(int *)(param_1 + 0x1a8)) {
      *(undefined4 *)(param_1 + 0x1a8) = 100000;
    }
  }
  FUN_00513a30();
  FUN_00501e10();
  ExceptionList = local_14;
  return;
}

