// FUN_009c89d0 @ 009c89d0 body=[[009c89d0, 009c8a88] [009c8a8c, 009c8aaf] [009c8ab3, 009c8ba6] [009c8baa, 009c8bcd] [009c8bd1, 009c8bf1] [009c8bf5, 009c8c18] [009c8c1c, 009c8c2e]]


undefined4 FUN_009c89d0(undefined4 param_1,char param_2,char *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  char *pcVar3;
  char *pcVar4;
  char *local_ec;
  uint *local_e8;
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
  if (param_3 == (char *)0x0 && param_4 == 0) {
    local_e8 = (uint *)0x2;
    local_ec = &DAT_00dedc20;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_14 = (undefined1 *)&local_ec;
    local_8 = 0;
    local_ec = param_3;
    local_e8 = (uint *)param_4;
    local_e8 = (uint *)FUN_00988bb0(local_84,in_ECX);
    local_8._0_1_ = 1;
    local_ec = (char *)0x9c8a59;
    FUN_00988fa0();
    local_e8 = local_68;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_ec = (char *)0x9c8a70;
    FUN_00988f20();
    if (0xf < local_a8) {
      local_e8 = (uint *)local_bc;
                    /* WARNING: Subroutine does not return */
      local_ec = &UNK_009c8a89;
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    if (0xf < local_70) {
      local_e8 = (uint *)local_84[0];
                    /* WARNING: Subroutine does not return */
      local_ec = &UNK_009c8ab0;
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (local_54 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_e8 = (uint *)local_68[0];
  }
  else {
    if (param_2 == '\0') {
      pcVar4 = &DAT_00df8510;
      pcVar3 = &DAT_00df8518;
    }
    else {
      pcVar4 = &DAT_00df8518;
      pcVar3 = &DAT_00df8510;
    }
    if (-1 < param_4) {
      pcVar3 = pcVar4;
    }
    local_e8 = (uint *)0x2;
    local_ec = &DAT_00dedc20;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350();
    local_14 = (undefined1 *)&local_ec;
    local_8 = 3;
    local_ec = param_3;
    local_e8 = (uint *)param_4;
    uVar2 = FUN_00988bb0(local_d8,in_ECX);
    local_8._0_1_ = 4;
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_e8 = (uint *)((int)pcVar4 - (int)(pcVar3 + 1));
    local_ec = pcVar3;
    FUN_00409350();
    local_8._0_1_ = 5;
    local_ec = (char *)0x9c8b7a;
    local_e8 = (uint *)uVar2;
    FUN_00988f20();
    local_e8 = local_4c;
    local_8 = CONCAT31(local_8._1_3_,6);
    local_ec = (char *)0x9c8b8e;
    FUN_00988f20();
    if (0xf < local_8c) {
      local_e8 = (uint *)local_a0;
                    /* WARNING: Subroutine does not return */
      local_ec = &UNK_009c8ba7;
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_1c) {
      local_e8 = (uint *)local_30;
                    /* WARNING: Subroutine does not return */
      local_ec = &UNK_009c8bce;
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30 = local_30 & 0xffffff00;
    if (0xf < local_c4) {
      local_e8 = (uint *)local_d8[0];
                    /* WARNING: Subroutine does not return */
      local_ec = &UNK_009c8bf2;
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (local_38 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_e8 = (uint *)local_4c[0];
  }
                    /* WARNING: Subroutine does not return */
  local_ec = &UNK_009c8c19;
  FUN_00aae91b();
}

