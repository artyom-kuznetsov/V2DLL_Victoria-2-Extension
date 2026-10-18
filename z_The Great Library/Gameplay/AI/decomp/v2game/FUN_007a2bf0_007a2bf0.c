// FUN_007a2bf0 @ 007a2bf0 body=[[007a2bf0, 007a2cbd] [007a2cc1, 007a2d68] [007a2d6c, 007a2e04] [007a2e08, 007a2e62] [007a2e66, 007a2eb1] [007a2ecc, 007a2f7d] [007a2f81, 007a2fdf] [007a2fe3, 007a306a] [007a306e, 007a30ac]]


void FUN_007a2bf0(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int local_b8;
  uint auStack_b4 [4];
  undefined4 uStack_a4;
  uint uStack_a0;
  int local_98;
  uint auStack_94 [4];
  undefined4 uStack_84;
  uint uStack_80;
  undefined1 auStack_78 [4];
  int iStack_74;
  uint uStack_64;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_48;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 auStack_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6ba8f;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_98 = in_ECX;
  cVar2 = FUN_00416db0();
  if (cVar2 == '\0') {
    if (param_3 == '\0') {
      piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x34) + 0x2c))();
      piVar3 = (int *)*piVar3;
      if (piVar3 != (int *)0x0) {
        while( true ) {
          uStack_a0 = 0xf;
          uStack_a4 = 0;
          auStack_b4[0] = auStack_b4[0] & 0xffffff00;
          FUN_00409350("ChannelUserSelectionButton",0x1a);
          local_c = 0;
          piVar4 = (int *)(**(code **)(**(int **)(*piVar3 + 0x20) + 0x34))();
          (**(code **)(*piVar4 + 0xf0))();
          cVar2 = FUN_00416db0();
          local_c = 0xffffffff;
          if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (cVar2 != '\0') break;
          piVar3 = (int *)piVar3[2];
          if (piVar3 == (int *)0x0) {
            ExceptionList = local_14;
            return;
          }
        }
        cVar2 = FUN_00416db0();
        if (cVar2 == '\0') {
          puVar1 = (undefined4 *)*piVar3;
          (**(code **)(**(int **)(in_ECX + 0x34) + 0x20))(puVar1,1);
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)();
          }
          uStack_a0 = 0xf;
          uStack_a4 = 0;
          auStack_b4[0] = auStack_b4[0] & 0xffffff00;
          FUN_00409350("USER_LEFT_CHANNEL",0x11);
          local_c = 1;
          FUN_009a8ee0(auStack_78,auStack_b4);
          local_c._0_1_ = 3;
          if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_a0 = 0xf;
          uStack_a4 = 0;
          auStack_b4[0] = auStack_b4[0] & 0xffffff00;
          uStack_80 = 0xf;
          uStack_84 = 0;
          auStack_94[0] = auStack_94[0] & 0xffffff00;
          FUN_00409350(&DAT_00dfbf14,4);
          local_c._0_1_ = 4;
          local_b8 = FUN_00aae9af();
          local_c._0_1_ = 5;
          if (local_b8 == 0) {
            local_b8 = 0;
          }
          else {
            local_b8 = FUN_009a9ce0();
          }
          local_c._0_1_ = 4;
          FUN_009e6810(auStack_94,&local_b8);
          local_c._0_1_ = 3;
          if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
          local_c = CONCAT31(local_c._1_3_,6);
          FUN_007a1ca0();
          if (0xf < uStack_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_34 = 0xf;
          uStack_38 = 0;
          uStack_48 = uStack_48 & 0xffffff00;
          local_c = 7;
          FUN_009adb70();
          if (iStack_74 != 0) {
            FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
    }
    else {
      cVar2 = FUN_00416db0();
      if (cVar2 == '\0') {
        local_b8 = FUN_00aae9af();
        local_c = 8;
        if (local_b8 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_007a03c0();
        }
        local_c = 0xffffffff;
        (**(code **)(**(int **)(in_ECX + 0x34) + 0x10))(uVar6,1);
        uStack_a0 = 0xf;
        uStack_a4 = 0;
        auStack_b4[0] = auStack_b4[0] & 0xffffff00;
        FUN_00409350("USER_JOINED_CHANNEL",0x13);
        local_c = 9;
        FUN_009a8ee0(auStack_2c,auStack_b4);
        local_c._0_1_ = 0xb;
        if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_a0 = 0xf;
        uStack_a4 = 0;
        auStack_b4[0] = auStack_b4[0] & 0xffffff00;
        uStack_80 = 0xf;
        uStack_84 = 0;
        auStack_94[0] = auStack_94[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfbf14,4);
        local_c._0_1_ = 0xc;
        FUN_009a9980();
        local_c._0_1_ = 0xb;
        if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_80 = 0xf;
        uStack_84 = 0;
        auStack_94[0] = auStack_94[0] & 0xffffff00;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c = CONCAT31(local_c._1_3_,0xd);
        FUN_007a1ca0();
        if ((*(int *)(*(int *)(local_98 + 0xcc) + 0x75c) == 5) &&
           (*(char *)(local_98 + 0xd0) != '\0')) {
          (**(code **)(**(int **)(local_98 + 0x34) + 0x50))();
        }
        if (0xf < uStack_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_50 = 0xf;
        uStack_54 = 0;
        uStack_64 = uStack_64 & 0xffffff00;
        local_c = 0xffffffff;
        FUN_009a9740();
      }
    }
  }
  ExceptionList = local_14;
  return;
}

