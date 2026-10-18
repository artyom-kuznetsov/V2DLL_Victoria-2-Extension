// FUN_00797d40 @ 00797d40 body=[[00797d40, 00797de0] [00797de4, 00797e2c] [00797e30, 00797fd8] [00797fe2, 00797ff8] [00798002, 00798015]]


void FUN_00797d40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 **ppuVar9;
  int aiStack_64 [2];
  int *piStack_5c;
  undefined4 *puStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b9e96e;
  pvStack_14 = ExceptionList;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = (undefined4 *)((uint)local_48 & 0xffffff00);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = local_38 & 0xffffff00;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("leaderlist",10);
  local_c = CONCAT31(local_c._1_3_,2);
  piVar7 = (int *)(**(code **)(*(int *)*param_1 + 0x7c))(local_34);
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
  piStack_5c = piVar7;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  local_24 = 0xf;
  uStack_28 = 0;
  local_38 = local_38 & 0xffffff00;
  (**(code **)(*piVar7 + 0x5c))();
  aiStack_64[0] = *(int *)(param_1[1] + 0xc0);
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1[1] + 0xc4) * 4) + 0xbd4)
  ;
  while (puVar3 = puStack_58, piVar1 != (int *)0x0) {
    piVar7 = (int *)param_1[1];
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    aiStack_64[0] = iVar2;
    cVar6 = (**(code **)(*piVar7 + 0x38))();
    if (((((cVar6 == '\0') || (*(int *)(iVar2 + 0xb0) == 0)) &&
         ((cVar6 = (**(code **)(*piVar7 + 0x3c))(), cVar6 == '\0' || (*(int *)(iVar2 + 0xb0) == 1)))
         ) && ((cVar6 = (**(code **)(*piVar7 + 0x40))(), cVar6 == '\0' ||
               (*(int *)(iVar2 + 0xb0) == 2)))) &&
       ((*(int **)(iVar2 + 0x88) == (int *)0x0 || (*(int **)(iVar2 + 0x88) == piVar7)))) {
      ppuVar9 = &puStack_58;
      if (*(char *)(iVar2 + 0xd4) == '\0') {
        ppuVar9 = &local_48;
      }
      switch(param_1[0x4c]) {
      case 0:
        FUN_0079e540(ppuVar9,aiStack_64);
        break;
      case 1:
        FUN_0079e610(ppuVar9,aiStack_64);
        break;
      case 2:
        FUN_0079e750(ppuVar9,aiStack_64);
        break;
      case 3:
        FUN_0079e820(ppuVar9,aiStack_64);
      }
    }
    piVar7 = piStack_5c;
  }
  while (puVar4 = local_48, puVar5 = local_48, puVar3 != (undefined4 *)0x0) {
    uVar8 = *puVar3;
    puVar3 = (undefined4 *)puVar3[2];
    piStack_5c = (int *)FUN_00aae9af(0xd8);
    puStack_10._0_1_ = 3;
    if (piStack_5c == (int *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00795f40(piStack_5c,param_1,*(undefined4 *)(DAT_012588e8 + 0xb24),uVar8,param_1[1]
                          );
    }
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
    (**(code **)(*piVar7 + 0x10))(uVar8,1);
  }
  while (local_48 = puVar5, puVar4 != (undefined4 *)0x0) {
    uVar8 = *puVar4;
    puVar4 = (undefined4 *)puVar4[2];
    piStack_5c = (int *)FUN_00aae9af(0xd8);
    puStack_10._0_1_ = 4;
    if (piStack_5c == (int *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00795f40(piStack_5c,param_1,*(undefined4 *)(DAT_012588e8 + 0xb24),uVar8,param_1[1]
                          );
    }
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
    (**(code **)(*piVar7 + 0x10))(uVar8,1);
    puVar5 = local_48;
  }
  (**(code **)(*piVar7 + 0x50))();
  if (puVar5 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar5);
  }
  if (puStack_58 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puStack_58);
  }
  ExceptionList = pvStack_18;
  return;
}

