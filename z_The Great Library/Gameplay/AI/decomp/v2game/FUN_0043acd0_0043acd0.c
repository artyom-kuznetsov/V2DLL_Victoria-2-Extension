// FUN_0043acd0 @ 0043acd0 body=[[0043acd0, 0043af96] [0043af9a, 0043afbf] [0043afc3, 0043afe8] [0043afec, 0043b011] [0043b015, 0043b034] [0043b038, 0043b051] [0043b055, 0043b06e] [0043b072, 0043b088] [0043b08c, 0043b0a8] [0043b0ac, 0043b0c1]]


undefined1 * FUN_0043acd0(int *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  double dVar10;
  char local_13c [32];
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47b0e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  iVar2 = (*param_1 + -43800000) / 0x18;
  dVar10 = (double)iVar2 / 365.0;
  local_20 = (int)dVar10;
  local_1c = 0;
  local_18 = 1;
  for (iVar5 = (iVar2 - (int)((float)(int)dVar10 * 365.0)) - DAT_00f1027c; -1 < iVar5;
      iVar5 = iVar5 - (&DAT_00f1027c)[local_1c]) {
    local_1c = local_1c + 1;
  }
  local_1c = local_1c + 1;
  iVar5 = 0;
  for (iVar6 = (iVar2 - (int)((float)(int)dVar10 * 365.0)) - DAT_00f1027c; -1 < iVar6;
      iVar6 = iVar6 - (&DAT_00f1027c)[iVar5]) {
    iVar5 = iVar5 + 1;
  }
  iVar9 = 0;
  iVar6 = 0;
  iVar7 = 0;
  local_14 = 0;
  if (1 < iVar5) {
    do {
      local_14 = local_14 + (&DAT_00f10280)[iVar7];
      iVar9 = iVar9 + (&DAT_00f1027c)[iVar7];
      iVar7 = iVar7 + 2;
    } while (iVar7 < iVar5 + -1);
  }
  if (iVar7 < iVar5) {
    iVar6 = (&DAT_00f1027c)[iVar7];
  }
  iVar9 = local_14 + iVar9;
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8140,1);
  local_8 = 1;
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8140,1);
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_8._0_1_ = 3;
  pcVar3 = __itoa(((iVar2 - (int)((float)(int)dVar10 * 365.0)) - (iVar6 + iVar9)) + 1,local_13c,10);
  pcVar8 = pcVar3;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar8 - (int)(pcVar3 + 1));
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  local_8._0_1_ = 5;
  pcVar3 = __itoa(local_1c,local_13c,10);
  pcVar8 = pcVar3;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar8 - (int)(pcVar3 + 1));
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  local_8._0_1_ = 7;
  pcVar3 = __itoa(local_20,local_13c,10);
  pcVar8 = pcVar3;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar8 - (int)(pcVar3 + 1));
  local_8._0_1_ = 8;
  FUN_00988f20(local_74);
  local_8._0_1_ = 9;
  FUN_00988f20(local_90);
  local_8._0_1_ = 10;
  FUN_00988f20(local_ac);
  local_8._0_1_ = 0xb;
  uVar4 = FUN_00988f20(local_3c);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c8);
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_11c);
  }
  local_108 = 0xf;
  local_10c = 0;
  local_11c = local_11c & 0xffffff00;
  if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e4);
  }
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = local_e4 & 0xffffff00;
  if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_100);
  }
  local_ec = 0xf;
  local_f0 = 0;
  local_100 = local_100 & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90[0]);
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (local_28 < 0x10) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (local_98 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ac[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_3c[0]);
}

