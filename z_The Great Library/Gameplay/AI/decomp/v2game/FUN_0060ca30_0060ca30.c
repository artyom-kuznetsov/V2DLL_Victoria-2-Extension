// FUN_0060ca30 @ 0060ca30 body=[[0060ca30, 0060caf4] [0060caf8, 0060ccc3] [0060ccd0, 0060d039] [0060d03d, 0060d046] [0060d04a, 0060d060]]


void FUN_0060ca30(int param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  float10 fVar14;
  int iStack_ec;
  int iStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  int iStack_c4;
  undefined4 uStack_c0;
  int *piStack_b8;
  int aiStack_b4 [4];
  float fStack_a4;
  int *piStack_a0;
  int iStack_9c;
  uint uStack_94;
  undefined1 local_90 [12];
  undefined4 uStack_84;
  uint local_80;
  undefined4 local_7c;
  int iStack_78;
  undefined **ppuStack_74;
  float fStack_70;
  undefined8 uStack_6c;
  float fStack_64;
  float fStack_60;
  undefined1 uStack_5c;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9a608;
  pvStack_14 = ExceptionList;
  uStack_d4._4_4_ = DAT_012588e8[0x2d7];
  ExceptionList = &pvStack_14;
  puVar5 = (undefined4 *)
           FUN_00522cf0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + DAT_012588e8[0x2d8] * 4),
                        (int)&uStack_d4 + 4);
  *(undefined4 *)(param_1 + 0x200) = *puVar5;
  piVar13 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x204) = puVar5[1];
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = 0;
  FUN_00409350("debt_listbox",0xc);
  local_c = 0;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))(local_90);
  puStack_10 = (undefined1 *)0xffffffff;
  piStack_a0 = piVar6;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_94);
  }
  local_80 = 0xf;
  uStack_84 = 0;
  uStack_94 = uStack_94 & 0xffffff00;
  uStack_d4._0_4_ = DAT_012588e8[0x2d7];
  iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + DAT_012588e8[0x2d8] * 4);
  if (piVar6[0x41] == 0) {
    fStack_a4 = DAT_00f092dc;
  }
  else {
    fVar14 = (float10)(**(code **)(*(int *)(piVar6[0x41] + 0x54) + 0x10))();
    fStack_a4 = (float)fVar14;
  }
  (**(code **)(*piVar6 + 0x5c))();
  piVar6 = DAT_012588e8;
  piVar12 = (int *)0x0;
  piStack_e4 = (int *)0x0;
  piStack_e0 = (int *)0x0;
  piStack_dc = (int *)0x0;
  puStack_10 = (undefined1 *)0x1;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    iStack_e8 = 0;
    piStack_b8 = DAT_012588e8;
    iVar7 = (**(code **)(*DAT_012588e8 + 0x1c))();
    uStack_d4 = CONCAT44(uStack_d4._4_4_,iVar7);
    if (0 < iVar7) {
      do {
        iVar2 = *(int *)(piVar6[0x2b7] + iStack_e8 * 4);
        iVar11 = *(int *)(iVar2 + 0xe90) - *(int *)(iVar2 + 0xe8c) >> 2;
        iStack_c4 = 0;
        iStack_9c = iVar11;
        if (0 < iVar11) {
          do {
            iVar7 = iStack_c4 * 4;
            iVar3 = *(int *)(*(int *)(iVar2 + 0xe8c) + iVar7);
            aiStack_b4[0] = *(int *)(iVar3 + 8);
            if (*(int *)(iVar3 + 0xc) == *(int *)(iVar8 + 0x20)) {
              aiStack_b4[0] = FUN_00aae9af(0x38);
              puStack_10._0_1_ = 3;
              if (aiStack_b4[0] == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = FUN_005fcf30(aiStack_b4[0],*(undefined4 *)(*(int *)(iVar2 + 0xe8c) + iVar7),
                                     iVar2 + 0x1c);
              }
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
              aiStack_b4[0] = iVar7;
              if ((aiStack_b4 < piVar13) && (piStack_e4 <= aiStack_b4)) {
                iVar7 = (int)aiStack_b4 - (int)piStack_e4;
                if (piVar13 == piStack_dc) {
                  FUN_00a513f0();
                  piVar13 = piStack_e0;
                }
                if (piVar13 != (int *)0x0) {
                  *piVar13 = piStack_e4[iVar7 >> 2];
                }
              }
              else {
                if (piVar13 == piStack_dc) {
                  FUN_00a513f0();
                  piVar13 = piStack_e0;
                }
                if (piVar13 != (int *)0x0) {
                  *piVar13 = iVar7;
                }
              }
              piVar13 = piVar13 + 1;
              iVar11 = iStack_9c;
              piStack_e0 = piVar13;
            }
            iStack_c4 = iStack_c4 + 1;
          } while (iStack_c4 < iVar11);
          iVar7 = (uint)uStack_d4;
          piVar12 = piStack_e4;
        }
        iStack_e8 = iStack_e8 + 1;
        piVar6 = piStack_b8;
      } while (iStack_e8 < iVar7);
    }
  }
  else {
    aiStack_b4[0] = 0;
    iStack_c4 = *(int *)(iVar8 + 0xe90) - *(int *)(iVar8 + 0xe8c) >> 2;
    if (0 < iStack_c4) {
      do {
        piVar13 = piStack_e0;
        uStack_d4._0_4_ = FUN_00aae9af(0x38);
        puStack_10._0_1_ = 2;
        if ((uint)uStack_d4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_005fce30((uint)uStack_d4,
                               *(undefined4 *)(*(int *)(iVar8 + 0xe8c) + aiStack_b4[0] * 4));
        }
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
        iStack_e8 = iVar7;
        if ((&iStack_e8 < piVar13) && (piVar12 <= &iStack_e8)) {
          iVar7 = (int)&iStack_e8 - (int)piVar12;
          if (piVar13 == piStack_dc) {
            FUN_00a513f0();
            piVar12 = piStack_e4;
            piVar13 = piStack_e0;
          }
          if (piVar13 != (int *)0x0) {
            *piVar13 = piVar12[iVar7 >> 2];
          }
        }
        else {
          if (piVar13 == piStack_dc) {
            FUN_00a513f0();
            piVar12 = piStack_e4;
            piVar13 = piStack_e0;
          }
          if (piVar13 != (int *)0x0) {
            *piVar13 = iVar7;
          }
        }
        aiStack_b4[0] = aiStack_b4[0] + 1;
        piVar13 = piVar13 + 1;
        piStack_e0 = piVar13;
      } while (aiStack_b4[0] < iStack_c4);
    }
  }
  iVar7 = (int)piVar13 - (int)piVar12 >> 2;
  iVar8 = 0;
  if (iVar7 == 0) {
    uStack_d4 = 0;
    uStack_cc = 0;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
    FUN_009e11f0(*(undefined4 *)(param_1 + 0x198),&uStack_d4,0);
  }
  else {
    uStack_d4 = 0;
    if (0 < iVar7) {
      do {
        uVar4 = *(uint *)(*(int *)(piVar12[iVar8] + 0x30) + 0x18);
        uStack_d4 = CONCAT44(uStack_d4._4_4_ + *(int *)(*(int *)(piVar12[iVar8] + 0x30) + 0x1c) +
                             (uint)CARRY4((uint)uStack_d4,uVar4),(uint)uStack_d4 + uVar4);
        iVar8 = iVar8 + 1;
        piVar12 = piStack_e4;
      } while (iVar8 < iVar7);
    }
    aiStack_b4[0] = 0;
    aiStack_b4[1] = 0;
    aiStack_b4[2] = 0;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
    iStack_ec = 0;
    if (0 < iVar7) {
      piStack_b8 = (int *)(float)((float10)(longlong)uStack_d4 * (float10)3.0517578125e-05);
      do {
        iVar8 = *(int *)(piVar12[iStack_ec] + 0x30);
        plVar1 = (longlong *)(iVar8 + 0x18);
        iStack_c4 = *(int *)plVar1;
        uStack_c0 = *(undefined4 *)(iVar8 + 0x1c);
        iStack_9c = *(int *)(piVar12[iStack_ec] + 0x28);
        uStack_d4 = CONCAT44(uStack_d4._4_4_,
                             ((float)((float10)*plVar1 * (float10)3.0517578125e-05) * 100.0) /
                             (float)piStack_b8);
        FUN_004fb5c0();
        pfVar9 = (float *)FUN_0060d410(&uStack_d4);
        iStack_78 = (int)*pfVar9;
        uStack_6c = *(undefined8 *)(pfVar9 + 3);
        fStack_70 = pfVar9[2];
        uStack_5c = *(undefined1 *)(pfVar9 + 7);
        fStack_64 = pfVar9[5];
        fStack_60 = pfVar9[6];
        ppuStack_74 = CColor::vftable;
        FUN_0054a870();
        iStack_ec = iStack_ec + 1;
        piVar12 = piStack_e4;
        piVar13 = piStack_e0;
      } while (iStack_ec < iVar7);
    }
    FUN_009e11f0(*(undefined4 *)(param_1 + 0x198),aiStack_b4,1);
    uStack_d4 = uStack_d4 & 0xffffffffffffff00;
    if (*(char *)(param_1 + 0xe1) == '\0') {
      FUN_0060e4e0(piVar12,piVar13,iVar7,(uint)uStack_d4);
    }
    else {
      FUN_0060e400(piVar12,piVar13,iVar7,(uint)uStack_d4);
    }
    if ((*(char *)(param_1 + 0xe2) != '\0') && (piVar6 = piVar12, piVar12 != piVar13)) {
      do {
        piVar13 = piVar13 + -1;
        if (piVar6 == piVar13) break;
        iVar8 = *piVar6;
        *piVar6 = *piVar13;
        piVar6 = piVar6 + 1;
        *piVar13 = iVar8;
      } while (piVar6 != piVar13);
    }
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        (**(code **)(*piStack_a0 + 0x10))(piVar12[iVar8],1);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    iVar8 = piStack_a0[0x41];
    if ((iVar8 != 0) && (DAT_00f092dc < fStack_a4)) {
      FUN_00401000((fStack_a4 + 0.0005) * 1000.0,piStack_a0,1,1);
      uVar10 = FUN_00b31c00();
      (**(code **)(*(int *)(iVar8 + 0x54) + 0x1c))(uVar10);
    }
    if (aiStack_b4[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_b4[0]);
    }
  }
  if (piVar12 == (int *)0x0) {
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar12);
}

