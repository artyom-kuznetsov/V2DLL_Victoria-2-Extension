// FUN_00780a90 @ 00780a90 body=[[00780a90, 00780ee4] [00780ee8, 00780efb]]


void FUN_00780a90(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined1 uStack_4d;
  int aiStack_4c [2];
  float fStack_44;
  int *local_40;
  int iStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int *piStack_24;
  int *piStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b89c13;
  pvStack_14 = ExceptionList;
  local_40 = *(int **)(DAT_012588e8 + 0xb24);
  fVar1 = DAT_00f092dc;
  ExceptionList = &pvStack_14;
  if (param_2[0x41] != 0) {
    ExceptionList = &pvStack_14;
    fVar9 = (float10)(**(code **)(*(int *)(param_2[0x41] + 0x54) + 0x10))();
    fStack_44 = (float)fVar9;
    fVar1 = fStack_44;
  }
  FUN_00401000((fVar1 + 0.0005) * 1000.0);
  iStack_3c = FUN_00b31c00();
  (**(code **)(*param_2 + 0x5c))();
  piStack_28 = (int *)0x0;
  piStack_24 = (int *)0x0;
  piStack_20 = (int *)0x0;
  iStack_c = 0;
  if ((char)param_5 == '\0') {
    FUN_009beeb0((int *)(param_3 + 0x6c));
    piVar8 = piStack_24;
  }
  else {
    iVar7 = *(int *)(param_3 + 0x70) - *(int *)(param_3 + 0x6c) >> 2;
    aiStack_4c[1] = iVar7;
    FUN_004bf300(iVar7);
    fStack_44 = 0.0;
    piVar8 = piStack_24;
    if (0 < iVar7) {
      do {
        iVar3 = *(int *)(*(int *)(param_3 + 0x6c) + (int)fStack_44 * 4);
        aiStack_4c[0] = iVar3;
        iVar2 = FUN_00967f50();
        if (iVar2 != 0) {
          uStack_38 = *(uint *)(iVar3 + 0x34);
          uStack_34 = *(undefined4 *)(iVar3 + 0x38);
          iVar7 = DAT_01258a94;
          if (uStack_38 < 0x1269) {
            iVar7 = DAT_01258a98;
          }
          if (iVar7 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_009c1d40();
          }
          iVar7 = DAT_01258a94;
          *(int *)(iVar3 + 0x30) = iVar2;
          uStack_30 = *(uint *)(param_1 + 0xabc);
          uStack_2c = *(undefined4 *)(param_1 + 0xac0);
          if (uStack_30 < 0x1269) {
            iVar7 = DAT_01258a98;
          }
          if (iVar7 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_009c1d40();
          }
          *(int *)(param_1 + 0xab8) = iVar3;
          iVar7 = aiStack_4c[1];
          if (iVar2 == iVar3) {
            if ((aiStack_4c < piVar8) && (piStack_28 <= aiStack_4c)) {
              iVar7 = (int)aiStack_4c - (int)piStack_28;
              if (piVar8 == piStack_20) {
                FUN_00a513f0();
                piVar8 = piStack_24;
              }
              if (piVar8 != (int *)0x0) {
                *piVar8 = piStack_28[iVar7 >> 2];
              }
            }
            else {
              if (piVar8 == piStack_20) {
                FUN_00a513f0();
                piVar8 = piStack_24;
              }
              if (piVar8 != (int *)0x0) {
                *piVar8 = aiStack_4c[0];
              }
            }
            piVar8 = piVar8 + 1;
            iVar7 = aiStack_4c[1];
            piStack_24 = piVar8;
          }
        }
        fStack_44 = (float)((int)fStack_44 + 1);
      } while ((int)fStack_44 < iVar7);
    }
  }
  iVar7 = *(int *)(param_1 + 0xaa8);
  if (iVar7 == 0) {
    fStack_44 = (float)CONCAT31(fStack_44._1_3_,*(undefined1 *)(param_1 + 0xaac));
    FUN_00787540(piStack_28,piVar8,(int)piVar8 - (int)piStack_28 >> 2,fStack_44);
  }
  else if (iVar7 == 1) {
    fStack_44 = (float)CONCAT31(fStack_44._1_3_,*(undefined1 *)(param_1 + 0xaac));
    FUN_00787620(piStack_28,piVar8,(int)piVar8 - (int)piStack_28 >> 2,fStack_44);
  }
  else if (iVar7 == 2) {
    fStack_44 = (float)CONCAT31(fStack_44._1_3_,*(undefined1 *)(param_1 + 0xaac));
    FUN_00787700(piStack_28,piVar8,(int)piVar8 - (int)piStack_28 >> 2,fStack_44);
  }
  aiStack_4c[1] = (int)piVar8 - (int)piStack_28 >> 2;
  fStack_44 = 0.0;
  if (0 < aiStack_4c[1]) {
    do {
      uStack_4d = 0;
      if ((*(int *)(param_1 + 0xab0) == 0) || ((char)param_5 != '\0')) {
LAB_00780dd2:
        iVar7 = FUN_00aae9af(0x1d0);
        piVar8 = local_40;
        iStack_c._0_1_ = 1;
        aiStack_4c[0] = iVar7;
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          uVar6 = param_4;
          uVar10 = param_5;
          uVar4 = (**(code **)(*local_40 + 0x3c))(param_4,param_5);
          uVar5 = (**(code **)(*piVar8 + 0x34))(uVar4);
          iVar7 = FUN_0077cd30(iVar7,param_1,param_3,piStack_28[(int)fStack_44],uVar5,uVar4,uVar6,
                               uVar10);
        }
        iStack_c = (uint)iStack_c._1_3_ << 8;
        *(undefined1 *)(iVar7 + 0x174) = uStack_4d;
        (**(code **)(*param_2 + 0x10))(iVar7,0);
      }
      else {
        iVar7 = piStack_28[(int)fStack_44];
        uStack_30 = *(uint *)(iVar7 + 0xc);
        uStack_2c = *(undefined4 *)(iVar7 + 0x10);
        iVar3 = DAT_01258a94;
        if (uStack_30 < 0x1269) {
          iVar3 = DAT_01258a98;
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_009c1d40();
        }
        iVar2 = DAT_01258a94;
        *(int *)(iVar7 + 8) = iVar3;
        uStack_38 = *(uint *)(param_1 + 0xabc);
        uStack_34 = *(undefined4 *)(param_1 + 0xac0);
        if (uStack_38 < 0x1269) {
          iVar2 = DAT_01258a98;
        }
        if (iVar2 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_009c1d40();
        }
        *(int *)(param_1 + 0xab8) = iVar7;
        if (iVar3 == iVar7) {
          uStack_4d = 1;
          goto LAB_00780dd2;
        }
      }
      fStack_44 = (float)((int)fStack_44 + 1);
    } while ((int)fStack_44 < aiStack_4c[1]);
  }
  (**(code **)(*param_2 + 0x6c))();
  iVar7 = param_2[0x41];
  if ((iVar7 != 0) && (DAT_00f092dc < (float)iStack_3c / 1000.0)) {
    FUN_00401000(((float)iStack_3c / 1000.0 + 0.0005) * 1000.0,extraout_ECX,1,1);
    uVar6 = FUN_00b31c00();
    (**(code **)(*(int *)(iVar7 + 0x54) + 0x1c))(uVar6);
  }
  if (piStack_28 == (int *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piStack_28);
}

