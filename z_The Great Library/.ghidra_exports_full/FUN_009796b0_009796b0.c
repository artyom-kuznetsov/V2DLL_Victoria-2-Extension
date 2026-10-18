// FUN_009796b0 @ 009796b0  (requested 009796B0, first bytes: 55 8B EC 6A FF 68 2A B3)


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0097b37e) */
/* WARNING: Removing unreachable block (ram,0x0097ad32) */
/* WARNING: Removing unreachable block (ram,0x0097aa14) */
/* WARNING: Removing unreachable block (ram,0x0097b054) */
/* WARNING: Removing unreachable block (ram,0x0097b697) */

undefined4 FUN_009796b0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  bool bVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  HANDLE pvVar11;
  undefined ***pppuVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 *****lpBuffer;
  task_scheduler_init *this;
  byte *pbVar16;
  bool bVar17;
  float10 fVar18;
  undefined ***pppuStack_1fb0;
  uint *puStack_1fac;
  undefined ****ppppuStack_1fa8;
  PROCESS_MEMORY_COUNTERS *pPVar19;
  DWORD DVar20;
  undefined **local_1844 [48];
  undefined **local_1784;
  undefined **local_16c4;
  undefined **local_1604;
  undefined **local_1544;
  undefined **local_1484;
  undefined **local_13c4;
  undefined **local_1304;
  undefined **local_1244;
  undefined **local_1184 [48];
  undefined **local_10c4;
  PROCESS_MEMORY_COUNTERS local_107c;
  PROCESS_MEMORY_COUNTERS local_1054;
  int local_102c;
  undefined1 auStack_f64 [84];
  undefined **local_f10 [7];
  uint local_ef4;
  undefined4 local_ee4;
  uint local_ee0;
  uint local_ed8;
  undefined4 local_ec8;
  uint local_ec4;
  uint local_ebc;
  undefined4 local_eac;
  uint local_ea8;
  uint local_ea0;
  undefined4 local_e90;
  uint local_e8c;
  uint local_e84;
  undefined4 local_e74;
  uint local_e70;
  uint local_e68;
  undefined4 local_e58;
  uint local_e54;
  uint local_e4c;
  undefined4 local_e3c;
  uint local_e38;
  uint local_e30;
  undefined4 local_e20;
  uint local_e1c;
  uint local_e14;
  undefined4 local_e04;
  uint local_e00;
  uint local_df8;
  undefined4 local_de8;
  uint local_de4;
  uint local_ddc;
  undefined4 local_dcc;
  uint local_dc8;
  uint local_dc0;
  undefined4 local_db0;
  uint local_dac;
  uint local_da4;
  undefined4 local_d94;
  uint local_d90;
  uint local_d88;
  undefined4 local_d78;
  uint local_d74;
  uint local_d6c;
  undefined4 local_d5c;
  uint local_d58;
  uint local_d50;
  undefined4 local_d40;
  uint local_d3c;
  uint local_d34;
  undefined4 local_d24;
  uint local_d20;
  uint local_d18;
  undefined4 local_d08;
  uint local_d04;
  uint local_cfc;
  undefined4 local_cec;
  uint local_ce8;
  uint local_ce0;
  undefined4 local_cd0;
  uint local_ccc;
  uint local_cc4;
  undefined4 local_cb4;
  uint local_cb0;
  uint local_ca8;
  undefined4 local_c98;
  uint local_c94;
  uint local_c8c;
  undefined4 local_c7c;
  uint local_c78;
  uint local_c70;
  undefined4 local_c60;
  uint local_c5c;
  uint local_c54;
  undefined4 local_c44;
  uint local_c40;
  uint local_c38;
  undefined4 local_c28;
  uint local_c24;
  uint local_c1c;
  undefined4 local_c0c;
  uint local_c08;
  uint local_c00;
  undefined4 local_bf0;
  uint local_bec;
  uint local_be4;
  undefined4 local_bd4;
  uint local_bd0;
  uint local_bc8;
  undefined4 local_bb8;
  uint local_bb4;
  uint local_bac;
  undefined4 local_b9c;
  uint local_b98;
  uint local_b90;
  undefined4 local_b80;
  uint local_b7c;
  uint local_b74;
  undefined4 local_b64;
  uint local_b60;
  uint local_b58;
  undefined4 local_b48;
  uint local_b44;
  uint local_b3c;
  undefined4 local_b2c;
  uint local_b28;
  uint local_b20;
  undefined4 local_b10;
  uint local_b0c;
  LPCSTR ***appppCStack_b04 [5];
  uint uStack_af0;
  uint local_ae8;
  undefined4 local_ad8;
  uint local_ad4;
  uint local_acc;
  undefined4 local_abc;
  uint local_ab8;
  uint local_ab0;
  undefined4 local_aa0;
  uint local_a9c;
  uint local_a94;
  undefined4 local_a84;
  uint local_a80;
  uint local_a78;
  undefined4 local_a68;
  uint local_a64;
  uint local_a5c;
  undefined4 local_a4c;
  uint local_a48;
  uint local_a40;
  undefined4 local_a30;
  uint local_a2c;
  uint local_a24;
  undefined4 local_a14;
  uint local_a10;
  uint local_a08;
  undefined4 local_9f8;
  uint local_9f4;
  uint local_9ec;
  undefined4 local_9dc;
  uint local_9d8;
  uint local_9d0;
  undefined4 local_9c0;
  uint local_9bc;
  uint local_9b4;
  undefined4 local_9a4;
  uint local_9a0;
  uint local_998;
  undefined4 local_988;
  uint local_984;
  uint local_97c;
  undefined4 local_96c;
  uint local_968;
  uint local_960;
  undefined4 local_950;
  uint local_94c;
  uint local_944;
  undefined4 local_934;
  uint local_930;
  uint local_928;
  undefined4 local_918;
  uint local_914;
  uint local_90c;
  undefined4 local_8fc;
  uint local_8f8;
  uint local_8f0;
  undefined4 local_8e0;
  uint local_8dc;
  uint local_8d4;
  undefined4 local_8c4;
  uint local_8c0;
  uint local_8b8;
  undefined4 local_8a8;
  uint local_8a4;
  uint local_89c;
  undefined4 local_88c;
  uint local_888;
  uint local_880;
  undefined4 local_870;
  uint local_86c;
  uint local_864;
  undefined4 local_854;
  uint local_850;
  uint local_848;
  undefined4 local_838;
  uint local_834;
  uint local_82c;
  undefined4 local_81c;
  uint local_818;
  uint local_810;
  undefined4 local_800;
  uint local_7fc;
  uint local_7f4;
  undefined4 local_7e4;
  uint local_7e0;
  uint local_7d8;
  undefined4 local_7c8;
  uint local_7c4;
  uint local_7bc;
  undefined4 local_7ac;
  uint local_7a8;
  uint local_7a0;
  undefined4 local_790;
  uint local_78c;
  uint local_784;
  undefined4 local_774;
  uint local_770;
  int local_768;
  int local_764;
  undefined4 local_760;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_750;
  undefined1 local_748;
  undefined4 local_738;
  undefined4 local_734;
  int *piStack_72c;
  uint local_728 [4];
  undefined4 local_718;
  uint local_714;
  undefined ***local_70c [4];
  undefined4 local_6fc;
  uint local_6f8;
  uint local_6f0 [4];
  undefined4 local_6e0;
  uint local_6dc;
  uint local_6d4;
  undefined4 local_6c4;
  uint local_6c0;
  uint local_6b8;
  undefined4 local_6a8;
  uint local_6a4;
  uint local_69c;
  undefined4 local_68c;
  uint local_688;
  uint local_680 [4];
  undefined4 local_670;
  uint local_66c;
  uint local_664;
  undefined4 local_654;
  uint local_650;
  uint local_648 [4];
  undefined4 local_638;
  uint local_634;
  uint local_62c;
  undefined4 local_61c;
  uint local_618;
  uint local_610;
  undefined4 local_600;
  uint local_5fc;
  uint local_5f4;
  undefined4 local_5e4;
  uint local_5e0;
  uint local_5d8 [4];
  undefined4 local_5c8;
  uint local_5c4;
  uint local_5bc;
  undefined4 local_5ac;
  uint local_5a8;
  uint local_5a0 [4];
  undefined4 local_590;
  uint local_58c;
  uint local_584;
  undefined4 local_574;
  uint local_570;
  uint local_568 [4];
  undefined4 local_558;
  uint local_554;
  uint local_54c;
  undefined4 local_53c;
  uint local_538;
  undefined ***local_530;
  undefined ***local_52c;
  undefined4 local_528;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined1 local_510;
  undefined4 local_500;
  undefined4 local_4fc;
  uint local_4f4 [4];
  undefined4 local_4e4;
  uint local_4e0;
  uint local_4d8;
  undefined4 local_4c8;
  uint local_4c4;
  uint local_4bc [4];
  undefined4 local_4ac;
  uint local_4a8;
  uint local_4a0;
  undefined4 local_490;
  uint local_48c;
  uint local_484;
  undefined4 local_474;
  uint local_470;
  uint local_468;
  undefined4 local_458;
  uint local_454;
  uint local_44c;
  undefined4 local_43c;
  uint local_438;
  uint local_430 [4];
  undefined4 local_420;
  uint local_41c;
  uint local_414;
  undefined4 local_404;
  uint local_400;
  uint local_3f8 [4];
  undefined4 local_3e8;
  uint local_3e4;
  uint local_3dc;
  undefined4 local_3cc;
  uint local_3c8;
  uint local_3c0 [4];
  undefined4 local_3b0;
  uint local_3ac;
  uint local_3a4 [4];
  undefined4 local_394;
  uint local_390;
  uint local_388 [4];
  undefined4 local_378;
  uint local_374;
  uint local_36c [4];
  undefined4 local_35c;
  uint local_358;
  uint local_350 [4];
  undefined4 local_340;
  uint local_33c;
  uint local_334 [4];
  undefined4 local_324;
  uint local_320;
  uint local_318 [4];
  undefined4 local_308;
  uint local_304;
  uint local_2fc [4];
  undefined4 local_2ec;
  uint local_2e8;
  uint local_2e0 [4];
  undefined4 local_2d0;
  uint local_2cc;
  uint local_2c4 [4];
  undefined4 local_2b4;
  uint local_2b0;
  uint local_2a8;
  undefined4 local_298;
  uint local_294;
  undefined4 ****local_28c [4];
  DWORD local_27c;
  uint local_278;
  uint local_270 [4];
  undefined4 local_260;
  uint local_25c;
  uint local_254;
  undefined4 local_244;
  uint local_240;
  uint local_238;
  undefined4 local_228;
  uint local_224;
  uint local_21c;
  int local_20c;
  uint local_208;
  int local_1f0;
  uint local_1e4;
  int local_1d4;
  uint local_1d0;
  uint local_1c8;
  int local_1b8;
  uint local_1b4;
  undefined4 *local_1ac;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  DWORD local_1a0;
  undefined4 *local_19c;
  uint local_198;
  int local_188;
  uint local_184;
  undefined4 *local_17c;
  undefined4 *local_178;
  undefined4 *local_174;
  undefined4 *local_170;
  undefined4 *local_16c;
  undefined4 *local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  undefined4 *local_15c;
  uint local_158;
  uint local_148;
  uint local_144;
  uint local_13c;
  uint local_12c;
  uint local_128;
  uint local_120;
  uint local_110;
  uint local_10c;
  uint local_104;
  uint local_f4;
  uint local_f0;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  uint local_d8;
  int local_c8;
  undefined4 local_c4;
  uint local_bc;
  int local_ac;
  uint local_a8;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  uint local_34;
  undefined ***local_30;
  char local_29;
  undefined4 *local_28;
  undefined ***local_24;
  uint local_20;
  uint local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bab32a;
  local_10 = ExceptionList;
  local_14 = &stack0xffffe078;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  hModule = LoadLibraryA("User32.dll");
  local_30 = (undefined ***)GetProcAddress(hModule,"SetProcessDPIAware");
  pFVar7 = GetProcAddress(hModule,"IsProcessDPIAware");
  if (((pFVar7 != (FARPROC)0x0) && (iVar8 = (*pFVar7)(), iVar8 == 0)) &&
     (local_30 != (undefined ***)0x0)) {
    (*(code *)local_30)();
  }
  FreeLibrary(hModule);
  local_48c = 0xf;
  local_490 = 0;
  local_4a0 = local_4a0 & 0xffffff00;
  do {
    cVar6 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar6 != '\0');
  FUN_00409350();
  local_8 = 0;
  FUN_00989510();
  local_8._0_1_ = 1;
  local_224 = 0xf;
  local_228 = 0;
  local_238 = local_238 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 2;
  local_184 = 0xf;
  local_188 = 0;
  local_198 = local_198 & 0xffffff00;
  FUN_00409350();
  local_29 = '\0';
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_30 = (undefined ***)0x1;
  if (1 < (local_54 - local_58) / 0x1c) {
    do {
      local_8._0_1_ = 5;
      puVar2 = (undefined1 *)((int)local_30 * 0x1c);
      local_28 = (undefined4 *)puVar2;
      FUN_00989330();
      local_8._0_1_ = 6;
      FUN_00408ed0();
      local_8._0_1_ = 5;
      if (0xf < local_b60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b60 = 0xf;
      local_b64 = 0;
      local_b74 = local_b74 & 0xffffff00;
      local_f0 = 0xf;
      local_f4 = 0;
      local_104 = local_104 & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,7);
      if ((int)local_f4 < *(int *)(puVar2 + local_58 + 0x10)) {
        iVar8 = FUN_009895f0();
        uVar4 = local_f4;
        local_18 = (undefined4 *)((uint)local_18 | 1);
        uVar9 = *(uint *)(iVar8 + 0x10);
        iVar8 = FUN_00414bd0();
        bVar17 = false;
        if (iVar8 == 0) {
          if (uVar9 < uVar4) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(uVar9 != uVar4);
          }
          bVar17 = uVar9 == 0;
        }
        bVar3 = true;
        if (!bVar17) goto LAB_0097991e;
      }
      else {
LAB_0097991e:
        bVar3 = false;
      }
      local_8 = 7;
      if (((uint)local_18 & 1) != 0) {
        local_18 = (undefined4 *)((uint)local_18 & 0xfffffffe);
        if (0xf < local_ee0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_ee0 = 0xf;
        local_ee4 = 0;
        local_ef4 = local_ef4 & 0xffffff00;
      }
      if (bVar3) {
        FUN_009895f0();
        DAT_00f09150 = FUN_00aaf0c5();
        if (0xf < local_b44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b44 = 0xf;
        local_b48 = 0;
        local_b58 = local_b58 & 0xffffff00;
      }
      local_8._0_1_ = 5;
      if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_f0 = 0xf;
      local_f4 = 0;
      local_104 = local_104 & 0xffffff00;
      local_10c = 0xf;
      local_110 = 0;
      local_120 = local_120 & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,9);
      if ((int)local_110 < *(int *)((int)local_28 + local_58 + 0x10)) {
        iVar8 = FUN_009895f0();
        uVar4 = local_110;
        local_18 = (undefined4 *)((uint)local_18 | 2);
        uVar9 = *(uint *)(iVar8 + 0x10);
        iVar8 = FUN_00414bd0();
        bVar17 = false;
        if (iVar8 == 0) {
          if (uVar9 < uVar4) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(uVar9 != uVar4);
          }
          bVar17 = uVar9 == 0;
        }
        bVar3 = true;
        if (!bVar17) goto LAB_00979aa0;
      }
      else {
LAB_00979aa0:
        bVar3 = false;
      }
      local_8 = 9;
      if (((uint)local_18 & 2) != 0) {
        local_18 = (undefined4 *)((uint)local_18 & 0xfffffffd);
        if (0xf < local_d04) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_d04 = 0xf;
        local_d08 = 0;
        local_d18 = local_d18 & 0xffffff00;
      }
      if (bVar3) {
        FUN_009895f0();
        local_8 = CONCAT31(local_8._1_3_,0xb);
        FUN_00408ed0();
        if (0xf < local_7c4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_7c4 = 0xf;
        local_7c8 = 0;
        local_7d8 = local_7d8 & 0xffffff00;
      }
      local_8._0_1_ = 5;
      if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_10c = 0xf;
      local_110 = 0;
      local_120 = local_120 & 0xffffff00;
      local_144 = 0xf;
      local_148 = 0;
      local_158 = local_158 & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      if ((int)local_148 < *(int *)((int)local_28 + local_58 + 0x10)) {
        iVar8 = FUN_009895f0();
        uVar4 = local_148;
        local_18 = (undefined4 *)((uint)local_18 | 4);
        uVar9 = *(uint *)(iVar8 + 0x10);
        iVar8 = FUN_00414bd0();
        bVar17 = false;
        if (iVar8 == 0) {
          if (uVar9 < uVar4) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(uVar9 != uVar4);
          }
          bVar17 = uVar9 == 0;
        }
        bVar3 = true;
        if (!bVar17) goto LAB_00979c1c;
      }
      else {
LAB_00979c1c:
        bVar3 = false;
      }
      local_8 = 0xc;
      if (((uint)local_18 & 4) != 0) {
        local_18 = (undefined4 *)((uint)local_18 & 0xfffffffb);
        if (0xf < local_b28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b28 = 0xf;
        local_b2c = 0;
        local_b3c = local_b3c & 0xffffff00;
      }
      if (bVar3) {
        FUN_009895f0();
        local_8 = CONCAT31(local_8._1_3_,0xe);
        FUN_00408ed0();
        if (0xf < local_7fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_7fc = 0xf;
        local_800 = 0;
        local_810 = local_810 & 0xffffff00;
      }
      local_8._0_1_ = 5;
      if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_144 = 0xf;
      local_148 = 0;
      local_158 = local_158 & 0xffffff00;
      local_128 = 0xf;
      local_12c = 0;
      local_13c = local_13c & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      if ((int)local_12c < *(int *)((int)local_28 + local_58 + 0x10)) {
        iVar8 = FUN_009895f0();
        uVar4 = local_12c;
        local_18 = (undefined4 *)((uint)local_18 | 8);
        uVar9 = *(uint *)(iVar8 + 0x10);
        iVar8 = FUN_00414bd0();
        bVar17 = false;
        if (iVar8 == 0) {
          if (uVar9 < uVar4) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(uVar9 != uVar4);
          }
          bVar17 = uVar9 == 0;
        }
        bVar3 = true;
        if (!bVar17) goto LAB_00979d98;
      }
      else {
LAB_00979d98:
        bVar3 = false;
      }
      local_8 = 0xf;
      if (((uint)local_18 & 8) != 0) {
        local_18 = (undefined4 *)((uint)local_18 & 0xfffffff7);
        if (0xf < local_770) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_770 = 0xf;
        local_774 = 0;
        local_784 = local_784 & 0xffffff00;
      }
      if (bVar3) {
        FUN_009895f0();
        local_8 = CONCAT31(local_8._1_3_,0x11);
        FUN_00408ed0();
        if (0xf < local_834) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_834 = 0xf;
        local_838 = 0;
        local_848 = local_848 & 0xffffff00;
      }
      local_8._0_1_ = 5;
      if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_128 = 0xf;
      local_12c = 0;
      local_13c = local_13c & 0xffffff00;
      local_1b4 = 0xf;
      local_1b8 = 0;
      local_1c8 = local_1c8 & 0xffffff00;
      FUN_00409350();
      puVar13 = local_28;
      local_8._0_1_ = 0x12;
      if (local_1b8 < *(int *)((int)local_28 + local_58 + 0x10)) {
        FUN_009895f0();
        local_8 = CONCAT31(local_8._1_3_,0x13);
        local_18 = (undefined4 *)((uint)local_18 | 0x10);
        cVar6 = FUN_00416db0();
        bVar17 = true;
        if (cVar6 == '\0') goto LAB_00979edb;
      }
      else {
LAB_00979edb:
        bVar17 = false;
      }
      local_8 = 0x12;
      if (((uint)local_18 & 0x10) != 0) {
        local_18 = (undefined4 *)((uint)local_18 & 0xffffffef);
        if (0xf < local_b98) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b98 = 0xf;
        local_b9c = 0;
        local_bac = local_bac & 0xffffff00;
      }
      if (bVar17) {
        FUN_009895f0();
        local_8._0_1_ = 0x14;
        FUN_00989330();
        local_8 = CONCAT31(local_8._1_3_,0x15);
        FUN_00a840b0();
        if (0xf < local_86c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_86c = 0xf;
        local_870 = 0;
        local_880 = local_880 & 0xffffff00;
        if (0xf < local_bd0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_bd0 = 0xf;
        local_bd4 = 0;
        local_be4 = local_be4 & 0xffffff00;
        puVar13 = local_28;
      }
      local_8._0_1_ = 5;
      if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1b4 = 0xf;
      local_1b8 = 0;
      local_1c8 = local_1c8 & 0xffffff00;
      local_208 = 0xf;
      local_20c = 0;
      local_21c = local_21c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      if (local_20c < *(int *)((int)puVar13 + local_58 + 0x10)) {
        FUN_009895f0();
        local_8 = CONCAT31(local_8._1_3_,0x17);
        local_18 = (undefined4 *)((uint)local_18 | 0x20);
        cVar6 = FUN_00416db0();
        bVar17 = true;
        if (cVar6 == '\0') goto LAB_0097a054;
      }
      else {
LAB_0097a054:
        bVar17 = false;
      }
      local_8 = 0x16;
      if (((uint)local_18 & 0x20) != 0) {
        local_18 = (undefined4 *)((uint)local_18 & 0xffffffdf);
        if (0xf < local_8a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8a4 = 0xf;
        local_8a8 = 0;
        local_8b8 = local_8b8 & 0xffffff00;
      }
      if (bVar17) {
        FUN_009895f0();
        local_8._0_1_ = 0x18;
        FUN_00989330();
        local_8 = CONCAT31(local_8._1_3_,0x19);
        FUN_00a840b0();
        if (0xf < local_c08) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c08 = 0xf;
        local_c0c = 0;
        local_c1c = local_c1c & 0xffffff00;
        if (0xf < local_8dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8dc = 0xf;
        local_8e0 = 0;
        local_8f0 = local_8f0 & 0xffffff00;
        puVar13 = local_28;
      }
      local_8._0_1_ = 5;
      if (0xf < local_208) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_208 = 0xf;
      local_20c = 0;
      local_21c = local_21c & 0xffffff00;
      local_240 = 0xf;
      local_244 = 0;
      local_254 = local_254 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1a;
      cVar6 = FUN_00416db0();
      if (cVar6 != '\0') {
        DAT_01258a65 = 1;
      }
      local_8._0_1_ = 5;
      if (0xf < local_240) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_240 = 0xf;
      local_244 = 0;
      local_254 = local_254 & 0xffffff00;
      local_1d0 = 0xf;
      local_1d4 = 0;
      local_1e4 = local_1e4 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1b;
      if (local_1d4 < *(int *)((int)puVar13 + local_58 + 0x10)) {
        FUN_009895f0();
        local_8 = CONCAT31(local_8._1_3_,0x1c);
        local_18 = (undefined4 *)((uint)local_18 | 0x40);
        cVar6 = FUN_00416db0();
        bVar17 = true;
        if (cVar6 == '\0') goto LAB_0097a241;
      }
      else {
LAB_0097a241:
        bVar17 = false;
      }
      local_8 = 0x1b;
      if (((uint)local_18 & 0x40) != 0) {
        local_18 = (undefined4 *)((uint)local_18 & 0xffffffbf);
        if (0xf < local_c40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c40 = 0xf;
        local_c44 = 0;
        local_c54 = local_c54 & 0xffffff00;
      }
      if (bVar17) {
        FUN_009895f0();
        local_8 = CONCAT31(local_8._1_3_,0x1d);
        FUN_00408ed0();
        if (0xf < local_914) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_914 = 0xf;
        local_918 = 0;
        local_928 = local_928 & 0xffffff00;
      }
      local_8._0_1_ = 5;
      if (0xf < local_1d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pbVar10 = (byte *)((int)puVar13 + local_58);
      local_1d0 = 0xf;
      local_1d4 = 0;
      local_1e4 = local_1e4 & 0xffffff00;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar10 = *(byte **)pbVar10;
      }
      pbVar16 = &DAT_00e36bd8;
      do {
        bVar1 = *pbVar10;
        bVar17 = bVar1 < *pbVar16;
        if (bVar1 != *pbVar16) {
LAB_0097a345:
          iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_0097a34a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar17 = bVar1 < pbVar16[1];
        if (bVar1 != pbVar16[1]) goto LAB_0097a345;
        pbVar10 = pbVar10 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar1 != 0);
      iVar8 = 0;
LAB_0097a34a:
      if (iVar8 == 0) {
        local_29 = '\x01';
      }
      local_30 = (undefined ***)((int)local_30 + 1);
    } while ((int)local_30 < (local_54 - local_58) / 0x1c);
  }
  iVar8 = local_6c;
  local_8._0_1_ = 5;
  PHYSFS_init();
  PHYSFS_getBaseDir();
  PHYSFS_mount();
  if (DAT_01258a68 != 0) {
    PHYSFS_freeList();
    DAT_01258a68 = 0;
  }
  DAT_01258a68 = PHYSFS_getSearchPath();
  FUN_00991340();
  local_8._0_1_ = 0x20;
  if (local_ac == 0) {
    FUN_00991840();
    local_8._0_1_ = 0x21;
    FUN_00408ed0();
    local_8._0_1_ = 0x20;
    if (0xf < local_c78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c78 = 0xf;
    local_c7c = 0;
    local_c8c = local_c8c & 0xffffff00;
  }
  local_8._0_1_ = 0x20;
  if (local_188 != 0) {
    FUN_00408ed0();
  }
  PHYSFS_mount();
  PHYSFS_setWriteDir();
  FUN_009d1740();
  FUN_009d1cf0();
  if (local_29 != '\0') {
    FUN_009d3670();
    AttachConsole(0xffffffff);
    local_1a0 = 0;
    pvVar11 = GetStdHandle(0xfffffff5);
    lpBuffer = (undefined4 *****)local_28c[0];
    if (local_278 < 0x10) {
      lpBuffer = local_28c;
    }
    WriteFile(pvVar11,lpBuffer,local_27c,&local_1a0,(LPOVERLAPPED)0x0);
    if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_278 = 0xf;
    local_27c = 0;
    local_28c[0] = (undefined4 ****)((uint)local_28c[0] & 0xffffff00);
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (local_90 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_70 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_184 = 0xf;
    local_188 = 0;
    local_198 = local_198 & 0xffffff00;
    if (0xf < local_224) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_224 = 0xf;
    local_228 = 0;
    local_238 = local_238 & 0xffffff00;
    if (local_58 == 0) {
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      if (local_48c < 0x10) {
        ExceptionList = local_10;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009d3090();
  FUN_0046f9e0();
  FUN_009918a0();
  PHYSFS_init();
  PHYSFS_getBaseDir();
  PHYSFS_mount();
  ppppuStack_1fa8 = (undefined ****)0x97a653;
  PHYSFS_mount();
  if (DAT_01258a68 != 0) {
    PHYSFS_freeList();
    DAT_01258a68 = 0;
  }
  DAT_01258a68 = PHYSFS_getSearchPath();
  pppuVar12 = (undefined ***)((iVar8 - local_70) / 0x1c);
  if (0 < (int)pppuVar12) {
    do {
      local_30 = pppuVar12;
      FUN_00a840b0();
      pppuVar12 = (undefined ***)((int)local_30 + -1);
    } while ((int)local_30 + -1 != 0);
    local_30 = (undefined ***)0x0;
  }
  pppuVar12 = (undefined ***)((local_8c - local_90) / 0x1c);
  if (0 < (int)pppuVar12) {
    do {
      local_30 = pppuVar12;
      FUN_00a840b0();
      pppuVar12 = (undefined ***)((int)local_30 + -1);
    } while ((int)local_30 + -1 != 0);
    local_30 = (undefined ***)0x0;
  }
  FUN_009d17b0();
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 0x24;
  uVar5 = (undefined1)local_8;
  local_8._0_1_ = 0x24;
  if (local_c8 == 0) {
    local_8._0_1_ = uVar5;
    FUN_00408ed0();
  }
  else {
    if (local_ac != 0) {
      local_454 = 0xf;
      local_458 = 0;
      local_468 = local_468 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x25;
      FUN_00988f20();
      local_8._0_1_ = 0x26;
      FUN_00988f20();
      local_8._0_1_ = 0x27;
      FUN_00408ed0();
      if (0xf < local_94c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94c = 0xf;
      local_950 = 0;
      local_960 = local_960 & 0xffffff00;
      if (0xf < local_cb0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x24;
      local_cb0 = 0xf;
      local_cb4 = 0;
      local_cc4 = local_cc4 & 0xffffff00;
      if (0xf < local_454) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_454 = 0xf;
      local_458 = 0;
      local_468 = local_468 & 0xffffff00;
    }
    local_8._0_1_ = 0x24;
    FUN_00991660();
  }
  PHYSFS_mount();
  PHYSFS_setWriteDir();
  if (DAT_00f09150 == -1) {
    local_5c = 0;
    tbb::task_scheduler_init::initialize((task_scheduler_init *)&local_5c,-1,1);
    if (local_5c == 0) goto LAB_0097a8c9;
    this = (task_scheduler_init *)&local_5c;
  }
  else {
    local_60 = 0;
    tbb::task_scheduler_init::initialize((task_scheduler_init *)&local_60,DAT_00f09150,1);
    if (local_60 == 0) goto LAB_0097a8c9;
    this = (task_scheduler_init *)&local_60;
  }
  tbb::task_scheduler_init::terminate(this);
LAB_0097a8c9:
  FUN_00a1df50();
  iVar8 = FUN_00aae9af();
  local_8._0_1_ = 0x28;
  if (iVar8 == 0) {
    DAT_00f20c18 = (int *)0x0;
  }
  else {
    DAT_00f20c18 = (int *)FUN_00a381a0();
  }
  local_8 = CONCAT31(local_8._1_3_,0x24);
  DAT_01258a8c = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  (**(code **)(*DAT_01258a8c + 4))();
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af();
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  fVar18 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  DAT_01258a54 = (float)fVar18;
  DAT_01258a58 = (undefined4 *)FUN_00aae9af();
  if (DAT_01258a58 == (undefined4 *)0x0) {
    DAT_01258a58 = (undefined4 *)0x0;
  }
  else {
    *DAT_01258a58 = &PTR_FUN_00e407ac;
  }
  pppuVar12 = (undefined ***)FUN_00aae9af();
  local_8._0_1_ = 0x29;
  if (pppuVar12 == (undefined ***)0x0) {
    local_30 = (undefined ***)0x0;
    pppuVar12 = local_30;
  }
  else {
    local_24 = (undefined ***)FUN_00aae9af();
    local_8._0_1_ = 0x2a;
    if (local_24 == (undefined ***)0x0) {
      iVar8 = 0;
    }
    else {
      local_3ac = 0xf;
      local_3b0 = 0;
      local_3c0[0] = local_3c0[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x2b);
      local_18 = (undefined4 *)((uint)local_18 | 0x80);
      local_2cc = 0xf;
      local_2d0 = 0;
      local_2e0[0] = local_2e0[0] & 0xffffff00;
      FUN_00409350();
      local_30 = (undefined ***)&ppppuStack_1fa8;
      local_8 = 0x2c;
      local_18 = (undefined4 *)((uint)local_18 | 0x100);
      puStack_1fac = (uint *)0x0;
      pppuStack_1fb0 = (undefined ***)&DAT_00ded94d;
                    /* WARNING: Ignoring partial resolution of indirect */
      ppppuStack_1fa8._0_1_ = 0;
      FUN_00409350();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0x2d;
      pppuStack_1fb0 = (undefined ***)0x97aa43;
      FUN_00988fa0();
      puStack_1fac = local_2e0;
      local_8 = CONCAT31(local_8._1_3_,0x2e);
      local_18 = (undefined4 *)((uint)local_18 | 0x200);
      pppuStack_1fb0 = (undefined ***)0x97aa65;
      FUN_00988f20();
      local_8 = 0x2f;
      local_18 = (undefined4 *)((uint)local_18 | 0x400);
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97aa85;
      FUN_00988f20();
      puStack_1fac = local_3c0;
      local_8 = 0x30;
      local_18 = (undefined4 *)((uint)local_18 | 0x800);
      pppuStack_1fb0 = (undefined ***)0x97aaa7;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_18 = (undefined4 *)((uint)local_18 | 0x1000);
      puStack_1fac = (uint *)0x1;
      local_8 = 0x35;
      iVar8 = FUN_00992740();
    }
    *pppuVar12 = &PTR_FUN_00e40728;
    pppuVar12[1] = (undefined **)0x0;
    local_8._0_1_ = 0x3e;
    local_8._1_3_ = 0;
    local_168 = (undefined4 *)0x0;
    if (((undefined **)iVar8 != pppuVar12[1]) && (pppuVar12[1] != (undefined **)0x0)) {
      (**(code **)*pppuVar12[1])();
    }
    pppuVar12[1] = (undefined **)iVar8;
    local_8._0_1_ = 0x3d;
    if (local_168 != (undefined4 *)0x0) {
      (**(code **)*local_168)();
    }
  }
  local_30 = pppuVar12;
  if (((uint)local_18 & 0x1000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xffffefff);
    if (0xf < local_984) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_984 = 0xf;
    local_988 = 0;
    local_998 = local_998 & 0xffffff00;
  }
  if (((uint)local_18 & 0x800) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfffff7ff);
    if (0xf < local_ce8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ce8 = 0xf;
    local_cec = 0;
    local_cfc = local_cfc & 0xffffff00;
  }
  if (((uint)local_18 & 0x400) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfffffbff);
    if (0xf < local_9bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9bc = 0xf;
    local_9c0 = 0;
    local_9d0 = local_9d0 & 0xffffff00;
  }
  if (((uint)local_18 & 0x200) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfffffdff);
    if (0xf < local_d20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d20 = 0xf;
    local_d24 = 0;
    local_d34 = local_d34 & 0xffffff00;
  }
  if (((uint)local_18 & 0x100) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfffffeff);
    if (0xf < local_2cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2cc = 0xf;
    local_2d0 = 0;
    local_2e0[0] = local_2e0[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if (((uint)local_18 & 0x80) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xffffff7f);
    if (0xf < local_3ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3ac = 0xf;
    local_3b0 = 0;
    local_3c0[0] = local_3c0[0] & 0xffffff00;
  }
  puVar13 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x45;
  if (puVar13 != (undefined4 *)0x0) {
    local_24 = (undefined ***)FUN_00aae9af();
    local_8._0_1_ = 0x46;
    if (local_24 == (undefined ***)0x0) {
      iVar8 = 0;
    }
    else {
      local_41c = 0xf;
      local_420 = 0;
      local_430[0] = local_430[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x47);
      local_18 = (undefined4 *)((uint)local_18 | 0x2000);
      local_304 = 0xf;
      local_308 = 0;
      local_318[0] = local_318[0] & 0xffffff00;
      FUN_00409350();
      local_28 = &ppppuStack_1fa8;
      local_8 = 0x48;
      local_18 = (undefined4 *)((uint)local_18 | 0x4000);
      puStack_1fac = (uint *)0x0;
      pppuStack_1fb0 = (undefined ***)&DAT_00ded94d;
                    /* WARNING: Ignoring partial resolution of indirect */
      ppppuStack_1fa8._0_1_ = 0;
      FUN_00409350();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0x49;
      pppuStack_1fb0 = (undefined ***)0x97ad61;
      FUN_00988fa0();
      puStack_1fac = local_318;
      local_8 = CONCAT31(local_8._1_3_,0x4a);
      local_18 = (undefined4 *)((uint)local_18 | 0x8000);
      pppuStack_1fb0 = (undefined ***)0x97ad83;
      FUN_00988f20();
      local_8 = 0x4b;
      local_18 = (undefined4 *)((uint)local_18 | 0x10000);
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97ada3;
      FUN_00988f20();
      puStack_1fac = local_430;
      local_8 = 0x4c;
      local_18 = (undefined4 *)((uint)local_18 | 0x20000);
      pppuStack_1fb0 = (undefined ***)0x97adc5;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_18 = (undefined4 *)((uint)local_18 | 0x40000);
      puStack_1fac = (uint *)0x1;
      local_8 = 0x51;
      iVar8 = FUN_00992740();
    }
    *puVar13 = &PTR_FUN_00e40728;
    puVar13[1] = 0;
    local_8._0_1_ = 0x5a;
    local_8._1_3_ = 0;
    local_178 = (undefined4 *)0x0;
    if ((iVar8 != puVar13[1]) && ((undefined4 *)puVar13[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)puVar13[1])();
    }
    puVar13[1] = iVar8;
    local_8._0_1_ = 0x59;
    if (local_178 != (undefined4 *)0x0) {
      (**(code **)*local_178)();
    }
  }
  if (((uint)local_18 & 0x40000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfffbffff);
    if (0xf < local_9f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9f4 = 0xf;
    local_9f8 = 0;
    local_a08 = local_a08 & 0xffffff00;
  }
  if (((uint)local_18 & 0x20000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfffdffff);
    if (0xf < local_d58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d58 = 0xf;
    local_d5c = 0;
    local_d6c = local_d6c & 0xffffff00;
  }
  if (((uint)local_18 & 0x10000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfffeffff);
    if (0xf < local_a2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a2c = 0xf;
    local_a30 = 0;
    local_a40 = local_a40 & 0xffffff00;
  }
  if (((uint)local_18 & 0x8000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xffff7fff);
    if (0xf < local_d90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d90 = 0xf;
    local_d94 = 0;
    local_da4 = local_da4 & 0xffffff00;
  }
  if (((uint)local_18 & 0x4000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xffffbfff);
    if (0xf < local_304) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_304 = 0xf;
    local_308 = 0;
    local_318[0] = local_318[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if (((uint)local_18 & 0x2000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xffffdfff);
    if (0xf < local_41c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_41c = 0xf;
    local_420 = 0;
    local_430[0] = local_430[0] & 0xffffff00;
  }
  puVar13 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x61;
  if (puVar13 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
    puVar13 = local_28;
  }
  else {
    local_24 = (undefined ***)FUN_00aae9af();
    local_8._0_1_ = 0x62;
    if (local_24 == (undefined ***)0x0) {
      iVar8 = 0;
    }
    else {
      local_3e4 = 0xf;
      local_3e8 = 0;
      local_3f8[0] = local_3f8[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,99);
      local_18 = (undefined4 *)((uint)local_18 | 0x80000);
      local_33c = 0xf;
      local_340 = 0;
      local_350[0] = local_350[0] & 0xffffff00;
      FUN_00409350();
      local_28 = &ppppuStack_1fa8;
      local_8 = 100;
      local_18 = (undefined4 *)((uint)local_18 | 0x100000);
      puStack_1fac = (uint *)0x0;
      pppuStack_1fb0 = (undefined ***)&DAT_00ded94d;
                    /* WARNING: Ignoring partial resolution of indirect */
      ppppuStack_1fa8._0_1_ = 0;
      FUN_00409350();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0x65;
      pppuStack_1fb0 = (undefined ***)0x97b083;
      FUN_00988fa0();
      puStack_1fac = local_350;
      local_8 = CONCAT31(local_8._1_3_,0x66);
      local_18 = (undefined4 *)((uint)local_18 | 0x200000);
      pppuStack_1fb0 = (undefined ***)0x97b0a5;
      FUN_00988f20();
      local_8 = 0x67;
      local_18 = (undefined4 *)((uint)local_18 | 0x400000);
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97b0c5;
      FUN_00988f20();
      puStack_1fac = local_3f8;
      local_8 = 0x68;
      local_18 = (undefined4 *)((uint)local_18 | 0x800000);
      pppuStack_1fb0 = (undefined ***)0x97b0e7;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_18 = (undefined4 *)((uint)local_18 | 0x1000000);
      puStack_1fac = (uint *)0x1;
      local_8 = 0x6d;
      iVar8 = FUN_00992740();
    }
    *puVar13 = &PTR_FUN_00e40728;
    puVar13[1] = 0;
    local_8._0_1_ = 0x76;
    local_8._1_3_ = 0;
    local_164 = (undefined4 *)0x0;
    if ((iVar8 != puVar13[1]) && ((undefined4 *)puVar13[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)puVar13[1])();
    }
    puVar13[1] = iVar8;
    local_8._0_1_ = 0x75;
    if (local_164 != (undefined4 *)0x0) {
      (**(code **)*local_164)();
    }
  }
  local_28 = puVar13;
  if (((uint)local_18 & 0x1000000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfeffffff);
    if (0xf < local_a64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a64 = 0xf;
    local_a68 = 0;
    local_a78 = local_a78 & 0xffffff00;
  }
  if (((uint)local_18 & 0x800000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xff7fffff);
    if (0xf < local_dc8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_dc8 = 0xf;
    local_dcc = 0;
    local_ddc = local_ddc & 0xffffff00;
  }
  if (((uint)local_18 & 0x400000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xffbfffff);
    if (0xf < local_a9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a9c = 0xf;
    local_aa0 = 0;
    local_ab0 = local_ab0 & 0xffffff00;
  }
  if (((uint)local_18 & 0x200000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xffdfffff);
    if (0xf < local_e00) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e00 = 0xf;
    local_e04 = 0;
    local_e14 = local_e14 & 0xffffff00;
  }
  if (((uint)local_18 & 0x100000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xffefffff);
    if (0xf < local_33c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_33c = 0xf;
    local_340 = 0;
    local_350[0] = local_350[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if (((uint)local_18 & 0x80000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfff7ffff);
    if (0xf < local_3e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3e4 = 0xf;
    local_3e8 = 0;
    local_3f8[0] = local_3f8[0] & 0xffffff00;
  }
  puVar13 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x7d;
  if (puVar13 != (undefined4 *)0x0) {
    local_24 = (undefined ***)FUN_00aae9af();
    local_8._0_1_ = 0x7e;
    if (local_24 == (undefined ***)0x0) {
      iVar8 = 0;
    }
    else {
      local_25c = 0xf;
      local_260 = 0;
      local_270[0] = local_270[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x7f);
      local_18 = (undefined4 *)((uint)local_18 | 0x2000000);
      local_374 = 0xf;
      local_378 = 0;
      local_388[0] = local_388[0] & 0xffffff00;
      FUN_00409350();
      local_38 = (undefined1 *)&ppppuStack_1fa8;
      local_8 = 0x80;
      local_18 = (undefined4 *)((uint)local_18 | 0x4000000);
      puStack_1fac = (uint *)0x0;
      pppuStack_1fb0 = (undefined ***)&DAT_00ded94d;
                    /* WARNING: Ignoring partial resolution of indirect */
      ppppuStack_1fa8._0_1_ = 0;
      FUN_00409350();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0x81;
      pppuStack_1fb0 = (undefined ***)0x97b3ad;
      FUN_00988fa0();
      puStack_1fac = local_388;
      local_8 = CONCAT31(local_8._1_3_,0x82);
      local_18 = (undefined4 *)((uint)local_18 | 0x8000000);
      pppuStack_1fb0 = (undefined ***)0x97b3cf;
      FUN_00988f20();
      local_8 = 0x83;
      local_18 = (undefined4 *)((uint)local_18 | 0x10000000);
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97b3ef;
      FUN_00988f20();
      puStack_1fac = local_270;
      local_8 = 0x84;
      local_18 = (undefined4 *)((uint)local_18 | 0x20000000);
      pppuStack_1fb0 = (undefined ***)0x97b411;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_18 = (undefined4 *)((uint)local_18 | 0x40000000);
      puStack_1fac = (uint *)0x1;
      local_8 = 0x89;
      iVar8 = FUN_00992740();
    }
    *puVar13 = &PTR_FUN_00e40728;
    puVar13[1] = 0;
    local_8._0_1_ = 0x92;
    local_8._1_3_ = 0;
    local_1ac = (undefined4 *)0x0;
    if ((iVar8 != puVar13[1]) && ((undefined4 *)puVar13[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)puVar13[1])();
    }
    puVar13[1] = iVar8;
    local_8._0_1_ = 0x91;
    if (local_1ac != (undefined4 *)0x0) {
      (**(code **)*local_1ac)();
    }
  }
  if (((uint)local_18 & 0x40000000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xbfffffff);
    if (0xf < local_ad4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ad4 = 0xf;
    local_ad8 = 0;
    local_ae8 = local_ae8 & 0xffffff00;
  }
  if (((uint)local_18 & 0x20000000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xdfffffff);
    if (0xf < local_e38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e38 = 0xf;
    local_e3c = 0;
    local_e4c = local_e4c & 0xffffff00;
  }
  if (((uint)local_18 & 0x10000000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xefffffff);
    if (0xf < local_b0c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0c = 0xf;
    local_b10 = 0;
    local_b20 = local_b20 & 0xffffff00;
  }
  if (((uint)local_18 & 0x8000000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xf7ffffff);
    if (0xf < local_e70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e70 = 0xf;
    local_e74 = 0;
    local_e84 = local_e84 & 0xffffff00;
  }
  if (((uint)local_18 & 0x4000000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfbffffff);
    if (0xf < local_374) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_374 = 0xf;
    local_378 = 0;
    local_388[0] = local_388[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if (((uint)local_18 & 0x2000000) != 0) {
    local_18 = (undefined4 *)((uint)local_18 & 0xfdffffff);
    if (0xf < local_25c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_25c = 0xf;
    local_260 = 0;
    local_270[0] = local_270[0] & 0xffffff00;
  }
  puVar13 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x99;
  if (puVar13 != (undefined4 *)0x0) {
    local_38 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0x9a;
    if (local_38 == (undefined1 *)0x0) {
      iVar8 = 0;
    }
    else {
      local_2e8 = 0xf;
      local_2ec = 0;
      local_2fc[0] = local_2fc[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x9b);
      local_18 = (undefined4 *)((uint)local_18 | 0x80000000);
      local_2b0 = 0xf;
      local_2b4 = 0;
      local_2c4[0] = local_2c4[0] & 0xffffff00;
      FUN_00409350();
      local_24 = (undefined ***)&ppppuStack_1fa8;
      local_8 = 0x9c;
      local_1c = 1;
      puStack_1fac = (uint *)0x0;
      pppuStack_1fb0 = (undefined ***)&DAT_00ded94d;
                    /* WARNING: Ignoring partial resolution of indirect */
      ppppuStack_1fa8._0_1_ = 0;
      FUN_00409350();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0x9d;
      pppuStack_1fb0 = (undefined ***)0x97b6c6;
      FUN_00988fa0();
      puStack_1fac = local_2c4;
      local_8 = CONCAT31(local_8._1_3_,0x9e);
      local_1c = 3;
      pppuStack_1fb0 = (undefined ***)0x97b6e8;
      FUN_00988f20();
      local_8 = 0x9f;
      puStack_1fac = &DAT_00f0eb2c;
      local_1c = 7;
      pppuStack_1fb0 = (undefined ***)0x97b708;
      FUN_00988f20();
      puStack_1fac = local_2fc;
      local_8 = 0xa0;
      local_1c = 0xf;
      pppuStack_1fb0 = (undefined ***)0x97b72a;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_1c = 0x1f;
      puStack_1fac = (uint *)0x1;
      local_8 = 0xa5;
      iVar8 = FUN_00992740();
    }
    *puVar13 = &PTR_FUN_00e40728;
    puVar13[1] = 0;
    local_8._0_1_ = 0xae;
    local_8._1_3_ = 0;
    local_16c = (undefined4 *)0x0;
    if ((iVar8 != puVar13[1]) && ((undefined4 *)puVar13[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)puVar13[1])();
    }
    puVar13[1] = iVar8;
    local_8._0_1_ = 0xad;
    if (local_16c != (undefined4 *)0x0) {
      (**(code **)*local_16c)();
    }
  }
  if ((local_1c & 0x10) != 0) {
    local_1c = local_1c & 0xffffffef;
    if (0xf < local_ea8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ea8 = 0xf;
    local_eac = 0;
    local_ebc = local_ebc & 0xffffff00;
  }
  if ((local_1c & 8) != 0) {
    local_1c = local_1c & 0xfffffff7;
    if (0xf < local_ec4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec4 = 0xf;
    local_ec8 = 0;
    local_ed8 = local_ed8 & 0xffffff00;
  }
  if ((local_1c & 4) != 0) {
    local_1c = local_1c & 0xfffffffb;
    if (0xf < local_b7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b7c = 0xf;
    local_b80 = 0;
    local_b90 = local_b90 & 0xffffff00;
  }
  if ((local_1c & 2) != 0) {
    local_1c = local_1c & 0xfffffffd;
    if (0xf < local_d3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d3c = 0xf;
    local_d40 = 0;
    local_d50 = local_d50 & 0xffffff00;
  }
  if ((local_1c & 1) != 0) {
    local_1c = local_1c & 0xfffffffe;
    if (0xf < local_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2b0 = 0xf;
    local_2b4 = 0;
    local_2c4[0] = local_2c4[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if (((uint)local_18 & 0x80000000) != 0) {
    if (0xf < local_2e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2e8 = 0xf;
    local_2ec = 0;
    local_2fc[0] = local_2fc[0] & 0xffffff00;
  }
  local_18 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xb5;
  if (local_18 != (undefined4 *)0x0) {
    local_38 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0xb6;
    if (local_38 == (undefined1 *)0x0) {
      iVar8 = 0;
    }
    else {
      local_358 = 0xf;
      local_35c = 0;
      local_36c[0] = local_36c[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0xb7);
      local_1c = local_1c | 0x20;
      local_320 = 0xf;
      local_324 = 0;
      local_334[0] = local_334[0] & 0xffffff00;
      FUN_00409350();
      local_24 = (undefined ***)&ppppuStack_1fa8;
      local_8 = 0xb8;
      local_1c = local_1c | 0x40;
      puStack_1fac = (uint *)&DAT_00ded94d;
      pppuStack_1fb0 = (undefined ***)0x97b994;
      FUN_004471e0();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0xb9;
      pppuStack_1fb0 = (undefined ***)0x97b9b0;
      FUN_00988fa0();
      puStack_1fac = local_334;
      local_8 = CONCAT31(local_8._1_3_,0xba);
      local_1c = local_1c | 0x80;
      pppuStack_1fb0 = (undefined ***)0x97b9d2;
      FUN_00988f20();
      local_8 = 0xbb;
      local_1c = local_1c | 0x100;
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97b9f2;
      FUN_00988f20();
      puStack_1fac = local_36c;
      local_8 = 0xbc;
      local_1c = local_1c | 0x200;
      pppuStack_1fb0 = (undefined ***)0x97ba14;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_1c = local_1c | 0x400;
      puStack_1fac = (uint *)0x1;
      local_8 = 0xc1;
      iVar8 = FUN_00992740();
    }
    puVar13 = local_18;
    *local_18 = &PTR_FUN_00e40728;
    local_18[1] = 0;
    local_8._0_1_ = 0xca;
    local_8._1_3_ = 0;
    local_1a8 = (undefined4 *)0x0;
    if ((iVar8 != local_18[1]) && ((undefined4 *)local_18[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)local_18[1])();
    }
    puVar13[1] = iVar8;
    local_8._0_1_ = 0xc9;
    if (local_1a8 != (undefined4 *)0x0) {
      (**(code **)*local_1a8)();
    }
  }
  if ((local_1c & 0x400) != 0) {
    local_1c = local_1c & 0xfffffbff;
    if (0xf < local_bb4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bb4 = 0xf;
    local_bb8 = 0;
    local_bc8 = local_bc8 & 0xffffff00;
  }
  if ((local_1c & 0x200) != 0) {
    local_1c = local_1c & 0xfffffdff;
    if (0xf < local_e1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e1c = 0xf;
    local_e20 = 0;
    local_e30 = local_e30 & 0xffffff00;
  }
  if ((local_1c & 0x100) != 0) {
    local_1c = local_1c & 0xfffffeff;
    if (0xf < local_bec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bec = 0xf;
    local_bf0 = 0;
    local_c00 = local_c00 & 0xffffff00;
  }
  if ((local_1c & 0x80) != 0) {
    local_1c = local_1c & 0xffffff7f;
    if (0xf < local_d74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d74 = 0xf;
    local_d78 = 0;
    local_d88 = local_d88 & 0xffffff00;
  }
  if ((local_1c & 0x40) != 0) {
    local_1c = local_1c & 0xffffffbf;
    if (0xf < local_320) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_320 = 0xf;
    local_324 = 0;
    local_334[0] = local_334[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if ((local_1c & 0x20) != 0) {
    local_1c = local_1c & 0xffffffdf;
    if (0xf < local_358) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_358 = 0xf;
    local_35c = 0;
    local_36c[0] = local_36c[0] & 0xffffff00;
  }
  local_18 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xd1;
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
    puVar13 = local_18;
  }
  else {
    local_38 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0xd2;
    if (local_38 == (undefined1 *)0x0) {
      iVar8 = 0;
    }
    else {
      local_390 = 0xf;
      local_394 = 0;
      local_3a4[0] = local_3a4[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0xd3);
      local_1c = local_1c | 0x800;
      FUN_004471e0();
      local_24 = (undefined ***)&ppppuStack_1fa8;
      local_8 = 0xd4;
      local_1c = local_1c | 0x1000;
      puStack_1fac = (uint *)&DAT_00ded94d;
      pppuStack_1fb0 = (undefined ***)0x97bc79;
      FUN_004471e0();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0xd5;
      pppuStack_1fb0 = (undefined ***)0x97bc95;
      FUN_00988fa0();
      puStack_1fac = local_4bc;
      local_8 = CONCAT31(local_8._1_3_,0xd6);
      local_1c = local_1c | 0x2000;
      pppuStack_1fb0 = (undefined ***)0x97bcb7;
      FUN_00988f20();
      local_8 = 0xd7;
      local_1c = local_1c | 0x4000;
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97bcd7;
      FUN_00988f20();
      puStack_1fac = local_3a4;
      local_8 = 0xd8;
      local_1c = local_1c | 0x8000;
      pppuStack_1fb0 = (undefined ***)0x97bcf9;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_1c = local_1c | 0x10000;
      puStack_1fac = (uint *)0x1;
      local_8 = 0xdd;
      iVar8 = FUN_00992740();
    }
    puVar13 = local_18;
    *local_18 = &PTR_FUN_00e40728;
    local_18[1] = 0;
    local_8._0_1_ = 0xe6;
    local_8._1_3_ = 0;
    local_174 = (undefined4 *)0x0;
    if ((iVar8 != local_18[1]) && ((undefined4 *)local_18[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)local_18[1])();
    }
    puVar13[1] = iVar8;
    local_8._0_1_ = 0xe5;
    if (local_174 != (undefined4 *)0x0) {
      (**(code **)*local_174)();
    }
  }
  local_18 = puVar13;
  if ((local_1c & 0x10000) != 0) {
    local_1c = local_1c & 0xfffeffff;
    if (0xf < local_c24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c24 = 0xf;
    local_c28 = 0;
    local_c38 = local_c38 & 0xffffff00;
  }
  if ((local_1c & 0x8000) != 0) {
    local_1c = local_1c & 0xffff7fff;
    if (0xf < local_e8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8c = 0xf;
    local_e90 = 0;
    local_ea0 = local_ea0 & 0xffffff00;
  }
  if ((local_1c & 0x4000) != 0) {
    local_1c = local_1c & 0xffffbfff;
    if (0xf < local_c5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c5c = 0xf;
    local_c60 = 0;
    local_c70 = local_c70 & 0xffffff00;
  }
  if ((local_1c & 0x2000) != 0) {
    local_1c = local_1c & 0xffffdfff;
    if (0xf < local_dac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_dac = 0xf;
    local_db0 = 0;
    local_dc0 = local_dc0 & 0xffffff00;
  }
  if ((local_1c & 0x1000) != 0) {
    local_1c = local_1c & 0xffffefff;
    if (0xf < local_4a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4a8 = 0xf;
    local_4ac = 0;
    local_4bc[0] = local_4bc[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if ((local_1c & 0x800) != 0) {
    local_1c = local_1c & 0xfffff7ff;
    if (0xf < local_390) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_390 = 0xf;
    local_394 = 0;
    local_3a4[0] = local_3a4[0] & 0xffffff00;
  }
  local_24 = (undefined ***)FUN_00aae9af();
  local_8._0_1_ = 0xed;
  if (local_24 != (undefined ***)0x0) {
    local_38 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0xee;
    if (local_38 == (undefined1 *)0x0) {
      iVar8 = 0;
    }
    else {
      FUN_004471e0();
      local_8 = CONCAT31(local_8._1_3_,0xef);
      local_1c = local_1c | 0x20000;
      FUN_004471e0();
      local_8 = 0xf0;
      local_1c = local_1c | 0x40000;
      local_40 = (double)CONCAT44(&ppppuStack_1fa8,(undefined4 *)local_40);
      puStack_1fac = (uint *)&DAT_00ded94d;
      pppuStack_1fb0 = (undefined ***)0x97bf61;
      FUN_004471e0();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0xf1;
      pppuStack_1fb0 = (undefined ***)0x97bf7d;
      FUN_00988fa0();
      puStack_1fac = local_4f4;
      local_8 = CONCAT31(local_8._1_3_,0xf2);
      local_1c = local_1c | 0x80000;
      pppuStack_1fb0 = (undefined ***)0x97bf9f;
      FUN_00988f20();
      local_8 = 0xf3;
      local_1c = local_1c | 0x100000;
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97bfbf;
      FUN_00988f20();
      puStack_1fac = local_648;
      local_8 = 0xf4;
      local_1c = local_1c | 0x200000;
      pppuStack_1fb0 = (undefined ***)0x97bfe1;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_1c = local_1c | 0x400000;
      puStack_1fac = (uint *)0x1;
      local_8 = 0xf9;
      iVar8 = FUN_00992740();
    }
    pppuVar12 = local_24;
    *local_24 = &PTR_FUN_00e40728;
    local_24[1] = (undefined **)0x0;
    local_8._0_1_ = 2;
    local_8._1_3_ = 1;
    local_17c = (undefined4 *)0x0;
    if (((undefined **)iVar8 != local_24[1]) && (local_24[1] != (undefined **)0x0)) {
      (**(code **)*local_24[1])();
    }
    pppuVar12[1] = (undefined **)iVar8;
    local_8._0_1_ = 1;
    if (local_17c != (undefined4 *)0x0) {
      (**(code **)*local_17c)();
    }
  }
  if ((local_1c & 0x400000) != 0) {
    local_1c = local_1c & 0xffbfffff;
    if (0xf < local_c94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c94 = 0xf;
    local_c98 = 0;
    local_ca8 = local_ca8 & 0xffffff00;
  }
  if ((local_1c & 0x200000) != 0) {
    local_1c = local_1c & 0xffdfffff;
    if (0xf < local_e54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e54 = 0xf;
    local_e58 = 0;
    local_e68 = local_e68 & 0xffffff00;
  }
  if ((local_1c & 0x100000) != 0) {
    local_1c = local_1c & 0xffefffff;
    if (0xf < local_ccc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ccc = 0xf;
    local_cd0 = 0;
    local_ce0 = local_ce0 & 0xffffff00;
  }
  if ((local_1c & 0x80000) != 0) {
    local_1c = local_1c & 0xfff7ffff;
    if (0xf < local_de4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_de4 = 0xf;
    local_de8 = 0;
    local_df8 = local_df8 & 0xffffff00;
  }
  if ((local_1c & 0x40000) != 0) {
    local_1c = local_1c & 0xfffbffff;
    if (0xf < local_4e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4e0 = 0xf;
    local_4e4 = 0;
    local_4f4[0] = local_4f4[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if ((local_1c & 0x20000) != 0) {
    local_1c = local_1c & 0xfffdffff;
    if (0xf < local_634) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_634 = 0xf;
    local_638 = 0;
    local_648[0] = local_648[0] & 0xffffff00;
  }
  local_24 = (undefined ***)FUN_00aae9af();
  local_8 = 0x109;
  if (local_24 != (undefined ***)0x0) {
    iVar8 = FUN_00aae9af();
    local_40 = (double)CONCAT44(iVar8,(undefined4 *)local_40);
    local_8._0_1_ = 10;
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      FUN_004471e0();
      local_8 = CONCAT31(local_8._1_3_,0xb);
      local_1c = local_1c | 0x800000;
      FUN_004471e0();
      local_38 = (undefined1 *)&ppppuStack_1fa8;
      local_8 = 0x10c;
      local_1c = local_1c | 0x1000000;
      puStack_1fac = (uint *)&DAT_00ded94d;
      pppuStack_1fb0 = (undefined ***)0x97c244;
      FUN_004471e0();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0x10d;
      pppuStack_1fb0 = (undefined ***)0x97c260;
      FUN_00988fa0();
      puStack_1fac = local_568;
      local_8 = CONCAT31(local_8._1_3_,0xe);
      local_1c = local_1c | 0x2000000;
      pppuStack_1fb0 = (undefined ***)0x97c282;
      FUN_00988f20();
      local_8 = 0x10f;
      local_1c = local_1c | 0x4000000;
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97c2a2;
      FUN_00988f20();
      puStack_1fac = local_728;
      local_8 = 0x110;
      local_1c = local_1c | 0x8000000;
      pppuStack_1fb0 = (undefined ***)0x97c2c4;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_1c = local_1c | 0x10000000;
      puStack_1fac = (uint *)0x1;
      local_8 = 0x115;
      iVar8 = FUN_00992740();
    }
    pppuVar12 = local_24;
    *local_24 = &PTR_FUN_00e40728;
    local_24[1] = (undefined **)0x0;
    local_8._0_1_ = 0x1e;
    local_8._1_3_ = 1;
    local_1a4 = (undefined4 *)0x0;
    if (((undefined **)iVar8 != local_24[1]) && (local_24[1] != (undefined **)0x0)) {
      (**(code **)*local_24[1])();
    }
    pppuVar12[1] = (undefined **)iVar8;
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    if (local_1a4 != (undefined4 *)0x0) {
      (**(code **)*local_1a4)();
    }
  }
  if ((local_1c & 0x10000000) != 0) {
    local_1c = local_1c & 0xefffffff;
    if (0xf < local_78c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78c = 0xf;
    local_790 = 0;
    local_7a0 = local_7a0 & 0xffffff00;
  }
  if ((local_1c & 0x8000000) != 0) {
    local_1c = local_1c & 0xf7ffffff;
    if (0xf < local_7a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7a8 = 0xf;
    local_7ac = 0;
    local_7bc = local_7bc & 0xffffff00;
  }
  if ((local_1c & 0x4000000) != 0) {
    local_1c = local_1c & 0xfbffffff;
    if (0xf < local_7e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7e0 = 0xf;
    local_7e4 = 0;
    local_7f4 = local_7f4 & 0xffffff00;
  }
  if ((local_1c & 0x2000000) != 0) {
    local_1c = local_1c & 0xfdffffff;
    if (0xf < local_818) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_818 = 0xf;
    local_81c = 0;
    local_82c = local_82c & 0xffffff00;
  }
  if ((local_1c & 0x1000000) != 0) {
    local_1c = local_1c & 0xfeffffff;
    if (0xf < local_554) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_554 = 0xf;
    local_558 = 0;
    local_568[0] = local_568[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if ((local_1c & 0x800000) != 0) {
    local_1c = local_1c & 0xff7fffff;
    if (0xf < local_714) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_714 = 0xf;
    local_718 = 0;
    local_728[0] = local_728[0] & 0xffffff00;
  }
  pppuVar12 = (undefined ***)FUN_00aae9af();
  local_8 = 0x125;
  local_24 = pppuVar12;
  if (pppuVar12 != (undefined ***)0x0) {
    iVar8 = FUN_00aae9af();
    local_40 = (double)CONCAT44(iVar8,(undefined4 *)local_40);
    local_8._0_1_ = 0x26;
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      FUN_004471e0();
      local_8 = CONCAT31(local_8._1_3_,0x27);
      local_1c = local_1c | 0x20000000;
      FUN_004471e0();
      local_38 = (undefined1 *)&ppppuStack_1fa8;
      local_8 = 0x128;
      local_1c = local_1c | 0x40000000;
      puStack_1fac = (uint *)0x97c525;
      FUN_009885d0();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0x129;
      pppuStack_1fb0 = (undefined ***)0x97c541;
      FUN_00988fa0();
      puStack_1fac = local_5a0;
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      local_1c = local_1c | 0x80000000;
      pppuStack_1fb0 = (undefined ***)0x97c563;
      FUN_00988f20();
      local_8 = 299;
      puStack_1fac = &DAT_00f0eb2c;
      local_20 = 1;
      pppuStack_1fb0 = (undefined ***)0x97c583;
      FUN_00988f20();
      puStack_1fac = local_680;
      local_8 = 300;
      local_20 = 3;
      pppuStack_1fb0 = (undefined ***)0x97c5a5;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_20 = 7;
      puStack_1fac = (uint *)0x1;
      local_8 = 0x131;
      iVar8 = FUN_00992740();
      pppuVar12 = local_24;
    }
    *pppuVar12 = &PTR_FUN_00e40728;
    pppuVar12[1] = (undefined **)0x0;
    local_8._0_1_ = 0x3a;
    local_8._1_3_ = 1;
    local_19c = (undefined4 *)0x0;
    if (((undefined **)iVar8 != pppuVar12[1]) && (pppuVar12[1] != (undefined **)0x0)) {
      (**(code **)*pppuVar12[1])();
    }
    pppuVar12[1] = (undefined **)iVar8;
    local_8 = CONCAT31(local_8._1_3_,0x39);
    if (local_19c != (undefined4 *)0x0) {
      (**(code **)*local_19c)();
    }
  }
  if ((local_20 & 4) != 0) {
    local_20 = local_20 & 0xfffffffb;
    if (0xf < local_850) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_850 = 0xf;
    local_854 = 0;
    local_864 = local_864 & 0xffffff00;
  }
  if ((local_20 & 2) != 0) {
    local_20 = local_20 & 0xfffffffd;
    if (0xf < local_888) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_888 = 0xf;
    local_88c = 0;
    local_89c = local_89c & 0xffffff00;
  }
  if ((local_20 & 1) != 0) {
    local_20 = local_20 & 0xfffffffe;
    if (0xf < local_8c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c0 = 0xf;
    local_8c4 = 0;
    local_8d4 = local_8d4 & 0xffffff00;
  }
  if ((local_1c & 0x80000000) != 0) {
    local_1c = local_1c & 0x7fffffff;
    if (0xf < local_8f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8f8 = 0xf;
    local_8fc = 0;
    local_90c = local_90c & 0xffffff00;
  }
  if ((local_1c & 0x40000000) != 0) {
    local_1c = local_1c & 0xbfffffff;
    if (0xf < local_58c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58c = 0xf;
    local_590 = 0;
    local_5a0[0] = local_5a0[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if ((local_1c & 0x20000000) != 0) {
    if (0xf < local_66c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_66c = 0xf;
    local_670 = 0;
    local_680[0] = local_680[0] & 0xffffff00;
  }
  local_24 = (undefined ***)FUN_00aae9af();
  local_8 = 0x141;
  if (local_24 != (undefined ***)0x0) {
    iVar8 = FUN_00aae9af();
    local_40 = (double)CONCAT44(iVar8,(undefined4 *)local_40);
    local_8._0_1_ = 0x42;
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      FUN_004471e0();
      local_8 = CONCAT31(local_8._1_3_,0x43);
      local_20 = local_20 | 8;
      FUN_004471e0();
      local_38 = (undefined1 *)&ppppuStack_1fa8;
      local_8 = 0x144;
      local_20 = local_20 | 0x10;
      puStack_1fac = (uint *)0x97c7e2;
      FUN_009885d0();
      puStack_1fac = &DAT_00f0eb10;
      local_8 = 0x145;
      pppuStack_1fb0 = (undefined ***)0x97c7fe;
      FUN_00988fa0();
      puStack_1fac = local_5d8;
      local_8 = CONCAT31(local_8._1_3_,0x46);
      local_20 = local_20 | 0x20;
      pppuStack_1fb0 = (undefined ***)0x97c81d;
      FUN_00988f20();
      local_8 = 0x147;
      local_20 = local_20 | 0x40;
      puStack_1fac = &DAT_00f0eb2c;
      pppuStack_1fb0 = (undefined ***)0x97c83a;
      FUN_00988f20();
      puStack_1fac = local_6f0;
      local_8 = 0x148;
      local_20 = local_20 | 0x80;
      pppuStack_1fb0 = (undefined ***)0x97c85c;
      pppuStack_1fb0 = (undefined ***)FUN_00988f20();
      local_20 = local_20 | 0x100;
      puStack_1fac = (uint *)0x1;
      local_8 = 0x14d;
      iVar8 = FUN_00992740();
    }
    pppuVar12 = local_24;
    *local_24 = &PTR_FUN_00e40728;
    local_24[1] = (undefined **)0x0;
    local_8._0_1_ = 0x56;
    local_8._1_3_ = 1;
    local_160 = (undefined4 *)0x0;
    if (((undefined **)iVar8 != local_24[1]) && (local_24[1] != (undefined **)0x0)) {
      (**(code **)*local_24[1])();
    }
    pppuVar12[1] = (undefined **)iVar8;
    local_8 = CONCAT31(local_8._1_3_,0x55);
    if (local_160 != (undefined4 *)0x0) {
      (**(code **)*local_160)();
    }
  }
  if ((local_20 & 0x100) != 0) {
    local_20 = local_20 & 0xfffffeff;
    if (0xf < local_930) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_930 = 0xf;
    local_934 = 0;
    local_944 = local_944 & 0xffffff00;
  }
  if ((local_20 & 0x80) != 0) {
    local_20 = local_20 & 0xffffff7f;
    if (0xf < local_968) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_968 = 0xf;
    local_96c = 0;
    local_97c = local_97c & 0xffffff00;
  }
  if ((local_20 & 0x40) != 0) {
    local_20 = local_20 & 0xffffffbf;
    if (0xf < local_9a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9a0 = 0xf;
    local_9a4 = 0;
    local_9b4 = local_9b4 & 0xffffff00;
  }
  if ((local_20 & 0x20) != 0) {
    local_20 = local_20 & 0xffffffdf;
    if (0xf < local_9d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9d8 = 0xf;
    local_9dc = 0;
    local_9ec = local_9ec & 0xffffff00;
  }
  if ((local_20 & 0x10) != 0) {
    local_20 = local_20 & 0xffffffef;
    if (0xf < local_5c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c4 = 0xf;
    local_5c8 = 0;
    local_5d8[0] = local_5d8[0] & 0xffffff00;
  }
  local_8 = 0x24;
  if ((local_20 & 8) != 0) {
    if (0xf < local_6dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6dc = 0xf;
    local_6e0 = 0;
    local_6f0[0] = local_6f0[0] & 0xffffff00;
  }
  puVar13 = (undefined4 *)FUN_00aae9af();
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    *puVar13 = &PTR_FUN_00e407cc;
  }
  local_8 = 0x15d;
  local_15c = (undefined4 *)0x0;
  if ((puVar13 != DAT_0132ce68) && (DAT_0132ce68 != (undefined4 *)0x0)) {
    (**(code **)*DAT_0132ce68)();
  }
  local_8 = 0x24;
  DAT_0132ce68 = puVar13;
  if (local_15c != (undefined4 *)0x0) {
    (**(code **)*local_15c)();
  }
  FUN_00a3ad50();
  FUN_00a3ad50();
  FUN_00a3ad50();
  FUN_00a3ad50();
  Sleep(1000);
  puVar13 = DAT_01258a58;
  local_8 = 0x15e;
  local_170 = (undefined4 *)0x0;
  if ((DAT_01258a58 != DAT_0131c5bc) && (DAT_0131c5bc != (undefined4 *)0x0)) {
    (**(code **)*DAT_0131c5bc)();
  }
  DAT_0131c5bc = puVar13;
  local_8 = 0x24;
  if (local_170 != (undefined4 *)0x0) {
    (**(code **)*local_170)();
  }
  FUN_004471e0();
  local_8 = 0x15f;
  FUN_004015b0();
  local_8._0_1_ = 0x60;
  FUN_00987d20();
  FUN_00401280();
  local_8 = CONCAT31(local_8._1_3_,0x5f);
  FUN_00987ac0();
  FUN_00aad52d();
  local_8 = 0x24;
  if (0xf < local_5fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5fc = 0xf;
  local_600 = 0;
  local_610 = local_610 & 0xffffff00;
  FUN_0043c730();
  FUN_009c17f0();
  FUN_0081b290();
  puStack_1fac = (uint *)0x97cbe5;
  FUN_009885d0();
  local_8 = 0x161;
  puStack_1fac = (uint *)0x97cbf1;
  puStack_1fac = (uint *)FUN_00475500();
  local_8 = 0x24;
  pppuStack_1fb0 = (undefined ***)0x97cbfe;
  FUN_009d8140();
  FUN_00435ea0();
  iVar8 = FUN_00475500();
  if (*(char *)(iVar8 + 0x4c) != '\0') {
    FUN_00979610();
  }
  FUN_00979550();
  local_8 = 0x162;
  FUN_009885d0();
  local_8._0_1_ = 99;
  FUN_004015b0();
  local_8._0_1_ = 100;
  FUN_00987d20();
  FUN_00418e30();
  FUN_00418e30();
  FUN_00401280();
  local_8._0_1_ = 99;
  FUN_00987ac0();
  local_1244 = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x62;
  uVar5 = (undefined1)local_8;
  local_8._0_1_ = 0x62;
  if (0xf < local_6a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6a4 = 0xf;
  local_6a8 = 0;
  local_6b8 = local_6b8 & 0xffffff00;
  if (local_1f0 != 0) {
    cVar6 = FUN_004361c0();
    if (cVar6 == '\0') {
      FUN_009885d0();
      local_8._0_1_ = 0x67;
      FUN_004015b0();
      local_8._0_1_ = 0x68;
      FUN_00987d20();
      FUN_00418e30();
      FUN_00401280();
      local_8._0_1_ = 0x67;
      FUN_00987ac0();
      local_13c4 = std::ios_base::vftable;
      FUN_00aad52d();
      local_8._0_1_ = 0x62;
      if (0xf < local_538) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_538 = 0xf;
      local_53c = 0;
      local_54c = local_54c & 0xffffff00;
      uVar5 = (undefined1)local_8;
    }
    else {
      FUN_009885d0();
      local_8._0_1_ = 0x65;
      FUN_004015b0();
      local_8._0_1_ = 0x66;
      FUN_00987d20();
      FUN_00418e30();
      FUN_00401280();
      local_8._0_1_ = 0x65;
      FUN_00987ac0();
      FUN_00aad52d();
      local_8._0_1_ = 0x62;
      if (0xf < local_4c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_4c4 = 0xf;
      local_4c8 = 0;
      local_4d8 = local_4d8 & 0xffffff00;
      FUN_00475500();
      FUN_00408ed0();
      uVar5 = (undefined1)local_8;
    }
  }
  local_8._0_1_ = uVar5;
  DVar20 = 0x28;
  pPVar19 = &local_107c;
  pvVar11 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar11,pPVar19,DVar20);
  FUN_009a71d0();
  (**(code **)(*DAT_01258a8c + 0x14))();
  FUN_009885d0();
  local_8._0_1_ = 0x69;
  FUN_004015b0();
  local_8._0_1_ = 0x6a;
  FUN_009da350();
  FUN_00b31c00();
  FUN_00987d20();
  FUN_00455470();
  FUN_00418e30();
  FUN_00401280();
  local_8._0_1_ = 0x69;
  FUN_00987ac0();
  local_10c4 = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < local_570) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_570 = 0xf;
  local_574 = 0;
  local_584 = local_584 & 0xffffff00;
  local_530 = (undefined ***)0x0;
  local_52c = (undefined ***)0x0;
  local_528 = 0;
  local_520 = 0;
  local_51c = 0;
  local_518 = 0;
  local_4fc = 0xf;
  local_500 = 0;
  local_510 = 0;
  local_8._0_1_ = 0x6c;
  FUN_004367c0();
  local_8._0_1_ = 0x6d;
  FUN_00436780();
  iVar8 = *(int *)(DAT_012586e0 + 0x58);
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_80 = (undefined4 *)0x0;
  local_7c = (undefined4 *)0x0;
  local_78 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_8._0_1_ = 0x71;
  if (iVar8 != 0) {
    FUN_00992240();
  }
  if (iVar8 != 1) {
    local_48 = 0;
    local_40 = (double)((ulonglong)local_40 & 0xffffffff00000000);
    local_8 = CONCAT31(local_8._1_3_,0x72);
    FUN_00992240();
    local_30 = (undefined ***)((local_48._4_4_ - (int)local_48) / 0x1c);
    for (iVar8 = 0; iVar8 < (int)local_30; iVar8 = iVar8 + 1) {
      local_24 = (undefined ***)local_7c;
      puVar13 = (undefined4 *)FUN_0045c080();
      if ((undefined ***)puVar13 == local_24) {
        FUN_00a840b0();
      }
    }
    local_8._0_1_ = 0x71;
    FUN_0040b3c0();
  }
  FUN_00419660();
  uVar9 = local_a0;
  while ((puVar13 = local_80, local_a0 <= uVar9 && (uVar9 < local_9c))) {
    local_40 = (double)CONCAT44(local_40._4_4_,uVar9 + 0x1c);
    local_3c8 = 0xf;
    local_3cc = 0;
    local_3dc = local_3dc & 0xffffff00;
    FUN_00408ed0();
    local_8._0_1_ = 0x73;
    FUN_009885d0();
    local_8._0_1_ = 0x74;
    FUN_00988f20();
    local_8._0_1_ = 0x75;
    FUN_00988f20();
    local_8._0_1_ = 0x76;
    FUN_00a840b0();
    if (0xf < local_a10) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a10 = 0xf;
    local_a14 = 0;
    local_a24 = local_a24 & 0xffffff00;
    if (0xf < local_a48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a48 = 0xf;
    local_a4c = 0;
    local_a5c = local_a5c & 0xffffff00;
    if (0xf < local_5a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x71;
    uVar5 = (undefined1)local_8;
    local_8._0_1_ = 0x71;
    local_5a8 = 0xf;
    local_5ac = 0;
    local_5bc = local_5bc & 0xffffff00;
    if (0xf < local_3c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c8 = 0xf;
    local_3cc = 0;
    local_3dc = local_3dc & 0xffffff00;
    local_8._0_1_ = uVar5;
    uVar9 = (uint)(undefined4 *)local_40;
  }
  while ((local_80 <= puVar13 && (puVar13 < local_7c))) {
    local_40 = (double)CONCAT44(local_40._4_4_,puVar13 + 7);
    local_400 = 0xf;
    local_404 = 0;
    local_414 = local_414 & 0xffffff00;
    FUN_00408ed0();
    local_8._0_1_ = 0x77;
    FUN_009885d0();
    local_8._0_1_ = 0x78;
    FUN_00988f20();
    local_8._0_1_ = 0x79;
    FUN_00988f20();
    local_8._0_1_ = 0x7a;
    FUN_00a840b0();
    if (0xf < local_a80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a80 = 0xf;
    local_a84 = 0;
    local_a94 = local_a94 & 0xffffff00;
    if (0xf < local_ab8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ab8 = 0xf;
    local_abc = 0;
    local_acc = local_acc & 0xffffff00;
    if (0xf < local_5e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x71;
    uVar5 = (undefined1)local_8;
    local_8._0_1_ = 0x71;
    local_5e0 = 0xf;
    local_5e4 = 0;
    local_5f4 = local_5f4 & 0xffffff00;
    if (0xf < local_400) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_400 = 0xf;
    local_404 = 0;
    local_414 = local_414 & 0xffffff00;
    local_8._0_1_ = uVar5;
    puVar13 = (undefined4 *)local_40;
  }
  FUN_009a71d0();
  fVar18 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  local_40 = (double)fVar18;
  local_24 = (undefined ***)(float)fVar18;
  FUN_009885d0();
  local_8._0_1_ = 0x7b;
  FUN_004015b0();
  local_8._0_1_ = 0x7c;
  FUN_00987d20();
  FUN_00401280();
  local_8._0_1_ = 0x7b;
  FUN_00987ac0();
  local_1544 = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x71;
  if (0xf < local_618) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_618 = 0xf;
  local_61c = 0;
  local_62c = local_62c & 0xffffff00;
  uVar9 = local_e8;
  while ((local_8._0_1_ = 0x71, local_e8 <= uVar9 && (uVar9 < local_e4))) {
    local_34 = uVar9 + 0x1c;
    local_438 = 0xf;
    local_43c = 0;
    local_44c = local_44c & 0xffffff00;
    FUN_00408ed0();
    local_8._0_1_ = 0x7d;
    iVar8 = FUN_00aae9af();
    local_40 = (double)CONCAT44(iVar8,(undefined4 *)local_40);
    local_8._0_1_ = 0x7e;
    if (iVar8 == 0) {
      piVar14 = (int *)0x0;
    }
    else {
      local_38 = (undefined1 *)&pppuStack_1fb0;
      FUN_009885d0();
      piVar14 = (int *)FUN_00992740();
    }
    local_40 = (double)CONCAT44(piVar14,(undefined4 *)local_40);
    local_768 = 0;
    local_764 = 0;
    local_760 = 0;
    local_758 = 0;
    local_754 = 0;
    local_750 = 0;
    local_734 = 0xf;
    local_738 = 0;
    local_748 = 0;
    local_8 = CONCAT31(local_8._1_3_,0x80);
    (**(code **)(*piVar14 + 8))();
    if (0 < local_764 - local_768) {
      ppppuStack_1fa8 = (undefined ****)local_52c;
      puStack_1fac = (uint *)0x97d5e7;
      FUN_009d7490();
    }
    FUN_009d6f00();
    local_8._0_1_ = 0x7d;
    (**(code **)*piVar14)();
    local_8._0_1_ = 0x71;
    if (0xf < local_438) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_438 = 0xf;
    local_43c = 0;
    local_44c = local_44c & 0xffffff00;
    uVar9 = local_34;
  }
  FUN_009a71d0();
  fVar18 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  local_40 = (double)fVar18;
  local_30 = (undefined ***)(float)(local_40 - (double)(float)local_24);
  if (local_52c == local_530) {
    ppppuStack_1fa8 = (undefined ****)0x97d68e;
    MessageBoxA((HWND)0x0,"The working directory doesn\'t seem to be correct.","Error",0);
    FatalExit(1);
  }
  FUN_009a71d0();
  fVar18 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  local_40 = (double)fVar18;
  local_24 = (undefined ***)(float)fVar18;
  FUN_009885d0();
  local_8._0_1_ = 0x81;
  FUN_004015b0();
  local_8._0_1_ = 0x82;
  FUN_00987d20();
  FUN_00401280();
  local_8._0_1_ = 0x81;
  FUN_00987ac0();
  FUN_00aad52d();
  local_8._0_1_ = 0x71;
  if (0xf < local_650) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_650 = 0xf;
  local_654 = 0;
  local_664 = local_664 & 0xffffff00;
  iVar8 = FUN_00475500();
  local_48 = *(undefined8 *)(iVar8 + 0x6c);
  local_40 = *(double *)(iVar8 + 0x74);
  FUN_009ad5b0();
  FUN_009885d0();
  local_8._0_1_ = 0x83;
  FUN_004015b0();
  local_8._0_1_ = 0x84;
  FUN_00987d20();
  FUN_00401280();
  local_8._0_1_ = 0x83;
  FUN_00987ac0();
  local_16c4 = std::ios_base::vftable;
  FUN_00aad52d();
  local_8 = CONCAT31(local_8._1_3_,0x71);
  if (0xf < local_688) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_688 = 0xf;
  local_68c = 0;
  local_69c = local_69c & 0xffffff00;
  FUN_009a71d0();
  fVar18 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
  local_40 = (double)fVar18;
  local_24 = (undefined ***)(float)(local_40 - (double)(float)local_24);
  FUN_0040b3c0();
  FUN_0040b3c0();
  FUN_0040b3c0();
  if (0xf < local_470) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_470 = 0xf;
  local_474 = 0;
  local_484 = local_484 & 0xffffff00;
  if (0xf < local_294) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_294 = 0xf;
  local_298 = 0;
  local_2a8 = local_2a8 & 0xffffff00;
  FUN_009d6f00();
  local_8 = 0x162;
  FUN_009a71d0();
  (**(code **)(*DAT_01258a8c + 0x14))();
  DVar20 = 0x28;
  pPVar19 = &local_1054;
  pvVar11 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar11,pPVar19,DVar20);
  local_102c = local_1054.WorkingSetSize - local_107c.WorkingSetSize;
  FUN_009885d0();
  local_8._0_1_ = 0x8d;
  FUN_004015b0();
  local_8._0_1_ = 0x8e;
  FUN_00987d20();
  FUN_0048b410();
  ppppuStack_1fa8 = (undefined ****)0x97d970;
  ppppuStack_1fa8 = (undefined ****)FUN_00418e30();
  puStack_1fac = (uint *)0x97d976;
  FUN_00401280();
  local_8._0_1_ = 0x8d;
  FUN_00987ac0();
  FUN_00aad52d();
  local_8._0_1_ = 0x62;
  if (0xf < local_6c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c0 = 0xf;
  local_6c4 = 0;
  local_6d4 = local_6d4 & 0xffffff00;
  FUN_009885d0();
  local_8._0_1_ = 0x8f;
  puStack_1fac = (uint *)0x97da1e;
  ppppuStack_1fa8 = local_70c;
  FUN_004015b0();
  local_8._0_1_ = 0x90;
  ppppuStack_1fa8 = (undefined ****)0x97da37;
  ppppuStack_1fa8 = (undefined ****)FUN_00987d20();
  puStack_1fac = (uint *)0x97da3d;
  puStack_1fac = (uint *)FUN_00455470();
  pppuStack_1fb0 = (undefined ***)0x97da43;
  pppuStack_1fb0 = (undefined ***)FUN_00418e30();
  FUN_00401280();
  ppppuStack_1fa8 = (undefined ****)local_1844;
  local_8._0_1_ = 0x8f;
  puStack_1fac = (uint *)0x97da5c;
  FUN_00987ac0();
  ppppuStack_1fa8 = (undefined ****)local_1844;
  local_1844[0] = std::ios_base::vftable;
  puStack_1fac = (uint *)0x97da72;
  FUN_00aad52d();
  local_8._0_1_ = 0x62;
  if (0xf < local_6f8) {
    ppppuStack_1fa8 = (undefined ****)local_70c[0];
                    /* WARNING: Subroutine does not return */
    puStack_1fac = (uint *)&UNK_0097da8e;
    FUN_00aae91b();
  }
  local_6f8 = 0xf;
  local_6fc = 0;
  local_70c[0] = (undefined ***)((uint)local_70c[0] & 0xffffff00);
  ppppuStack_1fa8 = (undefined ****)0x97dab7;
  FUN_009885d0();
  ppppuStack_1fa8 = (undefined ****)0x10006;
  puStack_1fac = (uint *)0x200;
  local_8._0_1_ = 0x91;
  pppuStack_1fb0 = local_f10;
  FUN_004015b0();
  local_8._0_1_ = 0x92;
  ppppuStack_1fa8 = (undefined ****)local_30;
  puStack_1fac = (uint *)0x97daf0;
  puStack_1fac = (uint *)FUN_00987d20();
  pppuStack_1fb0 = (undefined ***)0x97daf6;
  pppuStack_1fb0 = (undefined ***)FUN_0048b410();
  FUN_00401280();
  pppuStack_1fb0 = local_1184;
  local_8._0_1_ = 0x91;
  FUN_00987ac0();
  pppuStack_1fb0 = local_1184;
  local_1184[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x62;
  pppuStack_1fb0 = (undefined ***)0x97db38;
  FUN_00408ad0();
  pppuStack_1fb0 = (undefined ***)0x97db48;
  FUN_009885d0();
  pppuStack_1fb0 = (undefined ***)0x10006;
  local_8._0_1_ = 0x93;
  FUN_004015b0();
  local_8._0_1_ = 0x94;
  pppuStack_1fb0 = local_24;
  FUN_00987d20();
  FUN_0048b410();
  FUN_00401280();
  local_8._0_1_ = 0x93;
  FUN_00987ac0();
  local_1304 = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x62;
  FUN_00408ad0();
  FUN_009885d0();
  local_8._0_1_ = 0x95;
  FUN_004015b0();
  local_8._0_1_ = 0x96;
  FUN_00987d20();
  FUN_00401280();
  local_8._0_1_ = 0x95;
  FUN_00987ac0();
  local_1484 = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x62;
  FUN_00408ad0();
  iVar8 = FUN_00aae9af();
  local_8._0_1_ = 0x97;
  if (iVar8 == 0) {
    piVar14 = (int *)0x0;
  }
  else {
    FUN_00475500();
    FUN_009a71d0();
    piVar14 = (int *)FUN_00633800();
  }
  local_8._0_1_ = 0x62;
  iVar8 = FUN_00475500();
  if (*(int *)(iVar8 + 0x10) < 0x32) {
    FUN_009885d0();
    local_8._0_1_ = 0x98;
    FUN_004015b0();
    local_8._0_1_ = 0x99;
    FUN_00475500();
    FUN_00987d20();
    FUN_00455470();
    FUN_00418e30();
    FUN_00401280();
    local_8._0_1_ = 0x98;
    FUN_00987ac0();
    local_1604 = std::ios_base::vftable;
    FUN_00aad52d();
    local_8._0_1_ = 0x62;
    FUN_00408ad0();
    MessageBoxA((HWND)0x0,
                "128MB of video memory is required to run this game!\n However the game will start but this may cause instability and reduced graphics preformance."
                ,"Warning",0);
  }
  iVar8 = FUN_00475500();
  if (0x1ff < *(int *)(iVar8 + 0x34)) {
    FUN_009a71d0();
    fVar18 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    local_40 = (double)fVar18;
    FUN_009885d0();
    local_8._0_1_ = 0x9c;
    FUN_004015b0();
    local_8._0_1_ = 0x9d;
    FUN_00987d20();
    FUN_0048b410();
    FUN_00418e30();
    local_8._0_1_ = 0x9c;
    FUN_00987ac0();
    FUN_00aad52d();
    local_8._0_1_ = 0x62;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0x9e;
    FUN_004015b0();
    local_8._0_1_ = 0x9f;
    FUN_00987d20();
    FUN_00401280();
    local_8._0_1_ = 0x9e;
    FUN_00987ac0();
    FUN_00aad52d();
    local_8._0_1_ = 0x62;
    FUN_00408ad0();
    (**(code **)(*piVar14 + 0x18))();
    FUN_009a71d0();
    fVar18 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    local_40 = (double)fVar18;
    FUN_009885d0();
    local_8._0_1_ = 0xa0;
    FUN_004015b0();
    local_8._0_1_ = 0xa1;
    FUN_00987d20();
    FUN_0048b410();
    FUN_00418e30();
    local_8._0_1_ = 0xa0;
    FUN_00987ac0();
    FUN_00aad52d();
    local_8._0_1_ = 0x62;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0xa2;
    FUN_004015b0();
    local_8._0_1_ = 0xa3;
    FUN_00987d20();
    FUN_00401280();
    local_8._0_1_ = 0xa2;
    FUN_00987ac0();
    FUN_00aad52d();
    local_8._0_1_ = 0x62;
    FUN_00408ad0();
    FUN_009df550();
    (**(code **)(*piStack_72c + 4))();
    local_8._0_1_ = 0x86;
    FUN_00988fa0();
    local_8._0_1_ = 0x88;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 0x89;
    FUN_00401320();
    local_8._0_1_ = 0x8a;
    uVar15 = FUN_004015b0(auStack_f64,0x1f6,0x10004);
    local_8._0_1_ = 0x8c;
    uVar15 = FUN_004238b0(uVar15);
    FUN_00401280(uVar15);
    local_8 = CONCAT31(local_8._1_3_,0x89);
    FUN_00401650();
    FUN_00408ad0();
    if (uStack_af0 < 0x10) {
      appppCStack_b04[0] = (LPCSTR ***)appppCStack_b04;
    }
    MessageBoxA((HWND)0x0,(LPCSTR)appppCStack_b04[0],"Error!",0x30);
    FUN_00408ad0();
    return 0x97ddc8;
  }
  FUN_009885d0();
  local_8._0_1_ = 0x9a;
  FUN_004015b0();
  local_8._0_1_ = 0x9b;
  FUN_00987d20();
  FUN_00401280();
  local_8 = CONCAT31(local_8._1_3_,0x9a);
  FUN_00987ac0();
  local_1784 = std::ios_base::vftable;
  FUN_00aad52d();
  FUN_00408ad0();
  MessageBoxA((HWND)0x0,"This game require PixelShader 2.0 or higher to run.","Error",0);
  FUN_00408ad0();
  FUN_00408ad0();
  FUN_00408ad0();
  FUN_0040b3c0();
  FUN_0040b3c0();
  FUN_00408ad0();
  FUN_00408ad0();
  FUN_0040b3c0();
  FUN_00408ad0();
  ExceptionList = local_10;
  return 1;
}

