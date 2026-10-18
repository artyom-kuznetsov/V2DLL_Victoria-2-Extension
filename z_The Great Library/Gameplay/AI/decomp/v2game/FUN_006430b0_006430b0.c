// FUN_006430b0 @ 006430b0 body=[[006430b0, 006431cd] [006431d1, 00643255] [00643260, 006438b8]]


void FUN_006430b0(int param_1,int param_2,undefined4 *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int local_e0 [13];
  float local_ac;
  undefined1 local_9c [56];
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  float local_48 [3];
  float local_3c [3];
  float local_30;
  int *local_2c [2];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c74b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)(*(int *)(param_1 + 8) + 0x28) != '\0') &&
     (ExceptionList = &local_10, *(int **)(param_1 + 0x38) != (int *)0x0)) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x38))();
    FUN_009962f0(param_3 + 0x535);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar5 = *(int *)(param_1 + 8);
    local_30 = *(float *)(iVar5 + 0x54) - (float)*(int *)(iVar5 + 0x74);
    local_2c[1] = (int *)(*(float *)(iVar5 + 0x58) - (float)*(int *)(iVar5 + 0x78));
    local_2c[0] = (int *)0x0;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("capital",7);
    local_8 = 0;
    piVar4 = (int *)FUN_005c2ad0(local_64);
    local_1c = (**(code **)(*piVar4 + 0x48))();
    (**(code **)(param_3[0x535] + 0x10))(local_1c);
    local_8 = 0xffffffff;
    *(int *)(param_1 + 0x38) = local_1c;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    (**(code **)(**(int **)(param_1 + 0x38) + 0x84))(&local_30);
    if (*(int *)(param_3[0x836] + *(int *)(*(int *)(param_1 + 8) + 0xb4) * 4) != 0) {
      FUN_00644a70(param_3,*(undefined4 *)(param_1 + 0x38),1);
    }
  }
  if (*(char *)(*(int *)(param_1 + 8) + 0x28) != '\0') {
    FUN_006438c0(param_1);
  }
  if (*(int *)(param_2 + 0x334) == 0) {
    if ((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) & 0xfffffff8U) != 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x98) + 4) + 0x38))();
      FUN_009962f0(param_3 + 0x535);
      puVar6 = *(undefined4 **)(param_1 + 0x98);
      puVar3 = *(undefined4 **)(param_1 + 0x9c);
      puVar9 = puVar6;
      while (puVar9 = puVar9 + 2, puVar9 != puVar3) {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6 = puVar6 + 2;
      }
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -8;
    }
  }
  else {
    local_20 = param_3[0x82e];
    local_1c = *(int *)(local_20 + 0x225c) - *(int *)(local_20 + 0x2258) >> 6;
    if (0 < local_1c) {
      local_18 = 0;
      do {
        piVar10 = (int *)(*(int *)(local_20 + 0x2258) + local_18);
        piVar4 = piVar10;
        if (0xf < (uint)piVar10[5]) {
          piVar4 = (int *)*piVar10;
        }
        iVar5 = (**(code **)(*(int *)(param_2 + 0x328) + 8))(piVar4);
        if ((iVar5 == 0) || (*(char *)(iVar5 + 0x1c) == '\0')) {
          iVar5 = 0;
          iVar8 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 3;
          if (0 < iVar8) {
            puVar6 = *(undefined4 **)(param_1 + 0x98);
LAB_00643430:
            if ((int *)*puVar6 != piVar10) goto code_r0x00643434;
            local_24 = iVar5 * 8;
            (**(code **)(*(int *)(*(undefined4 **)(param_1 + 0x98))[iVar5 * 2 + 1] + 0x38))();
            FUN_009962f0(param_3 + 0x535);
            puVar3 = *(undefined4 **)(param_1 + 0x9c);
            puVar6 = (undefined4 *)(local_24 + 8 + *(int *)(param_1 + 0x98));
            if (puVar6 != puVar3) {
              puVar9 = puVar6 + -2;
              do {
                *puVar9 = *puVar6;
                puVar9[1] = puVar6[1];
                puVar6 = puVar6 + 2;
                puVar9 = puVar9 + 2;
              } while (puVar6 != puVar3);
            }
            *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -8;
          }
        }
        else {
          iVar8 = 0;
          iVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 3;
          if (0 < iVar5) {
            puVar6 = *(undefined4 **)(param_1 + 0x98);
            do {
              if ((int *)*puVar6 == piVar10) goto LAB_006434a2;
              iVar8 = iVar8 + 1;
              puVar6 = puVar6 + 2;
            } while (iVar8 < iVar5);
          }
          local_2c[0] = piVar10;
          piVar4 = (int *)FUN_005c2ad0(piVar10 + 7);
          piVar4 = (int *)(**(code **)(*piVar4 + 0x48))();
          (**(code **)(param_3[0x535] + 0x10))(piVar4);
          local_3c[1] = 0.0;
          local_3c[0] = (float)piVar10[0xe] + 0.0;
          local_3c[2] = (float)piVar10[0xf] + 0.0;
          local_2c[1] = piVar4;
          (**(code **)(*piVar4 + 0x34))();
          (**(code **)(*piVar4 + 0x84))(local_3c);
          if (*(int *)(param_3[0x836] + *(int *)(*(int *)(param_1 + 8) + 0xb4) * 4) != 0) {
            FUN_00644a70(param_3,piVar4,1);
          }
          ppiVar1 = *(int ***)(param_1 + 0x9c);
          if (local_2c < ppiVar1) {
            ppiVar2 = *(int ***)(param_1 + 0x98);
            if (ppiVar2 <= local_2c) {
              if (ppiVar1 == *(int ***)(param_1 + 0xa0)) {
                FUN_00810820();
              }
              puVar6 = (undefined4 *)
                       (*(int *)(param_1 + 0x98) + ((int)local_2c - (int)ppiVar2 >> 3) * 8);
              puVar3 = *(undefined4 **)(param_1 + 0x9c);
              if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = *puVar6;
                puVar3[1] = puVar6[1];
              }
              *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 8;
              goto LAB_006434a2;
            }
          }
          if (ppiVar1 == *(int ***)(param_1 + 0xa0)) {
            FUN_00810820();
          }
          puVar6 = *(undefined4 **)(param_1 + 0x9c);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = local_2c[0];
            puVar6[1] = piVar4;
          }
          *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 8;
        }
LAB_006434a2:
        local_18 = local_18 + 0x40;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  local_24 = *(int *)(*(int *)(param_2 + 0x118) + DAT_01258720 * 4);
  iVar5 = *(int *)(param_2 + 0x118);
  local_1c = 0;
  if (0 < (int)(*(int *)(param_2 + 0x11c) - iVar5 & 0xfffffffcU)) {
    do {
      iVar8 = local_1c;
      local_18 = *(int *)(iVar5 + local_1c * 4);
      if ((local_18 != local_24) && (*(char *)(*(int *)(local_18 + 0x18) + 0x138) == '\0')) {
        if ((*(char *)(*(int *)(param_1 + 8) + 0x28) != '\0') &&
           (*(int *)(*(int *)(param_1 + 0x54) + local_1c * 4) != 0)) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + local_1c * 4) + 0x38))();
          uVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + iVar8 * 4) + 0x44))();
          FUN_009962f0(uVar7);
          *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar8 * 4) = 0;
        }
        local_20 = *(int *)(local_18 + 0x24) / 1000;
        if ((*(int *)(*(int *)(param_1 + 0x54) + iVar8 * 4) != 0) &&
           (*(int *)(*(int *)(param_1 + 100) + iVar8 * 4) != local_20)) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + iVar8 * 4) + 0x38))();
          uVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + iVar8 * 4) + 0x44))();
          FUN_009962f0(uVar7);
          *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar8 * 4) = 0;
        }
        iVar5 = local_20;
        if ((DAT_0125ceac < *(int *)(local_18 + 0x20)) &&
           (*(char *)(*(int *)(local_18 + 0x18) + 0xe0) != '\0')) {
          if (*(int *)(*(int *)(param_1 + 0x54) + iVar8 * 4) == 0) {
            *(int *)(*(int *)(param_1 + 100) + iVar8 * 4) = local_20;
            FUN_00988fa0(*(int *)(local_18 + 0x18) + 0x20);
            local_8 = 1;
            if (1 < iVar5) {
              uVar7 = FUN_009888f0(local_9c);
              local_8._0_1_ = 2;
              FUN_00448aa0(uVar7,0,0xffffffff);
              local_8 = CONCAT31(local_8._1_3_,1);
              FUN_00408ad0();
            }
            iVar5 = *(int *)(param_1 + 8);
            iVar8 = *(int *)(*(int *)(local_18 + 0x18) + 0x58) * 0x10 + *(int *)(iVar5 + 0x330);
            local_48[0] = *(float *)(iVar8 + 8) - (float)*(int *)(iVar5 + 0x74);
            local_48[2] = *(float *)(iVar8 + 0xc) - (float)*(int *)(iVar5 + 0x78);
            local_48[1] = 0.0;
            piVar4 = (int *)FUN_009964f0(*param_3);
            iVar5 = local_18;
            if (*(char *)(*(int *)(local_18 + 0x18) + 0x129) != '\0') {
              local_2c[1] = *(int **)(*(int *)(*(int *)(local_18 + 0x18) + 0x58) * 0x10 +
                                      *(int *)(*(int *)(param_1 + 8) + 0x330) + 8);
              iVar8 = FUN_004c4570(*(int *)(param_1 + 8));
              if (0.0 < (float)local_2c[1] - *(float *)(iVar8 + 8)) {
                *(undefined1 *)((int)piVar4 + 0x14e) = 1;
              }
            }
            (**(code **)(*piVar4 + 0x34))();
            (**(code **)(*piVar4 + 0x84))(local_48);
            (**(code **)(*piVar4 + 0x94))
                      (*(undefined4 *)
                        (*(int *)(*(int *)(param_1 + 8) + 0x350) +
                        *(int *)(*(int *)(iVar5 + 0x18) + 0x58) * 4));
            FUN_00644b40(piVar4,1);
            iVar5 = *(int *)(local_18 + 0x18);
            piVar10 = piVar4 + 0x15;
            piVar11 = local_e0;
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar11 = *piVar10;
              piVar10 = piVar10 + 1;
              piVar11 = piVar11 + 1;
            }
            local_ac = local_ac +
                       *(float *)(*(int *)(*(int *)(param_1 + 8) + 0x340) +
                                 *(int *)(iVar5 + 0x58) * 4);
            (**(code **)(*piVar4 + 0xa4))(local_e0);
            *(int **)(*(int *)(param_1 + 0x54) + local_1c * 4) = piVar4;
            local_8 = 0xffffffff;
            FUN_00408ad0();
            iVar8 = local_1c;
          }
        }
        else if (*(int *)(*(int *)(param_1 + 0x54) + iVar8 * 4) != 0) {
          (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + iVar8 * 4) + 0x38))();
          FUN_009962f0(param_3 + 0x535);
          *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar8 * 4) = 0;
        }
      }
      iVar5 = *(int *)(param_2 + 0x118);
      local_1c = iVar8 + 1;
    } while (local_1c < *(int *)(param_2 + 0x11c) - iVar5 >> 2);
  }
  ExceptionList = local_10;
  return;
code_r0x00643434:
  iVar5 = iVar5 + 1;
  puVar6 = puVar6 + 2;
  if (iVar8 <= iVar5) goto LAB_006434a2;
  goto LAB_00643430;
}

