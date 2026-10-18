// FUN_0082caa0 @ 0082caa0 body=[[0082caa0, 0082ccaa] [0082ccb0, 0082d0e8]]


int FUN_0082caa0(float param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_24;
  undefined4 *local_20;
  float local_1c;
  undefined4 local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  iVar5 = (int)param_1;
  iVar7 = *(int *)(param_2 + 0xdc);
  iVar8 = *(int *)(iVar7 + 0x5c);
  if (*(int *)(iVar8 + 0xdc) != 0) {
    return *(int *)(iVar7 + 0x58);
  }
  param_1 = 100000.0;
  local_10 = 0;
  if (*(int *)(iVar7 + 300) == 0) {
    local_c = (undefined4 *)0x0;
    if (0 < (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24) {
      local_20 = (undefined4 *)DAT_012588e8[0x2b3];
      local_14 = (int *)(*(int *)(iVar8 + 200) + 4);
      do {
        iVar7 = local_20[*local_14];
        if ((*(char *)(*(int *)(iVar7 + 0x5c) + 0x2a) != '\0') &&
           ((*(int *)(*(int *)(iVar7 + 0x5c) + 0xdc) != 0 || (*(int *)(iVar7 + 300) != 0)))) {
          local_4c = *(undefined4 *)(iVar5 + 0x34);
          cVar6 = FUN_0051b040(*(undefined4 *)
                                (*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4));
          if (cVar6 != '\0') {
            return *(int *)(iVar7 + 0x58);
          }
        }
        local_14 = local_14 + 9;
        local_c = (undefined4 *)((int)local_c + 1);
      } while ((int)local_c < (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24);
    }
    iVar7 = (**(code **)(*DAT_012588e8 + 0x18))();
    if (1 < iVar7) {
      iVar7 = 1;
      do {
        iVar8 = *(int *)(DAT_012588e8[0x2b3] + iVar7 * 4);
        if ((*(char *)(*(int *)(iVar8 + 0x5c) + 0x2a) != '\0') &&
           (*(int *)(*(int *)(iVar8 + 0x5c) + 0xdc) != 0)) {
          if (*(int *)(iVar8 + 300) != 0) {
            local_4c = *(undefined4 *)(iVar5 + 0x34);
            cVar6 = FUN_0051b040(*(undefined4 *)
                                  (*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4));
            if (cVar6 == '\0') goto LAB_0082cc6a;
          }
          FUN_004a0e80(DAT_0125870c,&local_20);
          if ((float)(int)local_20 / 1000.0 < param_1) {
            local_10 = *(int *)(iVar8 + 0x58);
            param_1 = (float)(int)local_20 / 1000.0;
          }
        }
LAB_0082cc6a:
        iVar7 = iVar7 + 1;
        iVar8 = (**(code **)(*DAT_012588e8 + 0x18))();
        if (iVar8 <= iVar7) {
          return local_10;
        }
      } while( true );
    }
  }
  else {
    puVar4 = *(undefined4 **)(*(int *)(iVar7 + 0xe8) + 4);
    while (puVar4 != (undefined4 *)0x0) {
      piVar9 = (int *)*puVar4;
      local_c = (undefined4 *)puVar4[2];
      puVar4 = local_c;
      local_14 = piVar9;
      if (*(int *)(piVar9[0x17] + 0xdc) != 0) {
        FUN_004a0e80(DAT_0125870c,&local_20);
        local_4c = *(undefined4 *)(iVar5 + 0x34);
        local_1c = (float)(int)local_20 / 1000.0;
        local_8 = 0;
        piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4) + 0x7b4
                          );
        while (piVar1 != (int *)0x0) {
          piVar2 = (int *)*piVar1;
          piVar1 = (int *)piVar1[2];
          cVar6 = (**(code **)(*piVar2 + 0x38))();
          piVar9 = local_14;
          if ((cVar6 != '\0') && (piVar2[0x51] != iVar5)) {
            if (piVar2[0x28] == 0) {
              if (piVar2[0x3b] < 1) {
                piVar10 = (int *)0x0;
              }
              else {
                piVar10 = *(int **)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar2[0x3a] * 4);
              }
            }
            else {
              piVar10 = *(int **)(DAT_012588e8[0x2b3] + piVar2[0x28] * 4);
            }
            if (piVar10 == (int *)0x0) {
              piVar10 = (int *)piVar2[0x37];
            }
            if (piVar10 == local_14) {
              local_8 = local_8 + piVar2[0x26];
            }
          }
        }
        local_8 = local_8 + *(int *)(param_2 + 0x98);
        local_3c = *(undefined4 *)(iVar5 + 0x34);
        local_38 = *(undefined4 *)(iVar5 + 0x38);
        piVar9 = (int *)FUN_004b3c40(piVar9,&local_3c);
        iVar7 = local_8;
        fVar11 = local_1c;
        if (*piVar9 < local_8 * 3000) {
          local_34 = *(undefined4 *)(iVar5 + 0x34);
          local_30 = *(undefined4 *)(iVar5 + 0x38);
          piVar9 = (int *)FUN_004b3c40(local_14,&local_34);
          fVar11 = ((float)(iVar7 * 3) - (float)*piVar9 / 1000.0) * 20.0 + local_1c;
        }
        if (local_14[0x4d] != *(int *)(iVar5 + 0x38)) {
          fVar11 = (fVar11 + 20.0) * 2.0;
        }
        puVar4 = local_c;
        if (fVar11 < param_1) {
          local_10 = local_14[0x16];
          param_1 = fVar11;
        }
      }
    }
    puVar4 = *(undefined4 **)(*(int *)(*(int *)(param_2 + 0xdc) + 0xe8) + 0x14);
    while (puVar4 != (undefined4 *)0x0) {
      local_20 = (undefined4 *)puVar4[2];
      local_18 = *(undefined4 *)(iVar5 + 0x34);
      puVar3 = *(undefined4 **)(*(int *)*puVar4 + 4);
      cVar6 = FUN_0051b040(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4))
      ;
      puVar4 = local_20;
      if (cVar6 != '\0') {
        while (puVar4 = local_20, puVar3 != (undefined4 *)0x0) {
          piVar9 = (int *)*puVar3;
          local_c = (undefined4 *)puVar3[2];
          puVar3 = local_c;
          local_14 = piVar9;
          if (*(int *)(piVar9[0x17] + 0xdc) != 0) {
            FUN_004a0e80(DAT_0125870c,&local_24);
            local_1c = (float)local_24 / 1000.0;
            local_8 = 0;
            piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4) +
                              0x7b4);
            while (piVar1 != (int *)0x0) {
              piVar2 = (int *)*piVar1;
              piVar1 = (int *)piVar1[2];
              cVar6 = (**(code **)(*piVar2 + 0x38))();
              piVar9 = local_14;
              if ((cVar6 != '\0') && (piVar2[0x51] != iVar5)) {
                if (piVar2[0x28] == 0) {
                  if (piVar2[0x3b] < 1) {
                    piVar10 = (int *)0x0;
                  }
                  else {
                    piVar10 = *(int **)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar2[0x3a] * 4);
                  }
                }
                else {
                  piVar10 = *(int **)(DAT_012588e8[0x2b3] + piVar2[0x28] * 4);
                }
                if (piVar10 == (int *)0x0) {
                  piVar10 = (int *)piVar2[0x37];
                }
                if (piVar10 == local_14) {
                  local_8 = local_8 + piVar2[0x26];
                }
              }
            }
            local_8 = local_8 + *(int *)(param_2 + 0x98);
            local_44 = *(undefined4 *)(iVar5 + 0x34);
            local_40 = *(undefined4 *)(iVar5 + 0x38);
            piVar9 = (int *)FUN_004b3c40(piVar9,&local_44);
            iVar7 = local_8;
            fVar11 = local_1c;
            if (*piVar9 < local_8 * 3000) {
              local_4c = *(undefined4 *)(iVar5 + 0x34);
              local_48 = *(undefined4 *)(iVar5 + 0x38);
              piVar9 = (int *)FUN_004b3c40(local_14,&local_4c);
              fVar11 = ((float)(iVar7 * 3) - (float)*piVar9 / 1000.0) * 20.0 + local_1c;
            }
            if (local_14[0x4d] != *(int *)(iVar5 + 0x38)) {
              fVar11 = (fVar11 + 20.0) * 2.0;
            }
            puVar3 = local_c;
            if (fVar11 < param_1) {
              local_10 = local_14[0x16];
              param_1 = fVar11;
            }
          }
        }
      }
    }
  }
  return local_10;
}

