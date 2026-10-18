// FUN_0078b4c0 @ 0078b4c0 body=[[0078b4c0, 0078b53c] [0078b540, 0078b5b8] [0078b5bc, 0078b603] [0078b607, 0078b695] [0078b699, 0078b7c7] [0078b7cb, 0078b83a]]


void FUN_0078b4c0(int param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  int *local_68;
  uint local_64;
  uint local_60;
  uint local_5c [3];
  undefined4 uStack_50;
  uint local_4c;
  uint local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbb653;
  pvStack_14 = ExceptionList;
  local_60 = *(uint *)(DAT_012588e8 + 0xb24);
  ExceptionList = &pvStack_14;
  if (*(int *)(param_1 + 0x6c) != *(int *)(param_1 + 0x70)) {
    ExceptionList = &pvStack_14;
    uVar3 = FUN_005e5ce0(*(int *)(param_1 + 0x70),local_60);
    FUN_005e5d30(local_60);
    *(undefined4 *)(param_1 + 0x70) = uVar3;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x28) + 0x38);
  }
  piVar6 = (int *)*puVar4;
  while (piVar6 != (int *)0x0) {
    local_68 = (int *)piVar6[2];
    iVar8 = *piVar6;
    local_40 = 0;
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    local_c = 0;
    local_3c = DAT_01268fec;
    local_38 = DAT_01268ff0;
    if (iVar8 != 0) {
      local_3c = *(undefined4 *)(iVar8 + 8);
      local_38 = *(undefined4 *)(iVar8 + 0xc);
      uVar3 = FUN_00632170(iVar8);
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00408ed0(uVar3,0,0xffffffff);
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      local_40 = iVar8;
    }
    local_c = 2;
    FUN_005e5bb0();
    local_c = 0xffffffff;
    piVar6 = local_68;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
  }
  local_64 = local_64 & 0xffffff00;
  FUN_0079efd0(*(int *)(param_1 + 0x6c),*(int *)(param_1 + 0x70),
               (*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c)) / 0x28,local_64);
  iVar5 = FUN_0078b1f0(param_1);
  iVar8 = (*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c)) / 0x28;
  if (iVar5 < iVar8) {
    iVar8 = iVar5;
  }
  *(int *)(param_1 + 0x58) = iVar8;
  puVar7 = (uint *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2 != iVar8) {
    if (puVar7 != local_5c) {
      if (*puVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    local_c = 0xffffffff;
    if (0 < *(int *)(param_1 + 0x58)) {
      FUN_004bf300(*(int *)(param_1 + 0x58));
      local_64 = 0;
      if (0 < *(int *)(param_1 + 0x58)) {
        do {
          local_68 = (int *)FUN_00aae9af(0xd8);
          local_c = 4;
          if (local_68 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_00789a60(local_68,local_60);
          }
          local_c = 0xffffffff;
          ppiVar1 = *(int ***)(param_1 + 0x60);
          local_68 = piVar6;
          if ((&local_68 < ppiVar1) && (ppiVar2 = (int **)*puVar7, ppiVar2 <= &local_68)) {
            if (ppiVar1 == *(int ***)(param_1 + 100)) {
              FUN_00a513f0();
            }
            if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
              **(undefined4 **)(param_1 + 0x60) =
                   *(undefined4 *)(*puVar7 + ((int)&local_68 - (int)ppiVar2 >> 2) * 4);
            }
          }
          else {
            if (ppiVar1 == *(int ***)(param_1 + 100)) {
              FUN_00a513f0();
            }
            if (*(int **)(param_1 + 0x60) != (int *)0x0) {
              **(int **)(param_1 + 0x60) = (int)piVar6;
            }
          }
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 4;
          local_64 = local_64 + 1;
        } while ((int)local_64 < *(int *)(param_1 + 0x58));
      }
    }
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfad80,4);
  local_c = 5;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x7c))(local_5c);
  puStack_10 = (undefined1 *)0xffffffff;
  if (local_4c < 0x10) {
    local_4c = 0xf;
    iVar8 = 0;
    uStack_50 = 0;
    local_60 = local_60 & 0xffffff00;
    (**(code **)(*piVar6 + 0x24))();
    if (0 < *(int *)(param_1 + 0x58)) {
      do {
        (**(code **)(*piVar6 + 0x10))(*(undefined4 *)(*puVar7 + iVar8 * 4),0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x58));
    }
    (**(code **)(*piVar6 + 0x6c))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x38))();
    FUN_0078b2e0();
    FUN_0078b140();
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_60);
}

