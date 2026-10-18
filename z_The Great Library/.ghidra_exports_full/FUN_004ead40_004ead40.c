// FUN_004ead40 @ 004ead40 body=[[004ead40, 004eae48] [004eae50, 004eaf89] [004eaf90, 004eb167] [004eb170, 004eb4dc] [004eb4e0, 004eb5ad]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004ead40(int param_1,undefined4 *param_2,int param_3,int param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar10;
  int extraout_ECX_04;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 *puVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uStack_68;
  int aiStack_64 [3];
  undefined4 local_48;
  int local_44;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar14;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4659b;
  local_10 = ExceptionList;
  if (((param_3 == 0) || (*(int *)(param_3 + 0xe8) == 0)) ||
     ((param_5 == '\0' && (*(int *)(param_1 + 0x100) == 6)))) {
    local_48 = 0x2d2d2d;
    local_44 = 0;
  }
  else if (*(int *)(param_1 + 0x100) == 2) {
    iVar2 = *(int *)(*(int *)(param_4 + 0x6c) + 0x50);
    local_48 = *(undefined4 *)(iVar2 + 0x1c);
    local_44 = *(int *)(iVar2 + 0x20);
  }
  else {
    local_18 = *DAT_012587e4;
    aiStack_64[2] = 0x4eadc0;
    iVar2 = -local_18;
    *(int *)((int)aiStack_64 + iVar2 + 8) = local_18;
    *(undefined4 *)((int)aiStack_64 + iVar2 + 4) = 0;
    *(undefined1 **)((int)aiStack_64 + iVar2) = &stack0xffffffa8 + iVar2;
    local_14 = &stack0xffffffa8 + iVar2;
    *(undefined4 *)((int)&uStack_68 + iVar2) = 0x4eadce;
    ExceptionList = &local_10;
    _memset(*(void **)((int)aiStack_64 + iVar2),*(int *)((int)aiStack_64 + iVar2 + 4),
            *(size_t *)((int)aiStack_64 + iVar2 + 8));
    puVar13 = &stack0xffffffa8 + iVar2;
    if (DAT_0131bb34 == 0) {
      *(undefined4 *)((int)aiStack_64 + iVar2 + 8) = 0x188;
      *(undefined4 *)((int)aiStack_64 + iVar2 + 4) = 0x4eade5;
      local_38 = FUN_00aae9af();
      puVar13 = &stack0xffffffa8 + iVar2;
      local_8 = 0;
      if (local_38 == 0) {
        uVar6 = 0;
      }
      else {
        *(undefined4 *)((int)aiStack_64 + iVar2 + 8) = 0x4eadfd;
        uVar6 = FUN_0041a160();
      }
      *(undefined4 *)((int)aiStack_64 + iVar2 + 8) = uVar6;
      local_8 = 0xffffffff;
      *(undefined4 *)((int)aiStack_64 + iVar2 + 4) = 0x4eae0e;
      FUN_00423700();
    }
    local_24 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < local_24) {
      local_1c = 0;
      do {
        iVar2 = *(int *)(local_1c + *(int *)(param_3 + 0x194));
        iVar9 = DAT_012588e8;
        while (DAT_012588e8 = iVar9, iVar2 != 0) {
          iVar8 = *(int *)(iVar2 + 0x6c);
          uVar6 = *(undefined4 *)(iVar8 + 0x10);
          iVar2 = *(int *)(iVar2 + 0x27c);
          if ((*(int *)(iVar8 + 0x14) != 0) &&
             (((((char)uVar6 != 'R' || ((char)((uint)uVar6 >> 8) != 'E')) ||
               ((char)((uint)uVar6 >> 0x10) != 'B')) &&
              (iVar7 = *(int *)(DAT_012587e4[1] + *(int *)(iVar8 + 0x14) * 4),
              (int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU) < 1)))) {
            *(int *)(puVar13 + -4) = iVar7;
            *(undefined4 *)(puVar13 + -8) = 0x4eaeb4;
            iVar7 = FUN_0050e710();
            piVar1 = (int *)(iVar9 + 0xacc);
            iVar9 = DAT_012588e8;
            if (*(int *)(*(int *)(*piVar1 + iVar7 * 4) + 0x16c) == *(int *)(param_3 + 0x16c)) {
              local_14[*(int *)(iVar8 + 0x14)] = 1;
              iVar9 = DAT_012588e8;
            }
          }
        }
        local_1c = local_1c + 0x10;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    local_34 = *(undefined4 **)(param_3 + 0x148);
    puVar15 = local_34;
    while ((local_34 <= puVar15 && (puVar15 < *(undefined4 **)(param_3 + 0x14c)))) {
      uVar6 = *puVar15;
      iVar2 = puVar15[1];
      puVar15 = puVar15 + 2;
      if (((((char)uVar6 != 'R') ||
           (((char)((uint)uVar6 >> 8) != 'E' || ((char)((uint)uVar6 >> 0x10) != 'B')))) &&
          (local_14[iVar2] == '\0')) &&
         ((iVar9 = *(int *)(DAT_012587e4[1] + iVar2 * 4),
          (int)(*(int *)(iVar9 + 0x9dc) - *(int *)(iVar9 + 0x9d8) & 0xfffffffcU) < 1 &&
          (*(int *)(*(int *)(iVar9 + 0xe64) + 0x50) == *(int *)(*(int *)(param_4 + 0x6c) + 0x50)))))
      {
        local_14[iVar2] = 1;
      }
    }
    local_24 = 0;
    if (0 < local_18) {
      do {
        iVar2 = *(int *)(DAT_012587e4[1] + local_24 * 4);
        uVar6 = *(undefined4 *)(iVar2 + 0x1c);
        iVar2 = *(int *)(iVar2 + 0x20);
        if (((((char)uVar6 != 'R') || ((char)((uint)uVar6 >> 8) != 'E')) ||
            ((char)((uint)uVar6 >> 0x10) != 'B')) &&
           (((local_14[iVar2] == '\0' &&
             (iVar9 = *(int *)(DAT_012587e4[1] + iVar2 * 4),
             (int)(*(int *)(iVar9 + 0x9dc) - *(int *)(iVar9 + 0x9d8) & 0xfffffffcU) < 1)) &&
            (*(int *)(iVar9 + 0xa00) != 0)))) {
          if (*(int *)(iVar9 + 0x7d8) < 1) {
LAB_004eb01e:
            if (*(int *)(param_1 + 0x100) != 4) {
LAB_004eb02e:
              *(int *)(puVar13 + -4) = iVar9;
              *(undefined4 *)(puVar13 + -8) = 0x4eb034;
              iVar8 = FUN_0050e710();
              local_30 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + iVar8 * 4);
              if (*(int *)(param_3 + 0x58) == iVar8) {
                local_14[iVar2] = 1;
              }
              else {
                *(int *)(puVar13 + -4) = iVar8;
                *(undefined4 *)(puVar13 + -8) = 0x4eb068;
                cVar5 = FUN_004c3e90();
                if (cVar5 == '\0') {
                  if (0 < *(int *)(iVar9 + 0x7d8)) {
                    *(undefined4 ***)(puVar13 + -4) = &local_34;
                    *(undefined4 *)(puVar13 + -8) = DAT_0125870c;
                    *(undefined4 *)(puVar13 + -0xc) = 0x4eb09c;
                    FUN_004a0e80();
                    *(undefined4 *)(puVar13 + -4) = extraout_ECX;
                    *(undefined4 *)(puVar13 + -4) = 0x476a6080;
                    *(undefined4 *)(puVar13 + -8) = 0x4eb0af;
                    FUN_00401000();
                    *(undefined4 *)(puVar13 + -4) = 0x4eb0b7;
                    iVar9 = FUN_00b31c00();
                    if ((int)local_34 < iVar9) {
                      *(undefined4 *)(puVar13 + -4) = 0x4eb0d2;
                      cVar5 = FUN_004e0ac0();
                      if (cVar5 == '\0') {
                        *(undefined4 *)(puVar13 + -4) = 0x4eb0ed;
                        cVar5 = FUN_0048fee0();
                        if (cVar5 != '\0') {
                          local_14[iVar2] = 1;
                        }
                      }
                      else {
                        local_14[iVar2] = 1;
                      }
                    }
                  }
                }
                else {
                  local_14[iVar2] = 1;
                }
              }
            }
          }
          else if (*(int *)(param_1 + 0x100) == 4) {
            if (*(int *)(iVar9 + 0x7d8) < 1) goto LAB_004eb01e;
            goto LAB_004eb02e;
          }
        }
        local_24 = local_24 + 1;
      } while (local_24 < local_18);
    }
    puVar11 = local_14;
    *(undefined4 *)(puVar13 + -4) = 0x2d2d2d;
    local_48 = 0x2d2d2d;
    local_44 = 0;
    *(undefined4 *)(puVar13 + -4) = 0x3f000000;
    *(undefined4 *)(puVar13 + -8) = 0x4eb14a;
    FUN_00401000();
    *(undefined4 *)(puVar13 + -4) = 0x4eb152;
    local_30 = FUN_00b31c00();
    local_34 = (undefined4 *)0x0;
    local_2c = local_30;
    if (0 < local_18) {
      do {
        if (puVar11[(int)local_34] != '\0') {
          iVar8 = DAT_012587e4[1];
          iVar2 = *(int *)(iVar8 + (int)local_34 * 4);
          uVar6 = *(undefined4 *)(iVar2 + 0x1c);
          iVar2 = *(int *)(iVar2 + 0x20);
          iVar9 = *(int *)(*(int *)(param_4 + 0x6c) + 0x50);
          local_28 = *(undefined4 *)(iVar9 + 0x1c);
          if (*(int *)(iVar9 + 0x20) == iVar2) {
            iVar9 = *(int *)(param_3 + 0x14c);
            iVar7 = *(int *)(param_3 + 0x148);
            if (iVar7 != iVar9) {
              do {
                if (*(int *)(iVar7 + 4) == iVar2) break;
                iVar7 = iVar7 + 8;
              } while (iVar7 != iVar9);
              if (iVar7 != iVar9) goto LAB_004eb1d4;
            }
          }
          else {
LAB_004eb1d4:
            iVar9 = *(int *)(iVar8 + iVar2 * 4);
            piVar1 = *(int **)(iVar9 + 0x9c0);
            local_1c = iVar9;
            do {
              if (piVar1 == (int *)0x0) {
                local_24 = *(int *)(iVar9 + 0xbe4);
                goto LAB_004eb20d;
              }
              piVar3 = (int *)*piVar1;
              pcVar4 = *(code **)(*piVar3 + 0x18);
              piVar1 = (int *)piVar1[2];
              puVar14 = (undefined4 *)(puVar13 + -4);
              puVar13 = puVar13 + -4;
              *puVar14 = 0x4eb1f5;
              iVar7 = (*pcVar4)();
              iVar8 = extraout_ECX_00;
            } while (iVar7 != 0x2a2);
            iVar8 = piVar3[4];
            local_24 = iVar8;
LAB_004eb20d:
            iVar16 = local_2c;
            iVar7 = *(int *)(param_1 + 0x100);
            iVar12 = iVar9;
            if ((iVar7 == 4) && (0 < *(int *)(iVar9 + 0x7d8))) {
              *(int *)(puVar13 + -4) = iVar8;
              *(undefined4 *)(puVar13 + -4) = 0x48f42410;
              *(undefined4 *)(puVar13 + -8) = 0x4eb242;
              FUN_00401000();
              *(undefined4 *)(puVar13 + -4) = 0x4eb24a;
              iVar9 = FUN_00b31c00();
              *(int **)(puVar13 + -4) = &local_38;
              *(undefined4 *)(puVar13 + -8) = DAT_0125870c;
              *(undefined4 *)(puVar13 + -0xc) = 0x4eb265;
              FUN_004a0e80();
              fVar17 = (float)local_38;
              *(undefined4 *)(puVar13 + -4) = extraout_ECX_01;
              *(float *)(puVar13 + -4) = (fVar17 / 1000.0 + 0.0005) * 1000.0;
              *(undefined4 *)(puVar13 + -8) = 0x4eb2ab;
              FUN_00401000();
              *(undefined4 *)(puVar13 + -4) = 0x4eb2b3;
              iVar8 = FUN_00b31c00();
              iVar16 = iVar16 + (iVar9 - iVar8);
            }
            else if (iVar7 == 1) {
              iVar8 = *(int *)(iVar9 + 0xe64);
              iVar7 = *(int *)(param_4 + 0x6c);
              if (iVar8 == iVar7) {
                *(int *)(puVar13 + -4) = iVar9;
                *(undefined4 *)(puVar13 + -4) = 0x48927c10;
                *(undefined4 *)(puVar13 + -8) = 0x4eb2f2;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb2fa;
                iVar9 = FUN_00b31c00();
                iVar16 = iVar16 + iVar9;
                iVar9 = extraout_ECX_02;
              }
              iVar12 = local_1c;
              if (*(int *)(iVar8 + 0x50) == *(int *)(iVar7 + 0x50)) {
                *(int *)(puVar13 + -4) = iVar9;
                *(undefined4 *)(puVar13 + -4) = 0x47c35040;
                *(undefined4 *)(puVar13 + -8) = 0x4eb317;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb31f;
                iVar9 = FUN_00b31c00();
                iVar16 = iVar16 + iVar9;
                iVar12 = local_1c;
              }
            }
            else if ((iVar7 == 0) || (iVar7 == 5)) {
              iVar8 = *(int *)(param_4 + 0x6c);
              local_20 = *(undefined4 *)(*(int *)(iVar8 + 0x50) + 0x1c);
              if (*(int *)(*(int *)(iVar8 + 0x50) + 0x20) == iVar2) goto LAB_004eb57a;
              if (*(int *)(iVar9 + 0xe64) == iVar8) {
                *(int *)(puVar13 + -4) = iVar8;
                *(undefined4 *)(puVar13 + -4) = 0x48c35010;
                *(undefined4 *)(puVar13 + -8) = 0x4eb455;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb45d;
                iVar9 = FUN_00b31c00();
                iVar16 = iVar16 + iVar9;
              }
            }
            else if (iVar7 == 3) {
              if (*(int *)(iVar9 + 0xe68) == *(int *)(param_4 + 0x70)) {
                *(int *)(puVar13 + -4) = *(int *)(iVar9 + 0xe68);
                *(undefined4 *)(puVar13 + -4) = 0x48c35010;
                *(undefined4 *)(puVar13 + -8) = 0x4eb3b0;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb3b8;
                iVar9 = FUN_00b31c00();
                iVar16 = iVar16 + iVar9;
              }
            }
            else if (iVar7 == 7) {
              *(int *)(puVar13 + -4) = iVar8;
              *(undefined4 *)(puVar13 + -4) = 0x44fa1000;
              *(undefined4 *)(puVar13 + -8) = 0x4eb3d7;
              FUN_00401000();
              *(undefined4 *)(puVar13 + -4) = 0x4eb3df;
              iVar9 = FUN_00b31c00();
              iVar16 = iVar16 + iVar9;
            }
            else if ((iVar7 == 6) && (param_5 != '\0')) {
              *(int *)(puVar13 + -4) = iVar8;
              *(undefined4 *)(puVar13 + -4) = 0x447a1fff;
              *(undefined4 *)(puVar13 + -8) = 0x4eb40c;
              FUN_00401000();
              *(undefined4 *)(puVar13 + -4) = 0x4eb414;
              iVar9 = FUN_00b31c00();
              iVar16 = iVar16 + iVar9;
            }
            if (local_2c < iVar16) {
              iVar9 = *(int *)(param_4 + 0x6c);
              uVar10 = *(undefined4 *)(iVar9 + 0x10);
              local_20 = uVar10;
              if (*(int *)(iVar9 + 0x14) == iVar2) {
                *(undefined4 *)(puVar13 + -4) = uVar10;
                *(undefined4 *)(puVar13 + -4) = 0x47435080;
                *(undefined4 *)(puVar13 + -8) = 0x4eb354;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb35c;
                iVar8 = FUN_00b31c00();
                iVar16 = iVar16 + iVar8;
                uVar10 = extraout_ECX_03;
              }
              if (*(int *)(iVar12 + 0xe64) == iVar9) {
                uVar18 = 0x47c35040;
LAB_004eb474:
                *(undefined4 *)(puVar13 + -4) = uVar10;
                *(undefined4 *)(puVar13 + -4) = uVar18;
                *(undefined4 *)(puVar13 + -8) = 0x4eb47f;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb487;
                iVar8 = FUN_00b31c00();
                iVar16 = iVar16 + iVar8;
              }
              else if (*(int *)(*(int *)(iVar12 + 0xe64) + 0x50) == *(int *)(iVar9 + 0x50)) {
                uVar18 = 0x471c4080;
                goto LAB_004eb474;
              }
              iVar8 = *(int *)(param_4 + 0x70);
              if (*(int *)(iVar12 + 0xe68) == iVar8) {
                uVar10 = 0x46ea6100;
LAB_004eb4b3:
                *(int *)(puVar13 + -4) = iVar8;
                *(undefined4 *)(puVar13 + -4) = uVar10;
                *(undefined4 *)(puVar13 + -8) = 0x4eb4be;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb4c6;
                iVar8 = FUN_00b31c00();
                iVar16 = iVar16 + iVar8;
              }
              else if (*(int *)(*(int *)(iVar12 + 0xe68) + 0x4c) == *(int *)(iVar8 + 0x4c)) {
                uVar10 = 0x461c4200;
                goto LAB_004eb4b3;
              }
              iVar8 = *(int *)(param_3 + 0x14c);
              iVar7 = *(int *)(param_3 + 0x148);
              if (iVar7 != iVar8) {
                do {
                  if (*(int *)(iVar7 + 4) == iVar2) break;
                  iVar7 = iVar7 + 8;
                } while (iVar7 != iVar8);
                if (iVar7 != iVar8) {
                  *(int *)(puVar13 + -4) = iVar8;
                  *(undefined4 *)(puVar13 + -4) = 0x48435020;
                  *(undefined4 *)(puVar13 + -8) = 0x4eb506;
                  FUN_00401000();
                  *(undefined4 *)(puVar13 + -4) = 0x4eb50e;
                  iVar8 = FUN_00b31c00();
                  iVar16 = iVar16 + iVar8;
                  iVar8 = extraout_ECX_04;
                }
              }
              if (local_24 == *(int *)(param_3 + 0x58)) {
                *(int *)(puVar13 + -4) = iVar8;
                *(undefined4 *)(puVar13 + -4) = 0x48927c10;
                *(undefined4 *)(puVar13 + -8) = 0x4eb52e;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb536;
                iVar8 = FUN_00b31c00();
                iVar16 = iVar16 + iVar8;
              }
              local_28 = *(undefined4 *)(*(int *)(iVar9 + 0x50) + 0x1c);
              if (*(int *)(*(int *)(iVar9 + 0x50) + 0x20) == iVar2) {
                *(undefined4 *)(puVar13 + -4) = local_28;
                *(undefined4 *)(puVar13 + -4) = 0x47435080;
                *(undefined4 *)(puVar13 + -8) = 0x4eb55c;
                FUN_00401000();
                *(undefined4 *)(puVar13 + -4) = 0x4eb564;
                iVar9 = FUN_00b31c00();
                iVar16 = iVar16 - iVar9;
              }
            }
            if (local_30 < iVar16) {
              local_48 = uVar6;
              local_44 = iVar2;
              local_30 = iVar16;
            }
          }
        }
LAB_004eb57a:
        local_34 = (undefined4 *)((int)local_34 + 1);
        puVar11 = local_14;
      } while ((int)local_34 < local_18);
    }
  }
  *param_2 = local_48;
  param_2[1] = local_44;
  ExceptionList = local_10;
  return;
}

