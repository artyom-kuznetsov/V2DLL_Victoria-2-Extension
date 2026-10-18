// FUN_00561d10 @ 00561d10 body=[[00561d10, 00561e9b] [00561e9f, 00561ec3] [00561ec7, 00561ee3] [00561ee7, 00561f09] [00561f0d, 00561f2c] [00561f30, 00561f55] [00561f59, 00561f78] [00561f7c, 00561f95] [00561f99, 00561fde]]


undefined1 * FUN_00561d10(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *local_114;
  uint *local_110;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  undefined1 *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pvVar4 = ExceptionList;
  puStack_c = &LAB_00b813e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_18 = 1;
  local_14 = 0;
  local_1c = DAT_012587f4;
  iVar6 = DAT_012587f4;
  if (DAT_012587f4 < 1) {
    ExceptionList = pvVar4;
    return param_2;
  }
  do {
    bVar1 = *(byte *)(param_1 + 8 + local_14);
    if (bVar1 != 0) {
      iVar3 = (uint)bVar1 * 8;
      if ((*(int *)(iVar3 + *(int *)(param_1 + 0x48)) != DAT_0125e448) ||
         (*(int *)(iVar3 + 4 + *(int *)(param_1 + 0x48)) != DAT_0125e44c)) {
        puVar2 = *(undefined **)(*(int *)(DAT_012587f0 + 0xc) + local_14 * 4);
        local_110 = (uint *)0x3;
        local_114 = &DAT_00dfc7b4;
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_00409350();
        local_8 = 1;
        local_110 = (uint *)0x2;
        local_114 = &DAT_00df9638;
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 2;
        local_114 = *(undefined **)(*(int *)(param_1 + 0x48) + iVar3);
        local_58 = (undefined1 *)&local_114;
        local_110 = *(uint **)(*(int *)(param_1 + 0x48) + 4 + iVar3);
        uVar5 = FUN_00988bb0(local_100,param_3);
        local_110 = local_c8;
        local_8._0_1_ = 3;
        local_114 = puVar2;
        FUN_005659c0();
        local_110 = local_54;
        local_8._0_1_ = 4;
        local_114 = (undefined *)0x561e3a;
        FUN_00988f20();
        local_110 = (uint *)param_4;
        local_8._0_1_ = 5;
        local_114 = (undefined *)0x561e4f;
        FUN_00988f20();
        local_8._0_1_ = 6;
        local_114 = (undefined *)0x561e5e;
        local_110 = (uint *)uVar5;
        FUN_00988f20();
        local_110 = local_38;
        local_8._0_1_ = 7;
        local_114 = (undefined *)0x561e73;
        uVar5 = FUN_00988f20();
        local_110 = (uint *)0xffffffff;
        local_114 = (undefined *)0x0;
        local_8._0_1_ = 8;
        FUN_00448aa0(uVar5);
        if (0xf < local_98) {
          local_110 = (uint *)local_ac;
                    /* WARNING: Subroutine does not return */
          local_114 = &UNK_00561e9c;
          FUN_00aae91b();
        }
        local_98 = 0xf;
        local_9c = 0;
        local_ac = local_ac & 0xffffff00;
        if (0xf < local_60) {
          local_110 = (uint *)local_74;
                    /* WARNING: Subroutine does not return */
          local_114 = &UNK_00561ec4;
          FUN_00aae91b();
        }
        local_60 = 0xf;
        local_64 = 0;
        local_74 = local_74 & 0xffffff00;
        if (0xf < local_d0) {
          local_110 = (uint *)local_e4;
                    /* WARNING: Subroutine does not return */
          local_114 = &UNK_00561ee4;
          FUN_00aae91b();
        }
        local_d0 = 0xf;
        local_d4 = 0;
        local_e4 = local_e4 & 0xffffff00;
        if (0xf < local_7c) {
          local_110 = (uint *)local_90;
                    /* WARNING: Subroutine does not return */
          local_114 = &UNK_00561f0a;
          FUN_00aae91b();
        }
        local_7c = 0xf;
        local_80 = 0;
        local_90 = local_90 & 0xffffff00;
        if (0xf < local_b4) {
          local_110 = (uint *)local_c8[0];
                    /* WARNING: Subroutine does not return */
          local_114 = &UNK_00561f2d;
          FUN_00aae91b();
        }
        local_b4 = 0xf;
        local_b8 = 0;
        local_c8[0] = local_c8[0] & 0xffffff00;
        if (0xf < local_ec) {
          local_110 = (uint *)local_100[0];
                    /* WARNING: Subroutine does not return */
          local_114 = &UNK_00561f56;
          FUN_00aae91b();
        }
        local_ec = 0xf;
        local_f0 = 0;
        local_100[0] = local_100[0] & 0xffffff00;
        if (0xf < local_40) {
          local_110 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
          local_114 = &UNK_00561f79;
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        if (0xf < local_24) {
          local_110 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
          local_114 = &UNK_00561f96;
          FUN_00aae91b();
        }
        local_38[0] = local_38[0] & 0xffffff00;
        iVar6 = local_1c;
      }
    }
    local_14 = local_14 + 1;
    if (iVar6 <= local_14) {
      ExceptionList = local_10;
      return param_2;
    }
  } while( true );
}

