// FUN_00647990 @ 00647990 body=[[00647990, 006479f3] [006479f7, 00647a40] [00647a44, 00647ab8] [00647abc, 00647b57] [00647b5b, 00647b76] [00647b7a, 00647b8e]]


undefined4 * FUN_00647990(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_8c [8];
  char local_84 [4];
  undefined4 local_80;
  uint local_6c;
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
  puStack_c = &LAB_00b9a2e6;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultConfirm",0xe);
  local_8 = 0;
  FUN_00640680(param_1,local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  param_1[0x1a] = param_2;
  *param_1 = CConfirmDisbandAll::vftable;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_8._0_1_ = 3;
  FUN_00475d50(local_64);
  local_8._0_1_ = 4;
  FUN_00641710();
  local_8._0_1_ = 3;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  if (0 < *(int *)(param_1[0x1a] + 0x1608)) {
    piVar2 = *(int **)(param_1[0x1a] + 0x1600);
    while (piVar2 != (int *)0x0) {
      piVar3 = (int *)*piVar2;
      piVar2 = (int *)piVar2[2];
      iVar4 = (**(code **)(*piVar3 + 4))();
      if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) && (piVar3[0x1d] == 0)) {
        FUN_0079de40(local_8c,piVar3);
        local_8._0_1_ = 5;
        FUN_005e5bb0();
        local_8._0_1_ = 3;
        if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_80);
        }
      }
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_8._0_1_ = 6;
    pcVar5 = __itoa((int)(param_1[0x1c] - param_1[0x1b]) / 0x28,local_84,10);
    pcVar6 = pcVar5;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
    local_8._0_1_ = 7;
    FUN_0042c180(local_64,local_48);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_006417b0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

