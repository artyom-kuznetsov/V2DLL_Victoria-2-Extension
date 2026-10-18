// FUN_00769020 @ 00769020 body=[[00769020, 007690da] [007690de, 007691a7] [007691ab, 007691c9] [007691cd, 0076921b] [0076921f, 00769292] [00769296, 007692e7] [007692eb, 0076933c] [00769340, 00769397] [0076939b, 007693bb] [007693bf, 00769467] [0076946b, 0076948b] [0076948f, 0076953d] [00769541, 0076955b] [0076955f, 00769573]]


undefined4 * FUN_00769020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_8c [32];
  char local_6c [4];
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b89f01;
  local_10 = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("playable_countries_list_item",0x1c);
  local_8 = 0;
  piVar2 = *(int **)(DAT_012588e8 + 0xb24);
  local_14 = (**(code **)(*piVar2 + 0x3c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x34))();
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
  uVar3 = (**(code **)(*piVar2 + 0x2c))(local_4c,local_14);
  param_1[8] = uVar3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  param_1[0xb] = param_4;
  param_1[10] = param_3;
  param_1[0xc] = param_2;
  *param_1 = CSelectableCountry::vftable;
  param_1[7] = CSelectableCountry::vftable;
  FUN_007798b0(&LAB_0077a0a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("country_name",0xc);
  local_8._0_1_ = 8;
  uVar3 = FUN_004f97a0();
  local_8._0_1_ = 9;
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_4c);
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0(uVar3,0);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_8._0_1_ = 7;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("playable_countries_button",0x19);
  local_8._0_1_ = 10;
  iVar4 = (**(code **)(*(int *)param_1[8] + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(param_1 + 0xe);
  local_8._0_1_ = 7;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("playable_countries_flag",0x17);
  local_8._0_1_ = 0xb;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_4c);
  piVar2 = (int *)(**(code **)(*piVar2 + 0xec))();
  iVar4 = *piVar2;
  uVar3 = FUN_0052fc10();
  (**(code **)(iVar4 + 0x150))(uVar3);
  local_8._0_1_ = 7;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("playable_countries_flag",0x17);
  local_8._0_1_ = 0xc;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_4c);
  (**(code **)(*piVar2 + 0xd4))(param_4);
  local_8._0_1_ = 7;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("prestige_rank",0xd);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 0xe;
  pcVar5 = __itoa(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4) + 0x1410),local_6c,10)
  ;
  pcVar6 = pcVar5;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
  local_8._0_1_ = 0xf;
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_4c);
  FUN_00408ed0(local_30,0,0xffffffff);
  FUN_00a5ecc0(local_30,0);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8._0_1_ = 7;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("military_rank",0xd);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 0x11;
  pcVar5 = __itoa(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4) + 0x1408),local_6c,10)
  ;
  pcVar6 = pcVar5;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
  local_8._0_1_ = 0x12;
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_4c);
  FUN_00408ed0(local_30,0,0xffffffff);
  FUN_00a5ecc0(local_30,0);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8._0_1_ = 7;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("industry_rank",0xd);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 0x14;
  pcVar5 = __itoa(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4) + 0x140c),local_8c,10)
  ;
  pcVar6 = pcVar5;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
  local_8 = CONCAT31(local_8._1_3_,0x15);
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_68);
  FUN_00408ed0(local_30,0,0xffffffff);
  FUN_00a5ecc0(local_30,0);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

