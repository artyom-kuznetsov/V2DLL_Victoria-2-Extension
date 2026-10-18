// FUN_00441f60 @ 00441f60 body=[[00441f60, 00442142] [00442146, 00442170] [00442174, 00442199] [0044219d, 004421c2] [004421c6, 004421fb] [004421ff, 00442215] [00442219, 00442234] [00442238, 0044224e] [00442252, 0044226e] [00442272, 0044229c]]


undefined1 * FUN_00441f60(undefined1 *param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  char *pcVar5;
  undefined8 uVar6;
  char local_12c [32];
  uint local_10c;
  undefined4 local_fc;
  uint local_f8;
  uint local_f0;
  undefined4 local_e0;
  uint local_dc;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  puStack_c = &LAB_00b62a92;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_18 = 1;
  if (param_2 != *(int *)(in_ECX + 0x28)) {
    ExceptionList = pvVar2;
    return param_1;
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  local_14 = in_ECX;
  FUN_00409350(&DAT_00df8544,3);
  local_8 = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  FUN_00409350(&DAT_00df8540,3);
  local_8._0_1_ = 2;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350("PV_SIEGE_PROGRESS",0x11);
  uVar6 = __allmul(*(int *)(local_14 + 0x2c),*(int *)(local_14 + 0x2c) >> 0x1f,100000,0);
  iVar3 = __alldiv(uVar6,1000,0);
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  local_8._0_1_ = 4;
  pcVar4 = __itoa(iVar3 / 1000,local_12c,10);
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
  local_8._0_1_ = 5;
  FUN_009a8ee0(local_2c,local_80);
  local_8._0_1_ = 6;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8._0_1_ = 7;
  FUN_00988f20();
  local_8._0_1_ = 8;
  FUN_00988f20();
  local_8._0_1_ = 9;
  FUN_00988f20();
  local_8._0_1_ = 10;
  FUN_00408ed0();
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f8 = 0xf;
  local_fc = 0;
  local_10c = local_10c & 0xffffff00;
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4 = local_d4 & 0xffffff00;
  if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_dc = 0xf;
  local_e0 = 0;
  local_f0 = local_f0 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

