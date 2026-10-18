// FUN_00760b60 @ 00760b60 body=[[00760b60, 00760c6c] [00760c70, 00760cca] [00760cce, 00760ce9] [00760ced, 00760d03] [00760d07, 00760d17]]


void FUN_00760b60(void)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  int in_ECX;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char local_84 [32];
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
  puStack_c = &LAB_00b4f540;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00475500();
  if (*(int *)(in_ECX + 0x174) == 0) {
    iVar5 = 0xf;
  }
  else {
    iVar7 = 0;
    piVar3 = &DAT_00f086c0;
    do {
      iVar5 = iVar7;
      if (*piVar3 == *(int *)(in_ECX + 0x174)) break;
      piVar3 = piVar3 + 3;
      iVar7 = iVar7 + 1;
      iVar5 = 0;
    } while ((int)piVar3 < 0xf08774);
  }
  bVar2 = true;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      iVar5 = 0xf;
      bVar2 = false;
    }
  } while (((&DAT_00f086c4)[iVar5 * 0xc] == '\0') && (bVar2));
  if (iVar5 == 0xf) {
    *(undefined4 *)(in_ECX + 0x174) = 0;
  }
  else {
    *(undefined4 *)(in_ECX + 0x174) = (&DAT_00f086c0)[iVar5 * 3];
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("multisample_value",0x11);
  local_8 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8._0_1_ = 1;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_48);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8._0_1_ = 2;
  pcVar4 = __itoa(*(int *)(in_ECX + 0x174),local_84,10);
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(*piVar3 + 0x3c))(local_64);
  FUN_00408ed0(local_2c,0,0xffffffff);
  FUN_00a5ecc0(local_2c,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (local_50 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_64[0]);
}

