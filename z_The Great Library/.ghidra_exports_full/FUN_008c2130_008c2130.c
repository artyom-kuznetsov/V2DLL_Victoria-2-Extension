// FUN_008c2130 @ 008c2130 body=[[008c2130, 008c21b2] [008c21b6, 008c22b0] [008c22b4, 008c22d9] [008c22dd, 008c22ff] [008c2303, 008c2335] [008c2339, 008c2354] [008c2358, 008c2373] [008c2377, 008c238d] [008c2391, 008c2486] [008c248a, 008c24ac] [008c24b0, 008c24d5] [008c24d9, 008c250e] [008c2512, 008c252d] [008c2531, 008c254c] [008c2550, 008c2566] [008c256a, 008c2586] [008c258a, 008c259f]]


/* WARNING: Removing unreachable block (ram,0x008c257b) */

undefined4 FUN_008c2130(undefined4 param_1,undefined4 param_2,char param_3)

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
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1c))();
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
    FUN_00409350(&DAT_00e2d2a8,4);
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
    FUN_00409350("HAVE_NOT",8);
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

