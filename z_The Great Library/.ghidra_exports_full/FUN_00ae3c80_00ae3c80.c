// FUN_00ae3c80 @ 00ae3c80 body=[[00ae3c80, 00ae3ea8]]


void FUN_00ae3c80(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iStack_30;
  uint uStack_28;
  uint uStack_20;
  uint uStack_1c;
  
  if ((*(int *)(*(int *)((int)param_2 + 0xd8) + 4) != 0) &&
     (iVar3 = (**(code **)(**(int **)(*(int *)((int)param_2 + 0xd8) + 4) + 0x10))(), iVar3 != 0)) {
    if (*(int *)(*(int *)(param_1 + 0xd8) + 4) == 0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)(**(code **)(**(int **)(*(int *)(param_1 + 0xd8) + 4) + 0x10))();
    }
    uVar1 = param_2[1];
    uStack_1c = 0;
    if (uVar1 != 0) {
      do {
        piVar4 = *(int **)(*param_2 + uStack_1c * 4);
        iVar3 = (**(code **)(*piVar4 + 8))();
        if (iVar3 == 1) {
          piVar4 = (int *)FUN_00aeb3a0(piVar4[1]);
          if (piVar4 == (int *)0x0) {
            FUN_00b0c180();
          }
          else {
            iVar3 = (**(code **)(*piVar4 + 8))();
            if (iVar3 == 1) {
              uVar5 = FUN_00b0b9c0();
              uStack_20 = 0;
              if (uVar5 != 0) {
                do {
                  piVar4 = (int *)FUN_00b0b9d0(uStack_20);
                  piVar6 = (int *)FUN_00b0b9d0(uStack_20);
                  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x80) + piVar4[2] * 4) + 0x1c);
                  if ((*(int *)(iVar3 + 4) == 0) ||
                     (iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x10))(), iVar3 == 0)) {
                    (*(code *)PTR__free_00f01b10)(*piVar6);
                    *piVar6 = 0;
                    piVar6[1] = 0;
                  }
                  else {
                    uVar2 = *(uint *)(iVar3 + 0x18);
                    iVar10 = 0;
                    iVar3 = FUN_00add3d0(0xfadefade,0);
                    uStack_28 = 0;
                    if (piVar4[1] != 0) {
                      iVar9 = 0;
                      iStack_30 = 0;
                      do {
                        uVar11 = 0;
                        if (uVar2 != 0) {
                          puVar8 = (undefined4 *)(*piVar4 + iStack_30);
                          do {
                            if (*(int *)(iVar3 + uVar11 * 4) == puVar8[3]) {
                              iVar7 = *piVar6;
                              *(undefined4 *)(iVar7 + iVar9) = *puVar8;
                              iVar7 = iVar7 + iVar9;
                              *(undefined4 *)(iVar7 + 4) = puVar8[1];
                              *(undefined4 *)(iVar7 + 8) = puVar8[2];
                              *(undefined4 *)(iVar7 + 0xc) = puVar8[3];
                              *(uint *)(iVar9 + 0xc + *piVar6) = uVar11;
                              iVar10 = iVar10 + 1;
                              iVar9 = iVar9 + 0x10;
                              break;
                            }
                            uVar11 = uVar11 + 1;
                          } while (uVar11 < uVar2);
                        }
                        iStack_30 = iStack_30 + 0x10;
                        uStack_28 = uStack_28 + 1;
                      } while (uStack_28 < (uint)piVar4[1]);
                    }
                    piVar6[1] = iVar10;
                    iVar3 = (*(code *)PTR_FUN_00f01b0c)(*piVar6,iVar10 << 4,0x12e,4,0x65,0,0);
                    *piVar6 = iVar3;
                  }
                  uStack_20 = uStack_20 + 1;
                } while (uStack_20 < uVar5);
              }
            }
          }
        }
        uStack_1c = uStack_1c + 1;
      } while (uStack_1c < uVar1);
    }
  }
  return;
}

