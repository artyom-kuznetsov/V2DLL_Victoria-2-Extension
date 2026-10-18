// FUN_00687610 @ 00687610 body=[[00687610, 006876ca] [006876ce, 00687773] [00687794, 0068796a] [0068796e, 00687994] [00687998, 00687a60]]


void FUN_00687610(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  void **ppvVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined **local_188 [48];
  undefined **local_c8 [19];
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int *local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  void *local_18 [4];
  int local_8;
  
  iVar9 = param_1;
  local_8 = 0xffffffff;
  local_18[3] = &LAB_00b8bc39;
  local_18[2] = ExceptionList;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  ExceptionList = local_18 + 2;
  FUN_00409350("gamestate.cpp",0xd);
  local_8 = 0;
  FUN_004015b0(local_44,0xb09,0x10001);
  local_8._0_1_ = 1;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00987ac0(local_c8);
  local_c8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_c8);
  local_8 = 0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  piVar8 = (int *)(param_1 + 0xaf0);
  piVar1 = (int *)(param_1 + 0xaec);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  DAT_01258a66 = 1;
  param_1 = 0;
  if (0 < (int)(*piVar8 - *piVar1 & 0xfffffffcU)) {
    do {
      if ((*(int *)(*(int *)(iVar9 + 0xaec) + param_1 * 4) == 0) &&
         (iVar5 = (**(code **)(**(int **)(iVar9 + 0xb24) + 0x44))(), *(char *)(iVar5 + 0x34) != '\0'
         )) {
        iVar5 = *(int *)(*(int *)(*(int *)(iVar9 + 0xadc) + param_1 * 4) + 0x208);
        if (iVar5 != 0) {
          local_24 = iVar9 + 0xa4;
          for (local_28 = *(int **)(iVar9 + 0xa4);
              (local_28 != *(int **)(iVar9 + 0xa8) && (*local_28 != iVar5)); local_28 = local_28 + 1
              ) {
          }
          FUN_0068f020();
          FUN_0044be00();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar5);
        }
        local_1c = FUN_00aae9af(0x3c);
        local_8 = 2;
        if (local_1c == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          iVar5 = *(int *)(*(int *)(iVar9 + 0xadc) + param_1 * 4);
          pvVar6 = (void *)FUN_0081df60(local_1c,*(undefined4 *)(iVar5 + 0x1c),
                                        *(undefined4 *)(iVar5 + 0x20));
        }
        local_8 = 0xffffffff;
        local_1c = param_1 * 4;
        *(void **)(*(int *)(local_1c + *(int *)(iVar9 + 0xadc)) + 0x208) = pvVar6;
        ppvVar2 = *(void ***)(iVar9 + 0xa8);
        local_18[0] = pvVar6;
        if (local_18 < ppvVar2) {
          ppvVar3 = *(void ***)(iVar9 + 0xa4);
          if (local_18 < ppvVar3) goto LAB_00687840;
          if (ppvVar2 == *(void ***)(iVar9 + 0xac)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(iVar9 + 0xa8) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar9 + 0xa8) =
                 *(undefined4 *)(*(int *)(iVar9 + 0xa4) + ((int)local_18 - (int)ppvVar3 >> 2) * 4);
          }
        }
        else {
LAB_00687840:
          if (ppvVar2 == *(void ***)(iVar9 + 0xac)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(iVar9 + 0xa8) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar9 + 0xa8) = pvVar6;
          }
        }
        *(int *)(iVar9 + 0xa8) = *(int *)(iVar9 + 0xa8) + 4;
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = local_60[0] & 0xffffff00;
        FUN_00409350("gamestate.cpp",0xd);
        local_8 = 3;
        puVar7 = (undefined4 *)FUN_004f97a0();
        local_8._0_1_ = 4;
        FUN_004015b0(local_60,0xb1e,0x10001);
        local_8 = CONCAT31(local_8._1_3_,5);
        uVar4 = FUN_00987d20();
        if (0xf < (uint)puVar7[5]) {
          puVar7 = (undefined4 *)*puVar7;
        }
        piVar8 = (int *)FUN_00418e30(uVar4,puVar7);
        FUN_00408be0(piVar8);
        uVar10 = 0;
        if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
           (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
           iVar5 == -1)) {
          uVar10 = 4;
        }
        if (uVar10 != 0) {
          uVar10 = *(uint *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0xc) | uVar10;
          if (*(int *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0x38) == 0) {
            uVar10 = uVar10 | 4;
          }
          FUN_00401120(uVar10,0);
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_00987ac0(local_188);
        local_188[0] = std::ios_base::vftable;
        FUN_00aad52d(local_188);
        if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_7c);
        }
        local_8 = 0xffffffff;
        local_68 = 0xf;
        local_6c = 0;
        local_7c = local_7c & 0xffffff00;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_60[0]);
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = local_60[0] & 0xffffff00;
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar9 + 0xaf0) - *(int *)(iVar9 + 0xaec) >> 2);
  }
  piVar8 = *(int **)(iVar9 + 0xb3c);
  iVar9 = DAT_012587e4;
  while (piVar8 != (int *)0x0) {
    piVar1 = (int *)piVar8[2];
    iVar5 = *piVar8;
    local_28 = *(int **)(iVar5 + 0x2c);
    while ((piVar8 = piVar1, *(uint *)(iVar5 + 0x2c) <= local_28 &&
           (local_28 < *(uint *)(iVar5 + 0x30)))) {
      uVar4 = *(undefined4 *)(*(int *)(iVar9 + 4) + *(int *)((int)local_28 + 4) * 4);
      local_28 = (int *)((int)local_28 + 8);
      for (puVar7 = *(undefined4 **)(iVar5 + 0x3c);
          (*(undefined4 **)(iVar5 + 0x3c) <= puVar7 && (puVar7 < *(undefined4 **)(iVar5 + 0x40)));
          puVar7 = puVar7 + 2) {
        local_20 = *puVar7;
        FUN_00859f80(&LAB_00691b30,uVar4,*(undefined4 *)(*(int *)(iVar9 + 4) + puVar7[1] * 4));
        iVar9 = DAT_012587e4;
      }
    }
  }
  DAT_01258a66 = 0;
  ExceptionList = local_18[2];
  return;
}

