// FUN_007fccd0 @ 007fccd0 body=[[007fccd0, 007fd389]]


void FUN_007fccd0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  undefined4 uStack_80;
  int iStack_74;
  undefined4 local_6c;
  int local_68;
  undefined4 uStack_64;
  undefined **ppuStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 uStack_44;
  
  iVar9 = *(int *)(DAT_012588e8 + 0xb60);
  uVar5 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_6c = uVar5;
  local_68 = iVar9;
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
  iVar4 = iVar9;
  if (*(char *)(*(int *)(iVar3 + 0x20) + 0x67) != '\0') {
    iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    local_6c = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x128);
    iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 300);
    local_68 = iVar4;
  }
  if (iVar4 == 0) {
    iVar4 = iVar9;
    local_6c = uVar5;
    local_68 = iVar9;
  }
  iVar9 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  iStack_74 = 1;
  if (1 < iVar9) {
    dVar12 = 0.9990000128746033;
    fVar13 = DAT_00f092fc;
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iStack_74 * 4) + 0xc);
      fVar11 = fVar13;
      if (((DAT_00f092fa != '\0') && (DAT_00f092fb != '\0')) &&
         (*(int *)(*(int *)(iVar3 + 0x5c) + 0x360) < 1)) {
        fVar11 = 0.3;
      }
      fStack_54 = fVar11 * 0.5;
      uStack_58 = 0x18d;
      ppuStack_5c = CColor::vftable;
      if ((((double)fStack_54 <= dVar12) || ((double)fStack_54 <= dVar12)) ||
         (uStack_44 = 1, (double)fStack_54 <= dVar12)) {
        uStack_44 = 0;
      }
      fVar10 = fVar11;
      fStack_50 = fStack_54;
      fStack_4c = fStack_54;
      fStack_48 = fVar13;
      uStack_80 = FUN_009b6df0();
      if (*(int *)(iVar3 + 300) == iVar4) {
        fStack_50 = fVar10 * 0.9;
        uStack_58 = 0x18d;
        ppuStack_5c = CColor::vftable;
        fStack_54 = 0.0;
        fStack_4c = 0.0;
        uStack_44 = 0;
        fStack_48 = fVar13;
        uVar5 = FUN_009b6df0();
        iVar7 = *(int *)(iVar3 + 0x14c);
        iVar6 = *(int *)(iVar3 + 0x148);
        if (iVar6 != iVar7) {
          do {
            if (*(int *)(iVar6 + 4) == iVar4) break;
            iVar6 = iVar6 + 8;
          } while (iVar6 != iVar7);
          if (iVar6 != iVar7) goto LAB_007fd20e;
        }
        uStack_80 = 0x66666666;
      }
      else {
        uStack_64 = *(undefined4 *)(iVar3 + 0x128);
        iVar7 = *(int *)(DAT_012587e4 + 4);
        puVar1 = (undefined4 *)(iVar3 + 0x128);
        if (*(char *)(*(int *)(*(int *)(*(int *)(iVar7 + *(int *)(iVar3 + 300) * 4) + 0xbe8) +
                              iVar4 * 4) + 0x70) == '\0') {
          iVar6 = *(int *)(iVar7 + *(int *)(iVar3 + 300) * 4);
          uStack_64 = *(undefined4 *)(iVar6 + 0x1428);
          if (*(int *)(iVar6 + 0x142c) == iVar4) {
            fStack_4c = fVar10 * 0.4;
            fStack_50 = fVar10 * 0.8;
            fStack_54 = fStack_4c;
          }
          else {
            uStack_64 = *puVar1;
            if (*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + *(int *)(iVar3 + 300) * 4) + 0xbe8) +
                                 iVar4 * 4) + 0x24) == 0) {
              uStack_64 = *puVar1;
              if (*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + *(int *)(iVar3 + 300) * 4) + 0xbe8) +
                                   iVar4 * 4) + 0x20) == 0) {
                uStack_64 = *puVar1;
                if (*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + *(int *)(iVar3 + 300) * 4) + 0xbe8)
                                     + iVar4 * 4) + 0x34) == 0) {
                  uStack_64 = *puVar1;
                  iVar6 = *(int *)(*(int *)(*(int *)(iVar7 + *(int *)(iVar3 + 300) * 4) + 0xbe8) +
                                  iVar4 * 4);
                  if ((*(int *)(iVar6 + 0x34) == 0) &&
                     (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar6 + 0x6c))) {
                    FUN_009b6ce0();
                    uStack_80 = FUN_009b6df0();
                    uVar5 = uStack_80;
                  }
                  else {
                    uVar5 = uStack_80;
                    if (*(int *)(iVar3 + 300) != 0) {
                      cVar2 = FUN_0092ede0(*(undefined4 *)
                                            (*(int *)(*(int *)(iVar7 + iVar4 * 4) + 0xbe8) +
                                            *(int *)(iVar3 + 300) * 4),&local_6c,puVar1);
                      fVar13 = DAT_00f092fc;
                      if (cVar2 != '\0') {
                        FUN_009b6ce0();
                        uStack_80 = FUN_009b6df0();
                      }
                      dVar12 = 0.9990000128746033;
                      uVar5 = uStack_80;
                      fVar10 = fVar11;
                    }
                  }
                  goto LAB_007fd20e;
                }
                fStack_54 = fVar10 * 0.7;
                fStack_4c = fVar10 * 0.0;
                fStack_50 = fStack_4c;
              }
              else {
                fStack_54 = fVar10 * 0.0;
                fStack_4c = fVar10 * 0.7;
                fStack_50 = fStack_4c;
              }
            }
            else {
              fStack_4c = fVar10 * 0.0;
              fStack_50 = fVar10 * 0.7;
              fStack_54 = fStack_4c;
            }
          }
          if ((dVar12 < (double)fStack_54) && (dVar12 < (double)fStack_50)) goto LAB_007fd110;
LAB_007fd11b:
          uStack_44 = 0;
        }
        else {
          fStack_54 = fVar10 * 0.0;
          fStack_50 = fVar10 * 0.8;
          fStack_4c = fVar10 * 0.9;
          if (((double)fStack_54 <= dVar12) || ((double)fStack_50 <= dVar12)) goto LAB_007fd11b;
LAB_007fd110:
          uStack_44 = 1;
          if ((double)fStack_4c <= dVar12) goto LAB_007fd11b;
        }
        uStack_58 = 0x18d;
        ppuStack_5c = CColor::vftable;
        fStack_48 = fVar13;
        uStack_80 = FUN_009b6df0();
        uVar5 = uStack_80;
      }
LAB_007fd20e:
      iVar7 = *(int *)(iVar3 + 0x148);
      iVar6 = *(int *)(iVar3 + 0x14c);
      iVar8 = iVar7;
      if (iVar7 == iVar6) {
LAB_007fd29c:
        iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4) + 0xe64) + 0x50);
        uStack_64 = *(undefined4 *)(iVar6 + 0x1c);
        iVar3 = *(int *)(iVar3 + 0x14c);
        if (iVar7 != iVar3) {
          do {
            if (*(int *)(iVar7 + 4) == *(int *)(iVar6 + 0x20)) break;
            iVar7 = iVar7 + 8;
          } while (iVar7 != iVar3);
          if (iVar7 != iVar3) {
            fStack_4c = fVar10 * 0.3;
            fStack_54 = fVar10;
            fStack_50 = fVar10;
            if (dVar12 < (double)fVar10) goto LAB_007fd32f;
            goto LAB_007fd344;
          }
        }
      }
      else {
        do {
          if (*(int *)(iVar8 + 4) == iVar4) break;
          iVar8 = iVar8 + 8;
        } while (iVar8 != iVar6);
        if (iVar8 == iVar6) goto LAB_007fd29c;
        fStack_4c = fVar10 * 0.0;
        fVar10 = fVar10 * 0.9;
        fStack_54 = fStack_4c;
        fStack_50 = fVar10;
        if ((double)fStack_4c <= dVar12) {
LAB_007fd344:
          uStack_44 = 0;
        }
        else {
LAB_007fd32f:
          fStack_50 = fVar10;
          if (((double)fVar10 <= dVar12) || (uStack_44 = 1, (double)fStack_4c <= dVar12))
          goto LAB_007fd344;
        }
        uStack_58 = 0x18d;
        ppuStack_5c = CColor::vftable;
        fStack_48 = fVar13;
        uStack_80 = FUN_009b6df0();
      }
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + iStack_74 * 4) = uVar5;
      iVar3 = iStack_74 * 4;
      iStack_74 = iStack_74 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 4) = uStack_80;
    } while (iStack_74 < iVar9);
  }
  return;
}

