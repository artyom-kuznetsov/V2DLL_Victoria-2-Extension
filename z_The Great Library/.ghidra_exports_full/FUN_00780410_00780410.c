// FUN_00780410 @ 00780410 body=[[00780410, 0078048c] [00780490, 007804e7] [007804eb, 00780540] [00780544, 0078059b] [0078059f, 00780633] [00780637, 00780690] [00780694, 007806c4] [007806c8, 0078070a]]


void FUN_00780410(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  char *local_30 [4];
  uint local_20;
  undefined *local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b599d3;
  local_10 = ExceptionList;
  local_8 = 4;
  local_20 = 0xf;
  local_30[3] = (char *)0x0;
  local_34 = local_34 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("battle_background_naval",0x17);
  local_8._0_1_ = 5;
  piVar4 = (int *)FUN_009c7290();
  FUN_009c7290();
  iVar2 = *piVar4;
  uVar5 = FUN_009c7870(1);
  local_11 = (**(code **)(iVar2 + 0x68))(uVar5);
  local_8._0_1_ = 4;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  if (local_11 != '\0') {
    local_20 = 0xf;
    local_30[3] = (char *)0x0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350("battle_background_naval",0x17);
    local_8._0_1_ = 6;
    piVar4 = (int *)FUN_009c7290();
    FUN_009c7290();
    iVar2 = *piVar4;
    uVar5 = FUN_009c7870(1);
    (**(code **)(iVar2 + 0x30))(uVar5);
    local_8._0_1_ = 4;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
  }
  local_8._0_1_ = 4;
  local_20 = 0xf;
  local_30[3] = (char *)0x0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350("battle_background",0x11);
  local_8._0_1_ = 7;
  piVar4 = (int *)FUN_009c7290();
  FUN_009c7290();
  iVar2 = *piVar4;
  uVar5 = FUN_009c7870(1);
  local_11 = (**(code **)(iVar2 + 0x68))(uVar5);
  local_8._0_1_ = 4;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  if (local_11 != '\0') {
    local_20 = 0xf;
    local_30[3] = (char *)0x0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350("battle_background",0x11);
    local_8._0_1_ = 8;
    piVar4 = (int *)FUN_009c7290();
    FUN_009c7290();
    iVar2 = *piVar4;
    uVar5 = FUN_009c7870(1);
    (**(code **)(iVar2 + 0x30))(uVar5);
    local_8._0_1_ = 4;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
  }
  local_30[0] = "dice";
  local_30[1] = "digin";
  local_30[2] = "crossing";
  local_30[3] = "terrain";
  local_20 = 0xdf0678;
  local_1c = &DAT_00e01d64;
  local_18 = 0;
  while( true ) {
    local_8._0_1_ = 4;
    pcVar3 = local_30[local_18];
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    local_8._0_1_ = 9;
    piVar4 = (int *)(**(code **)(*(int *)param_1[1] + 0x30))(local_50);
    (**(code **)(*piVar4 + 0x38))();
    local_8._0_1_ = 4;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    local_8._0_1_ = 10;
    piVar4 = (int *)(**(code **)(*(int *)param_1[2] + 0x30))(local_50);
    (**(code **)(*piVar4 + 0x38))();
    local_8._0_1_ = 4;
    if (0xf < local_3c) break;
    local_18 = local_18 + 1;
    if (5 < local_18) {
      (**(code **)(*(int *)*param_1 + 0x50))();
      if (0xf < (uint)param_1[0x2b6]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x2b1]);
      }
      param_1[0x2b5] = 0;
      param_1[0x2b6] = 0xf;
      *(undefined1 *)(param_1 + 0x2b1) = 0;
      param_1[0x29f] = CButtonObserver::vftable;
      param_1[0x294] = CButtonObserver::vftable;
      param_1[0x289] = CButtonObserver::vftable;
      param_1[9] = CButtonObserver::vftable;
      ExceptionList = local_10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

