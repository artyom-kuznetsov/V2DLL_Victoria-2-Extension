// FUN_00412650 @ 00412650 body=[[00412650, 00412692] [00412696, 004127ed] [004127f1, 00412818] [0041281c, 0041284e] [00412852, 004128b9] [004128bd, 004128ef] [004128f3, 00412910] [00412914, 00412924] [00412928, 0041293e]]


void FUN_00412650(int param_1)

{
  undefined4 **ppuVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 ****ppppuVar5;
  int iVar6;
  undefined4 uVar7;
  int local_a4;
  undefined4 *local_a0;
  int local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  undefined4 local_90;
  undefined4 ***local_88 [5];
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b62f54;
  local_14 = ExceptionList;
  ppuVar1 = (undefined4 **)(param_1 + 0x370);
  ExceptionList = &local_14;
  if (ppuVar1 != &local_98) {
    if (*ppuVar1 != (undefined4 *)0x0) {
      ExceptionList = &local_14;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*ppuVar1);
    }
    ExceptionList = &local_14;
    *ppuVar1 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 0x374) = 0;
    *(undefined4 *)(param_1 + 0x378) = 0;
  }
  local_c = 0xffffffff;
  FUN_00413140(local_88);
  local_98 = (undefined4 *)0x0;
  local_94 = (undefined4 *)0x0;
  local_90 = 0;
  local_c = 2;
  ppppuVar5 = (undefined4 ****)local_88[0];
  if (local_74 < 0x10) {
    ppppuVar5 = local_88;
  }
  FUN_00992240(ppppuVar5,&local_98,0);
  iVar6 = ((int)local_94 - (int)local_98) / 0x1c;
  if ((0 < iVar6) && (FUN_004bf300(iVar6), 0 < iVar6)) {
    local_a0 = local_98;
    local_9c = iVar6;
    do {
      local_a4 = FUN_00aae9af(0x260);
      local_c._0_1_ = 3;
      if (local_a4 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_00401670(local_a4,*(undefined4 *)(param_1 + 0x80));
      }
      local_c._0_1_ = 2;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      local_a4 = iVar6;
      FUN_00409350(&DAT_00dedc68,1);
      local_c._0_1_ = 4;
      FUN_00988f20(local_6c);
      local_c._0_1_ = 5;
      uVar7 = FUN_00988f20(local_a0);
      local_c._0_1_ = 6;
      FUN_00401e80(iVar6,uVar7);
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34);
      }
      local_c = CONCAT31(local_c._1_3_,2);
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      if (*(char *)(iVar6 + 0x210) == '\0') {
        FUN_00401830(iVar6);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar6);
      }
      piVar2 = *(int **)(param_1 + 0x374);
      if ((&local_a4 < piVar2) && (piVar3 = *ppuVar1, piVar3 <= &local_a4)) {
        if (piVar2 == *(int **)(param_1 + 0x378)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x374) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x374) = (*ppuVar1)[(int)&local_a4 - (int)piVar3 >> 2];
        }
        *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) + 4;
      }
      else {
        if (piVar2 == *(int **)(param_1 + 0x378)) {
          FUN_00a513f0();
        }
        if (*(int **)(param_1 + 0x374) != (int *)0x0) {
          **(int **)(param_1 + 0x374) = iVar6;
        }
        *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) + 4;
      }
      local_a0 = local_a0 + 7;
      local_9c = local_9c + -1;
    } while (local_9c != 0);
  }
  puVar4 = local_98;
  if (local_98 == (undefined4 *)0x0) {
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88[0]);
    }
    ExceptionList = local_14;
    return;
  }
  while( true ) {
    if (puVar4 == local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98);
    }
    if (0xf < (uint)puVar4[5]) break;
    puVar4[5] = 0xf;
    puVar4[4] = 0;
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar4 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar4);
}

