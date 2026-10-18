// FUN_008f23d0 @ 008f23d0 body=[[008f23d0, 008f2452] [008f2456, 008f254f] [008f2553, 008f2578] [008f257c, 008f259e] [008f25a2, 008f25d4] [008f25d8, 008f25f3] [008f25f7, 008f2612] [008f2616, 008f262c] [008f2630, 008f2725] [008f2729, 008f274b] [008f274f, 008f2774] [008f2778, 008f27ad] [008f27b1, 008f27cc] [008f27d0, 008f27eb] [008f27ef, 008f2805] [008f2809, 008f2825] [008f2829, 008f283e]]


/* WARNING: Removing unreachable block (ram,0x008f281a) */

undefined4 FUN_008f23d0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_bc;
  uint local_a0;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b65ac5;
  local_10 = ExceptionList;
  local_28 = 0;
  local_8 = 1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x18))();
    local_8 = 2;
    FUN_00408ed0();
    local_8 = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = 1;
  if (param_3 == '\0') {
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 0xb;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8 = 0xc;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("MAJORITY_IS",0xb);
    local_8 = 0xd;
    FUN_009a8ee0(local_24,local_44);
    local_8 = 0xe;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = 0xf;
    FUN_00988f20();
    local_8 = 0x10;
    FUN_00988f20();
    local_8 = 0x11;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _local_8 = CONCAT31(uStack_7,0x12);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
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
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 3;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8 = 4;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350("MAJORITY_IS_NOT",0xf);
    local_8 = 5;
    FUN_009a8ee0(local_24,local_7c);
    local_8 = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = 7;
    FUN_00988f20();
    local_8 = 8;
    FUN_00988f20();
    local_8 = 9;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _local_8 = CONCAT31(uStack_7,10);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

