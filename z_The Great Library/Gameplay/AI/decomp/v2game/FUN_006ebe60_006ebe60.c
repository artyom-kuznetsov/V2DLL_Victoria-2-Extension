// FUN_006ebe60 @ 006ebe60 body=[[006ebe60, 006ebf7b] [006ebf7f, 006ebff8] [006ebffc, 006ec01f] [006ec023, 006ec0b2] [006ec0b6, 006ec104] [006ec108, 006ec156] [006ec15a, 006ec1e7] [006ec1eb, 006ec239] [006ec23d, 006ec28b] [006ec28f, 006ec2de] [006ec2e7, 006ec509] [006ec50d, 006ec55c] [006ec560, 006ec5b7] [006ec5bb, 006ec5dd] [006ec5e1, 006ec677] [006ec67b, 006ec764] [006ec768, 006ec79c] [006ec7a0, 006ec858] [006ec85c, 006ec890] [006ec894, 006eca0e] [006eca12, 006eca40] [006eca44, 006eca6d] [006eca71, 006eca9a] [006eca9e, 006ecac7] [006ecacb, 006ecaee] [006ecaf2, 006ecb12] [006ecb16, 006ecb3f] [006ecb43, 006ecb50] [006ecb54, 006ecb75] [006ecb79, 006ecbcc] [006ecbd0, 006ecc23] [006ecc27, 006eccc7] [006eccd0, 006ecd67] [006ecd6b, 006ecdee] [006ecdf2, 006ece67] [006ece6b, 006ece9d] [006ecea1, 006ed0ea] [006ed0ee, 006ed119] [006ed11d, 006ed143] [006ed147, 006ed16d] [006ed171, 006ed197] [006ed19b, 006ed1bb] [006ed1bf, 006ed1dc] [006ed1e0, 006ed206] [006ed20a, 006ed22a] [006ed22e, 006ed252] [006ed256, 006ed2ad] [006ed2b1, 006ed317] [006ed31b, 006ed37a] [006ed37e, 006ed390]]


void FUN_006ebe60(int param_1,uint **param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  undefined3 uVar7;
  char cVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  uint **ppuVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_1f4 [16];
  undefined4 uStack_1e4;
  uint **ppuStack_1e0;
  undefined2 *puStack_1dc;
  uint **ppuStack_1d8;
  char **ppcStack_1d4;
  uint **ppuStack_1d0;
  uint **ppuStack_1cc;
  uint **ppuStack_1c8;
  uint **ppuStack_1c4;
  uint *puStack_1c0;
  char **local_188 [4];
  undefined4 local_178;
  uint local_174;
  char **local_16c;
  undefined4 local_15c;
  uint local_158;
  char **local_150;
  undefined4 local_140;
  uint local_13c;
  char **local_134;
  undefined4 local_124;
  uint local_120;
  char **local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  undefined4 local_e0;
  int *local_dc;
  char **local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  char **local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  char local_a0 [4];
  char **local_9c [4];
  undefined4 local_8c;
  uint local_88;
  char **local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48;
  int *local_44;
  uint local_40;
  undefined1 *local_3c;
  char **local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar11 = DAT_012588e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7d70b;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  *(uint ***)(param_1 + 0x30) = param_2;
  local_e0 = *(undefined4 *)(iVar11 + 0xb5c);
  local_dc = *(int **)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar11 + 0xb60) * 4);
  if (*(int *)(param_1 + 0x34) != 0) {
    if ((((param_2[0x17] == (uint *)*(int *)((int)local_dc + 0x20)) &&
         (*(char *)((int)local_dc + 0xb40) != '\0')) && (param_2[0x91] != (uint *)0x4)) &&
       ((char)param_2[0x92] != '\0')) {
      local_48 = (uint)param_2[0x8a];
      local_44 = (int *)param_2[0x8b];
      FUN_004a5020();
      cVar8 = FUN_0043a5e0();
      if (cVar8 == '\0') goto LAB_006ebf18;
      pcVar10 = *(code **)(**(int **)(param_1 + 0x34) + 0xb8);
    }
    else {
LAB_006ebf18:
      pcVar10 = *(code **)(**(int **)(param_1 + 0x34) + 0xbc);
    }
    (*pcVar10)();
  }
  (**(code **)((int)*param_2 + 0x20))();
  local_8 = 0;
  local_3c = *(undefined1 **)(param_1 + 0x2c);
  FUN_00408ed0();
  FUN_00a5ecc0();
  local_8 = 0xffffffff;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 1;
  FUN_004a7140();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_3c = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = *(undefined1 **)(param_1 + 0x4c);
  if (local_3c != *(undefined1 **)(param_1 + 0x50)) {
    local_44 = (int *)0x0;
    FID_conflict__memcpy(local_3c,*(undefined1 **)(param_1 + 0x50),0);
    *(undefined1 **)(param_1 + 0x50) = local_3c + (int)local_44;
  }
  if (param_2[0x91] == (uint *)0x4) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0]._1_3_ << 8);
    FUN_00409350();
    local_8 = 3;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    (**(code **)(*piVar9 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 4;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    (**(code **)(*piVar9 + 0x104))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 5;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    (**(code **)(*piVar9 + 0x104))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 6;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    pcVar10 = *(code **)(*piVar9 + 0x38);
  }
  else {
    if (param_2[0x91] != (uint *)0x1) {
      if ((param_2[0x8e] != (uint *)0x0) && (*(int *)((int)param_2[0x8e] + 300) != 0)) {
        FUN_009885d0();
        local_8 = 0xb;
        piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
        (**(code **)(*piVar9 + 0x48))();
        local_8 = 0xffffffff;
        FUN_00408ad0();
        FUN_009885d0();
        local_8 = 0xc;
        piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
        (**(code **)(*piVar9 + 0x34))();
        local_8 = 0xffffffff;
        FUN_00408ad0();
        FUN_009885d0();
        local_8 = 0xd;
        piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
        (**(code **)(*piVar9 + 0x108))();
        local_8 = 0xffffffff;
        FUN_00408ad0();
        FUN_009885d0();
        local_8 = 0xe;
        piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
        (**(code **)(*piVar9 + 0x104))();
        local_8 = 0xffffffff;
        FUN_00408ad0();
        FUN_009885d0();
        local_8 = 0xf;
        piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
        (**(code **)(*piVar9 + 0x38))();
        local_8 = 0xffffffff;
        FUN_00408ad0();
      }
      goto LAB_006ec44f;
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0]._1_3_ << 8);
    FUN_00409350();
    local_8 = 7;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    (**(code **)(*piVar9 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 8;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    (**(code **)(*piVar9 + 0x104))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 9;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    (**(code **)(*piVar9 + 0x108))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 10;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
    pcVar10 = *(code **)(*piVar9 + 0x34);
  }
  (*pcVar10)();
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_006ec44f:
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
  FUN_00409350();
  local_8 = 0x10;
  local_44 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))();
  piVar9 = (int *)*param_3;
  if (DAT_0131bb34 == 0) {
    iVar11 = FUN_00aae9af();
    local_8._0_1_ = 0x11;
    if (iVar11 != 0) {
      FUN_0041a160();
    }
    local_8 = CONCAT31(local_8._1_3_,0x10);
    FUN_00423700();
  }
  if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < *piVar9) {
    FUN_0096bb70();
  }
  (**(code **)(*local_44 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
  FUN_00409350();
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = (char **)((uint)local_80[0] & 0xffffff00);
  local_8._0_1_ = 0x13;
  local_8._1_3_ = 0;
  pcVar12 = __itoa(*(int *)(*(int *)(param_1 + 0x30) + 0x230),local_a0,10);
  do {
    cVar8 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar8 != '\0');
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,0x14);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = (char **)((uint)local_80[0] & 0xffffff00);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar11 = *(int *)(param_1 + 0x30);
  if (*(int *)(iVar11 + 0x244) == 4) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 0x15;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = (char **)((uint)local_80[0] & 0xffffff00);
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,0x16);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
    puStack_1c0 = (uint *)0x6ec659;
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80[0] = (char **)((uint)local_80[0] & 0xffffff00);
    uVar15 = local_20;
  }
  else {
    local_48 = *(uint *)(iVar11 + 0x228);
    piVar9 = *(int **)(iVar11 + 0x22c);
    local_44 = piVar9;
    FUN_004a5020();
    if (((int)piVar9 < 0) || (((int)piVar9 < 1 && (local_48 < 0x1f40000)))) {
      puStack_1c0 = (uint *)0x6ec717;
      FUN_00988bb0();
      local_8 = 0x18;
      local_18 = 2;
    }
    else {
      FUN_009ca140();
      local_8 = 0x17;
      local_18 = 1;
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    FUN_00408ed0();
    local_8 = 0x19;
    if ((local_18 & 2) != 0) {
      local_18 = local_18 & 0xfffffffd;
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = (char **)((uint)local_bc[0] & 0xffffff00);
    }
    local_8._1_3_ = 0;
    uVar7 = local_8._1_3_;
    local_8._0_1_ = 0x1b;
    local_8._1_3_ = 0;
    if ((local_18 & 1) != 0) {
      local_18 = local_18 & 0xfffffffe;
      if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = (char **)((uint)local_d8[0] & 0xffffff00);
    }
    if (((int)local_3c < 0) || (((int)local_3c < 1 && (local_40 < 0x1f40000)))) {
      puStack_1c0 = (uint *)0x6ec813;
      local_8._1_3_ = uVar7;
      FUN_00988bb0();
      local_8 = 0x1d;
      local_18 = local_18 | 8;
    }
    else {
      FUN_009ca140();
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      local_18 = local_18 | 4;
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    FUN_00408ed0();
    local_8 = 0x1e;
    if ((local_18 & 8) != 0) {
      local_18 = local_18 & 0xfffffff7;
      if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e8 = 0xf;
      local_ec = 0;
      local_fc[0] = local_fc[0] & 0xffffff00;
    }
    local_8._0_1_ = 0x20;
    local_8._1_3_ = 0;
    if ((local_18 & 4) != 0) {
      local_18 = local_18 & 0xfffffffb;
      if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_174 = 0xf;
      local_178 = 0;
      local_188[0] = (char **)((uint)local_188[0] & 0xffffff00);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = (char **)((uint)local_bc[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 0x21;
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = (char **)((uint)local_d8[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 0x22;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = (char **)((uint)local_80[0] & 0xffffff00);
    puStack_1c0 = (uint *)0x6ec91e;
    FUN_00409350();
    local_8._0_1_ = 0x23;
    puStack_1dc = (undefined2 *)0x2;
    ppuStack_1c4 = (uint **)0xf;
    ppuStack_1c8 = (uint **)0x0;
    ppuStack_1e0 = (uint **)&DAT_00e05104;
    ppuStack_1d8 = (uint **)((uint)ppuStack_1d8 & 0xffffff00);
    uStack_1e4 = 0x6ec950;
    FUN_00409350();
    if (((int)local_3c < (int)local_44) ||
       (((int)local_3c <= (int)local_44 && (local_40 <= local_48)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    puStack_1dc = (undefined2 *)(uint)!bVar5;
    ppuStack_1e0 = (uint **)local_9c;
    uStack_1e4 = 0x6ec980;
    FUN_009c98f0();
    local_8._0_1_ = 0x24;
    puStack_1c0 = (uint *)0x6ec98e;
    FUN_00988f20();
    local_8._0_1_ = 0x25;
    FUN_00988f20();
    local_8._0_1_ = 0x26;
    FUN_00988f20();
    local_8._0_1_ = 0x27;
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0x28);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))();
    puStack_1c0 = (uint *)0x6ec9ea;
    FUN_00408ed0();
    FUN_00a5ecc0();
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = (char **)((uint)local_118[0] & 0xffffff00);
    if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_158 = 0xf;
    local_15c = 0;
    local_16c = (char **)((uint)local_16c & 0xffffff00);
    if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = 0xf;
    local_124 = 0;
    local_134 = (char **)((uint)local_134 & 0xffffff00);
    if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_13c = 0xf;
    local_140 = 0;
    local_150 = (char **)((uint)local_150 & 0xffffff00);
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = (char **)((uint)local_9c[0] & 0xffffff00);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = (char **)((uint)local_80[0] & 0xffffff00);
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = (char **)((uint)local_d8[0] & 0xffffff00);
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
    uVar15 = local_50;
  }
  if (0xf < uVar15) {
    local_8 = 0xffffffff;
    local_6c = 0xf;
    local_70 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_6c = 0xf;
  local_70 = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x29;
  piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x9c))();
  (**(code **)(*piVar9 + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  puStack_1c0 = (uint *)0x6ecbe8;
  FUN_00409350();
  local_8 = 0x2a;
  piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x9c))();
  (**(code **)(*piVar9 + 0xc0))();
  local_8 = 0xffffffff;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    puStack_1c0 = (uint *)&UNK_006ecc24;
    FUN_00aae91b();
  }
  if ((*(int *)(iVar11 + 0x244) != 2) && (*(int *)(iVar11 + 0x238) != 0)) {
    if ((DAT_013f2e98 & 1) == 0) {
      DAT_013f2e98 = DAT_013f2e98 | 1;
      local_8 = 0x2b;
      puStack_1c0 = (uint *)0x6ecc60;
      FUN_00561bd0();
      puStack_1c0 = (uint *)0x6ecc6a;
      _atexit((_func_4879 *)&LAB_00c82000);
    }
    local_8 = 0xffffffff;
    puStack_1c0 = (uint *)&DAT_013f2e40;
    ppuStack_1c4 = (uint **)0x6ecc8b;
    FUN_0047dbb0();
    ppuStack_1c4 = (uint **)0x1;
    ppuStack_1c8 = (uint **)0x6ecca0;
    FUN_004daa10();
    ppuStack_1c4 = (uint **)&DAT_013f2e40;
    ppuStack_1c8 = (uint **)0x6eccaa;
    FUN_0047de60();
    iVar16 = 0;
    local_44 = (int *)(*(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2);
    if (0 < (int)local_44) {
      do {
        piVar9 = (int *)(DAT_013f2e88 + (uint)(byte)(&DAT_013f2e48)[iVar16] * 8);
        if (*piVar9 != 0 || piVar9[1] != 0) {
          puStack_1c0 = (uint *)0x6eccf1;
          iVar13 = FUN_00aae9af();
          local_8 = 0x2c;
          if (iVar13 == 0) {
            param_2 = (uint **)0x0;
          }
          else {
            FUN_009885d0();
            local_8 = CONCAT31(local_8._1_3_,0x2d);
            local_18 = local_18 | 0x10;
            puStack_1c0 = (uint *)0x6ecd34;
            (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
            ppuStack_1c4 = (uint **)0x6ecd41;
            puStack_1c0 = (uint *)iVar13;
            param_2 = (uint **)FUN_009b1df0();
          }
          local_8 = 0xffffffff;
          if ((local_18 & 0x10) != 0) {
            local_18 = local_18 & 0xffffffef;
            if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
              puStack_1c0 = (uint *)&UNK_006ecd68;
              FUN_00aae91b();
            }
            local_50 = 0xf;
            local_54 = 0;
            local_64 = local_64 & 0xffffff00;
          }
          puStack_1c0 = (uint *)0xe0e6b8;
          local_a8 = 0xf;
          local_ac = 0;
          local_bc[0] = (char **)((uint)local_bc[0] & 0xffffff00);
          ppuStack_1c4 = (uint **)0x6ecda0;
          FUN_00409350();
          local_8 = 0x2f;
          puStack_1c0 = (uint *)0x6ecdbb;
          piVar9 = (int *)(**(code **)(*param_2[8] + 0x44))();
          puStack_1c0 = (uint *)(*(int *)(*(int *)(*(int *)(DAT_012587f0 + 0xc) + iVar16 * 4) + 8) +
                                2);
          ppuStack_1c4 = (uint **)0x6ecdd7;
          (**(code **)(*piVar9 + 0x48))();
          local_8 = 0xffffffff;
          if (0xf < local_a8) {
            ppuStack_1c4 = (uint **)local_bc[0];
                    /* WARNING: Subroutine does not return */
            ppuStack_1c8 = (uint **)&UNK_006ecdef;
            FUN_00aae91b();
          }
          ppuStack_1c4 = (uint **)0xa;
          ppuStack_1c8 = (uint **)0xe0e6b8;
          local_a8 = 0xf;
          local_ac = 0;
          local_bc[0] = (char **)((uint)local_bc[0] & 0xffffff00);
          ppuStack_1cc = (uint **)0x6ece1a;
          FUN_00409350();
          local_8 = 0x30;
          ppuStack_1c4 = (uint **)local_bc;
          ppuStack_1c8 = (uint **)0x6ece35;
          piVar9 = (int *)(**(code **)(*param_2[8] + 0x44))();
          ppuStack_1c8 = (uint **)local_9c;
          ppuStack_1cc = (uint **)0x6ece45;
          ppuStack_1c8 = (uint **)FUN_009888f0();
          local_8 = CONCAT31(local_8._1_3_,0x31);
          ppuStack_1cc = (uint **)0x6ece53;
          (**(code **)(*piVar9 + 0x78))();
          if (0xf < local_88) {
            ppuStack_1cc = (uint **)local_9c[0];
                    /* WARNING: Subroutine does not return */
            ppuStack_1d0 = (uint **)&UNK_006ece68;
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          local_88 = 0xf;
          local_8c = 0;
          local_9c[0] = (char **)((uint)local_9c[0] & 0xffffff00);
          if (0xf < local_a8) {
            ppuStack_1cc = (uint **)local_bc[0];
                    /* WARNING: Subroutine does not return */
            ppuStack_1d0 = (uint **)&UNK_006ece9e;
            FUN_00aae91b();
          }
          ppuStack_1cc = (uint **)0xc;
          ppuStack_1d0 = (uint **)0xe0ed44;
          local_a8 = 0xf;
          local_ac = 0;
          local_bc[0] = (char **)((uint)local_bc[0] & 0xffffff00);
          ppcStack_1d4 = (char **)0x6ecec5;
          FUN_00409350();
          local_8 = 0x32;
          local_dc = (int *)param_2[8];
          puVar1 = (undefined4 *)(DAT_013f2e88 + (uint)(byte)(&DAT_013f2e48)[iVar16] * 8);
          ppuStack_1d0 = (uint **)*puVar1;
          local_3c = (undefined1 *)&ppuStack_1d0;
          ppuStack_1cc = (uint **)puVar1[1];
          iVar13 = *(int *)(DAT_013f2e88 + (uint)(byte)(&DAT_013f2e48)[iVar16] * 8 + 4);
          if ((iVar13 < 1) &&
             ((iVar13 < 0 ||
              (*(uint *)(DAT_013f2e88 + (uint)(byte)(&DAT_013f2e48)[iVar16] * 8) < 0x320000)))) {
            bVar6 = 1;
          }
          else {
            bVar6 = 0;
          }
          ppcStack_1d4 = (char **)(uint)bVar6;
          ppuStack_1d8 = (uint **)local_80;
          puStack_1dc = (undefined2 *)0x6ecf35;
          ppuStack_1cc = (uint **)FUN_00988bb0();
          local_8._0_1_ = 0x33;
          ppuStack_1d0 = (uint **)0x1;
          ppcStack_1d4 = (char **)&DAT_00dedc68;
          local_c4 = 0xf;
          local_c8 = 0;
          local_d8[0] = (char **)((uint)local_d8[0] & 0xffffff00);
          ppuStack_1d8 = (uint **)0x6ecf62;
          FUN_00409350();
          local_8._0_1_ = 0x34;
          ppuStack_1d0 = (uint **)local_d8;
          puVar1 = (undefined4 *)
                   (*(int *)(iVar11 + 0x218) + (uint)*(byte *)(iVar16 + 0x10 + iVar11 + 0x1c8) * 8);
          ppuStack_1d8 = (uint **)*puVar1;
          local_3c = (undefined1 *)&ppuStack_1d8;
          ppcStack_1d4 = (char **)puVar1[1];
          uVar15 = (uint)*(byte *)(iVar16 + 0x10 + iVar11 + 0x1c8);
          iVar13 = *(int *)(*(int *)(iVar11 + 0x218) + uVar15 * 8 + 4);
          if ((iVar13 < 1) &&
             ((iVar13 < 0 || (*(uint *)(*(int *)(iVar11 + 0x218) + uVar15 * 8) < 0x320000)))) {
            bVar6 = 1;
          }
          else {
            bVar6 = 0;
          }
          puStack_1dc = (undefined2 *)(uint)bVar6;
          ppuStack_1e0 = (uint **)local_188;
          uStack_1e4 = 0x6ecfc7;
          ppcStack_1d4 = (char **)FUN_00988bb0();
          local_8._0_1_ = 0x35;
          ppuStack_1d8 = (uint **)0x1;
          puStack_1dc = &DAT_00dee2cc;
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
          ppuStack_1e0 = (uint **)0x6ecfe8;
          FUN_00409350();
          ppuStack_1d8 = (uint **)local_34;
          local_3c = auStack_1f4;
          local_8._0_1_ = 0x36;
          FUN_004471e0(&DAT_00dedc20);
          puVar2 = (uint *)(*(int *)(iVar11 + 0x218) + (uint)*(byte *)(iVar11 + 0x1d8 + iVar16) * 8)
          ;
          uVar4 = puVar2[1];
          puVar3 = (uint *)(DAT_013f2e88 + (uint)(byte)(&DAT_013f2e48)[iVar16] * 8);
          uVar15 = puVar3[1];
          if (((int)uVar15 < (int)uVar4) || (((int)uVar15 <= (int)uVar4 && (*puVar3 <= *puVar2)))) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          FUN_009c98f0(local_118,!bVar5);
          local_8._0_1_ = 0x37;
          puStack_1dc = (undefined2 *)0x6ed061;
          FUN_00988f20();
          local_8._0_1_ = 0x38;
          ppuStack_1d8 = (uint **)0x6ed072;
          FUN_00988f20();
          local_8._0_1_ = 0x39;
          ppcStack_1d4 = (char **)0x6ed083;
          FUN_00988f20();
          local_8._0_1_ = 0x3a;
          ppuStack_1d0 = (uint **)0x6ed094;
          ppuVar14 = (uint **)FUN_00988f20();
          local_8 = CONCAT31(local_8._1_3_,0x3b);
          ppuStack_1cc = (uint **)local_bc;
          ppuStack_1d0 = (uint **)0x6ed0ae;
          local_dc = (int *)(**(code **)(*local_dc + 0x3c))();
          ppuStack_1d0 = (uint **)0xffffffff;
          ppcStack_1d4 = (char **)0x0;
          puStack_1dc = (undefined2 *)0x6ed0c3;
          ppuStack_1d8 = ppuVar14;
          FUN_00408ed0();
          ppuStack_1d0 = (uint **)0x0;
          ppuStack_1d8 = (uint **)0x6ed0d6;
          ppcStack_1d4 = (char **)ppuVar14;
          FUN_00a5ecc0();
          if (0xf < local_88) {
            ppuStack_1d0 = (uint **)local_9c[0];
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed0eb;
            FUN_00aae91b();
          }
          local_88 = 0xf;
          local_8c = 0;
          local_9c[0] = (char **)((uint)local_9c[0] & 0xffffff00);
          if (0xf < local_13c) {
            ppuStack_1d0 = (uint **)local_150;
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed11a;
            FUN_00aae91b();
          }
          local_13c = 0xf;
          local_140 = 0;
          local_150 = (char **)((uint)local_150 & 0xffffff00);
          if (0xf < local_120) {
            ppuStack_1d0 = (uint **)local_134;
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed144;
            FUN_00aae91b();
          }
          local_120 = 0xf;
          local_124 = 0;
          local_134 = (char **)((uint)local_134 & 0xffffff00);
          if (0xf < local_158) {
            ppuStack_1d0 = (uint **)local_16c;
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed16e;
            FUN_00aae91b();
          }
          local_158 = 0xf;
          local_15c = 0;
          local_16c = (char **)((uint)local_16c & 0xffffff00);
          if (0xf < local_104) {
            ppuStack_1d0 = (uint **)local_118[0];
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed198;
            FUN_00aae91b();
          }
          local_104 = 0xf;
          local_108 = 0;
          local_118[0] = (char **)((uint)local_118[0] & 0xffffff00);
          if (0xf < local_20) {
            ppuStack_1d0 = (uint **)local_34[0];
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed1bc;
            FUN_00aae91b();
          }
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
          if (0xf < local_174) {
            ppuStack_1d0 = (uint **)local_188[0];
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed1dd;
            FUN_00aae91b();
          }
          local_174 = 0xf;
          local_178 = 0;
          local_188[0] = (char **)((uint)local_188[0] & 0xffffff00);
          if (0xf < local_c4) {
            ppuStack_1d0 = (uint **)local_d8[0];
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed207;
            FUN_00aae91b();
          }
          local_c4 = 0xf;
          local_c8 = 0;
          local_d8[0] = (char **)((uint)local_d8[0] & 0xffffff00);
          if (0xf < local_6c) {
            ppuStack_1d0 = (uint **)local_80[0];
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed22b;
            FUN_00aae91b();
          }
          local_8 = 0xffffffff;
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = (char **)((uint)local_80[0] & 0xffffff00);
          if (0xf < local_a8) {
            ppuStack_1d0 = (uint **)local_bc[0];
                    /* WARNING: Subroutine does not return */
            ppcStack_1d4 = (char **)&UNK_006ed253;
            FUN_00aae91b();
          }
          ppuStack_1d0 = (uint **)0x6ed266;
          FUN_009885d0();
          local_8 = 0x3c;
          ppcStack_1d4 = (char **)0x6ed280;
          ppuStack_1d0 = (uint **)local_9c;
          piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x9c))();
          ppcStack_1d4 = (char **)0x1;
          ppuStack_1d8 = param_2;
          puStack_1dc = (undefined2 *)0x6ed292;
          (**(code **)(*piVar9 + 0xb4))();
          local_8 = 0xffffffff;
          if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
            puStack_1c0 = (uint *)&UNK_006ed2ae;
            FUN_00aae91b();
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < (int)local_44);
    }
  }
  puStack_1c0 = (uint *)0xe0ed24;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  ppuStack_1c4 = (uint **)0x6ed2d7;
  FUN_00409350();
  local_8 = 0x3d;
  puStack_1c0 = (uint *)0x6ed2f2;
  piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x9c))();
  puStack_1c0 = (uint *)0x6ed2fe;
  (**(code **)(*piVar9 + 0xe4))();
  local_8 = 0xffffffff;
  if (0xf < local_50) {
    puStack_1c0 = (uint *)local_64;
                    /* WARNING: Subroutine does not return */
    ppuStack_1c4 = (uint **)&UNK_006ed318;
    FUN_00aae91b();
  }
  puStack_1c0 = (uint *)0xb;
  ppuStack_1c4 = (uint **)0xe0ed24;
  local_e8 = 0xf;
  local_ec = 0;
  local_fc[0] = local_fc[0] & 0xffffff00;
  ppuStack_1c8 = (uint **)0x6ed343;
  FUN_00409350();
  local_8 = 0x3e;
  puStack_1c0 = local_fc;
  ppuStack_1c4 = (uint **)0x6ed35e;
  piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x9c))();
  ppuStack_1c4 = (uint **)0x6ed367;
  (**(code **)(*piVar9 + 0x34))();
  if (0xf < local_e8) {
    ppuStack_1c4 = (uint **)local_fc[0];
                    /* WARNING: Subroutine does not return */
    ppuStack_1c8 = (uint **)&UNK_006ed37b;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

