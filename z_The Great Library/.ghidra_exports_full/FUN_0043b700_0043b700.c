// FUN_0043b700 @ 0043b700 body=[[0043b700, 0043b7cf] [0043b7d3, 0043b84c] [0043b850, 0043b9e6] [0043b9ea, 0043ba0f] [0043ba13, 0043ba38] [0043ba3c, 0043ba61] [0043ba65, 0043ba84] [0043ba88, 0043ba9e] [0043baa2, 0043bab8] [0043babc, 0043bad5] [0043bad9, 0043baec] [0043baf0, 0043bb05]]


undefined1 * FUN_0043b700(int *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char local_138 [52];
  uint local_104;
  uint local_fc;
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
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b77748;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_30 = (int)((double)((*param_1 + -43800000) / 0x18) / 365.0);
  local_38 = 1;
  FUN_009c5310();
  local_8 = 1;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8._0_1_ = 4;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar2 = (*param_1 + -43800000) / 0x18;
  iVar7 = 0;
  for (iVar4 = (iVar2 - (int)((float)(int)((double)iVar2 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar4; iVar4 = iVar4 - (&DAT_00f1027c)[iVar7]) {
    iVar7 = iVar7 + 1;
  }
  iVar6 = 0;
  iVar4 = 0;
  param_1 = (int *)0x0;
  local_34 = 0;
  if (1 < iVar7) {
    do {
      iVar6 = iVar6 + (&DAT_00f1027c)[iVar4];
      param_1 = (int *)((int)param_1 + (&DAT_00f10280)[iVar4]);
      iVar4 = iVar4 + 2;
    } while (iVar4 < iVar7 + -1);
  }
  iVar8 = 0;
  if (iVar4 < iVar7) {
    iVar8 = (&DAT_00f1027c)[iVar4];
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  local_8._0_1_ = 5;
  pcVar3 = __itoa(local_30,local_138,10);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
  local_8._0_1_ = 6;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  FUN_00409350(&DAT_00df8148,2);
  local_8._0_1_ = 7;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350(&DAT_00ded950,1);
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8._0_1_ = 9;
  pcVar3 = __itoa(((iVar2 - (int)((float)(int)((double)iVar2 / 365.0) * 365.0)) -
                  (iVar8 + (int)param_1 + iVar6)) + 1,local_138,10);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
  local_8._0_1_ = 10;
  FUN_00988f20();
  local_8._0_1_ = 0xb;
  FUN_00988f20();
  local_8._0_1_ = 0xc;
  FUN_00988f20();
  local_8._0_1_ = 0xd;
  FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  FUN_00448aa0();
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e8 = 0xf;
  local_ec = 0;
  local_fc = local_fc & 0xffffff00;
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

