// FUN_005443f0 @ 005443f0 body=[[005443f0, 0054444a] [00544450, 005445c4] [005445c8, 005446bc] [005446c0, 005446d4]]


int FUN_005443f0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_4c [5];
  uint local_38;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b9fcab;
  local_20 = *param_2;
  local_18 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4);
  piVar10 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_8 = 0;
  piVar6 = (int *)param_1[0x1ed];
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (piVar6 != (int *)0x0) {
    local_14 = (int *)piVar6[2];
    if (*piVar6 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(*piVar6 + 0x38);
    }
    piVar1 = (int *)*puVar5;
    while (piVar6 = local_14, piVar1 != (int *)0x0) {
      piVar6 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      param_1 = piVar6;
      cVar3 = (**(code **)(*piVar6 + 0x28))();
      if ((((cVar3 == '\0') && (iVar9 = piVar6[0xc], iVar9 != 0)) &&
          (*(int *)(*(int *)(iVar9 + 100) + 300) == param_2[1])) &&
         (*(char *)(*(int *)(iVar9 + 0x68) + 0x42) != '\0')) {
        if ((&param_1 < piVar10) && (local_30 <= &param_1)) {
          iVar9 = (int)&param_1 - (int)local_30;
          if (piVar10 == local_28) {
            FUN_00a513f0();
            piVar10 = local_2c;
          }
          if (piVar10 != (int *)0x0) {
            *piVar10 = local_30[iVar9 >> 2];
          }
        }
        else {
          if (piVar10 == local_28) {
            FUN_00a513f0();
            piVar10 = local_2c;
          }
          if (piVar10 != (int *)0x0) {
            *piVar10 = (int)piVar6;
          }
        }
        piVar10 = piVar10 + 1;
        local_2c = piVar10;
      }
    }
  }
  piVar6 = (int *)0x0;
  piVar10 = (int *)((int)piVar10 - (int)local_30 >> 2);
  local_14 = piVar10;
  if (0 < (int)piVar10) {
    param_1 = (int *)FUN_00aae9af(0x1b8);
    local_8._0_1_ = 1;
    if (param_1 != (int *)0x0) {
      piVar6 = (int *)FUN_004460d0();
    }
    local_8._0_1_ = 0;
    local_1c = DAT_00f096cc;
    puVar5 = &local_20;
    local_20 = 0x28;
    DAT_00f096cc = DAT_00f096cc + 1;
    (**(code **)(piVar6[2] + 0x18))(puVar5);
    FUN_005c93b0(*param_2,param_2[1]);
    (**(code **)(*piVar6 + 0x6c))(*(undefined4 *)(DAT_012588e8 + 0xb24));
    uVar4 = (**(code **)(*piVar6 + 0x3c))(0);
    uVar7 = FUN_004f9d10(local_18,local_4c,uVar4,puVar5);
    local_8._0_1_ = 2;
    FUN_005cdc70(uVar7);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    FUN_00513c80();
    FUN_005cae80(piVar6);
    *(undefined1 *)(piVar6 + 0x59) = 0;
    param_1 = (int *)0x0;
    if (0 < (int)piVar10) {
      do {
        iVar9 = local_30[(int)param_1];
        iVar2 = *(int *)(iVar9 + 0x74);
        FUN_005cb230(iVar9);
        *(undefined4 *)(iVar9 + 0x60) = *param_2;
        *(undefined4 *)(iVar9 + 100) = param_2[1];
        local_1c = iVar9;
        FUN_005dadd0(piVar6 + 0xe,&local_1c);
        *(int *)(iVar9 + 0x60) = piVar6[0x30];
        *(int *)(iVar9 + 100) = piVar6[0x31];
        *(int **)(iVar9 + 0x74) = piVar6;
        iVar8 = FUN_005cabe0(piVar6);
        iVar9 = piVar6[0x68];
        piVar6[0x68] = iVar8;
        if ((iVar8 != iVar9) || ((char)piVar6[0x2f] != '\0')) {
          FUN_005cae80(piVar6);
          *(undefined1 *)(piVar6 + 0x2f) = 0;
        }
        if (*(int *)(iVar2 + 0x40) == 0) {
          FUN_0068aa10(iVar2);
        }
        param_1 = (int *)((int)param_1 + 1);
        piVar10 = local_14;
      } while ((int)param_1 < (int)local_14);
    }
    FUN_005c68c0(piVar6);
    iVar9 = DAT_012588e8;
    *(undefined1 *)(piVar6 + 0x2f) = 1;
    FUN_005cb2c0(*(undefined4 *)(*(int *)(iVar9 + 0xacc) + *(int *)(local_18 + 0xbe4) * 4));
  }
  if (local_30 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  ExceptionList = local_10;
  return (int)piVar10;
}

