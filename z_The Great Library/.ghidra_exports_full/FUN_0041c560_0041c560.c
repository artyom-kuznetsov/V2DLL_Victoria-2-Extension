// FUN_0041c560 @ 0041c560 body=[[0041c560, 0041c7a8] [0041c7ac, 0041c7d6] [0041c7da, 0041c7f9] [0041c7fd, 0041c816] [0041c81a, 0041c833] [0041c837, 0041c853] [0041c857, 0041c876] [0041c87a, 0041c911] [0041c915, 0041c933] [0041c937, 0041c950] [0041c954, 0041c96a] [0041c96e, 0041c983]]


void FUN_0041c560(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *_String;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_e8;
  uint local_d4;
  undefined4 local_cc;
  uint local_b8;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  int *local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4db60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  iVar3 = (param_2[1] - *param_2) / 0x1c;
  local_1c = 1;
  if (iVar3 < 1) {
    FUN_00409350("Please specify province id where are units with leaders.");
  }
  else if (iVar3 < 2) {
    FUN_00409350("Please specify the amount of prestige to gain.");
  }
  else {
    iVar3 = FUN_00aaf0c5();
    piVar5 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4);
    _String = (char *)(*param_2 + 0x1c);
    if (0xf < *(uint *)(*param_2 + 0x30)) {
      _String = *(char **)_String;
    }
    local_14 = piVar5;
    _atof(_String);
    FUN_00401000();
    local_18 = FUN_00b31c00();
    piVar5 = (int *)piVar5[0x3b];
    param_2 = (int *)0x0;
    if (piVar5 != (int *)0x0) {
      local_3c = (int *)(DAT_012588e8 + 0xb60);
      do {
        iVar3 = *piVar5;
        piVar5 = (int *)piVar5[2];
        if (((*(int *)(iVar3 + 0xcc) == *local_3c) &&
            (piVar1 = *(int **)(iVar3 + 0xd8), piVar1 != (int *)0x0)) &&
           (cVar2 = (**(code **)(*piVar1 + 0x20))(), cVar2 != '\0')) {
          FUN_005b66b0();
          param_2 = (int *)((int)param_2 + 1);
        }
      } while (piVar5 != (int *)0x0);
      if (0 < (int)param_2) {
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_00409350(" gained prestige.");
        local_8 = 1;
        local_98 = 0xf;
        local_9c = 0;
        local_ac[0] = local_ac[0] & 0xffffff00;
        FUN_00409350(" of our leaders at ");
        local_8._0_1_ = 2;
        uVar4 = (**(code **)(*local_14 + 0x1c))();
        local_8._0_1_ = 3;
        FUN_009888f0(local_90);
        local_8._0_1_ = 4;
        FUN_00988f20(local_ac);
        local_8._0_1_ = 5;
        FUN_00988f20(uVar4);
        local_8._0_1_ = 6;
        uVar4 = FUN_00988f20(local_38);
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_00408ed0(uVar4,0,0xffffffff);
        if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_cc);
        }
        if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_e8);
        }
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_74);
        }
        local_60 = 0xf;
        local_64 = 0;
        local_74 = local_74 & 0xffffff00;
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90[0]);
        }
        local_7c = 0xf;
        local_80 = 0;
        local_90[0] = local_90[0] & 0xffffff00;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_58);
        }
        local_44 = 0xf;
        local_48 = 0;
        local_58 = local_58 & 0xffffff00;
        if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_ac[0]);
        }
        local_98 = 0xf;
        local_9c = 0;
        local_ac[0] = local_ac[0] & 0xffffff00;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        *param_1 = 1;
        ExceptionList = local_10;
        return;
      }
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350(" gained any prestige.");
    local_8 = 8;
    uVar4 = (**(code **)(*local_14 + 0x1c))();
    local_8._0_1_ = 9;
    FUN_00988fa0(uVar4);
    local_8._0_1_ = 10;
    uVar4 = FUN_00988f20(local_38);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58 = local_58 & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_90[0]);
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
  }
  *param_1 = 0;
  ExceptionList = local_10;
  return;
}

