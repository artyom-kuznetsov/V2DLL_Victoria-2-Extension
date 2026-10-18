// FUN_009fb150 @ 009fb150 body=[[009fb150, 009fb1d3] [009fb1d7, 009fb31f] [009fb323, 009fb3ae] [009fb3b2, 009fb436] [009fb43a, 009fb463] [009fb467, 009fb4bb] [009fb4bf, 009fb59d] [009fb5a1, 009fb5d2] [009fb5d6, 009fb5f9] [009fb5fd, 009fb61a] [009fb61e, 009fb63b] [009fb63f, 009fb663] [009fb667, 009fb74e] [009fb752, 009fb773] [009fb777, 009fb79d] [009fb7a1, 009fb7c7] [009fb7cb, 009fb885] [009fb889, 009fb8af] [009fb8b3, 009fb9c7] [009fb9cb, 009fb9ee] [009fb9f2, 009fba12] [009fba16, 009fba37] [009fba3b, 009fbb0f] [009fbb13, 009fbc02] [009fbc06, 009fbc29] [009fbc2d, 009fbc53] [009fbc57, 009fbc7d] [009fbc81, 009fbca1] [009fbca5, 009fbcc2] [009fbcc6, 009fbcea] [009fbcee, 009fbda0] [009fbda4, 009fbdc7] [009fbdcb, 009fbdee] [009fbdf2, 009fbe1c] [009fbe20, 009fc0b5]]


/* WARNING: Removing unreachable block (ram,0x009fb82b) */

void FUN_009fb150(void)

{
  byte bVar1;
  undefined1 uVar2;
  byte *****pppppbVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  byte *pbVar7;
  bool bVar8;
  undefined1 auStack_26c [12];
  undefined4 uStack_260;
  undefined1 *puStack_25c;
  undefined1 auStack_258 [12];
  undefined4 uStack_24c;
  undefined4 uStack_248;
  uint *puStack_244;
  byte ****ppppbStack_240;
  undefined1 *puStack_23c;
  uint uStack_238;
  int iStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  uint *puStack_224;
  undefined1 *puStack_220;
  undefined1 *puStack_21c;
  uint uStack_218;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  uint *puStack_204;
  uint *puStack_200;
  undefined1 *puStack_1fc;
  uint uStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  int local_1ec;
  undefined4 local_1e8;
  uint *local_1e4;
  uint *local_1e0;
  undefined1 *puStack_1dc;
  undefined1 local_1d8 [8];
  undefined *local_1d0;
  int local_1cc;
  undefined *local_1c8;
  byte ****local_1c4;
  byte ****ppppbStack_1c0;
  uint local_194 [4];
  undefined4 local_184;
  uint local_180;
  uint local_178;
  undefined4 local_168;
  uint local_164;
  uint local_15c;
  undefined4 local_14c;
  uint local_148;
  byte ****local_140 [4];
  undefined4 local_130;
  uint local_12c;
  uint local_124 [4];
  undefined4 local_114;
  uint local_110;
  uint local_108;
  undefined4 local_f8;
  uint local_f4;
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_d0 [4];
  undefined4 local_c0;
  uint local_bc;
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  undefined1 local_7c [4];
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined1 local_44 [12];
  uint local_38;
  uint local_34;
  undefined1 *local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e8f2;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe44;
  ppppbStack_1c0 = (byte ****)0xffffffff;
  local_1c4 = (byte ****)0x0;
  local_1c8 = (undefined *)(in_ECX + 8);
  local_28 = DAT_01258b64;
  local_180 = 0xf;
  local_184 = 0;
  local_194[0] = local_194[0] & 0xffffff00;
  local_1cc = 0x9fb1ab;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  FUN_00408ed0();
  ppppbStack_1c0 = (byte ****)local_194;
  local_8 = 0;
  local_1c4 = (byte ****)0x9fb1ba;
  local_2c = (undefined1 *)FUN_009c1bd0();
  local_20 = local_2c;
  if (0xf < local_180) {
    ppppbStack_1c0 = (byte ****)local_194[0];
                    /* WARNING: Subroutine does not return */
    local_1c4 = (byte ****)&UNK_009fb1d4;
    FUN_00aae91b();
  }
  local_8 = 1;
  ppppbStack_1c0 = (byte ****)0x4;
  local_1c4 = (byte ****)&DAT_00dedc10;
  local_180 = 0xf;
  local_184 = 0;
  local_194[0] = local_194[0] & 0xffffff00;
  local_12c = 0xf;
  local_130 = 0;
  local_140[0] = (byte ****)((uint)local_140[0] & 0xffffff00);
  local_1c8 = (undefined *)0x9fb221;
  FUN_00409350();
  local_8._0_1_ = 2;
  if (*(int *)(in_ECX + 200) == 0) {
    ppppbStack_1c0 = (byte ****)0x9;
    local_1c4 = (byte ****)0xdf4840;
    local_1c8 = (undefined *)0x9fb23f;
    FUN_00409350();
  }
  pppppbVar3 = (byte *****)local_140[0];
  if (local_12c < 0x10) {
    pppppbVar3 = local_140;
  }
  pbVar7 = &DAT_00dedc10;
  do {
    bVar1 = *(byte *)pppppbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_009fb280:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_009fb285;
    }
    if (bVar1 == 0) break;
    bVar1 = *(byte *)((int)pppppbVar3 + 1);
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_009fb280;
    pppppbVar3 = (byte *****)((int)pppppbVar3 + 2);
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_009fb285:
  if (iVar4 == 0) {
    ppppbStack_1c0 = (byte ****)0x68;
    local_1c4 = (byte ****)0x9fb294;
    iVar4 = FUN_00aae9af();
    local_8._0_1_ = 3;
    local_1c = (undefined1 *)iVar4;
    if (iVar4 == 0) {
      ppppbStack_1c0 = (byte ****)0x0;
    }
    else {
      ppppbStack_1c0 = (byte ****)(uint)*(ushort *)(in_ECX + 0x28);
      local_1c4 = *(byte *****)(in_ECX + 0x24);
      local_1ec = *(int *)(in_ECX + 0xcc);
      local_28 = &local_1ec;
      local_1e8 = *(undefined4 *)(in_ECX + 0xd0);
      local_1e4 = *(uint **)(in_ECX + 0xd4);
      uStack_1f0 = 0xffffffff;
      iStack_1f4 = 0;
      uStack_1f8 = in_ECX + 0xd8;
      local_1cc = 0xf;
      local_1d0 = (undefined *)0x0;
      local_1e0 = (uint *)((uint)local_1e0 & 0xffffff00);
      puStack_1fc = (undefined1 *)0x9fb2ee;
      FUN_00408ed0();
      uStack_1f0 = 0;
      uStack_1f8 = 0x9fb2f5;
      iStack_1f4 = iVar4;
      ppppbStack_1c0 = (byte ****)FUN_009fc730();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    local_1c4 = (byte ****)0x9fb30b;
    (**(code **)(**(int **)(local_20 + 0x38) + 0x18))();
    goto LAB_009fb312;
  }
  ppppbStack_1c0 = (byte ****)0x1;
  local_1c4 = (byte ****)local_18;
  iVar4 = in_ECX + 0xac;
  local_18[0] = 0x2d;
  local_1cc = 0x9fb34c;
  local_1c8 = (undefined *)iVar4;
  ppppbStack_1c0 = (byte ****)FUN_005484e0();
  local_1c4 = (byte ****)0x9fb35c;
  FUN_009895f0();
  ppppbStack_1c0 = (byte ****)0x1;
  local_1c4 = (byte ****)local_18;
  local_8._0_1_ = 4;
  uVar6 = *(undefined4 *)(in_ECX + 0xbc);
  local_18[0] = 0x2d;
  local_1cc = 0x9fb378;
  local_1c8 = (undefined *)iVar4;
  FUN_005484e0();
  local_1c4 = (byte ****)0x9fb389;
  ppppbStack_1c0 = (byte ****)uVar6;
  local_1c8 = (undefined *)FUN_009895f0();
  ppppbStack_1c0 = (byte ****)0xffffffff;
  local_1c4 = (byte ****)0x0;
  local_8._0_1_ = 5;
  local_1cc = 0x9fb39a;
  FUN_00408ed0();
  if (0xf < local_f4) {
    ppppbStack_1c0 = (byte ****)local_108;
                    /* WARNING: Subroutine does not return */
    local_1c4 = (byte ****)&UNK_009fb3af;
    FUN_00aae91b();
  }
  local_110 = 0xf;
  local_114 = 0;
  local_124[0] = local_124[0] & 0xffffff00;
  for (local_20 = (undefined1 *)0x0; local_8._0_1_ = 6, (int)local_20 < 4; local_20 = local_20 + 1)
  {
    ppppbStack_1c0 = (byte ****)0x1;
    local_1c4 = (byte ****)local_18;
    local_18[0] = 0x2d;
    local_1cc = 0x9fb3ed;
    local_1c8 = (undefined *)iVar4;
    ppppbStack_1c0 = (byte ****)FUN_005484e0();
    local_1c4 = (byte ****)0x9fb3fd;
    ppppbStack_1c0 = (byte ****)FUN_009895f0();
    local_8._0_1_ = 7;
    local_1c4 = (byte ****)0x9fb410;
    local_1c8 = (undefined *)FUN_00988f20();
    ppppbStack_1c0 = (byte ****)0xffffffff;
    local_1c4 = (byte ****)0x0;
    local_8._0_1_ = 8;
    local_1cc = 0x9fb424;
    FUN_00408ed0();
    if (0xf < local_50) {
      ppppbStack_1c0 = (byte ****)local_64[0];
                    /* WARNING: Subroutine does not return */
      local_1c4 = (byte ****)&UNK_009fb437;
      FUN_00aae91b();
    }
    local_8._0_1_ = 6;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_f4) {
      ppppbStack_1c0 = (byte ****)local_108;
                    /* WARNING: Subroutine does not return */
      local_1c4 = (byte ****)&UNK_009fb464;
      FUN_00aae91b();
    }
    uVar6 = *(undefined4 *)(local_24 + 0xbc);
    ppppbStack_1c0 = (byte ****)0x1;
    local_1c4 = (byte ****)local_18;
    local_18[0] = 0x2d;
    local_1cc = 0x9fb482;
    local_1c8 = (undefined *)iVar4;
    FUN_005484e0();
    local_1c4 = (byte ****)0x9fb493;
    ppppbStack_1c0 = (byte ****)uVar6;
    local_1c8 = (undefined *)FUN_009895f0();
    ppppbStack_1c0 = (byte ****)0xffffffff;
    local_1c4 = (byte ****)0x0;
    local_8._0_1_ = 9;
    local_1cc = 0x9fb4a3;
    FUN_00408ed0();
    local_8._0_1_ = 6;
    if (0xf < local_f4) {
      ppppbStack_1c0 = (byte ****)local_108;
                    /* WARNING: Subroutine does not return */
      local_1c4 = (byte ****)&UNK_009fb4bc;
      FUN_00aae91b();
    }
  }
  ppppbStack_1c0 = (byte ****)0x2;
  local_1c4 = (byte ****)&DAT_00e3d700;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_1c8 = (undefined *)0x9fb4e5;
  FUN_00409350();
  local_8._0_1_ = 10;
  ppppbStack_1c0 = (byte ****)0x1b;
  local_1c4 = (byte ****)0xe3d6e4;
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4[0] = local_b4[0] & 0xffffff00;
  local_1c8 = (undefined *)0x9fb50e;
  FUN_00409350();
  local_8._0_1_ = 0xb;
  ppppbStack_1c0 = (byte ****)0xe;
  local_1c4 = (byte ****)0xe3d6d4;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_1c8 = (undefined *)0x9fb52b;
  FUN_00409350();
  ppppbStack_1c0 = (byte ****)local_140;
  local_8._0_1_ = 0xc;
  local_1c4 = (byte ****)0x9fb544;
  FUN_00988f20();
  ppppbStack_1c0 = (byte ****)local_b4;
  local_8._0_1_ = 0xd;
  local_1c4 = (byte ****)0x9fb55c;
  FUN_00988f20();
  ppppbStack_1c0 = (byte ****)local_124;
  local_8._0_1_ = 0xe;
  local_1c4 = (byte ****)0x9fb574;
  FUN_00988f20();
  ppppbStack_1c0 = (byte ****)local_64;
  local_8._0_1_ = 0xf;
  local_1c4 = (byte ****)0x9fb589;
  FUN_00988f20();
  if (0xf < local_164) {
    ppppbStack_1c0 = (byte ****)local_178;
                    /* WARNING: Subroutine does not return */
    local_1c4 = (byte ****)&UNK_009fb59e;
    FUN_00aae91b();
  }
  local_164 = 0xf;
  local_168 = 0;
  local_178 = local_178 & 0xffffff00;
  if (0xf < local_d8) {
    ppppbStack_1c0 = (byte ****)local_ec;
                    /* WARNING: Subroutine does not return */
    local_1c4 = (byte ****)&UNK_009fb5d3;
    FUN_00aae91b();
  }
  local_d8 = 0xf;
  local_dc = 0;
  local_ec = local_ec & 0xffffff00;
  if (0xf < local_84) {
    ppppbStack_1c0 = (byte ****)local_98;
                    /* WARNING: Subroutine does not return */
    local_1c4 = (byte ****)&UNK_009fb5fa;
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98 = local_98 & 0xffffff00;
  if (0xf < local_34) {
    ppppbStack_1c0 = (byte ****)local_48;
                    /* WARNING: Subroutine does not return */
    local_1c4 = (byte ****)&UNK_009fb61b;
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (0xf < local_a0) {
    ppppbStack_1c0 = (byte ****)local_b4[0];
                    /* WARNING: Subroutine does not return */
    local_1c4 = (byte ****)&UNK_009fb63c;
    FUN_00aae91b();
  }
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4[0] = local_b4[0] & 0xffffff00;
  local_8._0_1_ = 0x16;
  if (0xf < local_50) {
    ppppbStack_1c0 = (byte ****)local_64[0];
                    /* WARNING: Subroutine does not return */
    local_1c4 = (byte ****)&UNK_009fb664;
    FUN_00aae91b();
  }
  local_1c = local_1d8;
  puStack_1dc = (undefined1 *)0xffffffff;
  local_1e0 = (uint *)0x0;
  local_1e4 = local_d0;
  local_1c4 = (byte ****)0xf;
  local_1c8 = (undefined *)0x0;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_1d8[0] = 0;
  local_1e8 = 0x9fb691;
  FUN_00408ed0();
  puStack_1dc = local_7c;
  local_1e0 = (uint *)0x9fb69f;
  (**(code **)(*local_28 + 0x10))();
  local_8._0_1_ = 0x17;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0x17;
  if ((local_70 - local_74 & 0xfffffff0U) == 0) {
    local_1e0 = (uint *)0x68;
    local_1e4 = (uint *)0x9fb6bc;
    iVar4 = FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,0x18);
    local_1c = (undefined1 *)iVar4;
    if (iVar4 == 0) {
LAB_009fb71e:
      local_1e0 = (uint *)0x0;
    }
    else {
      local_1e0 = (uint *)(uint)*(ushort *)(local_24 + 0x28);
      local_1e4 = *(uint **)(local_24 + 0x24);
      uStack_20c = *(undefined4 *)(local_24 + 0xcc);
      local_20 = (undefined1 *)&uStack_20c;
      uStack_208 = *(undefined4 *)(local_24 + 0xd0);
      puStack_204 = *(uint **)(local_24 + 0xd4);
      uStack_210 = 0xffffffff;
      iStack_214 = 0;
      uStack_218 = local_24 + 0xd8;
      local_1ec = 0xf;
      uStack_1f0 = 0;
      puStack_200 = (uint *)((uint)puStack_200 & 0xffffff00);
      puStack_21c = (undefined1 *)0x9fb714;
      FUN_00408ed0();
      uStack_210 = 3;
      uStack_218 = 0x9fb71c;
      iStack_214 = iVar4;
      local_1e0 = (uint *)FUN_009fc730();
    }
LAB_009fb720:
    local_8 = CONCAT31(local_8._1_3_,0x17);
    local_1e4 = (uint *)0x9fb732;
    (**(code **)(**(int **)(local_2c + 0x38) + 0x18))();
    if (local_74 != 0) {
      local_1c4 = (byte ****)local_1c;
      local_1c8 = (undefined *)local_70;
      local_1cc = 0x9fb746;
      FUN_00463b30();
      local_1cc = local_74;
                    /* WARNING: Subroutine does not return */
      local_1d0 = &UNK_009fb74f;
      FUN_00aae91b();
    }
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    if (0xf < local_bc) {
      local_1c4 = (byte ****)local_d0[0];
                    /* WARNING: Subroutine does not return */
      local_1c8 = &UNK_009fb774;
      FUN_00aae91b();
    }
  }
  else {
    local_1e0 = (uint *)0x1;
    local_1e4 = (uint *)&DAT_00df8144;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    local_1e8 = 0x9fb802;
    local_8._0_1_ = uVar2;
    FUN_00409350();
    local_1e0 = (uint *)0x3;
    local_8._0_1_ = 0x19;
    local_1e4 = (uint *)0x9fb818;
    iVar4 = FUN_00a714a0();
    uVar5 = *(uint *)(iVar4 + 0x10);
    local_1e0 = (uint *)local_38;
    if (uVar5 < local_38) {
      local_1e0 = (uint *)uVar5;
    }
    local_1e4 = (uint *)0x9fb849;
    iVar4 = FUN_00414bd0();
    bVar8 = false;
    if (iVar4 == 0) {
      if (uVar5 < local_38) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar5 != local_38);
      }
      bVar8 = uVar5 == 0;
    }
    local_18[0] = !bVar8;
    if (0xf < local_84) {
      local_1e0 = (uint *)local_98;
                    /* WARNING: Subroutine does not return */
      local_1e4 = (uint *)&UNK_009fb886;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x17;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0x17;
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_34) {
      local_1e0 = (uint *)local_48;
                    /* WARNING: Subroutine does not return */
      local_1e4 = (uint *)&UNK_009fb8b0;
      FUN_00aae91b();
    }
    if ((bool)local_18[0]) {
      local_1e0 = (uint *)0x68;
      local_1e4 = (uint *)0x9fb8c0;
      iVar4 = FUN_00aae9af();
      local_8 = CONCAT31(local_8._1_3_,0x1b);
      local_1c = (undefined1 *)iVar4;
      if (iVar4 == 0) goto LAB_009fb71e;
      local_1e0 = (uint *)(uint)*(ushort *)(local_24 + 0x28);
      local_1e4 = *(uint **)(local_24 + 0x24);
      uStack_20c = *(undefined4 *)(local_24 + 0xcc);
      local_20 = (undefined1 *)&uStack_20c;
      uStack_208 = *(undefined4 *)(local_24 + 0xd0);
      puStack_204 = *(uint **)(local_24 + 0xd4);
      uStack_210 = 0xffffffff;
      iStack_214 = 0;
      uStack_218 = local_24 + 0xd8;
      local_1ec = 0xf;
      uStack_1f0 = 0;
      puStack_200 = (uint *)((uint)puStack_200 & 0xffffff00);
      puStack_21c = (undefined1 *)0x9fb91c;
      FUN_00408ed0();
      uStack_210 = 2;
      uStack_218 = 0x9fb924;
      iStack_214 = iVar4;
      local_1e0 = (uint *)FUN_009fc730();
      goto LAB_009fb720;
    }
    local_1e0 = (uint *)0x2;
    local_1e4 = (uint *)&DAT_00e3d700;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    local_1e8 = 0x9fb94e;
    local_8._0_1_ = uVar2;
    FUN_00409350();
    local_8._0_1_ = 0x1c;
    local_1e0 = (uint *)0x26;
    local_1e4 = (uint *)0xe3d704;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_1e8 = 0x9fb96b;
    FUN_00409350();
    local_1e0 = (uint *)(local_24 + 0x74);
    local_8._0_1_ = 0x1d;
    local_1e4 = (uint *)0x9fb987;
    local_20 = (undefined1 *)local_1e0;
    FUN_00988f20();
    local_1e0 = local_b4;
    local_8._0_1_ = 0x1e;
    local_1e4 = (uint *)0x9fb99f;
    local_1e8 = FUN_00988f20();
    local_1e0 = (uint *)0xffffffff;
    local_1e4 = (uint *)0x0;
    local_8._0_1_ = 0x1f;
    local_1ec = 0x9fb9b2;
    FUN_00408ed0();
    if (0xf < local_84) {
      local_1e0 = (uint *)local_98;
                    /* WARNING: Subroutine does not return */
      local_1e4 = (uint *)&UNK_009fb9c8;
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_d8) {
      local_1e0 = (uint *)local_ec;
                    /* WARNING: Subroutine does not return */
      local_1e4 = (uint *)&UNK_009fb9ef;
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec = local_ec & 0xffffff00;
    if (0xf < local_50) {
      local_1e0 = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
      local_1e4 = (uint *)&UNK_009fba13;
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x17;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_a0) {
      local_1e0 = (uint *)local_b4[0];
                    /* WARNING: Subroutine does not return */
      local_1e4 = (uint *)&UNK_009fba38;
      FUN_00aae91b();
    }
    local_1c = (undefined1 *)&uStack_1f8;
    puStack_1fc = (undefined1 *)0xffffffff;
    puStack_200 = (uint *)0x0;
    puStack_204 = local_d0;
    local_1e4 = (uint *)0xf;
    local_1e8 = 0;
    uStack_1f8 = uStack_1f8 & 0xffffff00;
    uStack_208 = 0x9fba5b;
    FUN_00408ed0();
    puStack_1fc = local_44;
    puStack_200 = (uint *)0x9fba69;
    iVar4 = (**(code **)(*local_28 + 0x10))();
    local_8._0_1_ = 0x20;
    local_78 = *(undefined4 *)(iVar4 + 4);
    puStack_200 = (uint *)0x9fba7e;
    FUN_00a11e60();
    local_8._0_1_ = 0x17;
    puStack_200 = (uint *)0x9fba8a;
    FUN_009fc110();
    if ((local_70 - local_74 & 0xfffffff0U) == 0) {
      puStack_200 = (uint *)0x5;
      puStack_204 = (uint *)0xe3d750;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      uStack_208 = 0x9fbb36;
      FUN_00409350();
      local_8._0_1_ = 0x22;
      puStack_200 = (uint *)0x3;
      puStack_204 = (uint *)&DAT_00e3d74c;
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = local_b4[0] & 0xffffff00;
      uStack_208 = 0x9fbb5f;
      FUN_00409350();
      local_8._0_1_ = 0x23;
      puStack_200 = (uint *)0x1d;
      puStack_204 = (uint *)0xe3d72c;
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      uStack_208 = 0x9fbb7c;
      FUN_00409350();
      puStack_200 = (uint *)local_20;
      local_8._0_1_ = 0x24;
      puStack_204 = (uint *)0x9fbb92;
      FUN_00988f20();
      puStack_200 = local_b4;
      local_8._0_1_ = 0x25;
      puStack_204 = (uint *)0x9fbbaa;
      FUN_00988f20();
      puStack_200 = (uint *)(local_24 + 0x90);
      local_8._0_1_ = 0x26;
      puStack_204 = (uint *)0x9fbbc5;
      FUN_00988f20();
      puStack_200 = &local_48;
      local_8._0_1_ = 0x27;
      puStack_204 = (uint *)0x9fbbda;
      uStack_208 = FUN_00988f20();
      puStack_200 = (uint *)0xffffffff;
      puStack_204 = (uint *)0x0;
      local_8._0_1_ = 0x28;
      uStack_20c = 0x9fbbed;
      FUN_00408ed0();
      if (0xf < local_84) {
        puStack_200 = (uint *)local_98;
                    /* WARNING: Subroutine does not return */
        puStack_204 = (uint *)&UNK_009fbc03;
        FUN_00aae91b();
      }
      local_84 = 0xf;
      local_88 = 0;
      local_98 = local_98 & 0xffffff00;
      if (0xf < local_d8) {
        puStack_200 = (uint *)local_ec;
                    /* WARNING: Subroutine does not return */
        puStack_204 = (uint *)&UNK_009fbc2a;
        FUN_00aae91b();
      }
      local_d8 = 0xf;
      local_dc = 0;
      local_ec = local_ec & 0xffffff00;
      if (0xf < local_164) {
        puStack_200 = (uint *)local_178;
                    /* WARNING: Subroutine does not return */
        puStack_204 = (uint *)&UNK_009fbc54;
        FUN_00aae91b();
      }
      local_164 = 0xf;
      local_168 = 0;
      local_178 = local_178 & 0xffffff00;
      if (0xf < local_f4) {
        puStack_200 = (uint *)local_108;
                    /* WARNING: Subroutine does not return */
        puStack_204 = (uint *)&UNK_009fbc7e;
        FUN_00aae91b();
      }
      local_f4 = 0xf;
      local_f8 = 0;
      local_108 = local_108 & 0xffffff00;
      if (0xf < local_50) {
        puStack_200 = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
        puStack_204 = (uint *)&UNK_009fbca2;
        FUN_00aae91b();
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (0xf < local_a0) {
        puStack_200 = (uint *)local_b4[0];
                    /* WARNING: Subroutine does not return */
        puStack_204 = (uint *)&UNK_009fbcc3;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x17;
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = local_b4[0] & 0xffffff00;
      if (0xf < local_34) {
        puStack_200 = (uint *)local_48;
                    /* WARNING: Subroutine does not return */
        puStack_204 = (uint *)&UNK_009fbceb;
        FUN_00aae91b();
      }
      local_1c = (undefined1 *)&uStack_218;
      puStack_21c = (undefined1 *)0xffffffff;
      puStack_220 = (undefined1 *)0x0;
      puStack_224 = local_d0;
      puStack_204 = (uint *)0xf;
      uStack_208 = 0;
      uStack_218 = uStack_218 & 0xffffff00;
      uStack_228 = 0x9fbd0e;
      FUN_00408ed0();
      puStack_21c = local_44;
      puStack_220 = (undefined1 *)0x9fbd1c;
      (**(code **)(*local_28 + 0x10))();
      puStack_220 = (undefined1 *)0x9fbd24;
      FUN_009fc110();
      puStack_220 = (undefined1 *)0x9fbd34;
      local_1c = (undefined1 *)FUN_009885d0();
      local_8._0_1_ = 0x29;
      puStack_220 = (undefined1 *)0x9fbd4b;
      FUN_009885d0();
      puStack_220 = local_20;
      local_8._0_1_ = 0x2a;
      puStack_224 = (uint *)0x9fbd60;
      FUN_00988f20();
      local_8._0_1_ = 0x2b;
      puStack_220 = local_1c;
      puStack_224 = (uint *)0x9fbd75;
      uStack_228 = FUN_00988f20();
      puStack_220 = (undefined1 *)0xffffffff;
      puStack_224 = (uint *)0x0;
      local_8._0_1_ = 0x2c;
      uStack_22c = 0x9fbd88;
      FUN_00408ed0();
      if (0xf < local_f4) {
        puStack_220 = (undefined1 *)local_108;
                    /* WARNING: Subroutine does not return */
        puStack_224 = (uint *)&UNK_009fbda1;
        FUN_00aae91b();
      }
      local_f4 = 0xf;
      local_f8 = 0;
      local_108 = local_108 & 0xffffff00;
      if (0xf < local_84) {
        puStack_220 = (undefined1 *)local_98;
                    /* WARNING: Subroutine does not return */
        puStack_224 = (uint *)&UNK_009fbdc8;
        FUN_00aae91b();
      }
      local_84 = 0xf;
      local_88 = 0;
      local_98 = local_98 & 0xffffff00;
      if (0xf < local_d8) {
        puStack_220 = (undefined1 *)local_ec;
                    /* WARNING: Subroutine does not return */
        puStack_224 = (uint *)&UNK_009fbdef;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x17;
      local_d8 = 0xf;
      local_dc = 0;
      local_ec = local_ec & 0xffffff00;
      if (0xf < local_164) {
        puStack_220 = (undefined1 *)local_178;
                    /* WARNING: Subroutine does not return */
        puStack_224 = (uint *)&UNK_009fbe1d;
        FUN_00aae91b();
      }
      local_1c = (undefined1 *)&uStack_238;
      puStack_23c = (undefined1 *)0xffffffff;
      ppppbStack_240 = (byte ****)0x0;
      puStack_244 = local_d0;
      puStack_224 = (uint *)0xf;
      uStack_228 = 0;
      uStack_238 = uStack_238 & 0xffffff00;
      uStack_248 = 0x9fbe40;
      FUN_00408ed0();
      puStack_23c = local_44;
      ppppbStack_240 = (byte ****)0x9fbe4e;
      iVar4 = (**(code **)(*local_28 + 0x10))();
      local_8._0_1_ = 0x2d;
      local_78 = *(undefined4 *)(iVar4 + 4);
      ppppbStack_240 = (byte ****)0x9fbe63;
      FUN_00a11e60();
      local_8._0_1_ = 0x17;
      ppppbStack_240 = (byte ****)0x9fbe6f;
      FUN_009fc110();
      if ((local_70 - local_74 & 0xfffffff0U) == 0) {
        ppppbStack_240 = (byte ****)0x68;
        puStack_244 = (uint *)0x9fc07c;
        iVar4 = FUN_00aae9af();
        local_8 = CONCAT31(local_8._1_3_,0x2e);
        local_1c = (undefined1 *)iVar4;
        if (iVar4 != 0) {
          ppppbStack_240 = (byte ****)(uint)*(ushort *)(local_24 + 0x28);
          puStack_244 = *(uint **)(local_24 + 0x24);
          local_20 = auStack_26c;
          FUN_009fb110();
          ppppbStack_240 = (byte ****)FUN_009fc730(iVar4,0);
          goto LAB_009fc01e;
        }
      }
      else {
        ppppbStack_240 = (byte ****)0x0;
        puStack_244 = (uint *)0x9fbe92;
        ppppbStack_240 = (byte ****)FUN_00a714a0();
        if (0xf < ppppbStack_240[5]) {
          ppppbStack_240 = (byte ****)*ppppbStack_240;
        }
        puStack_244 = (uint *)0x9fbea0;
        FUN_00aaf0c5();
        ppppbStack_240 = (byte ****)0x9fbeb0;
        FUN_00408ad0();
        ppppbStack_240 = (byte ****)0x9fbec0;
        local_20 = (undefined1 *)FUN_009885d0();
        ppppbStack_240 = (byte ****)&local_48;
        local_8._0_1_ = 0x2f;
        puStack_244 = (uint *)0x9fbed2;
        local_1c = (undefined1 *)FUN_009888f0();
        local_8._0_1_ = 0x30;
        ppppbStack_240 = (byte ****)0x9fbee9;
        uVar6 = FUN_009885d0();
        local_8._0_1_ = 0x31;
        ppppbStack_240 = (byte ****)0x9fbefc;
        FUN_009885d0();
        ppppbStack_240 = (byte ****)local_140;
        local_8._0_1_ = 0x32;
        puStack_244 = (uint *)0x9fbf14;
        FUN_00988f20();
        local_8._0_1_ = 0x33;
        puStack_244 = (uint *)0x9fbf26;
        ppppbStack_240 = (byte ****)uVar6;
        FUN_00988f20();
        local_8._0_1_ = 0x34;
        ppppbStack_240 = (byte ****)local_1c;
        puStack_244 = (uint *)0x9fbf3b;
        FUN_00988f20();
        ppppbStack_240 = (byte ****)local_20;
        local_8._0_1_ = 0x35;
        puStack_244 = (uint *)0x9fbf50;
        uStack_248 = FUN_00988f20();
        ppppbStack_240 = (byte ****)0xffffffff;
        puStack_244 = (uint *)0x0;
        local_8._0_1_ = 0x36;
        uStack_24c = 0x9fbf63;
        FUN_00408ed0();
        ppppbStack_240 = (byte ****)0x9fbf6a;
        FUN_00408ad0();
        ppppbStack_240 = (byte ****)0x9fbf75;
        FUN_00408ad0();
        ppppbStack_240 = (byte ****)0x9fbf80;
        FUN_00408ad0();
        ppppbStack_240 = (byte ****)0x9fbf8b;
        FUN_00408ad0();
        ppppbStack_240 = (byte ****)0x9fbf93;
        FUN_00408ad0();
        ppppbStack_240 = (byte ****)0x9fbf9e;
        FUN_00408ad0();
        ppppbStack_240 = (byte ****)0x9fbfa6;
        FUN_00408ad0();
        local_8._0_1_ = 0x17;
        ppppbStack_240 = (byte ****)0x9fbfb5;
        FUN_00408ad0();
        local_1c = auStack_258;
        puStack_25c = (undefined1 *)0x9fbfc8;
        FUN_00401320();
        puStack_25c = local_44;
        uStack_260 = 0x9fbfd6;
        (**(code **)(*local_28 + 0x10))();
        ppppbStack_240 = (byte ****)0x9fbfde;
        FUN_009fc110();
        ppppbStack_240 = (byte ****)0x68;
        puStack_244 = (uint *)0x9fbfe5;
        iVar4 = FUN_00aae9af();
        local_8 = CONCAT31(local_8._1_3_,0x37);
        local_1c = (undefined1 *)iVar4;
        if (iVar4 != 0) {
          ppppbStack_240 = (byte ****)(uint)*(ushort *)(local_24 + 0x28);
          puStack_244 = *(uint **)(local_24 + 0x24);
          local_20 = auStack_26c;
          FUN_009fb110();
          ppppbStack_240 = (byte ****)FUN_009fc730(iVar4,0);
          goto LAB_009fc01e;
        }
      }
      ppppbStack_240 = (byte ****)0x0;
LAB_009fc01e:
      local_8 = CONCAT31(local_8._1_3_,0x17);
      puStack_244 = (uint *)0x9fc030;
      (**(code **)(**(int **)(local_2c + 0x38) + 0x18))();
      puStack_244 = (uint *)0x9fc038;
      FUN_009fc110();
      puStack_244 = (uint *)0x9fc043;
      FUN_00408ad0();
      puStack_244 = (uint *)0x9fc04e;
      FUN_00408ad0();
      puStack_244 = (uint *)0x9fc059;
      FUN_00408ad0();
      puStack_244 = (uint *)0x9fc064;
      FUN_00408ad0();
      ExceptionList = local_10;
      return;
    }
    puStack_200 = (uint *)0x68;
    puStack_204 = (uint *)0x9fbaa3;
    iVar4 = FUN_00aae9af();
    local_8._0_1_ = 0x21;
    local_1c = (undefined1 *)iVar4;
    if (iVar4 == 0) {
      puStack_200 = (uint *)0x0;
    }
    else {
      puStack_200 = (uint *)(uint)*(ushort *)(local_24 + 0x28);
      puStack_204 = *(uint **)(local_24 + 0x24);
      local_20 = (undefined1 *)&uStack_22c;
      uStack_230 = 0x9fbad1;
      FUN_009fb110();
      uStack_230 = 4;
      uStack_238 = 0x9fbad9;
      iStack_234 = iVar4;
      puStack_200 = (uint *)FUN_009fc730();
    }
    local_8 = CONCAT31(local_8._1_3_,0x17);
    puStack_204 = (uint *)0x9fbaef;
    (**(code **)(**(int **)(local_2c + 0x38) + 0x18))();
    local_1c4 = (byte ****)0x9fbaf7;
    FUN_009fc110();
    if (0xf < local_bc) {
      local_1c4 = (byte ****)local_d0[0];
                    /* WARNING: Subroutine does not return */
      local_1c8 = &UNK_009fbb10;
      FUN_00aae91b();
    }
  }
  local_d0[0] = local_d0[0] & 0xffffff00;
  local_c0 = 0;
  local_bc = 0xf;
  if (0xf < local_110) {
    local_1c4 = (byte ****)local_124[0];
                    /* WARNING: Subroutine does not return */
    local_1c8 = &UNK_009fb79e;
    FUN_00aae91b();
  }
  local_110 = 0xf;
  local_114 = 0;
  local_124[0] = local_124[0] & 0xffffff00;
  if (0xf < local_148) {
    local_1c4 = (byte ****)local_15c;
                    /* WARNING: Subroutine does not return */
    local_1c8 = &UNK_009fb7c8;
    FUN_00aae91b();
  }
  local_148 = 0xf;
  local_14c = 0;
  local_15c = local_15c & 0xffffff00;
LAB_009fb312:
  if (local_12c < 0x10) {
    ExceptionList = local_10;
    return;
  }
  local_1c4 = local_140[0];
                    /* WARNING: Subroutine does not return */
  local_1c8 = &UNK_009fb320;
  FUN_00aae91b();
}

