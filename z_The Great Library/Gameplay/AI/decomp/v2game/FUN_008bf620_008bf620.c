// FUN_008bf620 @ 008bf620 body=[[008bf620, 008bf6eb] [008bf6ef, 008bf7ee] [008bf7f2, 008bf817] [008bf81b, 008bf840] [008bf844, 008bf879] [008bf87d, 008bf898] [008bf89c, 008bf8b7] [008bf8bb, 008bf8d1] [008bf8d5, 008bf938] [008bf941, 008bfa2b] [008bfa2f, 008bfa54] [008bfa58, 008bfa7d] [008bfa81, 008bfab6] [008bfaba, 008bfad5] [008bfad9, 008bfaf4] [008bfaf8, 008bfb0e] [008bfb12, 008bfb2e] [008bfb32, 008bfb47]]


undefined4 FUN_008bf620(undefined4 param_1,int param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int in_ECX;
  char *pcVar4;
  char local_114 [32];
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b86d9b;
  local_10 = ExceptionList;
  local_30 = 0;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  local_8 = 1;
  ExceptionList = &local_10;
  pcVar2 = __itoa(*(int *)(in_ECX + 0x1c),local_114,10);
  local_28 = pcVar2 + 1;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar4 - (int)local_28);
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) != '\0') {
      local_2c = *(undefined4 *)(param_2 + 0x2c);
      local_28 = *(char **)(param_2 + 0x30);
      FUN_0055dd40();
      local_8._0_1_ = 4;
      FUN_00408ed0();
      local_8._0_1_ = 2;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    FUN_008a8dc0();
    FUN_0055dd40();
    local_8._0_1_ = 3;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 2;
  if (param_3 == '\0') {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8._0_1_ = 0xd;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 0xe;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350("HAVE_MORE_CITIES_THAN",0x15);
    local_8._0_1_ = 0xf;
    FUN_009a8ee0(local_24,local_68);
    local_8._0_1_ = 0x10;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_30 = 1;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4 = local_f4 & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84[0] = local_84[0] & 0xffffff00;
  }
  else {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8._0_1_ = 5;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8._0_1_ = 6;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350("HAVE_LESS_CITIES_THAN",0x15);
    local_8._0_1_ = 7;
    FUN_009a8ee0(local_24,local_84);
    local_8._0_1_ = 8;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_30 = 1;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4 = local_f4 & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68[0] = local_68[0] & 0xffffff00;
  }
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_54 = 0xf;
  local_58 = 0;
  local_70 = 0xf;
  local_74 = 0;
  if (local_c4 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

