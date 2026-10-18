// FUN_0071faa0 @ 0071faa0 body=[[0071faa0, 0071fb6b] [0071fb6f, 0071fbf0] [0071fbf4, 0071fcc1] [0071fcc5, 0071fcf0] [0071fcf4, 0071fd59] [0071fd5d, 0071fe6f] [0071fe73, 0071febb] [0071febf, 0071fee8] [0071feec, 0071ff12] [0071ff16, 0071fff2] [0071fff6, 00720107] [0072010b, 00720153] [00720157, 00720180] [00720184, 007201aa] [007201ae, 0072028a] [0072028e, 007202d6] [007202da, 00720303] [00720307, 0072032d] [00720331, 00720459] [0072045d, 007204bc] [007204c0, 00720588] [0072058c, 00720663] [00720667, 0072068b] [0072068f, 007206b9] [007206bd, 00720721] [00720725, 00720824] [00720828, 0072084c] [00720850, 0072087a] [0072087e, 007208e2] [007208e6, 007209e5] [007209e9, 00720a0a] [00720a0e, 00720a35] [00720a39, 00720b0c] [00720b10, 00720b31] [00720b35, 00720b5c] [00720b60, 00720c52] [00720c56, 00720c7a] [00720c7e, 00720ca0] [00720ca4, 00720ccb] [00720ccf, 00720dae] [00720db2, 00720de1] [00720de5, 00720dfb]]


/* WARNING: Removing unreachable block (ram,0x007208d9) */
/* WARNING: Removing unreachable block (ram,0x00720718) */
/* WARNING: Removing unreachable block (ram,0x0071fedf) */
/* WARNING: Removing unreachable block (ram,0x007202fa) */
/* WARNING: Removing unreachable block (ram,0x00720843) */
/* WARNING: Removing unreachable block (ram,0x00720a01) */
/* WARNING: Removing unreachable block (ram,0x00720177) */
/* WARNING: Removing unreachable block (ram,0x0071fce7) */

void FUN_0071faa0(int param_1,char param_2)

{
  float fVar1;
  uint uVar2;
  undefined1 ***pppuVar3;
  int *piVar4;
  int ***pppiVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  code *pcVar11;
  float10 fVar12;
  uint *puStack_150;
  uint **ppuStack_14c;
  int ***pppiStack_148;
  int ***pppiStack_144;
  int **ppiStack_140;
  uint *puStack_13c;
  char *pcStack_138;
  undefined1 ***pppuStack_134;
  uint uStack_120;
  uint uStack_118;
  undefined1 *puStack_114;
  uint uStack_110;
  undefined1 ***pppuStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int *piStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  int *piStack_cc;
  uint uStack_c8;
  undefined1 ***pppuStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  undefined4 uStack_b4;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 local_90;
  char *local_8c;
  undefined1 local_88 [12];
  undefined4 uStack_7c;
  uint local_78;
  uint *local_74;
  char acStack_70 [8];
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 auStack_5c [3];
  undefined4 uStack_50;
  uint uStack_4c;
  void *pvStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7c5cc;
  pvStack_14 = ExceptionList;
  local_108 = *(uint *)(DAT_012588e8 + 0xb5c);
  local_90 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_8c = *(char **)(DAT_012588e8 + 0xbcc);
  pppuStack_134 = (undefined1 ***)0xd;
  pcStack_138 = "trade_details";
  local_74 = (uint *)0xf;
  local_78 = 0;
  local_88[0] = 0;
  puStack_13c = (uint *)0x71fb28;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  local_c = 0;
  pppuStack_134 = (undefined1 ***)local_88;
  pcStack_138 = (char *)0x71fb44;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x6c))();
  puStack_10 = (undefined1 *)0xffffffff;
  piStack_bc = piVar4;
  if (0xf < local_78) {
    pcStack_138 = local_8c;
                    /* WARNING: Subroutine does not return */
    puStack_13c = (uint *)&UNK_0071fb6c;
    FUN_00aae91b();
  }
  pcStack_138 = (char *)0xb;
  puStack_13c = (uint *)0xe11850;
  local_78 = 0xf;
  uStack_7c = 0;
  local_8c = (char *)((uint)local_8c & 0xffffff00);
  auStack_5c[0] = 0xf;
  uStack_60 = 0;
  acStack_70[0] = '\0';
  ppiStack_140 = (int **)0x71fbac;
  FUN_00409350();
  puStack_10 = (undefined1 *)0x1;
  pcStack_138 = acStack_70;
  puStack_13c = (uint *)0x71fbc8;
  uStack_a0 = (**(code **)(*piVar4 + 0x4c))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_60) {
    puStack_13c = local_74;
                    /* WARNING: Subroutine does not return */
    ppiStack_140 = (int **)&UNK_0071fbf1;
    FUN_00aae91b();
  }
  iStack_9c = *(int *)(iStack_98 + 0x12a0) + *(int *)(*(int *)(param_1 + 0x6c) + 8) * 0x18;
  uStack_60 = 0xf;
  uStack_64 = 0;
  local_74 = (uint *)((uint)local_74 & 0xffffff00);
  if (param_2 != '\0') {
    puStack_13c = (uint *)0xb;
    ppiStack_140 = (int **)0xe1185c;
    uStack_118 = 0xf;
    pppiStack_144 = (int ***)0x71fc55;
    FUN_00409350();
    puStack_13c = &uStack_104;
    pvStack_14 = (void *)0x2;
    ppiStack_140 = *(int ***)(param_1 + 0x6c);
    pppiStack_144 = (int ***)0x71fc71;
    pppiVar5 = (int ***)FUN_005659c0();
    piVar4 = piStack_c0;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,3);
    puStack_13c = (uint *)&stack0xfffffed4;
    ppiStack_140 = (int **)0x71fc8d;
    uStack_f0._4_4_ = (int ***)(**(code **)(*piStack_c0 + 0x3c))();
    ppiStack_140 = (int **)0xffffffff;
    pppiStack_144 = (int ***)0x0;
    ppuStack_14c = (uint **)0x71fca0;
    pppiStack_148 = pppiVar5;
    FUN_00408ed0();
    ppiStack_140 = (int **)0x0;
    pppiStack_148 = (int ***)0x71fcb1;
    pppiStack_144 = pppiVar5;
    FUN_00a5ecc0();
    if (0xf < uStack_f8._4_4_) {
      ppiStack_140 = (int **)local_108;
                    /* WARNING: Subroutine does not return */
      pppiStack_144 = (int ***)&UNK_0071fcc2;
      FUN_00aae91b();
    }
    uStack_18 = 0xffffffff;
    uStack_f8 = 0xf00000000;
    local_108 = local_108 & 0xffffff00;
    ppiStack_140 = (int **)0xe;
    pppiStack_144 = (int ***)0xe11820;
    iStack_ac = 0xf;
    uStack_b0 = 0;
    piStack_c0 = (int *)((uint)piStack_c0 & 0xffffff00);
    pppiStack_148 = (int ***)0x71fd20;
    FUN_00409350();
    uStack_18 = 4;
    ppiStack_140 = &piStack_c0;
    pppiStack_144 = (int ***)0x71fd39;
    iVar6 = (**(code **)(*piVar4 + 0x48))();
    uStack_1c = 0xffffffff;
    if (0xf < uStack_b0) {
      pppiStack_144 = (int ***)pppuStack_c4;
                    /* WARNING: Subroutine does not return */
      pppiStack_148 = (int ***)&UNK_0071fd5a;
      FUN_00aae91b();
    }
    uStack_b0 = 0xf;
    uStack_b4 = 0;
    pppuStack_c4 = (undefined1 ***)((uint)pppuStack_c4 & 0xffffff00);
    if (*(char *)(iStack_a4 + 0x10) == '\0') {
      *(undefined4 *)(iVar6 + 0x6c) = 1;
      *(undefined4 *)(iVar6 + 0x10c) = 1;
      pppiStack_144 = (int ***)0x4;
      pppiStack_148 = (int ***)&DAT_00e11880;
      uStack_f8 = CONCAT44(uStack_f8._4_4_,0xf);
      uStack_fc = 0;
      pppuStack_10c = (undefined1 ***)((uint)pppuStack_10c._1_3_ << 8);
      ppuStack_14c = (uint **)0x71fdb2;
      FUN_00409350();
      uStack_1c = 5;
      pppiStack_144 = (int ***)0x14;
      pppiStack_148 = (int ***)0xe11868;
      pppuStack_134 = (undefined1 ***)((uint)pppuStack_134 & 0xffffff00);
      ppuStack_14c = (uint **)0x71fdd9;
      FUN_00409350();
      pppiStack_144 = (int ***)&pppuStack_10c;
      pppiStack_148 = (int ***)&pppuStack_c4;
      uStack_1c._0_1_ = 6;
      ppuStack_14c = (uint **)0x71fdf3;
      uVar7 = FUN_009a8ee0();
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
      uStack_1c._0_1_ = 7;
      pppiStack_144 = (int ***)0x71fe04;
      iVar6 = FUN_00475500();
      puStack_150 = (uint *)*(undefined8 *)(iVar6 + 0x6c);
      ppuStack_14c = (uint **)((ulonglong)*(undefined8 *)(iVar6 + 0x6c) >> 0x20);
      pppiStack_148 = (int ***)*(undefined8 *)(iVar6 + 0x74);
      pppiStack_144 = (int ***)((ulonglong)*(undefined8 *)(iVar6 + 0x74) >> 0x20);
      puVar8 = (uint *)FUN_009a9880();
      uStack_1c = CONCAT31(uStack_1c._1_3_,8);
      pppiStack_144 = (int ***)&pppuStack_134;
      pppiStack_148 = (int ***)0x71fe41;
      (**(code **)(*piVar4 + 0x3c))();
      pppiStack_148 = (int ***)0xffffffff;
      ppuStack_14c = (uint **)0x0;
      puStack_150 = puVar8;
      FUN_00408ed0();
      pppiStack_148 = (int ***)0x0;
      puStack_150 = (uint *)0x71fe5f;
      ppuStack_14c = (uint **)puVar8;
      FUN_00a5ecc0();
      if (0xf < uStack_d4) {
        pppiStack_148 = (int ***)uStack_e8;
                    /* WARNING: Subroutine does not return */
        ppuStack_14c = (uint **)&UNK_0071fe70;
        FUN_00aae91b();
      }
      uStack_d4 = 0xf;
      uStack_d8 = 0;
      uStack_e8 = uStack_e8 & 0xffffff00;
      uStack_20 = CONCAT31(uStack_20._1_3_,9);
      pppiStack_148 = (int ***)0x71fe98;
      FUN_009adb70();
      if (pppuStack_c4 != (undefined1 ***)0x0) {
        pppiStack_148 = (int ***)0x71feaf;
        FUN_009e6a80();
        pppiStack_148 = (int ***)pppuStack_c4;
                    /* WARNING: Subroutine does not return */
        ppuStack_14c = (uint **)&UNK_0071febc;
        FUN_00aae91b();
      }
      pppuStack_c4 = (undefined1 ***)0x0;
      piStack_c0 = (int *)0x0;
      piStack_bc = (int *)0x0;
      uStack_20 = 0xffffffff;
      pcStack_138 = (char *)((uint)pcStack_138 & 0xffffff00);
      if (0xf < uStack_fc) {
        pppiStack_148 = (int ***)uStack_110;
                    /* WARNING: Subroutine does not return */
        ppuStack_14c = (uint **)&UNK_0071ff13;
        FUN_00aae91b();
      }
      pppiStack_148 = (int ***)0x18;
      ppuStack_14c = (uint **)0xe1189c;
      uStack_fc = 0xf;
      uStack_100 = 0;
      uStack_110 = uStack_110 & 0xffffff00;
      puStack_150 = (uint *)0x71ff37;
      FUN_00409350();
      uStack_20 = 10;
      pppiStack_148 = (int ***)0x11;
      ppuStack_14c = (uint **)0xe11888;
      pcStack_138 = (char *)((uint)pcStack_138 & 0xffffff00);
      puStack_150 = (uint *)0x71ff5e;
      FUN_00409350();
      pppiStack_148 = (int ***)&uStack_110;
      ppuStack_14c = (uint **)&uStack_c8;
      uStack_20._0_1_ = 0xb;
      puStack_150 = (uint *)0x71ff78;
      FUN_009a8ee0();
      uStack_20._0_1_ = 0xc;
      pppiStack_148 = (int ***)0x71ff87;
      iVar6 = FUN_00475500();
      puStack_150 = (uint *)((ulonglong)*(undefined8 *)(iVar6 + 0x6c) >> 0x20);
      ppuStack_14c = (uint **)*(undefined8 *)(iVar6 + 0x74);
      pppiStack_148 = (int ***)((ulonglong)*(undefined8 *)(iVar6 + 0x74) >> 0x20);
      puVar8 = (uint *)FUN_009a9880();
      uStack_20 = CONCAT31(uStack_20._1_3_,0xd);
      pppiStack_148 = (int ***)&pcStack_138;
      ppuStack_14c = (uint **)0x71ffc4;
      (**(code **)(*piStack_cc + 0x3c))();
      ppuStack_14c = (uint **)0xffffffff;
      puStack_150 = (uint *)0x0;
      FUN_00408ed0();
      ppuStack_14c = (uint **)0x0;
      puStack_150 = puVar8;
      FUN_00a5ecc0();
      if (0xf < uStack_d8) {
        ppuStack_14c = (uint **)uStack_f0._4_4_;
                    /* WARNING: Subroutine does not return */
        puStack_150 = (uint *)&UNK_0071fff3;
        FUN_00aae91b();
      }
      uStack_f0._0_5_ = (uint5)(uint)uStack_f0;
      uStack_24 = CONCAT31(uStack_24._1_3_,0xe);
    }
    else {
      if ((*(char *)(iVar6 + 0xe4) == '\0') || (*(char *)(iVar6 + 0x142) != '\0')) {
        *(undefined4 *)(iVar6 + 0x6c) = 0;
        *(undefined4 *)(iVar6 + 0x10c) = 0;
      }
      pppiStack_144 = (int ***)0x3;
      pppiStack_148 = (int ***)&DAT_00e118b8;
      uStack_f8 = CONCAT44(uStack_f8._4_4_,0xf);
      uStack_fc = 0;
      pppuStack_10c = (undefined1 ***)((uint)pppuStack_10c._1_3_ << 8);
      ppuStack_14c = (uint **)0x72004e;
      FUN_00409350();
      uStack_1c = 0xf;
      pppiStack_144 = (int ***)0x14;
      pppiStack_148 = (int ***)0xe11868;
      pppuStack_134 = (undefined1 ***)((uint)pppuStack_134 & 0xffffff00);
      ppuStack_14c = (uint **)0x720071;
      FUN_00409350();
      pppiStack_144 = (int ***)&pppuStack_10c;
      pppiStack_148 = (int ***)&pppuStack_c4;
      uStack_1c._0_1_ = 0x10;
      ppuStack_14c = (uint **)0x72008b;
      uVar7 = FUN_009a8ee0();
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
      uStack_1c._0_1_ = 0x11;
      pppiStack_144 = (int ***)0x72009c;
      iVar6 = FUN_00475500();
      puStack_150 = (uint *)*(undefined8 *)(iVar6 + 0x6c);
      ppuStack_14c = (uint **)((ulonglong)*(undefined8 *)(iVar6 + 0x6c) >> 0x20);
      pppiStack_148 = (int ***)*(undefined8 *)(iVar6 + 0x74);
      pppiStack_144 = (int ***)((ulonglong)*(undefined8 *)(iVar6 + 0x74) >> 0x20);
      puVar8 = (uint *)FUN_009a9880();
      uStack_1c = CONCAT31(uStack_1c._1_3_,0x12);
      pppiStack_144 = (int ***)&pppuStack_134;
      pppiStack_148 = (int ***)0x7200d9;
      (**(code **)(*piVar4 + 0x3c))();
      pppiStack_148 = (int ***)0xffffffff;
      ppuStack_14c = (uint **)0x0;
      puStack_150 = puVar8;
      FUN_00408ed0();
      pppiStack_148 = (int ***)0x0;
      puStack_150 = (uint *)0x7200f7;
      ppuStack_14c = (uint **)puVar8;
      FUN_00a5ecc0();
      if (0xf < uStack_d4) {
        pppiStack_148 = (int ***)uStack_e8;
                    /* WARNING: Subroutine does not return */
        ppuStack_14c = (uint **)&UNK_00720108;
        FUN_00aae91b();
      }
      uStack_d4 = 0xf;
      uStack_d8 = 0;
      uStack_e8 = uStack_e8 & 0xffffff00;
      uStack_20 = CONCAT31(uStack_20._1_3_,0x13);
      pppiStack_148 = (int ***)0x720130;
      FUN_009adb70();
      if (pppuStack_c4 != (undefined1 ***)0x0) {
        pppiStack_148 = (int ***)0x720147;
        FUN_009e6a80();
        pppiStack_148 = (int ***)pppuStack_c4;
                    /* WARNING: Subroutine does not return */
        ppuStack_14c = (uint **)&UNK_00720154;
        FUN_00aae91b();
      }
      pppuStack_c4 = (undefined1 ***)0x0;
      piStack_c0 = (int *)0x0;
      piStack_bc = (int *)0x0;
      uStack_20 = 0xffffffff;
      pcStack_138 = (char *)((uint)pcStack_138 & 0xffffff00);
      if (0xf < uStack_fc) {
        pppiStack_148 = (int ***)uStack_110;
                    /* WARNING: Subroutine does not return */
        ppuStack_14c = (uint **)&UNK_007201ab;
        FUN_00aae91b();
      }
      pppiStack_148 = (int ***)0x18;
      ppuStack_14c = (uint **)0xe118bc;
      uStack_fc = 0xf;
      uStack_100 = 0;
      uStack_110 = uStack_110 & 0xffffff00;
      puStack_150 = (uint *)0x7201cf;
      FUN_00409350();
      uStack_20 = 0x14;
      pppiStack_148 = (int ***)0x11;
      ppuStack_14c = (uint **)0xe11888;
      pcStack_138 = (char *)((uint)pcStack_138 & 0xffffff00);
      puStack_150 = (uint *)0x7201f6;
      FUN_00409350();
      pppiStack_148 = (int ***)&uStack_110;
      ppuStack_14c = (uint **)&uStack_c8;
      uStack_20._0_1_ = 0x15;
      puStack_150 = (uint *)0x720210;
      FUN_009a8ee0();
      uStack_20._0_1_ = 0x16;
      pppiStack_148 = (int ***)0x72021f;
      iVar6 = FUN_00475500();
      puStack_150 = (uint *)((ulonglong)*(undefined8 *)(iVar6 + 0x6c) >> 0x20);
      ppuStack_14c = (uint **)*(undefined8 *)(iVar6 + 0x74);
      pppiStack_148 = (int ***)((ulonglong)*(undefined8 *)(iVar6 + 0x74) >> 0x20);
      puVar8 = (uint *)FUN_009a9880();
      uStack_20 = CONCAT31(uStack_20._1_3_,0x17);
      pppiStack_148 = (int ***)&pcStack_138;
      ppuStack_14c = (uint **)0x72025c;
      (**(code **)(*piStack_cc + 0x3c))();
      ppuStack_14c = (uint **)0xffffffff;
      puStack_150 = (uint *)0x0;
      FUN_00408ed0();
      ppuStack_14c = (uint **)0x0;
      puStack_150 = puVar8;
      FUN_00a5ecc0();
      if (0xf < uStack_d8) {
        ppuStack_14c = (uint **)uStack_f0._4_4_;
                    /* WARNING: Subroutine does not return */
        puStack_150 = (uint *)&UNK_0072028b;
        FUN_00aae91b();
      }
      uStack_f0._0_5_ = (uint5)(uint)uStack_f0;
      uStack_24 = CONCAT31(uStack_24._1_3_,0x18);
    }
    uStack_d8 = 0xf;
    piStack_dc = (int *)0x0;
    ppuStack_14c = (uint **)0x7202b3;
    FUN_009adb70();
    iVar6 = iStack_ac;
    if (uStack_c8 != 0) {
      ppuStack_14c = (uint **)0x7202ca;
      FUN_009e6a80();
      ppuStack_14c = (uint **)uStack_c8;
                    /* WARNING: Subroutine does not return */
      puStack_150 = (uint *)&UNK_007202d7;
      FUN_00aae91b();
    }
    piStack_c0 = (int *)0x0;
    pppuStack_c4 = (undefined1 ***)0x0;
    uStack_c8 = 0;
    uStack_24 = 0xffffffff;
    puStack_13c = (uint *)((uint)puStack_13c & 0xffffff00);
    if (0xf < uStack_100) {
      ppuStack_14c = (uint **)puStack_114;
                    /* WARNING: Subroutine does not return */
      puStack_150 = (uint *)&UNK_0072032e;
      FUN_00aae91b();
    }
    ppuStack_14c = (uint **)0x72035f;
    fVar12 = (float10)FUN_00b350e0();
    uStack_f8 = CONCAT44(uStack_f8._4_4_,(float)fVar12);
    ppuStack_14c = (uint **)0x720382;
    fVar12 = (float10)FUN_00b350e0();
    ppuStack_14c = (uint **)0x1;
    puStack_150 = (uint *)0x1;
    fVar1 = ((float)fVar12 * 2000.0) / (float)(uint *)uStack_f8;
    FUN_00401000();
    FUN_00b31c00();
    (**(code **)(*(int *)(uStack_b0 + 0x54) + 0x1c))();
    pppuStack_10c = (undefined1 ***)0xf;
    uStack_110 = 0;
    uStack_120 = (uint)fVar1 & 0xffffff00;
    FUN_00409350();
    piVar4 = piStack_dc;
    uStack_30 = 0x19;
    piVar9 = (int *)(**(code **)(*piStack_dc + 0x44))();
    (**(code **)(*piVar9 + 0x48))();
    uStack_38 = 0xffffffff;
    if (0xf < puStack_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(0xf);
    }
    FUN_0071f230(param_1);
    puStack_13c = (uint *)0xf;
    ppiStack_140 = (int **)0x0;
    puStack_150 = (uint *)((uint)puStack_150 & 0xffffff00);
    FUN_00409350("automate",8);
    uStack_38 = 0x1a;
    iVar10 = (**(code **)(*piVar4 + 0x48))(&puStack_150);
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_118) {
      puStack_13c = (uint *)0x0;
                    /* WARNING: Subroutine does not return */
      ppiStack_140 = (int **)&UNK_007204bd;
      FUN_00aae91b();
    }
    uStack_118 = 0xf;
    if ((bool)*(char *)(iVar6 + 0x11) != (*(int *)(iVar10 + 0x6c) == 1)) {
      if (*(char *)(iVar6 + 0x11) == '\0') {
        if ((*(char *)(iVar10 + 0xe4) == '\0') || (*(char *)(iVar10 + 0x142) != '\0')) {
          *(undefined4 *)(iVar10 + 0x6c) = 0;
          *(undefined4 *)(iVar10 + 0x10c) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar10 + 0x6c) = 1;
        *(undefined4 *)(iVar10 + 0x10c) = 1;
      }
    }
  }
  pvStack_14 = (void *)0xffffffff;
  puStack_13c = (uint *)0xd;
  ppiStack_140 = (int **)0xe11830;
  uStack_f0._0_4_ = 0xf;
  uStack_f8 = uStack_f8 & 0xffffffff;
  uStack_104 = uStack_104 & 0xffffff00;
  pppiStack_144 = (int ***)0x72052a;
  FUN_00409350();
  pvStack_14 = (void *)0x1b;
  uStack_e0 = (int **)CONCAT13(*(undefined1 *)(iStack_9c + 0x11),(undefined3)uStack_e0);
  puStack_13c = &uStack_104;
  ppiStack_140 = (int **)0x720553;
  piVar4 = (int *)(**(code **)(*piStack_c0 + 0x34))();
  if (uStack_e4._3_1_ == '\0') {
    pcVar11 = *(code **)(*piVar4 + 0xb8);
  }
  else {
    pcVar11 = *(code **)(*piVar4 + 0xbc);
  }
  ppiStack_140 = (int **)0x72056d;
  (*pcVar11)();
  uStack_18 = 0xffffffff;
  if (0xf < uStack_f8._4_4_) {
    ppiStack_140 = (int **)local_108;
                    /* WARNING: Subroutine does not return */
    pppiStack_144 = (int ***)&UNK_00720589;
    FUN_00aae91b();
  }
  ppiStack_140 = *(int ***)(*(int *)(param_1 + 0x6c) + 8);
  pppiStack_144 = (int ***)0x7205a6;
  FUN_00539760();
  ppiStack_140 = (int **)0x13;
  pppiStack_144 = (int ***)0xe118d8;
  uStack_f8._0_4_ = (uint *)0x0;
  uStack_f8._4_4_ = 0xf;
  local_108 = local_108 & 0xffffff00;
  pppiStack_148 = (int ***)0x7205c6;
  FUN_00409350();
  uStack_18 = 0x1c;
  puStack_114 = (undefined1 *)&pppiStack_144;
  pppiStack_144 = uStack_f0._4_4_;
  ppiStack_140 = (int **)uStack_e8;
  pppiStack_148 = (int ***)0x2;
  ppuStack_14c = (uint **)&stack0xfffffed0;
  puStack_150 = (uint *)0x7205f3;
  ppiStack_140 = (int **)FUN_00988bb0();
  pppiStack_144 = (int ***)&uStack_e0;
  uStack_18._0_1_ = 0x1d;
  pppiStack_148 = (int ***)0x720610;
  uVar7 = FUN_0042c180();
  pppuVar3 = pppuStack_c4;
  uStack_18 = CONCAT31(uStack_18._1_3_,0x1e);
  ppiStack_140 = (int **)&local_108;
  pppiStack_144 = (int ***)0x72062f;
  uStack_118 = (*(code *)(*pppuStack_c4)[0xf])();
  pppiStack_144 = (int ***)0xffffffff;
  pppiStack_148 = (int ***)0x0;
  puStack_150 = (uint *)0x720642;
  ppuStack_14c = (uint **)uVar7;
  FUN_00408ed0();
  pppiStack_144 = (int ***)0x0;
  ppuStack_14c = (uint **)0x720653;
  pppiStack_148 = (int ***)uVar7;
  FUN_00a5ecc0();
  if (0xf < uStack_d0) {
    pppiStack_144 = uStack_e4;
                    /* WARNING: Subroutine does not return */
    pppiStack_148 = (int ***)&UNK_00720664;
    FUN_00aae91b();
  }
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  uStack_e4 = (int ***)((uint)uStack_e4 & 0xffffff00);
  if (0xf < uStack_120) {
    pppiStack_144 = (int ***)pppuStack_134;
                    /* WARNING: Subroutine does not return */
    pppiStack_148 = (int ***)&UNK_0072068c;
    FUN_00aae91b();
  }
  uStack_1c = 0xffffffff;
  uVar2 = (uint)pppuStack_134 >> 8;
  pppuStack_134 = (undefined1 ***)(uVar2 << 8);
  if (0xf < (uint *)uStack_f8) {
    pppiStack_144 = (int ***)pppuStack_10c;
                    /* WARNING: Subroutine does not return */
    pppiStack_148 = (int ***)&UNK_007206ba;
    FUN_00aae91b();
  }
  pppiStack_144 = (int ***)0x12;
  pppiStack_148 = (int ***)0xe11600;
  uStack_f0 = 0;
  pppuStack_134 = (undefined1 ***)(uVar2 << 8);
  ppuStack_14c = (uint **)0x7206e7;
  FUN_00409350();
  uStack_1c = 0x1f;
  pppiStack_144 = (int ***)&pppuStack_134;
  pppiStack_148 = (int ***)0x720704;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  uStack_20 = 0xffffffff;
  pcStack_138 = (char *)((uint)pcStack_138 & 0xffffff00);
  piVar4 = *(int **)(iVar6 + 0x60);
  if (piVar4 != (int *)0x0) {
    do {
      iVar6 = *piVar4;
      piVar4 = (int *)piVar4[2];
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + -0x1c;
      }
      if (*(int *)(iVar6 + 0x28) == *(int *)(param_1 + 0x6c)) {
        uStack_f8._4_4_ = *(undefined4 *)(iVar6 + 0x30);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,*(undefined4 *)(iVar6 + 0x34));
        break;
      }
    } while (piVar4 != (int *)0x0);
  }
  pppiStack_148 = (int ***)0x17;
  ppuStack_14c = (uint **)0xe118fc;
  uStack_fc = 0xf;
  uStack_100 = 0;
  uStack_110 = uStack_110 & 0xffffff00;
  puStack_150 = (uint *)0x72078b;
  FUN_00409350();
  uStack_20 = 0x20;
  ppuStack_14c = (uint **)uStack_f8._4_4_;
  pppiStack_148 = (int ***)(uint)uStack_f0;
  puStack_150 = (uint *)0x2;
  pppiStack_148 = (int ***)FUN_00988bb0();
  ppuStack_14c = (uint **)&uStack_e8;
  uStack_20._0_1_ = 0x21;
  puStack_150 = (uint *)0x7207d5;
  puVar8 = (uint *)FUN_0042c180();
  uStack_20 = CONCAT31(uStack_20._1_3_,0x22);
  pppiStack_148 = (int ***)&uStack_110;
  ppuStack_14c = (uint **)0x7207f0;
  (*(code *)(*pppuVar3)[0xf])();
  ppuStack_14c = (uint **)0xffffffff;
  puStack_150 = (uint *)0x0;
  FUN_00408ed0();
  ppuStack_14c = (uint **)0x0;
  puStack_150 = puVar8;
  FUN_00a5ecc0();
  if (0xf < uStack_d8) {
    ppuStack_14c = (uint **)uStack_f0._4_4_;
                    /* WARNING: Subroutine does not return */
    puStack_150 = (uint *)&UNK_00720825;
    FUN_00aae91b();
  }
  uStack_d8 = 0xf;
  piStack_dc = (int *)0x0;
  uStack_f0._0_5_ = (uint5)(uint)uStack_f0;
  uStack_24 = 0xffffffff;
  uVar2 = (uint)puStack_13c >> 8;
  puStack_13c = (uint *)(uVar2 << 8);
  if (0xf < uStack_100) {
    ppuStack_14c = (uint **)puStack_114;
                    /* WARNING: Subroutine does not return */
    puStack_150 = (uint *)&UNK_0072087b;
    FUN_00aae91b();
  }
  ppuStack_14c = (uint **)0xe;
  puStack_150 = (uint *)0xe11614;
  uStack_f8 = 0;
  puStack_13c = (uint *)(uVar2 << 8);
  FUN_00409350();
  uStack_24 = 0x23;
  ppuStack_14c = &puStack_13c;
  puStack_150 = (uint *)0x7208c5;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  uStack_28 = 0xffffffff;
  ppiStack_140 = (int **)((uint)ppiStack_140 & 0xffffff00);
  piVar4 = *(int **)(iVar6 + 0x60);
  if (piVar4 != (int *)0x0) {
    do {
      iVar6 = *piVar4;
      piVar4 = (int *)piVar4[2];
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + -0x1c;
      }
      if (*(int *)(iVar6 + 0x28) == *(int *)(param_1 + 0x6c)) {
        uStack_fc = *(uint *)(iVar6 + 0x30);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,*(undefined4 *)(iVar6 + 0x34));
        break;
      }
    } while (piVar4 != (int *)0x0);
  }
  puStack_150 = (uint *)0x14;
  uStack_104 = 0xf;
  local_108 = 0;
  uStack_118 = uStack_118 & 0xffffff00;
  FUN_00409350();
  uStack_28 = 0x24;
  puStack_150 = (uint *)uStack_f8;
  puStack_150 = (uint *)FUN_00988bb0();
  uStack_28._0_1_ = 0x25;
  FUN_0042c180();
  uStack_28 = CONCAT31(uStack_28._1_3_,0x26);
  puStack_150 = &uStack_118;
  (*(code *)(*pppuVar3)[0xf])();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if ((int **)0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_e0 = (int **)0xf;
  uStack_e4 = (int ***)0x0;
  uStack_f8._0_5_ = ZEXT45((uint *)uStack_f8);
  uStack_2c = 0xffffffff;
  pppuStack_134 = (undefined1 ***)0x0;
  pppiStack_144 = (int ***)((uint)pppiStack_144 & 0xffffff00);
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_108 = 0xf;
  pppuStack_10c = (undefined1 ***)0x0;
  FUN_00409350();
  uStack_2c = 0x27;
  FUN_00988bb0(&pppiStack_144);
  uStack_2c._0_1_ = 0x28;
  uVar7 = FUN_0042c180();
  uStack_2c = CONCAT31(uStack_2c._1_3_,0x29);
  (*(code *)(*pppuVar3)[0xf])();
  FUN_00408ed0(uVar7);
  FUN_00a5ecc0();
  if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_e4 = (int ***)0xf;
  uStack_e8 = 0;
  uStack_f8 = uStack_f8 & 0xffffffffffffff00;
  if ((undefined1 ***)0xf < pppuStack_134) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_30 = 0xffffffff;
  pppuStack_134 = (undefined1 ***)0xf;
  pcStack_138 = (char *)0x0;
  pppiStack_148 = (int ***)((uint)pppiStack_148 & 0xffffff00);
  if ((undefined1 ***)0xf < pppuStack_10c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pppuStack_10c = (undefined1 ***)0xf;
  uStack_110 = 0;
  FUN_00409350();
  uStack_30 = 0x2a;
  pppuStack_134 = (undefined1 ***)0xf;
  pcStack_138 = (char *)0x0;
  pppiStack_148 = (int ***)((uint)pppiStack_148 & 0xffffff00);
  FUN_00409350();
  uStack_30._0_1_ = 0x2b;
  FUN_00988bb0(&uStack_d8,3);
  uStack_30._0_1_ = 0x2c;
  uVar7 = FUN_00988f20();
  uStack_30 = CONCAT31(uStack_30._1_3_,0x2d);
  (*(code *)(*pppuVar3)[0xf])();
  FUN_00408ed0(uVar7,0);
  FUN_00a5ecc0(uVar7);
  if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_e8 = 0xf;
  uStack_f0 = uStack_f0 & 0xffffffff;
  uStack_fc = uStack_fc & 0xffffff00;
  if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_c8 = 0xf;
  piStack_cc = (int *)0x0;
  piStack_dc = (int *)((uint)piStack_dc & 0xffffff00);
  if ((char *)0xf < pcStack_138) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_34 = 0xffffffff;
  pcStack_138 = (char *)0xf;
  puStack_13c = (uint *)0x0;
  ppuStack_14c = (uint **)((uint)ppuStack_14c & 0xffffff00);
  if (0xf < uStack_110) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(piStack_c0[0x15] + 0x10))();
  fVar12 = (float10)FUN_0071fa50();
  piStack_c0 = (int *)(float)fVar12;
  uStack_64 = 0xf;
  uStack_68 = 0;
  local_78 = local_78 & 0xffffff00;
  FUN_00409350("slider_value");
  uStack_34 = 0x2e;
  uVar7 = FUN_00988d00(auStack_5c);
  uStack_34 = CONCAT31(uStack_34._1_3_,0x2f);
  (*(code *)(*pppuVar3)[0xf])();
  FUN_00408ed0(uVar7,0,0xffffffff);
  FUN_00a5ecc0(uVar7,0);
  if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_60);
  }
  uStack_4c = 0xf;
  uStack_50 = 0;
  uStack_60 = uStack_60 & 0xffffff00;
  if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_7c);
  }
  ExceptionList = pvStack_40;
  return;
}

