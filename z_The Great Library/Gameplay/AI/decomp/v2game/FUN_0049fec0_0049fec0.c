// FUN_0049fec0 @ 0049fec0 body=[[0049fec0, 004a032b] [004a032f, 004a03af] [004a03f7, 004a041f]]


void FUN_0049fec0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  undefined1 auStack_12c [4];
  int *piStack_128;
  undefined4 uStack_124;
  char *pcStack_11c;
  int aiStack_118 [4];
  undefined **appuStack_108 [3];
  uint auStack_fc [4];
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b34e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar5 = (**(code **)(*param_1 + 0x24))();
  iVar6 = FUN_00aad56b(uVar5);
  iStack_130 = iVar6;
  iVar7 = (**(code **)(*param_1 + 0x24))();
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      *(undefined1 *)(iVar7 + iVar6) = 0;
      iVar7 = iVar7 + 1;
      iVar8 = (**(code **)(*param_1 + 0x24))();
    } while (iVar7 < iVar8);
  }
  uStack_124 = 0;
  piStack_128 = (int *)FUN_00aae9af(0x14);
  if (piStack_128 == (int *)0x0) {
    pcStack_11c = (char *)0x0;
    std::exception::exception((exception *)appuStack_108,&pcStack_11c);
    appuStack_108[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(appuStack_108,&DAT_00e6fb20);
  }
  *piStack_128 = (int)piStack_128;
  piStack_128[1] = (int)piStack_128;
  piStack_128[2] = (int)piStack_128;
  *(undefined1 *)(piStack_128 + 4) = 1;
  *(undefined1 *)((int)piStack_128 + 0x11) = 1;
  uStack_c._0_1_ = 0;
  uStack_c._1_3_ = 0;
  iVar7 = param_1[0x84b];
  iStack_134 = 0;
  if (0 < *(int *)(iVar7 + 8)) {
    do {
      iStack_138 = 0;
      iVar6 = iStack_134;
      if (0 < *(int *)(iVar7 + 4)) {
        do {
          iVar8 = iStack_138;
          aiStack_118[2] =
               (int)*(ushort *)
                     (*(int *)(iVar7 + 0xc) * iStack_138 + *(int *)(iVar7 + 0x18) * iVar6 +
                     *(int *)(iVar7 + 0x20));
          if (aiStack_118[2] != 0) {
            iVar7 = *(int *)(param_1[0xaa9] + aiStack_118[2] * 4);
            *(int *)(iVar7 + 0x368) = *(int *)(iVar7 + 0x368) + 1;
            iStack_138 = iVar8;
            if ((char)param_1[10] != '\0') {
              if ((int)(*(int *)(iVar7 + 0xa8) - *(int *)(iVar7 + 0xa4) & 0xfffffff8U) < 0x27101) {
                piVar12 = *(int **)(iVar7 + 0xa8);
                aiStack_118[0] = iStack_138;
                aiStack_118[1] = iVar6;
                if (aiStack_118 < piVar12) {
                  iVar6 = iStack_134;
                  if (aiStack_118 < *(int **)(iVar7 + 0xa4)) goto LAB_004a00cb;
                  aiStack_118[3] = (int)aiStack_118 - (int)*(int **)(iVar7 + 0xa4) >> 3;
                  if (piVar12 == *(int **)(iVar7 + 0xac)) {
                    uVar11 = (int)piVar12 - *(int *)(iVar7 + 0xa4) >> 3;
                    if (0x1ffffffe < uVar11) goto LAB_004a0354;
                    uVar11 = uVar11 + 1;
                    uVar10 = (int)*(int **)(iVar7 + 0xac) - *(int *)(iVar7 + 0xa4) >> 3;
                    if (uVar10 < uVar11) {
                      if (0x1fffffff - (uVar10 >> 1) < uVar10) {
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = uVar10 + (uVar10 >> 1);
                      }
                      if (uVar10 < uVar11) {
                        uVar10 = uVar11;
                      }
                      FUN_004237e0(uVar10);
                    }
                  }
                  puVar1 = (undefined4 *)(*(int *)(iVar7 + 0xa4) + aiStack_118[3] * 8);
                  puVar3 = *(undefined4 **)(iVar7 + 0xa8);
                  iVar6 = iStack_134;
                  if (puVar3 != (undefined4 *)0x0) {
                    *puVar3 = *puVar1;
                    puVar3[1] = puVar1[1];
                  }
                }
                else {
LAB_004a00cb:
                  if (piVar12 == *(int **)(iVar7 + 0xac)) {
                    uVar11 = (int)piVar12 - *(int *)(iVar7 + 0xa4) >> 3;
                    if (0x1ffffffe < uVar11) {
LAB_004a0354:
                    /* WARNING: Subroutine does not return */
                      FUN_00aad3ad("vector<T> too long");
                    }
                    uVar11 = uVar11 + 1;
                    uVar10 = (int)*(int **)(iVar7 + 0xac) - *(int *)(iVar7 + 0xa4) >> 3;
                    iVar6 = iStack_134;
                    if (uVar10 < uVar11) {
                      if (0x1fffffff - (uVar10 >> 1) < uVar10) {
                        uVar10 = 0;
                      }
                      else {
                        uVar10 = uVar10 + (uVar10 >> 1);
                      }
                      if (uVar10 < uVar11) {
                        uVar10 = uVar11;
                      }
                      FUN_004237e0(uVar10);
                      iVar6 = iStack_134;
                    }
                  }
                  piVar12 = *(int **)(iVar7 + 0xa8);
                  if (piVar12 != (int *)0x0) {
                    *piVar12 = iStack_138;
                    piVar12[1] = iVar6;
                  }
                }
                *(int *)(iVar7 + 0xa8) = *(int *)(iVar7 + 0xa8) + 8;
              }
              else {
                iStack_138 = *(int *)(iVar7 + 0xb4);
                uVar5 = FUN_00a78530(&iStack_138);
                FUN_004a34d0(auStack_12c,uVar5);
                iVar6 = iStack_134;
                iStack_138 = iVar8;
              }
            }
            if (*(char *)(aiStack_118[2] + iStack_130) == '\0') {
              *(int *)(iVar7 + 0xb8) = iStack_138;
              *(undefined4 *)(iVar7 + 0xc0) = 1;
              *(int *)(iVar7 + 0xbc) = iVar6;
              *(undefined4 *)(iVar7 + 0xc4) = 1;
              *(undefined1 *)(aiStack_118[2] + iStack_130) = 1;
            }
            else {
              if (iStack_138 < *(int *)(iVar7 + 0xb8)) {
                *(int *)(iVar7 + 0xc0) =
                     *(int *)(iVar7 + 0xc0) + (*(int *)(iVar7 + 0xb8) - iStack_138);
                *(int *)(iVar7 + 0xb8) = iStack_138;
              }
              if (*(int *)(iVar7 + 0xc0) + *(int *)(iVar7 + 0xb8) < iStack_138 + 1) {
                *(int *)(iVar7 + 0xc0) = (iStack_138 - *(int *)(iVar7 + 0xb8)) + 1;
              }
              if (iVar6 < *(int *)(iVar7 + 0xbc)) {
                *(int *)(iVar7 + 0xc4) = *(int *)(iVar7 + 0xc4) + (*(int *)(iVar7 + 0xbc) - iVar6);
                *(int *)(iVar7 + 0xbc) = iVar6;
              }
              if (*(int *)(iVar7 + 0xc4) + *(int *)(iVar7 + 0xbc) < iVar6 + 1) {
                *(int *)(iVar7 + 0xc4) = (iVar6 - *(int *)(iVar7 + 0xbc)) + 1;
              }
            }
          }
          iVar7 = param_1[0x84b];
          iStack_138 = iStack_138 + 1;
        } while (iStack_138 < *(int *)(iVar7 + 4));
      }
      iVar7 = param_1[0x84b];
      iStack_134 = iVar6 + 1;
      iVar6 = iStack_130;
    } while (iStack_134 < *(int *)(iVar7 + 8));
  }
  piVar12 = (int *)*piStack_128;
  if (piVar12 != piStack_128) {
    do {
      uStack_e8 = 0xf;
      uStack_ec = 0;
      auStack_fc[0] = auStack_fc[0] & 0xffffff00;
      FUN_00409350("map.cpp",7);
      uStack_c._0_1_ = 1;
      uVar5 = FUN_004015b0(auStack_fc,0x843,0x10004);
      uStack_c = CONCAT31(uStack_c._1_3_,2);
      FUN_00987d50(uVar5,"To large province ",0x12,0);
      piVar9 = (int *)FUN_00455470(uVar5,piVar12[3]);
      FUN_00408be0(piVar9);
      uVar11 = 0;
      if (((*(byte *)(*(int *)(*piVar9 + 4) + 0xc + (int)piVar9) & 6) == 0) &&
         (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar9 + 4) + 0x38 + (int)piVar9) + 0x34))(),
         iVar6 == -1)) {
        uVar11 = 4;
      }
      if (uVar11 != 0) {
        uVar11 = *(uint *)((int)piVar9 + *(int *)(*piVar9 + 4) + 0xc) | uVar11;
        if (*(int *)((int)piVar9 + *(int *)(*piVar9 + 4) + 0x38) == 0) {
          uVar11 = uVar11 | 4;
        }
        FUN_00401120(uVar11,0);
      }
      uStack_c._0_1_ = 1;
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      uStack_c._0_1_ = 0;
      if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_fc[0]);
      }
      if (*(char *)((int)piVar12 + 0x11) == '\0') {
        piVar9 = (int *)piVar12[2];
        if (*(char *)((int)piVar9 + 0x11) == '\0') {
          cVar2 = *(char *)(*piVar9 + 0x11);
          piVar12 = piVar9;
          piVar9 = (int *)*piVar9;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar9 + 0x11);
            piVar12 = piVar9;
            piVar9 = (int *)*piVar9;
          }
        }
        else {
          cVar2 = *(char *)(piVar12[1] + 0x11);
          piVar4 = (int *)piVar12[1];
          piVar9 = piVar12;
          while ((piVar12 = piVar4, cVar2 == '\0' && (piVar9 == (int *)piVar12[2]))) {
            cVar2 = *(char *)(piVar12[1] + 0x11);
            piVar4 = (int *)piVar12[1];
            piVar9 = piVar12;
          }
        }
      }
      iVar6 = iStack_130;
    } while (piVar12 != piStack_128);
  }
  iVar8 = 1;
  iVar7 = (**(code **)(*param_1 + 0x24))();
  if (1 < iVar7) {
    do {
      iVar8 = iVar8 + 1;
      iVar7 = (**(code **)(*param_1 + 0x24))();
    } while (iVar8 < iVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar6);
}

