// FUN_008e4880 @ 008e4880 body=[[008e4880, 008e4a10] [008e4a14, 008e4a3b] [008e4a3f, 008e4a61] [008e4a65, 008e4a9a] [008e4a9e, 008e4aba] [008e4abe, 008e4ae2] [008e4ae6, 008e4afc] [008e4b00, 008e4c04] [008e4c08, 008e4c32] [008e4c36, 008e4c58] [008e4c5c, 008e4c8e] [008e4c92, 008e4cae] [008e4cb2, 008e4cd6] [008e4cda, 008e4cf0] [008e4cf4, 008e4d0a] [008e4d0e, 008e4d23]]


undefined1 * FUN_008e4880(undefined1 *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  uint local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  uint local_d0 [4];
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b661e5;
  local_10 = ExceptionList;
  local_28 = 0;
  ExceptionList = &local_10;
  FUN_0096bb70();
  if (*(char *)(in_ECX + 0x18) == '\0') {
    piVar3 = *(int **)(in_ECX + 0x1c);
  }
  else {
    piVar3 = *(int **)(*(int *)(*(int *)(param_2 + 0x24) + 0x14) + 0x68);
  }
  cVar1 = (**(code **)(*piVar3 + 0x18))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = local_10;
    return param_1;
  }
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  local_68 = 0xf;
  FUN_00409350(&DAT_00dfc7b4,3);
  if (param_3 == '\0') {
    local_8 = 10;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7f68,3);
    local_8._0_1_ = 0xb;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("IS_OF_POPTYPE",0xd);
    local_8._0_1_ = 0xc;
    FUN_0096d650(piVar3,local_d0);
    local_8._0_1_ = 0xd;
    FUN_009a8ee0(local_24,local_60);
    local_8._0_1_ = 0xe;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec[0] = local_ec[0] & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0[0] = local_d0[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44[0] = local_44[0] & 0xffffff00;
  }
  else {
    local_8 = 1;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7f68,3);
    local_8._0_1_ = 2;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("IS_NOT_OF_POPTYPE",0x11);
    local_8._0_1_ = 3;
    FUN_0096d650(piVar3,local_ec);
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_24,local_44);
    local_8._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0[0] = local_d0[0] & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec[0] = local_ec[0] & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_60[0] = local_60[0] & 0xffffff00;
  }
  if (0xf < local_68) {
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_30 = 0xf;
    local_34 = 0;
    local_4c = 0xf;
    local_50 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

