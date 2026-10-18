// FUN_00760740 @ 00760740 body=[[00760740, 007608c2] [007608c6, 007608ea] [007608ee, 00760904] [00760908, 0076091e] [00760922, 00760938] [0076093c, 0076094c]]


void FUN_00760740(void)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  char *pcVar5;
  char local_c0 [32];
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6d493;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_00475500();
  piVar2 = (int *)(in_ECX + 0x170);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 < 0) {
    piVar2 = (int *)(*(int *)(local_14 + 0x14) + 8 + *(int *)(in_ECX + 0x168) * 0x18);
    *(int *)(in_ECX + 0x170) = (piVar2[1] - *piVar2 >> 2) + -1;
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350("refreshrate_value",0x11);
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8._0_1_ = 1;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_30);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e1436c,3);
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  local_8._0_1_ = 3;
  pcVar3 = __itoa(*(int *)(*(int *)(*(int *)(local_14 + 0x14) + *(int *)(in_ECX + 0x168) * 0x18 + 8)
                          + *(int *)(in_ECX + 0x170) * 4),local_c0,10);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
  local_8._0_1_ = 4;
  uVar4 = FUN_00988f20(local_4c);
  local_8 = CONCAT31(local_8._1_3_,5);
  (**(code **)(*piVar2 + 0x3c))(local_84);
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00a5ecc0(uVar4,0);
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  ExceptionList = local_10;
  return;
}

