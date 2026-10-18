// FUN_008dd590 @ 008dd590 body=[[008dd590, 008dd621] [008dd625, 008dd6b0] [008dd6b4, 008dd6ce] [008dd6d2, 008dd786] [008dd78a, 008dd7a8] [008dd7ac, 008dd852] [008dd856, 008dd8db] [008dd8df, 008dd8f9] [008dd8fd, 008dd9ab] [008dd9af, 008dd9c9] [008dd9cd, 008dda22] [008dda26, 008dda3a]]


undefined4 FUN_008dd590(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char local_bc [32];
  undefined4 local_9c;
  undefined1 local_94 [4];
  int local_90;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_6c;
  int local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b85cbf;
  local_10 = ExceptionList;
  local_6c = 0;
  local_9c = *(undefined4 *)(param_2 + 8);
  if ((char)param_3 == '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("AMOUNT_OF_DIVISIONS_IS_ATLEAST_TRIGGER",0x26);
    local_8 = 0xc;
    FUN_009a8ee0(local_80,local_48);
    local_8._0_1_ = 0xe;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 0xf;
    FUN_004f97a0();
    local_8._0_1_ = 0x10;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x11;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x10;
    FUN_009e6810(local_2c,&param_3);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xe;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("VALUE",5);
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8._0_1_ = 0x13;
    pcVar3 = __itoa(*(int *)(local_68 + 0x1c),local_bc,10);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_8._0_1_ = 0x14;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x15;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x14;
    FUN_009e6810(local_2c,&param_3);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xe);
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_6c = 1;
    local_8 = 0x16;
    FUN_009adb70();
    if (local_7c == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
  else {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("AMOUNT_OF_DIVISIONS_IS_NOT_TRIGGER",0x22);
    local_8 = 1;
    FUN_009a8ee0(local_94,local_64);
    local_8._0_1_ = 3;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 4;
    FUN_004f97a0();
    local_8._0_1_ = 5;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    FUN_009e6810(local_48,&param_3);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_18 = 0xf;
    local_1c = 0;
    uVar2 = local_2c[0] >> 8;
    local_2c[0] = uVar2 << 8;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = uVar2 << 8;
    FUN_00409350("VALUE",5);
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_8._0_1_ = 8;
    pcVar3 = __itoa(*(int *)(local_68 + 0x1c),local_bc,10);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_8._0_1_ = 9;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 10;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 9;
    FUN_009e6810(local_2c,&param_3);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_6c = 1;
    local_8 = 0xb;
    FUN_009adb70();
    if (local_90 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    FUN_009e6a80();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

