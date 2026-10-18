// FUN_005cae80 @ 005cae80  (requested 005CAE80, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_005cae80(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
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
  puStack_c = &LAB_00b5f64b;
  local_10 = ExceptionList;
  if ((*(int *)(param_1 + 0x108) != 0) && (DAT_012588e5 == '\0')) {
    ExceptionList = &local_10;
    if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
      ExceptionList = &local_10;
      (**(code **)(**(int **)(param_1 + 0x10c) + 0x38))();
      if (*(int *)(param_1 + 0xdc) != 0) {
        FUN_004c8290(*(undefined4 *)
                      (*(int *)(DAT_0125870c + 0x2aa4) +
                      *(int *)(*(int *)(param_1 + 0xdc) + 0x58) * 4),param_1);
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x108) + 0x38))();
      iVar3 = iVar3 + 0xc;
      (**(code **)(**(int **)(param_1 + 0x108) + 0x40))(iVar3);
      FUN_009962f0(iVar3);
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    uVar4 = FUN_005cae20();
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00408ed0(uVar4,0,0xffffffff);
    local_8 = 0;
    if ((((*(char *)(param_1 + 0xc0) == 'R') && (*(char *)(param_1 + 0xc1) == 'E')) &&
        (*(char *)(param_1 + 0xc2) == 'B')) &&
       ((*(int *)(param_1 + 0x40) != 0 && (*(int *)(**(int **)(param_1 + 0x38) + 0x30) != 0)))) {
      FUN_00408ed0(*(int *)(*(int *)(*(int *)(**(int **)(param_1 + 0x38) + 0x30) + 0x6c) + 0x50) +
                   0x7c,0,0xffffffff);
    }
    iVar5 = FUN_005cabe0(param_1);
    uVar4 = FUN_005caba0();
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00408ed0(uVar4,0,0xffffffff);
    local_8._0_1_ = 1;
    local_6c = 0xf;
    iVar8 = 0;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 2;
    iVar3 = iVar8;
    if (((0 < *(int *)(param_1 + 0x40)) && (iVar5 != 0)) &&
       (piVar6 = *(int **)(param_1 + 0x38), piVar6 != (int *)0x0)) {
      do {
        iVar3 = *piVar6;
        piVar6 = (int *)piVar6[2];
        if (*(int *)(*(int *)(iVar3 + 0x38) + 0x24) == *(int *)(iVar5 + 0x24)) break;
        iVar3 = iVar8;
      } while (piVar6 != (int *)0x0);
    }
    uVar4 = FUN_005c9460(local_9c,local_64,iVar3);
    pcVar1 = (char *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0x10c) = uVar4;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    pcVar7 = pcVar1;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(pcVar1,(int)pcVar7 - (param_1 + 0xc9));
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(**(int **)(param_1 + 0x10c) + 0xc4))(local_48);
    (**(code **)(**(int **)(param_1 + 0x10c) + 0x180))(pcVar1,0);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_8 = 0xffffffff;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00e02bd4,4);
    local_8 = 4;
    (**(code **)(**(int **)(param_1 + 0x10c) + 0x124))(local_2c,0);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    (**(code **)(**(int **)(param_1 + 0x10c) + 0x34))();
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  ExceptionList = local_10;
  return;
}

