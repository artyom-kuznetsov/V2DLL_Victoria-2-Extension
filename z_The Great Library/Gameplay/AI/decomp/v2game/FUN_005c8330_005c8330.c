// FUN_005c8330 @ 005c8330 body=[[005c8330, 005c83d8] [005c83e0, 005c876d] [005c8771, 005c8966]]


void FUN_005c8330(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piStack_80;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int aiStack_60 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fbb6;
  local_14 = ExceptionList;
  if (param_1[0x1d] == 0) {
    local_48 = param_1[0x30];
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4) + 0xbcc) +
                    0x48);
    ExceptionList = &local_14;
    cVar5 = (**(code **)(*param_1 + 0x3c))();
    local_48 = param_1[0x30];
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4) + 0xa60);
    if (cVar5 == '\0') {
      iVar2 = *(int *)(iVar2 + 0x388);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x390);
    }
    piVar7 = (int *)param_1[0xe];
    piStack_80 = (int *)0x0;
    if (piVar7 != (int *)0x0) {
      do {
        piVar3 = (int *)*piVar7;
        piVar7 = (int *)piVar7[2];
        cVar5 = (**(code **)(*piVar3 + 0x28))();
        if (cVar5 == '\0') {
          if (piVar3[0xc] == 0) {
            FUN_005c0510();
          }
          else {
            iVar8 = FUN_00967f50();
            if (iVar8 != 0) {
              iVar9 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x134);
              iVar8 = *(int *)(piVar3[0xc] + 0x124);
              if (((iVar9 <= iVar8) &&
                  ((iVar9 < iVar8 ||
                   (*(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x130) <
                    *(uint *)(piVar3[0xc] + 0x120))))) &&
                 (((char)param_1[0x30] != 'R' ||
                  ((*(char *)((int)param_1 + 0xc1) != 'E' || (*(char *)((int)param_1 + 0xc2) != 'B')
                   ))))) {
                iVar8 = FUN_00967f50();
                if (iVar8 != 0) {
                  uStack_58 = *(undefined4 *)(iVar8 + 0xb8);
                  uStack_54 = *(undefined4 *)(iVar8 + 0xbc);
                  FUN_00408d50();
                  cVar5 = FUN_0043e920();
                  if (cVar5 != '\0') {
                    FUN_0055c6c0(DAT_012587e4,aiStack_60);
                    piVar10 = (int *)0x0;
                    if (piStack_80 == (int *)0x0) {
                      iVar8 = FUN_00aae9af();
                      uStack_c = 0;
                      if (iVar8 != 0) {
                        piVar10 = (int *)FUN_004460d0();
                      }
                      uStack_c = 0xffffffff;
                      iStack_4c = DAT_00f096cc;
                      uStack_50 = 0x28;
                      DAT_00f096cc = DAT_00f096cc + 1;
                      (**(code **)(piVar10[2] + 0x18))();
                      iVar8 = aiStack_60[0];
                      FUN_005c93b0(uStack_64,aiStack_60[0]);
                      (**(code **)(*piVar10 + 0x6c))(*(undefined4 *)(DAT_012588e8 + 0xb24));
                      uVar4 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar8 * 4);
                      uVar6 = (**(code **)(*piVar10 + 0x3c))(0);
                      FUN_004f9d10(uVar4,auStack_34,uVar6);
                      uStack_c = 3;
                      FUN_005cdc70();
                      uStack_c = 0xffffffff;
                      FUN_00408ad0();
                      FUN_00513c80();
                      FUN_005cf880();
                      cVar5 = FUN_00416e40();
                      piStack_80 = piVar10;
                      if (cVar5 != '\0') {
                        FUN_004e2c70();
                      }
                    }
                    FUN_005cb230();
                    piVar3[0x18] = piStack_80[0x30];
                    piVar3[0x19] = piStack_80[0x31];
                    FUN_005cb1d0();
                  }
                }
                goto LAB_005c8880;
              }
            }
            if ((((char)param_1[0x30] == 'R') && (*(char *)((int)param_1 + 0xc1) == 'E')) &&
               (*(char *)((int)param_1 + 0xc2) == 'B')) {
              iVar8 = FUN_00967f50();
              if (((iVar8 == 0) && (param_1[0x1d] == 0)) &&
                 (((char)param_1[0x30] == 'R' &&
                  ((*(char *)((int)param_1 + 0xc1) == 'E' && (*(char *)((int)param_1 + 0xc2) == 'B')
                   ))))) {
                FUN_0068a900();
              }
            }
            else {
              iVar8 = piVar3[0xc];
              iVar9 = *(int *)(iVar8 + 100);
              iVar11 = 0;
              uStack_68 = 0x2d2d2d;
              if ((*(int *)(iVar9 + 300) == param_1[0x33]) ||
                 (*(char *)(*(int *)(iVar8 + 0x68) + 0x42) == '\0')) {
LAB_005c868d:
                if (iVar11 == 0) {
                  iVar9 = FUN_00965870(iVar8);
                  if (iVar9 == 0) {
                    if (piVar3[0xf] < 1) goto LAB_005c8872;
                  }
                  else if ((*(char *)(*(int *)(iVar8 + 0x68) + 0x42) != '\0') &&
                          (piVar3[0xd] < iVar1 + iVar2)) {
                    FUN_005c04f0();
                  }
                }
                else {
                  iVar8 = FUN_00aae9af();
                  uStack_c = 4;
                  if (iVar8 == 0) {
                    piVar10 = (int *)0x0;
                  }
                  else {
                    piVar10 = (int *)FUN_004460d0();
                  }
                  uStack_c = 0xffffffff;
                  iStack_44 = DAT_00f096cc;
                  local_48 = 0x28;
                  DAT_00f096cc = DAT_00f096cc + 1;
                  (**(code **)(piVar10[2] + 0x18))();
                  FUN_005c93b0(uStack_6c,iVar11);
                  (**(code **)(*piVar10 + 0x6c))(*(undefined4 *)(DAT_012588e8 + 0xb24));
                  uVar4 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar11 * 4);
                  uVar6 = (**(code **)(*piVar10 + 0x3c))(0);
                  FUN_004f9d10(uVar4,auStack_34,uVar6);
                  uStack_c = 7;
                  FUN_005cdc70();
                  uStack_c = 0xffffffff;
                  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                  uStack_20 = 0xf;
                  uStack_24 = 0;
                  auStack_34[0] = auStack_34[0] & 0xffffff00;
                  FUN_00513c80();
                  FUN_005cb2c0();
                  FUN_005cae80();
                  FUN_005cb2c0();
                  uVar6 = 1;
                  if ((((char)piVar10[0x30] == 'R') && (*(char *)((int)piVar10 + 0xc1) == 'E')) &&
                     (*(char *)((int)piVar10 + 0xc2) == 'B')) {
                    uVar6 = 0;
                  }
                  *(undefined1 *)(piVar10 + 0x59) = uVar6;
                  if ((((char)uStack_68 == 'R') && ((char)((uint)uStack_68 >> 8) == 'E')) &&
                     (uStack_68._2_1_ == 'B')) {
                    FUN_00967f50();
                    FUN_004e2c70();
                  }
                  FUN_005cb230();
                  piVar3[0x18] = piVar10[0x30];
                  piVar3[0x19] = piVar10[0x31];
                  FUN_005cb1d0();
                  *(undefined1 *)(piVar10 + 0x2f) = 1;
                  *(undefined1 *)(param_1 + 0x2f) = 1;
                  FUN_005cb2c0();
                }
              }
              else {
                if (param_2 == '\0') {
                  uStack_68 = *(undefined4 *)(iVar9 + 0x128);
                  iVar11 = *(int *)(iVar9 + 300);
                  goto LAB_005c868d;
                }
LAB_005c8872:
                FUN_0068a900();
              }
            }
          }
        }
LAB_005c8880:
      } while (piVar7 != (int *)0x0);
      if (piStack_80 != (int *)0x0) {
        FUN_005cb2c0();
        FUN_005c68c0();
        FUN_005cae80();
        FUN_005cb2c0();
        *(undefined1 *)(piStack_80 + 0x2f) = 1;
        *(undefined1 *)(param_1 + 0x2f) = 1;
        FUN_005cb2c0();
      }
    }
  }
  ExceptionList = local_14;
  return;
}

