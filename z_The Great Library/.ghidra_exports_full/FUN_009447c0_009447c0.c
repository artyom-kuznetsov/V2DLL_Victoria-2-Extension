// FUN_009447c0 @ 009447c0 body=[[009447c0, 009448a8] [009448ac, 009448d5] [009448d9, 00944904] [00944908, 00944a00] [00944a04, 00944af1] [00944af5, 00944b07]]


void FUN_009447c0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_cc;
  uint local_c8 [4];
  uint local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined1 auStack_94 [16];
  uint uStack_84;
  undefined4 uStack_80;
  undefined **local_74;
  undefined4 uStack_70;
  undefined4 local_34;
  uint uStack_20;
  void *pvStack_1c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba2e04;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffff00;
    ExceptionList = &pvStack_14;
    FUN_00409350(&DAT_00ded94d,0);
    local_c = 0;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_c._0_1_ = 1;
    piVar1 = *(int **)(DAT_012588e8 + 0xb24);
    uVar2 = FUN_00988fa0(unaff_EDI + 0x14);
    local_c = CONCAT31(local_c._1_3_,2);
    (**(code **)(*piVar1 + 0x120))(uVar2,local_ac,local_c8,0);
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_ac[0]);
    }
    local_c = 0xffffffff;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c8[0]);
    }
  }
  local_c = 0xffffffff;
  uStack_70 = 0x18d;
  local_74 = CWarGoal::vftable;
  FUN_00424b60();
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8[0] = local_c8[0] & 0xffffff00;
  FUN_00409350("wargoal_setup",0xd);
  local_c = 3;
  iVar3 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x6c))(local_c8);
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_cc);
  }
  if ((*(int *)(unaff_EDI + 0xe4) - *(int *)(unaff_EDI + 0xe0) & 0xfffffffcU) != 0) {
    FUN_009456c0();
    ExceptionList = pvStack_18;
    return;
  }
  if (((*(int *)(unaff_EDI + 0xac) - *(int *)(unaff_EDI + 0xa8) & 0xfffffffcU) != 0) &&
     (*(char *)(unaff_EDI + 0x1dc) == '\0')) {
    FUN_009452a0();
    ExceptionList = pvStack_18;
    return;
  }
  if (((*(int *)(unaff_EDI + 200) - *(int *)(unaff_EDI + 0xc4) & 0xfffffffcU) != 0) &&
     (*(char *)(unaff_EDI + 0x1dc) == '\0')) {
    FUN_00944ef0();
    ExceptionList = pvStack_18;
    return;
  }
  uStack_80 = 0xf;
  uStack_84 = 0;
  auStack_94[0] = 0;
  FUN_00409350("wargoal_setup",0xd);
  puStack_10 = (undefined1 *)0x4;
  iVar3 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x6c))(auStack_94);
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_98);
  }
  ExceptionList = pvStack_1c;
  return;
}

