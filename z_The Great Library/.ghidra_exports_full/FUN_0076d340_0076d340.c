// FUN_0076d340 @ 0076d340 body=[[0076d340, 0076d3c4] [0076d3c8, 0076d422] [0076d426, 0076d5b1] [0076d5b5, 0076d61b] [0076d61f, 0076d62d] [0076d637, 0076d64d]]


void FUN_0076d340(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_EBX;
  int iVar7;
  undefined4 *puStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  uint uStack_70;
  undefined1 local_6c [12];
  undefined4 uStack_60;
  uint local_5c;
  uint local_58;
  undefined1 auStack_54 [12];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [16];
  uint uStack_2c;
  undefined4 uStack_28;
  void *pvStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b91cb6;
  pvStack_14 = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("playable_countries_window",0x19);
  local_c = 0;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x278) + 0x6c))(local_6c);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_70);
  }
  local_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  uStack_40 = 0xf;
  uStack_44 = 0;
  auStack_54[0] = 0;
  FUN_00409350("playable_countries_list",0x17);
  puStack_10 = (undefined1 *)0x1;
  piVar5 = (int *)(**(code **)(*piVar5 + 0x7c))(auStack_54);
  (**(code **)(*piVar5 + 0x5c))();
  piVar5 = DAT_012587e4;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  local_58 = local_58 & 0xffffff00;
  puStack_84 = (undefined4 *)0x0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  pvStack_14._0_1_ = 2;
  pvStack_14._1_3_ = 0;
  iVar7 = 0;
  puVar4 = puStack_84;
  puVar2 = puStack_84;
  if (0 < *DAT_012587e4) {
    do {
      iVar1 = *(int *)(DAT_012587e4[1] + *(int *)(*(int *)(piVar5[1] + iVar7 * 4) + 0x20) * 4);
      if (0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU)) {
        switch(*(undefined4 *)(param_1 + 0x5f0)) {
        case 0:
          FUN_00779b50(&puStack_84);
          break;
        case 1:
          FUN_00779c80(&puStack_84);
          break;
        case 2:
          FUN_00779dc0(&puStack_84);
          break;
        case 3:
          FUN_00779f00(&puStack_84);
        }
      }
      iVar7 = iVar7 + 1;
      puVar4 = puStack_84;
      puVar2 = puStack_84;
    } while (iVar7 < *piVar5);
  }
  while (puStack_84 = puVar2, puVar4 != (undefined4 *)0x0) {
    uVar6 = puVar4[1];
    puVar2 = (undefined4 *)puVar4[3];
    uVar3 = *puVar4;
    iVar7 = FUN_00aae9af(0x88);
    pvStack_14._0_1_ = 3;
    if (iVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00769020(iVar7,param_1,uVar3,uVar6);
    }
    pvStack_14._0_1_ = 2;
    uStack_44 = 0xf;
    uStack_48 = 0;
    local_58 = local_58 & 0xffffff00;
    FUN_00409350("playable_countries_list",0x17);
    pvStack_14._0_1_ = 4;
    piVar5 = (int *)(**(code **)(*unaff_EBX + 0x7c))(&local_58);
    (**(code **)(*piVar5 + 0x10))(uVar6,0);
    pvStack_14._0_1_ = 2;
    puVar4 = puVar2;
    puVar2 = puStack_84;
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58);
    }
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  auStack_3c[0] = 0;
  FUN_00409350("playable_countries_list",0x17);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,5);
  piVar5 = (int *)(**(code **)(*unaff_EBX + 0x7c))(auStack_3c);
  (**(code **)(*piVar5 + 0x6c))();
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_40);
  }
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar2);
}

