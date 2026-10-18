// FUN_00818390 @ 00818390 body=[[00818390, 00818402] [0081840c, 00818f42] [00818f46, 0081907c] [00819080, 008191e5] [008191e9, 008191f5] [008191f9, 0081920b]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00818390(int param_1,void *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  float *pfVar12;
  undefined4 uVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float10 fVar17;
  float fVar18;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined8 local_9c;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_50;
  int local_4c;
  float local_48;
  int local_44;
  int local_40;
  float *local_3c;
  uint local_38;
  undefined8 local_34;
  float local_2c;
  float local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58de0;
  local_10 = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x14c);
  pfVar14 = (float *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    ExceptionList = &local_10;
    if (piVar2 != (int *)0x0) {
      ExceptionList = &local_10;
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)piVar1[1];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar2 = (int *)piVar1[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar1[2] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  ExceptionList = &local_10;
  puVar6 = (undefined4 *)FUN_00aae9af(0x24);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 1;
  }
  *(undefined4 **)(iVar7 + 0x14c) = puVar6;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_24 = (float *)0x0;
  local_20 = (float *)0x0;
  local_1c = (float *)0x0;
  local_8 = 1;
  local_68 = -NAN;
  local_38 = 0xffffffff;
  local_3c = (float *)((*(int *)(iVar7 + 0x154) - *(int *)(iVar7 + 0x150)) / 0xc + -2);
  local_44 = 1;
  if (1 < (int)local_3c) {
    do {
      local_4c = (local_44 * 3 + 6) * 4;
      local_50 = local_44 * 0xc;
      local_40 = 0;
      do {
        pfVar12 = local_20;
        iVar3 = param_1;
        local_64 = (float)local_40 / 20.0;
        iVar7 = local_50 + *(int *)(param_1 + 0x150);
        D3DXVec3CatmullRom(&local_90,iVar7 + -0xc,iVar7,iVar7 + 0xc,
                           local_4c + *(int *)(param_1 + 0x150),local_64);
        iVar7 = *(int *)(iVar3 + 0x150);
        iVar8 = local_50 + iVar7;
        D3DXVec3CatmullRom(&local_b4,iVar8 + -0xc,iVar8,iVar8 + 0xc,local_4c + iVar7,local_64 + 0.05
                          );
        local_2c = (local_b0 - local_8c) * 0.0;
        local_34._0_4_ = local_2c - (local_ac - local_88);
        local_34._4_4_ = (local_ac - local_88) * 0.0 - (local_b4 - local_90) * 0.0;
        local_2c = (local_b4 - local_90) - local_2c;
        fVar17 = (float10)FUN_00401030(local_34._4_4_ * local_34._4_4_ +
                                       (float)local_34 * (float)local_34 + local_2c * local_2c);
        local_14 = (float)((float10)1 / fVar17);
        fVar16 = (float)local_34 * local_14;
        fVar18 = local_14 * local_34._4_4_;
        local_2c = local_14 * local_2c;
        local_34 = CONCAT44(fVar18,fVar16);
        if (local_44 == 1) {
          local_9c = local_34;
          local_94 = local_2c;
        }
        else {
          local_a8 = ((float)local_9c + fVar16) * 0.5;
          fStack_a4 = (local_9c._4_4_ + fVar18) * 0.5;
          local_a0 = (local_94 + local_2c) * 0.5;
          local_9c = local_34;
          local_94 = local_2c;
          local_2c = local_a0;
          local_34._0_4_ = local_a8;
          local_34._4_4_ = fStack_a4;
          fVar17 = (float10)FUN_00401030(fStack_a4 * fStack_a4 + local_a8 * local_a8 +
                                         local_a0 * local_a0);
          local_14 = (float)((float10)1 / fVar17);
          fVar18 = local_14 * local_34._4_4_;
          fVar16 = local_a8 * local_14;
          local_34 = CONCAT44(fVar18,(float)local_34);
          local_2c = local_14 * local_2c;
        }
        local_78 = fVar16 * 2.0 + local_90;
        fStack_74 = fVar18 * 2.0 + local_8c;
        local_70 = local_2c * 2.0 + local_88;
        local_84 = local_90 - fVar16 * 2.0;
        fStack_80 = local_8c - fVar18 * 2.0;
        local_7c = local_88 - local_2c * 2.0;
        local_48 = DAT_00f17898;
        if ((int)local_3c + -1 <= local_44) {
          iVar3 = *(int *)(iVar3 + 0x150);
          iVar7 = iVar3 + (int)local_3c * 0xc;
          fVar16 = *(float *)(iVar3 + (int)local_3c * 0xc) - local_90;
          fVar10 = *(float *)(iVar7 + 4) - local_8c;
          fVar18 = *(float *)(iVar7 + 8) - local_88;
          fVar17 = (float10)FUN_00401030(fVar10 * fVar10 + fVar16 * fVar16 + fVar18 * fVar18);
          fVar17 = (float10)FUN_0040b340((float)fVar17);
          local_14 = (float)fVar17;
          fVar18 = DAT_00f092fc;
          if (DAT_00f17b58 < local_14) {
            if (local_40 < 0x13) goto LAB_008189e5;
          }
          else if (local_40 < 0x13) {
            fVar18 = 1.0 - local_14 * 0.25;
            fVar16 = DAT_00f092fc;
            if ((DAT_00f092fc <= fVar18) || (fVar16 = 0.0, fVar18 <= 0.0)) {
              fVar18 = fVar16;
            }
            fVar18 = fVar18 * 0.5 + 0.5;
          }
          local_48 = fVar18;
        }
LAB_008189e5:
        fVar18 = local_68;
        pfVar15 = pfVar14;
        if (((int)local_68 < 0) ||
           (iVar7 = local_60 + (int)local_68 * 0x1c,
           fVar10 = *(float *)(local_60 + (int)local_68 * 0x1c) - local_78,
           fVar4 = *(float *)(iVar7 + 4) - fStack_74, fVar16 = *(float *)(iVar7 + 8) - local_70,
           fVar17 = (float10)FUN_0040b340(fVar4 * fVar4 + fVar10 * fVar10 + fVar16 * fVar16),
           (float10)_DAT_00f17b50 <= fVar17)) {
          FUN_00a7d600();
          local_68 = (float)((local_5c - local_60) / 0x1c - 1);
          local_14 = (float)((uint)local_68 & 0xffff);
          if ((&local_14 < pfVar12) && (pfVar14 <= &local_14)) {
            local_28 = (float)((int)&local_14 - (int)pfVar14 >> 1);
            if (pfVar12 == local_1c) {
              uVar9 = (int)pfVar12 - (int)pfVar14 >> 1;
              if (0x7ffffffe < uVar9) goto LAB_00818f54;
              uVar9 = uVar9 + 1;
              uVar11 = (int)local_1c - (int)pfVar14 >> 1;
              if (uVar11 < uVar9) {
                if (0x7fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar9) {
                  uVar11 = uVar9;
                }
                FUN_005c5920(uVar11);
                pfVar15 = local_24;
                pfVar12 = local_20;
              }
            }
            if (pfVar12 != (float *)0x0) {
              *(ushort *)pfVar12 = *(ushort *)((int)pfVar15 + (int)local_28 * 2);
            }
          }
          else {
            if (pfVar12 == local_1c) {
              uVar9 = (int)pfVar12 - (int)pfVar14 >> 1;
              if (0x7ffffffe < uVar9) goto LAB_00818f54;
              uVar9 = uVar9 + 1;
              uVar11 = (int)local_1c - (int)pfVar14 >> 1;
              if (uVar11 < uVar9) {
                if (0x7fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar9) {
                  uVar11 = uVar9;
                }
                FUN_005c5920(uVar11);
                pfVar15 = local_24;
                pfVar12 = local_20;
              }
            }
            if (pfVar12 != (float *)0x0) {
              *(ushort *)pfVar12 = local_68._0_2_;
            }
          }
        }
        else {
          local_14 = (float)((uint)fVar18 & 0xffff);
          if ((&local_14 < pfVar12) && (pfVar14 <= &local_14)) {
            if (pfVar12 == local_1c) {
              uVar9 = (int)pfVar12 - (int)pfVar14 >> 1;
              if (0x7ffffffe < uVar9) goto LAB_00818f54;
              uVar9 = uVar9 + 1;
              uVar11 = (int)local_1c - (int)pfVar14 >> 1;
              if (uVar11 < uVar9) {
                if (0x7fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar9) {
                  uVar11 = uVar9;
                }
                FUN_005c5920(uVar11);
                pfVar15 = local_24;
                pfVar12 = local_20;
              }
            }
            if (pfVar12 != (float *)0x0) {
              *(ushort *)pfVar12 =
                   *(ushort *)((int)pfVar15 + ((int)&local_14 - (int)pfVar14 >> 1) * 2);
            }
          }
          else {
            if (pfVar12 == local_1c) {
              uVar9 = (int)pfVar12 - (int)pfVar14 >> 1;
              if (0x7ffffffe < uVar9) goto LAB_00818f54;
              uVar9 = uVar9 + 1;
              uVar11 = (int)local_1c - (int)pfVar14 >> 1;
              if (uVar11 < uVar9) {
                if (0x7fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar9) {
                  uVar11 = uVar9;
                }
                FUN_005c5920(uVar11);
                pfVar15 = local_24;
                pfVar12 = local_20;
              }
            }
            if (pfVar12 != (float *)0x0) {
              *(ushort *)pfVar12 = SUB42(fVar18,0);
            }
          }
        }
        pfVar5 = local_1c;
        pfVar12 = (float *)((int)pfVar12 + 2);
        local_20 = pfVar12;
        pfVar14 = pfVar15;
        if (((int)local_38 < 0) ||
           (iVar7 = local_60 + local_38 * 0x1c,
           fVar16 = *(float *)(local_60 + local_38 * 0x1c) - local_84,
           fVar10 = *(float *)(iVar7 + 4) - fStack_80, fVar18 = *(float *)(iVar7 + 8) - local_7c,
           fVar17 = (float10)FUN_0040b340(fVar10 * fVar10 + fVar16 * fVar16 + fVar18 * fVar18),
           (float10)_DAT_00f17b50 <= fVar17)) {
          FUN_00a7d600();
          local_38 = (local_5c - local_60) / 0x1c - 1;
          local_14 = (float)(local_38 & 0xffff);
          if ((&local_14 < pfVar12) && (pfVar15 <= &local_14)) {
            if (pfVar12 == local_1c) {
              uVar9 = (int)pfVar12 - (int)pfVar15 >> 1;
              if (0x7ffffffe < uVar9) goto LAB_00818f54;
              uVar9 = uVar9 + 1;
              uVar11 = (int)local_1c - (int)pfVar15 >> 1;
              if (uVar11 < uVar9) {
                if (0x7fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar9) {
                  uVar11 = uVar9;
                }
                FUN_005c5920(uVar11);
                pfVar14 = local_24;
                pfVar12 = local_20;
              }
            }
            if (pfVar12 != (float *)0x0) {
              *(ushort *)pfVar12 =
                   *(ushort *)((int)pfVar14 + ((int)&local_14 - (int)pfVar15 >> 1) * 2);
            }
          }
          else {
            if (pfVar12 == local_1c) {
              uVar9 = (int)pfVar12 - (int)pfVar15 >> 1;
              if (0x7ffffffe < uVar9) goto LAB_00818f54;
              uVar9 = uVar9 + 1;
              uVar11 = (int)local_1c - (int)pfVar15 >> 1;
              if (uVar11 < uVar9) {
                if (0x7fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar9) {
                  uVar11 = uVar9;
                }
                FUN_005c5920(uVar11);
                pfVar14 = local_24;
                pfVar12 = local_20;
              }
            }
            if (pfVar12 != (float *)0x0) {
              *(ushort *)pfVar12 = (ushort)local_38;
            }
          }
        }
        else {
          local_14 = (float)(local_38 & 0xffff);
          if ((&local_14 < pfVar12) && (pfVar15 <= &local_14)) {
            local_28 = (float)((int)&local_14 - (int)pfVar15 >> 1);
            if (pfVar12 == pfVar5) {
              uVar9 = (int)pfVar12 - (int)pfVar15 >> 1;
              if (0x7ffffffe < uVar9) {
LAB_00818f54:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad("vector<T> too long");
              }
              uVar9 = uVar9 + 1;
              uVar11 = (int)pfVar5 - (int)pfVar15 >> 1;
              if (uVar11 < uVar9) {
                if (0x7fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar9) {
                  uVar11 = uVar9;
                }
                FUN_005c5920(uVar11);
                pfVar14 = local_24;
                pfVar12 = local_20;
              }
            }
            if (pfVar12 != (float *)0x0) {
              *(ushort *)pfVar12 = *(ushort *)((int)pfVar14 + (int)local_28 * 2);
            }
          }
          else {
            if (pfVar12 == pfVar5) {
              uVar9 = (int)pfVar12 - (int)pfVar15 >> 1;
              if (0x7ffffffe < uVar9) goto LAB_00818f54;
              uVar9 = uVar9 + 1;
              uVar11 = (int)pfVar5 - (int)pfVar15 >> 1;
              if (uVar11 < uVar9) {
                if (0x7fffffff - (uVar11 >> 1) < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar9) {
                  uVar11 = uVar9;
                }
                FUN_005c5920(uVar11);
                pfVar14 = local_24;
                pfVar12 = local_20;
              }
            }
            if (pfVar12 != (float *)0x0) {
              *(ushort *)pfVar12 = (ushort)local_38;
            }
          }
        }
        iVar7 = param_1;
        local_40 = local_40 + 1;
        local_20 = (float *)((int)pfVar12 + 2);
      } while (local_40 < 0x14);
      local_44 = local_44 + 1;
    } while (local_44 < (int)local_3c);
    if (local_60 == local_5c) {
      if (pfVar14 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pfVar14);
      }
    }
    else {
      local_50 = (int)local_20 - (int)pfVar14 >> 1;
      local_28 = (float)local_50;
      if (local_50 < 0) {
        local_28 = local_28 + 4.2949673e+09;
      }
      local_28 = local_28 * 0.5;
      for (pfVar12 = pfVar14; pfVar12 != local_20; pfVar12 = (float *)((int)pfVar12 + 2)) {
        *(float *)(local_60 + 0xc + (uint)*(ushort *)pfVar12 * 0x1c) =
             (float)(*(ushort *)pfVar12 >> 1) / local_28;
      }
      iVar3 = (local_5c - local_60) / 0x1c;
      FUN_009f9630(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(*(int *)(param_1 + 0x140) + 100)
                   ,iVar3,0x1c,0x202,0);
      piVar1 = *(int **)(iVar7 + 0x14c);
      piVar2 = (int *)*piVar1;
      if (piVar2 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        uVar13 = 0;
        if ((*(char *)((int)piVar1 + 0x15) != '\0') && (*(char *)((int)piVar1 + 0x16) == '\0')) {
          uVar13 = 0x2000;
        }
        (**(code **)(*piVar2 + 0x2c))(piVar2,0,0,&param_1,uVar13);
        iVar8 = param_1;
      }
      fVar18 = DAT_00f141d0;
      if (0 < iVar3) {
        local_3c = (float *)(iVar8 + 0x14);
        pfVar12 = (float *)(local_60 + 4);
        local_4c = iVar3;
        do {
          local_64 = *(float *)(*(int *)(iVar7 + 0x148) + 0x20b8);
          iVar3 = *(int *)((int)local_64 + 0x212c);
          local_68 = (float)(int)(pfVar12[1] + 0.5);
          iVar8 = *(int *)(iVar3 + 4) + -1;
          param_1 = (int)(pfVar12[-1] + 1.0);
          if (iVar8 < (int)(pfVar12[-1] + 1.0)) {
            param_1 = iVar8;
          }
          fVar16 = local_68;
          if ((int)local_68 < 0) {
            fVar16 = 0.0;
          }
          fVar10 = (float)(*(int *)(iVar3 + 8) - 1);
          if ((int)fVar10 < (int)fVar16) {
            fVar16 = fVar10;
          }
          iVar3 = *(int *)(*(int *)((int)local_64 + 0x2aa4) +
                          (uint)*(ushort *)
                                 (*(int *)(iVar3 + 0x18) * (int)fVar16 +
                                  *(int *)(iVar3 + 0xc) * param_1 + *(int *)(iVar3 + 0x20)) * 4);
          fVar16 = fVar18;
          if ((iVar3 != 0) && (*(char *)(iVar3 + 0x2a) == '\0')) {
            fVar16 = 0.0;
          }
          if ((char)param_2 == '\0') {
            fVar16 = fVar16 + 0.05;
          }
          else {
            fVar16 = fVar16 + 0.62;
          }
          *pfVar12 = fVar16;
          *(undefined8 *)(local_3c + -5) = *(undefined8 *)(pfVar12 + -1);
          local_3c[-3] = pfVar12[1];
          local_3c[-2] = pfVar12[2];
          *local_3c = pfVar12[4];
          local_3c[1] = pfVar12[5];
          local_3c = local_3c + 7;
          pfVar12 = pfVar12 + 7;
          local_4c = local_4c + -1;
          local_28 = local_68;
        } while (local_4c != 0);
      }
      (**(code **)(*(int *)**(undefined4 **)(iVar7 + 0x14c) + 0x30))
                ((int *)**(undefined4 **)(iVar7 + 0x14c));
      iVar3 = local_50;
      FUN_009f99d0(*(undefined4 *)(iVar7 + 0x14c),*(undefined4 *)(*(int *)(iVar7 + 0x140) + 100),
                   local_50);
      piVar1 = *(int **)(*(int *)(iVar7 + 0x14c) + 4);
      (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&param_2,0);
      FID_conflict__memcpy(param_2,pfVar14,iVar3 * 2);
      piVar1 = *(int **)(*(int *)(iVar7 + 0x14c) + 4);
      (**(code **)(*piVar1 + 0x30))(piVar1);
      if (pfVar14 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pfVar14);
      }
    }
    if (local_60 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60);
    }
  }
  ExceptionList = local_10;
  return;
}

