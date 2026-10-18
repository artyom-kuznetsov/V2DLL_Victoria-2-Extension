// FUN_00948080 @ 00948080 body=[[00948080, 00948131] [00948135, 009481f3] [009481f7, 00948326] [0094832a, 0094834f] [00948353, 009483a6] [009483aa, 0094842e] [00948432, 00948486] [0094848a, 0094850e] [00948512, 009485f2] [009485f6, 00948619] [0094861d, 00948682] [00948686, 0094869a]]


undefined4 *
FUN_00948080(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int *in_ECX;
  char local_7c [32];
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_24;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bab4c9;
  local_10 = ExceptionList;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("peace_goal_item",0xf);
  local_8 = 0;
  uVar4 = (**(code **)(*in_ECX + 0x3c))();
  piVar5 = (int *)(**(code **)(*in_ECX + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar4 = (**(code **)(*piVar5 + 0x2c))(local_40,uVar4);
  param_1[8] = uVar4;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  param_1[0xc] = param_2;
  *param_1 = CPeaceGoalEntry::vftable;
  param_1[7] = CPeaceGoalEntry::vftable;
  local_18 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_24 = &LAB_0077a0a0;
  param_1[0x12] = &LAB_0077a0a0;
  param_1[0x13] = 0;
  param_1[0x14] = &LAB_0077a0a0;
  param_1[0xe] = CCheckBoxObserverGlue<CPeaceGoalEntry>::vftable;
  param_1[0xf] = param_1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_8._0_1_ = 7;
  piVar5 = (int *)param_1[8];
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("select",6);
  local_8._0_1_ = 8;
  iVar6 = (**(code **)(*piVar5 + 0x48))(local_40);
  local_8 = CONCAT31(local_8._1_3_,7);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0xe);
  iVar1 = param_1[10];
  cVar3 = FUN_00928eb0();
  if ((cVar3 != '\0') || (*(char *)(*(int *)(iVar1 + 0xc) + 0x1d4) != '\0')) {
    *(undefined1 *)(iVar6 + 0x142) = 0;
    FUN_009a8550(iVar6);
  }
  bVar2 = false;
  if ((((char)param_5 != '\0') && (iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8), iVar1 != 0)
      ) && ((*(int *)(*(int *)(iVar1 + 0x88) + 0x1c) == *(int *)(param_3 + 0x1c) ||
            (((*(char *)(param_1[0xc] + 8) == '\0' &&
              (0 < (int)(*(int *)(iVar1 + 0x9c) - *(int *)(iVar1 + 0x98) & 0xffffffc0U))) &&
             (*(int *)(*(int *)(iVar1 + 0x98) + 0x1c) == *(int *)(param_3 + 0x1c))))))) {
    *(undefined1 *)(iVar6 + 0x142) = 0;
    FUN_009a8550(iVar6);
    bVar2 = true;
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("select_label",0xc);
  local_8._0_1_ = 9;
  uVar4 = FUN_0094dbd0(param_3,local_5c);
  local_8._0_1_ = 10;
  param_5 = (int *)(**(code **)(*piVar5 + 0x3c))(local_40);
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00a5ecc0(uVar4,0);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  local_8._0_1_ = 7;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  local_8._0_1_ = 0xb;
  piVar7 = (int *)(**(code **)(*piVar5 + 0x34))(local_40);
  (**(code **)(*piVar7 + 0xd4))(*(undefined4 *)(param_3 + 0x1c));
  local_8._0_1_ = 7;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  local_8._0_1_ = 0xc;
  piVar7 = (int *)(**(code **)(*piVar5 + 0x34))(local_40);
  param_5 = (int *)(**(code **)(*piVar7 + 0xec))();
  local_24 = *(undefined1 **)(param_3 + 0x18);
  iVar6 = *param_5;
  uVar4 = FUN_0052fc10();
  (**(code **)(iVar6 + 0x150))(uVar4);
  local_8._0_1_ = 7;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("country_flag2",0xd);
  local_8._0_1_ = 0xd;
  piVar7 = (int *)(**(code **)(*piVar5 + 0x34))(local_40);
  (**(code **)(*piVar7 + 0xd4))(*(undefined4 *)(param_3 + 0x24));
  local_8._0_1_ = 7;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("country_flag2",0xd);
  local_8._0_1_ = 0xe;
  piVar7 = (int *)(**(code **)(*piVar5 + 0x34))(local_40);
  param_5 = (int *)(**(code **)(*piVar7 + 0xec))();
  local_24 = *(undefined1 **)(param_3 + 0x20);
  iVar6 = *param_5;
  uVar4 = FUN_0052fc10();
  (**(code **)(iVar6 + 0x150))(uVar4);
  local_8._0_1_ = 7;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("score",5);
  local_8._0_1_ = 0xf;
  FUN_00951920(param_3,&param_5,0);
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_8._0_1_ = 0x10;
  pcVar8 = local_7c;
  piVar7 = param_5;
  if ((int)param_5 < 0) {
    piVar7 = (int *)-(int)param_5;
    local_7c[0] = '-';
    pcVar8 = local_7c + 1;
  }
  __itoa((int)piVar7 / 1000,pcVar8,10);
  pcVar8 = local_7c;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  FUN_00409350(local_7c,(int)pcVar8 - (int)(local_7c + 1));
  local_8._0_1_ = 0x11;
  (**(code **)(*piVar5 + 0x3c))(local_5c);
  FUN_00408ed0(local_40,0,0xffffffff);
  FUN_00a5ecc0(local_40,0);
  if (local_2c < 0x10) {
    local_8._0_1_ = 7;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    if (((*(char *)(param_1[0xc] + 8) != '\0') ||
        (*(char *)(*(int *)(param_1[10] + 0xc) + 0x1d4) != '\0')) || (bVar2)) {
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      FUN_00409350("select",6);
      local_8 = CONCAT31(local_8._1_3_,0x12);
      (**(code **)(*piVar5 + 0x48))(local_5c);
      FUN_009a8bc0();
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
    }
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_40[0]);
}

