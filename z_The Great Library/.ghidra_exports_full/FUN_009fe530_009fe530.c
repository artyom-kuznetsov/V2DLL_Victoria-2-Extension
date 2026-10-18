// FUN_009fe530 @ 009fe530 body=[[009fe530, 009fe5d0] [009fe5d4, 009fe6e6] [009fe6ea, 009fe713] [009fe717, 009fe740] [009fe744, 009fe767] [009fe76b, 009fe785] [009fe789, 009fe7a7] [009fe7ab, 009fe8cf] [009fe8d3, 009fe8fd] [009fe901, 009fe926] [009fe92a, 009fe953] [009fe957, 009fea1c] [009fea20, 009fea5a] [009fea5e, 009fea99] [009fea9d, 009feac3] [009feac7, 009feae5]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009fe530(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  byte ****ppppbVar6;
  int iVar7;
  int in_ECX;
  bool bVar8;
  undefined1 local_334 [4];
  undefined4 uStack_330;
  int iStack_32c;
  int iStack_328;
  char local_24c [148];
  uint local_1b8 [4];
  undefined4 local_1a8;
  uint local_1a4;
  uint local_19c;
  undefined4 local_18c;
  uint local_188;
  undefined1 local_180 [8];
  int local_178;
  int local_174;
  undefined4 local_170;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  byte ***local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  uint local_3c;
  undefined4 local_2c;
  uint local_28;
  int *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63762;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffce8;
  iStack_328 = in_ECX + 0x90;
  iStack_32c = in_ECX + 0x74;
  local_1c = 0;
  uStack_330 = 0x9fe57b;
  ExceptionList = &pvStack_10;
  local_5c = FUN_009fca80();
  local_188 = 0xf;
  local_18c = 0;
  local_19c = local_19c & 0xffffff00;
  iStack_328 = 0x9fe5aa;
  FUN_00408ed0();
  local_8 = 0;
  local_80 = FUN_009c1bd0();
  if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 1;
  local_20 = DAT_01258b64;
  local_188 = 0xf;
  local_18c = 0;
  local_19c = local_19c & 0xffffff00;
  local_60 = 0;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 2;
  local_28 = 0xf;
  local_2c = 0;
  local_3c = local_3c & 0xffffff00;
  FUN_00409350();
  iVar7 = local_1c;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  local_8._0_1_ = 4;
  iStack_328 = 0x9fe650;
  pcVar3 = __itoa(local_1c,local_24c,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 5;
  FUN_00988fa0();
  local_8._0_1_ = 6;
  FUN_00988f20();
  local_8._0_1_ = 7;
  FUN_00988f20();
  local_8._0_1_ = 8;
  FUN_00988f20();
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = (byte ***)((uint)local_114[0] & 0xffffff00);
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
  local_dc = local_dc & 0xffffff00;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c = local_3c & 0xffffff00;
  local_8._0_1_ = 0xf;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  pbVar4 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar4 = &DAT_013f0670;
  }
  pcVar3 = "diplomacy";
  do {
    bVar2 = *pbVar4;
    bVar8 = bVar2 < (byte)*pcVar3;
    if (bVar2 != *pcVar3) {
LAB_009fe7f0:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_009fe7f5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar8 = bVar2 < (byte)pcVar3[1];
    if (bVar2 != pcVar3[1]) goto LAB_009fe7f0;
    pbVar4 = pbVar4 + 2;
    pcVar3 = pcVar3 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_009fe7f5:
  if (iVar5 == 0) {
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8 = local_f8 & 0xffffff00;
    FUN_00409350();
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    local_8._0_1_ = 0x11;
    iStack_328 = 0x9fe84e;
    pcVar3 = __itoa(iVar7,local_24c,10);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 0x12;
    FUN_00988fa0();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    iStack_328 = 0x9fe8b7;
    FUN_00408ed0();
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
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xf;
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0xf;
  local_18 = local_334;
  local_334[0] = 0;
  FUN_00408ed0(local_1b8,0,0xffffffff);
  (**(code **)(*local_20 + 0x10))(local_180);
  local_8 = CONCAT31(local_8._1_3_,0x15);
  if ((local_174 - local_178 & 0xfffffff0U) != 0) {
    FUN_00a714a0(0);
    ppppbVar6 = (byte ****)local_114[0];
    if (local_100 < 0x10) {
      ppppbVar6 = local_114;
    }
    pcVar3 = "admin";
    do {
      bVar2 = *(byte *)ppppbVar6;
      bVar8 = bVar2 < (byte)*pcVar3;
      if (bVar2 != *pcVar3) {
LAB_009fe9f7:
        iVar7 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_009fe9fc;
      }
      if (bVar2 == 0) break;
      bVar2 = *(byte *)((int)ppppbVar6 + 1);
      bVar8 = bVar2 < (byte)pcVar3[1];
      if (bVar2 != pcVar3[1]) goto LAB_009fe9f7;
      ppppbVar6 = (byte ****)((int)ppppbVar6 + 2);
      pcVar3 = pcVar3 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_009fe9fc:
    if (iVar7 == 0) {
      local_60 = 2;
    }
    else {
      ppppbVar6 = (byte ****)local_114[0];
      if (local_100 < 0x10) {
        ppppbVar6 = local_114;
      }
      pcVar3 = "paradox";
      do {
        bVar2 = *(byte *)ppppbVar6;
        bVar8 = bVar2 < (byte)*pcVar3;
        if (bVar2 != *pcVar3) {
LAB_009fea40:
          iVar7 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_009fea45;
        }
        if (bVar2 == 0) break;
        bVar2 = *(byte *)((int)ppppbVar6 + 1);
        bVar8 = bVar2 < (byte)pcVar3[1];
        if (bVar2 != pcVar3[1]) goto LAB_009fea40;
        ppppbVar6 = (byte ****)((int)ppppbVar6 + 2);
        pcVar3 = pcVar3 + 2;
      } while (bVar2 != 0);
      iVar7 = 0;
LAB_009fea45:
      if (iVar7 == 0) {
        local_60 = 1;
      }
    }
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_114[0]);
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = (byte ***)((uint)local_114[0] & 0xffffff00);
  }
  if (local_178 != 0) {
    FUN_00463b30(local_174,local_18);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_178);
  }
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1b8[0]);
  }
  local_1a4 = 0xf;
  local_1a8 = 0;
  local_1b8[0] = local_1b8[0] & 0xffffff00;
  local_8 = 0xffffffff;
  FUN_009feb5e();
  return;
}

