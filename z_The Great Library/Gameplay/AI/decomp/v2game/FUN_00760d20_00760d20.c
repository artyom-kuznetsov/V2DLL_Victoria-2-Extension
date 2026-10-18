// FUN_00760d20 @ 00760d20 body=[[00760d20, 00760e80] [00760e84, 00760e9f] [00760ea3, 00760eb9] [00760ebd, 00760ecd]]


void FUN_00760d20(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  int *piVar4;
  char *pcVar5;
  int iVar6;
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
    iVar2 = 0xf;
  }
  else {
    iVar6 = 0;
    piVar4 = &DAT_00f086c0;
    do {
      iVar2 = iVar6;
      if (*piVar4 == *(int *)(in_ECX + 0x174)) break;
      piVar4 = piVar4 + 3;
      iVar6 = iVar6 + 1;
      iVar2 = 0;
    } while ((int)piVar4 < 0xf08774);
  }
  do {
    iVar2 = iVar2 + 1;
    if (iVar2 < 0x10) {
      if (iVar2 == 0xf) {
        *(undefined4 *)(in_ECX + 0x174) = 0;
        goto LAB_00760daf;
      }
    }
    else {
      iVar2 = 0;
    }
  } while ((&DAT_00f086c4)[iVar2 * 0xc] == '\0');
  *(undefined4 *)(in_ECX + 0x174) = (&DAT_00f086c0)[iVar2 * 3];
LAB_00760daf:
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
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_48);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8._0_1_ = 2;
  pcVar3 = __itoa(*(int *)(in_ECX + 0x174),local_84,10);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(*piVar4 + 0x3c))(local_64);
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

