// FUN_005d6580 @ 005d6580  (requested 005D6580, first bytes: 55 8B EC 6A FF 68 75 FA)


undefined1 * FUN_005d6580(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int *in_ECX;
  int iVar9;
  char local_1c4 [32];
  undefined1 local_1a4 [20];
  uint local_190;
  undefined4 local_180;
  uint local_17c;
  undefined **local_174;
  undefined4 local_170;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_14c;
  undefined1 local_148;
  undefined1 local_144 [20];
  undefined1 local_130 [20];
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  undefined4 local_100;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  int *local_8c;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined4 *local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined4 *local_50;
  int *local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7fa75;
  local_10 = ExceptionList;
  local_100 = 0;
  local_e8 = 0xf;
  local_ec = 0;
  local_fc[0] = local_fc[0] & 0xffffff00;
  local_8 = 1;
  if ((char)in_ECX[0x59] != '\0') {
    ExceptionList = &local_10;
    uVar3 = FUN_00475d50();
    local_8._0_1_ = 2;
    FUN_00408ed0(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0(local_fc);
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  ExceptionList = &local_10;
  local_4c = in_ECX;
  FUN_00409350();
  local_8._0_1_ = 3;
  FUN_009a8ee0();
  local_8 = CONCAT31(local_8._1_3_,5);
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  if ((((in_ECX[0x37] == 0) || (in_ECX[0x31] != *(int *)(in_ECX[0x37] + 300))) ||
      (in_ECX[0x1d] != 0)) || ((char)in_ECX[0x41] != '\0')) {
    piVar4 = (int *)FUN_005dc2a0();
  }
  else {
    piVar4 = (int *)FUN_005dc200();
  }
  iVar9 = *piVar4;
  cVar2 = (**(code **)(*(int *)in_ECX[0x36] + 0x20))();
  if (cVar2 != '\0') {
    iVar9 = iVar9 + *(int *)(*(int *)(in_ECX[0x36] + 0x48) + 0x38);
  }
  local_74 = in_ECX[0x30];
  local_8c = in_ECX + 0x30;
  __alldiv((longlong)
           (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0x31] * 4) + 0xbcc) +
                    0x20) + 1000) * (longlong)iVar9);
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350();
  local_50 = (undefined4 *)&stack0xfffffe2c;
  local_8._0_1_ = 6;
  FUN_00988970();
  local_8._0_1_ = 7;
  puVar5 = (undefined4 *)FUN_009a8ee0();
  local_8._0_1_ = 8;
  puVar6 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 9;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = local_144;
    *puVar6 = &PTR_FUN_00e38ecc;
    puVar6[7] = 0xf;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    local_50 = puVar6;
    FUN_00408ed0(local_6c);
    *puVar6 = &PTR_FUN_00e38f08;
    local_70 = puVar6 + 9;
    *local_70 = *puVar5;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    local_8._0_1_ = 0xb;
    FUN_009a97b0();
  }
  local_8._0_1_ = 8;
  local_50 = puVar6;
  FUN_009e6810();
  local_8._0_1_ = 0xc;
  FUN_009adb70();
  if (local_84 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar9 = FUN_00475500();
  uVar3 = FUN_009a9880((int)*(undefined8 *)(iVar9 + 0x6c),
                       (int)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20));
  local_8._0_1_ = 0xd;
  FUN_00448aa0(uVar3);
  local_8._0_1_ = 5;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448740();
  iVar9 = local_4c[0x37];
  local_170 = *(undefined4 *)(iVar9 + 0x88);
  local_174 = CModifier::vftable;
  FUN_005dac60();
  local_70 = &local_15c;
  local_15c = 0;
  local_158 = 0;
  local_154 = 0;
  local_8._0_1_ = 0xf;
  FUN_005daad0();
  local_14c = *(undefined4 *)(iVar9 + 0xac);
  local_148 = *(undefined1 *)(iVar9 + 0xb0);
  local_8._0_1_ = 0x10;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350();
  local_70 = (undefined4 *)&stack0xfffffe28;
  local_8._0_1_ = 0x11;
  uVar3 = FUN_0044c7b0(local_2c,2);
  local_8._0_1_ = 0x12;
  FUN_00448aa0(uVar3);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x10;
  local_18 = 0xf;
  local_1c = 0;
  uVar1 = local_2c[0] >> 8;
  local_2c[0] = uVar1 << 8;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = uVar1 << 8;
  FUN_00409350();
  local_8._0_1_ = 0x13;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x14;
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  FUN_00409350();
  FUN_004b3c40();
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  local_8._0_1_ = 0x16;
  pcVar7 = local_1c4;
  puVar5 = local_50;
  if ((int)local_50 < 0) {
    puVar5 = (undefined4 *)-(int)local_50;
    local_1c4[0] = '-';
    pcVar7 = local_1c4 + 1;
  }
  __itoa((int)puVar5 / 1000,pcVar7,10);
  pcVar7 = local_1c4;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0x17;
  FUN_009a8ee0();
  local_8._0_1_ = 0x18;
  iVar9 = FUN_00475500();
  FUN_009a9880((int)*(undefined8 *)(iVar9 + 0x6c),
               (int)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20));
  local_8._0_1_ = 0x19;
  FUN_00988f20();
  local_8._0_1_ = 0x1a;
  FUN_00988f20();
  local_8._0_1_ = 0x1b;
  uVar3 = FUN_00988f20();
  local_8._0_1_ = 0x1c;
  FUN_00448aa0(uVar3);
  if (0xf < local_17c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_17c = 0xf;
  local_180 = 0;
  local_190 = local_190 & 0xffffff00;
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_108 = 0xf;
  local_10c = 0;
  local_11c = local_11c & 0xffffff00;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_8._0_1_ = 0x1d;
  FUN_009adb70();
  if (local_84 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x10;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_4c[0x1c] != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x1e;
    local_70 = (undefined4 *)&stack0xfffffe2c;
    FUN_00988970();
    local_8._0_1_ = 0x1f;
    FUN_0042c180();
    local_8._0_1_ = 0x20;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 0x21;
    FUN_00448aa0(uVar3);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x10;
    local_108 = 0xf;
    local_10c = 0;
    local_11c = local_11c & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0x10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x22;
  piVar4 = (int *)(**(code **)(*local_4c + 0x78))();
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_8._0_1_ = 0x23;
  pcVar8 = __itoa(*piVar4 / 1000,local_1c4,10);
  pcVar7 = pcVar8;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar8);
  local_8._0_1_ = 0x24;
  FUN_00988fa0();
  local_8._0_1_ = 0x25;
  uVar3 = FUN_00988f20();
  local_8._0_1_ = 0x26;
  FUN_00448aa0(uVar3,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x10;
  local_58 = 0xf;
  local_5c = 0;
  uVar1 = local_6c[0] >> 8;
  local_6c[0] = uVar1 << 8;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = uVar1 << 8;
  FUN_00409350("ATTRITION_MAX");
  local_8._0_1_ = 0x27;
  FUN_009a8ee0(local_1a4);
  local_8._0_1_ = 0x29;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("VALUE");
  local_8._0_1_ = 0x2a;
  FUN_009888f0();
  local_8._0_1_ = 0x2b;
  FUN_009a8ee0(local_88);
  local_8._0_1_ = 0x2c;
  FUN_009a9a90();
  local_8._0_1_ = 0x2b;
  FUN_009a9740();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x29;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar9 = FUN_00475500();
  uVar3 = FUN_009a9880((int)*(undefined8 *)(iVar9 + 0x6c),
                       (int)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20),
                       (int)*(undefined8 *)(iVar9 + 0x74));
  local_8._0_1_ = 0x2d;
  FUN_00448aa0(uVar3,0);
  local_8._0_1_ = 0x29;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  FUN_00409350("REINFORCE_INFO_TEXT");
  local_8._0_1_ = 0x2e;
  FUN_009a8ee0(local_130);
  local_8._0_1_ = 0x30;
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("VALUE");
  local_8._0_1_ = 0x31;
  FUN_005c8970(local_4c,&local_70);
  FUN_00988d00(local_48);
  local_8._0_1_ = 0x32;
  FUN_009a8ee0(local_88);
  local_8._0_1_ = 0x33;
  FUN_009a9a90();
  local_8._0_1_ = 0x32;
  FUN_009a9740();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x30;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("LOCAL");
  local_8._0_1_ = 0x34;
  FUN_005d7420();
  FUN_00988d00(local_48);
  local_8._0_1_ = 0x35;
  FUN_009a9980();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x30;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("COUNTRY");
  local_8._0_1_ = 0x36;
  local_74 = *local_8c;
  FUN_00988d00(local_48);
  local_8._0_1_ = 0x37;
  FUN_009a9980();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x30;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar9 = FUN_00475500();
  FUN_009a9880((int)*(undefined8 *)(iVar9 + 0x6c),
               (int)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20),
               (int)*(undefined8 *)(iVar9 + 0x74));
  local_8._0_1_ = 0x38;
  uVar3 = FUN_00988fa0();
  local_8._0_1_ = 0x39;
  FUN_00448aa0(uVar3,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x30;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(local_fc,0);
  local_100 = 1;
  local_8._0_1_ = 0x29;
  FUN_009a9740();
  local_8._0_1_ = 0x10;
  FUN_009a9740();
  FUN_0044be00();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_009a9740();
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

