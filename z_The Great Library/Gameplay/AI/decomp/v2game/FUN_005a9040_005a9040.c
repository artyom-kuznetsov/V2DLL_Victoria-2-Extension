// FUN_005a9040 @ 005a9040  (requested 005A9040, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_005a9040(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *in_ECX;
  char *pcVar6;
  char local_bc [32];
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
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
  puStack_c = &LAB_00b72053;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)in_ECX[4] + 0x48))();
  (**(code **)(*(int *)in_ECX[5] + 0x48))();
  iVar3 = (**(code **)(*in_ECX + 0x24))();
  if (iVar3 == 3) {
    FUN_004b7910();
  }
  else {
    *(undefined4 *)(in_ECX[6] + 0x10c) = 0;
  }
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    piVar2 = *(int **)(DAT_012588e8 + 0xb24);
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_8._0_1_ = 2;
    pcVar4 = __itoa(*(int *)(in_ECX[6] + 0x58),local_bc,10);
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
    local_8._0_1_ = 3;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    FUN_00409350("battle_over_",0xc);
    local_8._0_1_ = 4;
    uVar5 = FUN_00988f20(local_48);
    local_8 = CONCAT31(local_8._1_3_,5);
    (**(code **)(*piVar2 + 0x120))(uVar5,local_2c,local_80,0);
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c);
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

