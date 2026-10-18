// FUN_006f77b0 @ 006f77b0 body=[[006f77b0, 006f78c1] [006f78c5, 006f7b27] [006f7b2b, 006f7b5a] [006f7b5e, 006f7b88] [006f7b8c, 006f7bb6] [006f7bba, 006f7bfa] [006f7bfe, 006f7c24] [006f7c28, 006f7c51] [006f7c55, 006f7c70] [006f7c74, 006f7c8f] [006f7c93, 006f7cb4] [006f7cb8, 006f7ccc]]


void FUN_006f77b0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int in_ECX;
  char *pcVar8;
  undefined4 unaff_EBX;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined1 uStack_138;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined1 uStack_11c;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined1 uStack_100;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined1 uStack_e4;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  uint uStack_b8;
  undefined4 uStack_b4;
  char acStack_ac [4];
  undefined1 auStack_a8 [16];
  uint uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_74;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_58;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_3c;
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9dcf5;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x50) + 0x18) + 0x34))();
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x20))();
  if (*(int **)(in_ECX + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1c4) + 4))(1);
  }
  iVar2 = DAT_012588e8;
  iVar5 = DAT_012587e4;
  *(undefined4 *)(in_ECX + 0x1c4) = 0;
  uStack_13c = *(uint *)(iVar2 + 0xb5c);
  iVar5 = *(int *)(*(int *)(iVar5 + 4) + *(int *)(iVar2 + 0xb60) * 4);
  if ((*(char *)(iVar5 + 0x31) == '\0') ||
     (uStack_154 = CONCAT13(1,(undefined3)uStack_154), *(char *)(iVar5 + 0xb20) == '\0')) {
    uStack_154 = uStack_154 & 0xffffff;
  }
  uStack_94 = 0xf;
  uStack_98 = 0;
  auStack_a8[0] = 0;
  FUN_00409350();
  uStack_c = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(auStack_a8);
  if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
    pcVar4 = *(code **)(*piVar3 + 0xbc);
  }
  else {
    pcVar4 = *(code **)(*piVar3 + 0xb8);
  }
  (*pcVar4)();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00702ed0();
  if (((*(char *)(in_ECX + 0x3b4) != '\0') && (*(int *)(in_ECX + 0x1c8) == 0)) &&
     (*(char *)(in_ECX + 0xc5) == '\0')) {
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x7c) + 0x2c))();
    if (*(int *)(iVar5 + 8) == 0) {
      FUN_006f83b0();
    }
    *(undefined1 *)(in_ECX + 0x3b4) = 0;
  }
  if (((*(char *)(in_ECX + 0x3c4) != '\0') && (*(int *)(in_ECX + 0x1c8) == 1)) &&
     (*(char *)(in_ECX + 0x3c5) == '\0')) {
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x80) + 0x2c))();
    if (*(int *)(iVar5 + 8) == 0) {
      FUN_006f83b0();
    }
    *(undefined1 *)(in_ECX + 0x3c4) = 0;
  }
  uStack_b4 = 0xf;
  uStack_b8 = 0;
  auStack_c8[0] = 0;
  FUN_00409350("PRODUCTION_PROJECTS_TAB",0x17);
  puStack_10 = (undefined1 *)0x1;
  uStack_124 = 0xf;
  uStack_128 = 0;
  uStack_138 = 0;
  FUN_00409350("tab_popprojects_text",0x14);
  puStack_10._0_1_ = 2;
  uStack_108 = 0xf;
  uStack_10c = 0;
  uStack_11c = 0;
  FUN_00409350(&DAT_00defdfc,1);
  iVar5 = FUN_006e21a0();
  uStack_ec = 0xf;
  uStack_f0 = 0;
  uStack_100 = 0;
  puStack_10._0_1_ = 4;
  pcVar6 = __itoa(iVar5,acStack_ac,10);
  pcVar8 = pcVar6;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
  puStack_10._0_1_ = 5;
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  uStack_e4 = 0;
  FUN_00409350(&DAT_00defdf4,1);
  puStack_10._0_1_ = 6;
  uStack_140 = FUN_009a8ee0(&uStack_154,auStack_c8);
  puStack_10._0_1_ = 7;
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  puStack_10._0_1_ = 8;
  FUN_00988f20();
  puStack_10._0_1_ = 9;
  FUN_00988f20();
  puStack_10._0_1_ = 10;
  uVar7 = FUN_00988f20();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xb);
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x3c))();
  FUN_00408ed0(uVar7,0,0xffffffff);
  FUN_00a5ecc0();
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_58);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_90);
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_74);
  }
  uStack_60 = 0xf;
  uStack_64 = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_3c);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xc);
  FUN_009adb70();
  if (uStack_154 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_154);
  }
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_e8);
  }
  uStack_d4 = 0xf;
  uStack_d8 = 0;
  uStack_e8 = uStack_e8 & 0xffffff00;
  if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_104);
  }
  uStack_f0 = 0xf;
  uStack_f4 = 0;
  uStack_104 = uStack_104 & 0xffffff00;
  if (0xf < uStack_10c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_120);
  }
  uStack_10c = 0xf;
  uStack_110 = 0;
  uStack_120 = uStack_120 & 0xffffff00;
  if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_13c);
  }
  uStack_128 = 0xf;
  uStack_12c = 0;
  uStack_13c = uStack_13c & 0xffffff00;
  if (0xf < uStack_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_cc);
  }
  ExceptionList = pvStack_1c;
  return;
}

