// FUN_009c8c30 @ 009c8c30 body=[[009c8c30, 009c8cda] [009c8cde, 009c8cfd] [009c8d01, 009c8d17] [009c8d1b, 009c8e12] [009c8e16, 009c8e39] [009c8e3d, 009c8e5d] [009c8e61, 009c8e84] [009c8e88, 009c8e9a]]


undefined4 FUN_009c8c30(undefined4 param_1,char *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *local_ec;
  uint *puStack_e8;
  uint local_d8 [4];
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
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f171;
  local_10 = ExceptionList;
  local_14 = (undefined1 *)0x0;
  if (param_2 == (char *)0x0) {
    puStack_e8 = (uint *)0x3;
    local_ec = &DAT_00e025cc;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_14 = (undefined1 *)&local_ec;
    local_8 = 0;
    local_ec = param_2;
    puStack_e8 = (uint *)FUN_00988a50(local_84);
    local_8._0_1_ = 1;
    local_ec = (char *)0x9c8cad;
    FUN_00988fa0();
    puStack_e8 = local_68;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_ec = (char *)0x9c8cc2;
    FUN_00988f20();
    if (0xf < local_a8) {
      puStack_e8 = (uint *)local_bc;
                    /* WARNING: Subroutine does not return */
      local_ec = &UNK_009c8cdb;
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_70) {
      puStack_e8 = (uint *)local_84[0];
                    /* WARNING: Subroutine does not return */
      local_ec = &UNK_009c8cfe;
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_54) {
      puStack_e8 = (uint *)local_68[0];
                    /* WARNING: Subroutine does not return */
      local_ec = &UNK_009c8d18;
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_1;
  }
  if (param_3 == '\0') {
    pcVar4 = &DAT_00e00684;
    pcVar3 = &DAT_00df8518;
  }
  else {
    pcVar4 = &DAT_00dfd24c;
    pcVar3 = &DAT_00df8510;
  }
  if ((int)param_2 < 0) {
    pcVar4 = pcVar3;
  }
  puStack_e8 = (uint *)0x3;
  local_ec = &DAT_00e025cc;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_14 = (undefined1 *)&local_ec;
  local_8 = 3;
  uVar5 = __allmul(param_2,(int)param_2 >> 0x1f,100000,0);
  local_ec = (char *)__alldiv(uVar5,1000,0);
  uVar2 = FUN_00988a50(local_d8);
  local_8._0_1_ = 4;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  pcVar3 = pcVar4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  puStack_e8 = (uint *)((int)pcVar3 - (int)(pcVar4 + 1));
  local_ec = pcVar4;
  FUN_00409350();
  local_8._0_1_ = 5;
  local_ec = (char *)0x9c8de6;
  puStack_e8 = (uint *)uVar2;
  FUN_00988f20();
  puStack_e8 = local_4c;
  local_8 = CONCAT31(local_8._1_3_,6);
  local_ec = (char *)0x9c8dfa;
  FUN_00988f20();
  if (0xf < local_8c) {
    puStack_e8 = (uint *)local_a0;
                    /* WARNING: Subroutine does not return */
    local_ec = &UNK_009c8e13;
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_1c) {
    puStack_e8 = (uint *)local_30;
                    /* WARNING: Subroutine does not return */
    local_ec = &UNK_009c8e3a;
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (0xf < local_c4) {
    puStack_e8 = (uint *)local_d8[0];
                    /* WARNING: Subroutine does not return */
    local_ec = &UNK_009c8e5e;
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  if (0xf < local_38) {
    puStack_e8 = (uint *)local_4c[0];
                    /* WARNING: Subroutine does not return */
    local_ec = &UNK_009c8e85;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

