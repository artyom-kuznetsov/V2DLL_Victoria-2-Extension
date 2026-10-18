// FUN_007028a0 @ 007028a0 body=[[007028a0, 00702987] [0070298b, 00702c1d] [00702c21, 00702c50] [00702c54, 00702c7e] [00702c82, 00702cac] [00702cb0, 00702cf0] [00702cf4, 00702d0f] [00702d13, 00702d33] [00702d37, 00702d52] [00702d56, 00702d77] [00702d7b, 00702da5] [00702da9, 00702dbd]]


void FUN_007028a0(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint in_ECX;
  char *pcVar7;
  char cStack_159;
  undefined4 uStack_158;
  uint local_154 [4];
  uint uStack_144;
  undefined1 uStack_140;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined1 uStack_124;
  undefined4 uStack_118;
  uint uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined1 uStack_108;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined1 uStack_ec;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  char acStack_d0 [4];
  undefined1 local_cc [16];
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_88;
  uint uStack_84;
  uint uStack_7c;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_60;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 local_20;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9da38;
  pvStack_14 = ExceptionList;
  local_20 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  if ((*(char *)(iVar4 + 0x31) == '\0') ||
     (uStack_158 = CONCAT13(1,(undefined3)uStack_158), *(char *)(iVar4 + 0xb20) == '\0')) {
    uStack_158 = uStack_158 & 0xffffff;
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = 0;
  ExceptionList = &pvStack_14;
  local_154[0] = in_ECX;
  FUN_00409350();
  local_c = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_cc);
  if (cStack_159 == '\0') {
    pcVar3 = *(code **)(*piVar2 + 0xbc);
  }
  else {
    pcVar3 = *(code **)(*piVar2 + 0xb8);
  }
  (*pcVar3)();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_006f3c70();
  iVar4 = *(int *)(in_ECX + 0x1c8);
  if (iVar4 == 0) {
    FUN_006f3e70();
  }
  else if (iVar4 == 4) {
    FUN_007046b0();
  }
  else if (iVar4 == 3) {
    FUN_00704be0();
  }
  else if (iVar4 == 1) {
    FUN_006f7140();
  }
  else if (iVar4 == 2) {
    FUN_006f3c70();
    FUN_006f53a0(in_ECX,1);
  }
  if ((*(int *)(in_ECX + 0x1c4) != 0) && (*(int *)(*(int *)(in_ECX + 0x1c4) + 0x28) != 0)) {
    FUN_006fa170();
    in_ECX = uStack_158;
  }
  if (((*(int *)(in_ECX + 0x3b8) != 0) &&
      (iVar4 = *(int *)(*(int *)(in_ECX + 0x3b8) + 4), iVar4 != 0)) &&
     (*(char *)(iVar4 + 0x67) != '\0')) {
    FUN_00477ad0();
  }
  if (((*(int *)(in_ECX + 0x474) != 0) &&
      (iVar4 = *(int *)(*(int *)(in_ECX + 0x474) + 8), iVar4 != 0)) &&
     (*(char *)(iVar4 + 0x67) != '\0')) {
    FUN_0043e200();
  }
  uStack_9c = 0xf;
  uStack_a0 = 0;
  auStack_b0[0] = 0;
  FUN_00409350("PRODUCTION_PROJECTS_TAB",0x17);
  puStack_10 = (undefined1 *)0x1;
  uStack_d8 = 0xf;
  uStack_dc = 0;
  uStack_ec = 0;
  FUN_00409350("tab_popprojects_text",0x14);
  puStack_10._0_1_ = 2;
  uStack_12c = 0xf;
  uStack_130 = 0;
  uStack_140 = 0;
  FUN_00409350(&DAT_00defdfc,1);
  iVar4 = FUN_006e21a0();
  uStack_110 = 0xf;
  uStack_114 = 0;
  uStack_124 = 0;
  puStack_10._0_1_ = 4;
  pcVar5 = __itoa(iVar4,acStack_d0,10);
  pcVar7 = pcVar5;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
  puStack_10._0_1_ = 5;
  uStack_f4 = 0xf;
  uStack_f8 = 0;
  uStack_108 = 0;
  FUN_00409350(&DAT_00defdf4,1);
  puStack_10._0_1_ = 6;
  FUN_009a8ee0(local_154,auStack_b0);
  puStack_10._0_1_ = 7;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  puStack_10._0_1_ = 8;
  FUN_00988f20();
  puStack_10._0_1_ = 9;
  FUN_00988f20();
  puStack_10._0_1_ = 10;
  uVar6 = FUN_00988f20();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xb);
  (**(code **)(**(int **)(uStack_158 + 0x4c) + 0x3c))();
  FUN_00408ed0(uVar6,0,0xffffffff);
  FUN_00a5ecc0();
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_98);
  }
  uStack_84 = 0xf;
  uStack_88 = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_7c);
  }
  uStack_68 = 0xf;
  uStack_6c = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_60);
  }
  uStack_4c = 0xf;
  uStack_50 = 0;
  uStack_60 = uStack_60 & 0xffffff00;
  if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_44);
  }
  uStack_30 = 0xf;
  uStack_34 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xc);
  FUN_009adb70();
  if (local_154[0] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_154[0]);
  }
  local_154[0] = 0;
  local_154[1] = 0;
  local_154[2] = 0;
  if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_10c);
  }
  uStack_f8 = 0xf;
  uStack_fc = 0;
  uStack_10c = uStack_10c & 0xffffff00;
  if (0xf < uStack_114) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_128);
  }
  uStack_114 = 0xf;
  uStack_118 = 0;
  uStack_128 = uStack_128 & 0xffffff00;
  if (0xf < uStack_130) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_144);
  }
  uStack_130 = 0xf;
  uStack_134 = 0;
  uStack_144 = uStack_144 & 0xffffff00;
  if (0xf < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_f0);
  }
  uStack_dc = 0xf;
  uStack_e0 = 0;
  uStack_f0 = uStack_f0 & 0xffffff00;
  if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_b4);
  }
  ExceptionList = pvStack_1c;
  return;
}

