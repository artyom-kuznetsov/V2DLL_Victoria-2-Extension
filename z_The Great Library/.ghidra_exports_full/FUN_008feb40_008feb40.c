// FUN_008feb40 @ 008feb40 body=[[008feb40, 008febdf] [008febe8, 008fec72] [008fec78, 008fedd7] [008feddb, 008fee04] [008fee08, 008fee2e] [008fee32, 008fee68] [008fee6c, 008fee87] [008fee8b, 008feea5] [008feea9, 008feec3] [008feec7, 008fefbe] [008fefc2, 008fefe8] [008fefec, 008ff015] [008ff019, 008ff052] [008ff056, 008ff071] [008ff075, 008ff08f] [008ff093, 008ff0ad] [008ff0b1, 008ff0d1] [008ff0d5, 008ff0e9]]


/* WARNING: Removing unreachable block (ram,0x008ff0c6) */

undefined4 FUN_008feb40(undefined4 param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint local_dc;
  uint local_c0;
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
  
  puStack_c = &LAB_00b8536b;
  local_10 = ExceptionList;
  local_28 = 0;
  local_8 = 1;
  uStack_7 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      ExceptionList = &local_10;
      if ((*(int *)(param_2 + 0xc) != 0) &&
         (ExceptionList = &local_10, iVar3 = FUN_0096bb50(), 1 < iVar3)) {
        FUN_0055dd40();
        local_8 = 4;
        FUN_00408ed0();
        local_8 = 1;
        FUN_00408ad0();
      }
    }
    else {
      piVar1 = (int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4);
      iVar3 = 0;
      ExceptionList = &local_10;
      if (DAT_01258a20 != 0) {
        piVar2 = *(int **)(*(int *)(*piVar1 + 0x188) + 0x110);
        iVar4 = DAT_01258a20;
        do {
          if (*piVar2 != 0) {
            iVar3 = iVar3 + 1;
          }
          piVar2 = piVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        ExceptionList = &local_10;
        if (1 < iVar3) {
          ExceptionList = &local_10;
          (**(code **)(**(int **)(*piVar1 + 0x188) + 0x20))();
          local_8 = 3;
          FUN_00408ed0();
          local_8 = 1;
          if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
    }
  }
  else {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c))
              ();
    local_8 = 2;
    FUN_00408ed0();
    local_8 = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (param_3 == *(char *)(in_ECX + 0x1c)) {
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 5;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8 = 6;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("HAVE_NOT_MINORITIES",0x13);
    local_8 = 7;
    FUN_009a8ee0(local_24,local_44);
    local_8 = 8;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8 = 9;
    FUN_00988f20();
    local_8 = 10;
    FUN_00988f20();
    local_8 = 0xb;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _local_8 = CONCAT31(uStack_7,0xc);
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
    local_8 = 0xd;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8 = 0xe;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350("HAVE_MINORTITIES",0x10);
    local_8 = 0xf;
    FUN_009a8ee0(local_24,local_7c);
    local_8 = 0x10;
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8 = 0x11;
    FUN_00988f20();
    local_8 = 0x12;
    FUN_00988f20();
    local_8 = 0x13;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _local_8 = CONCAT31(uStack_7,0x14);
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

