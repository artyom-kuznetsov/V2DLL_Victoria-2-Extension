// FUN_005117b0 @ 005117b0 body=[[005117b0, 00511890] [00511894, 0051190a] [0051190e, 0051192c] [00511930, 00511946] [0051194a, 00511a89] [00511a90, 00511b36] [00511b3a, 00511c9d] [00511ca1, 00511ccb] [00511ccf, 00511cf4] [00511cf8, 00511d1d] [00511d21, 00511d46] [00511d4a, 00511d6f] [00511d73, 00511d98] [00511d9c, 00511dc1] [00511dc5, 00511de4] [00511de8, 00511dfe] [00511e02, 00511e1f] [00511e23, 00511e4a] [00511e4e, 00511e63]]


undefined1 * FUN_005117b0(byte *param_1,undefined1 *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint local_1ec;
  undefined8 uStack_1e8;
  uint *puStack_1e0;
  byte local_1b8 [64];
  int local_178;
  undefined4 local_174;
  undefined4 local_170;
  uint local_168;
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined4 local_6c;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined1 *local_2c;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b74af3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_1c = (int)param_1 + 0x1184;
  local_8 = 0;
  local_6c = 1;
  puStack_1e0 = (uint *)0x511809;
  FUN_004da790();
  local_18 = (undefined1 *)&local_1ec;
  local_1ec = local_1ec & 0xffffff00;
  FUN_00409350(&DAT_00dedc20,2);
  if (((int)local_2c < *(int *)((int)param_1 + 0xe7c)) ||
     (((int)local_2c <= *(int *)((int)param_1 + 0xe7c) &&
      (local_30 <= *(uint *)((int)param_1 + 0xe78))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  FUN_009c98f0(local_a4,!bVar3);
  local_8 = 1;
  puStack_1e0 = (uint *)0x511879;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  FUN_00409350();
  local_18 = &stack0xfffffe28;
  local_8 = 2;
  puStack_1e0 = local_68;
  uStack_1e8._4_4_ = 0x5118d1;
  FUN_00988bb0();
  local_8._0_1_ = 3;
  FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,4);
  puStack_1e0 = (uint *)0x5118f5;
  FUN_00448aa0();
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_8 = 5;
  puStack_1e0 = (uint *)0x511986;
  _memset(local_1b8,0,0x40);
  FUN_00423920();
  local_8 = 6;
  FUN_0047dbb0();
  iVar4 = *(int *)(param_3 + 300);
  uStack_1e8 = 0x8000;
  if ((((iVar4 != 0) && (uStack_1e8 = 0x8000, DAT_01258734 != 0)) &&
      (uStack_1e8 = 0x8000, iVar4 != DAT_01258734 + 0x10)) && (uStack_1e8 = 0x8000, iVar4 != 0)) {
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0xbcc) + 0x18);
    uStack_1e8._4_4_ = (((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2
    ;
    puStack_1e0 = (uint *)0x1f40000;
    uStack_1e8._0_4_ = uVar2 << 0x1e;
    local_1ec = 0x511a08;
    lVar5 = __alldiv();
    uStack_1e8 = lVar5 + 0x8000;
  }
  puStack_1e0 = (uint *)(0x10000 - *(int *)((int)param_1 + 0xe70));
  local_1ec = 0x511a41;
  __allmul();
  puStack_1e0 = (uint *)0x511a59;
  FUN_0047de60();
  iVar4 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  if (0 < iVar4) {
    local_20 = local_1b8;
    param_1 = (byte *)(local_1c + 8);
    local_24 = iVar4;
    do {
      puVar1 = (uint *)(local_178 + (uint)*local_20 * 8);
      if (*puVar1 != 0 || puVar1[1] != 0) {
        local_18 = (undefined1 *)&local_1ec;
        local_1ec = local_1ec & 0xffffff00;
        FUN_00409350(&DAT_00dedc20,2);
        iVar4 = *(int *)(*(int *)(local_1c + 0x48) + (uint)*param_1 * 8 + 4);
        if (((int)puVar1[1] < iVar4) ||
           (((int)puVar1[1] <= iVar4 &&
            (*puVar1 <= *(uint *)(*(int *)(local_1c + 0x48) + (uint)*param_1 * 8))))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        FUN_009c98f0(local_a4,!bVar3);
        local_8._0_1_ = 7;
        puStack_1e0 = (uint *)0x511b1e;
        FUN_00448aa0();
        local_8._0_1_ = 6;
        if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 8;
        local_38 = 0xf;
        local_3c = 0;
        local_4c = local_4c & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 9;
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 10;
        FUN_005659c0();
        local_18 = &stack0xfffffe28;
        local_8._0_1_ = 0xb;
        puStack_1e0 = local_114;
        uStack_1e8._4_4_ = 0x511bd6;
        local_18 = (undefined1 *)FUN_00988bb0();
        local_8._0_1_ = 0xc;
        local_2c = &stack0xfffffe28;
        puStack_1e0 = local_dc;
        uStack_1e8._4_4_ = 0x511c0c;
        FUN_00988bb0();
        local_8._0_1_ = 0xd;
        FUN_00988f20();
        local_8._0_1_ = 0xe;
        FUN_00988f20();
        local_8._0_1_ = 0xf;
        FUN_00988f20();
        local_8._0_1_ = 0x10;
        FUN_00988f20();
        local_8._0_1_ = 0x11;
        FUN_00988f20();
        local_8._0_1_ = 0x12;
        puStack_1e0 = (uint *)0x511c85;
        FUN_00448aa0();
        if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_11c = 0xf;
        local_120 = 0;
        local_130 = local_130 & 0xffffff00;
        if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_138 = 0xf;
        local_13c = 0;
        local_14c = local_14c & 0xffffff00;
        if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8 = local_f8 & 0xffffff00;
        if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_154 = 0xf;
        local_158 = 0;
        local_168 = local_168 & 0xffffff00;
        if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_ac = 0xf;
        local_b0 = 0;
        local_c0 = local_c0 & 0xffffff00;
        if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c8 = 0xf;
        local_cc = 0;
        local_dc[0] = local_dc[0] & 0xffffff00;
        if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_100 = 0xf;
        local_104 = 0;
        local_114[0] = local_114[0] & 0xffffff00;
        if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,6);
        local_38 = 0xf;
        local_3c = 0;
        local_4c = local_4c & 0xffffff00;
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_20 = local_20 + 1;
      param_1 = param_1 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (local_178 == 0) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

