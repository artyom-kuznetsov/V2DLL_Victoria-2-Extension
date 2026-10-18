// FUN_009644e0 @ 009644e0 body=[[009644e0, 00964566] [0096456a, 0096462a] [0096462e, 00964648] [0096464c, 0096472d] [00964731, 00964748] [0096474c, 00964761]]


undefined4 FUN_009644e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_f0 [108];
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined1 local_68 [4];
  int local_64;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  uint local_24;
  int local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba29c0;
  local_10 = ExceptionList;
  local_1c[1] = 0;
  ExceptionList = &local_10;
  FUN_008a8800();
  iVar2 = FUN_00963e50();
  if (iVar2 < 1) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("POP_INTERNAL_MIGRATION_NONE",0x1b);
    local_8 = 9;
    FUN_009a8ee0(local_30,local_54);
    local_8._0_1_ = 10;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_1c[1] = 1;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (local_40 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350("POP_INTERNAL_MIGRATION",0x16);
    local_8 = 1;
    FUN_009a8ee0(local_68,local_84);
    local_8._0_1_ = 3;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e7c,3);
    local_8._0_1_ = 4;
    iVar2 = FUN_00963e50();
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    local_8._0_1_ = 5;
    pcVar3 = __itoa(iVar2,local_f0,10);
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    local_8._0_1_ = 6;
    local_1c[0] = FUN_00aae9af();
    local_8._0_1_ = 7;
    if (local_1c[0] == 0) {
      local_1c[0] = 0;
    }
    else {
      local_1c[0] = FUN_009a9ce0();
    }
    local_8._0_1_ = 6;
    FUN_009e6810(local_54,local_1c);
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_1c[1] = 1;
    local_8 = 8;
    FUN_009adb70();
    if (local_64 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

