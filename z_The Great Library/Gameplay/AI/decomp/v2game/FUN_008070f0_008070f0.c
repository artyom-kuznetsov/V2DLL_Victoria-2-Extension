// FUN_008070f0 @ 008070f0 body=[[008070f0, 00808bba]]


void FUN_008070f0(int param_1,int *param_2,undefined2 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  short *psVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined2 *puVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  float *local_d8;
  int local_d4;
  int local_d0;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  float *local_a0;
  uint local_9c;
  float *local_98;
  float *local_94;
  uint local_90;
  float *local_8c;
  short *local_88;
  float *local_84;
  float *local_80;
  float *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b59050;
  local_10 = ExceptionList;
  iVar8 = *(int *)(param_1 + 0x194) * (in_ECX % *(int *)(param_1 + 0x18c)) +
          *(int *)(param_1 + 0x194) / 2;
  local_6c = *(int *)(param_1 + 0x198) * (in_ECX / *(int *)(param_1 + 0x18c)) +
             *(int *)(param_1 + 0x198) / 2;
  iVar13 = *param_2;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 8) < iVar13) {
    ExceptionList = &local_10;
    *(int *)(param_1 + 8) = iVar13;
  }
  iVar15 = in_ECX * 0x3c0;
  FUN_009f9630(iVar15 + 0x2b8 + *(int *)(param_1 + 0x19c),
               *(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),iVar13,0xc,0,0);
  iVar13 = 0;
  if (param_2[1] < 1) {
    local_78 = 0;
  }
  else {
    FUN_009f99d0(iVar15 + 0x2dc + *(int *)(param_1 + 0x19c),
                 *(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),param_2[1]);
    piVar16 = *(int **)(iVar15 + *(int *)(param_1 + 0x19c) + 0x2e0);
    (**(code **)(*piVar16 + 0x2c))(piVar16,0,0,&local_70,0);
    local_78 = local_70;
  }
  piVar16 = *(int **)(iVar15 + 0x2b8 + *(int *)(param_1 + 0x19c));
  iVar12 = iVar15 + 0x2b8 + *(int *)(param_1 + 0x19c);
  uVar11 = 0;
  local_90 = 0;
  if (piVar16 == (int *)0x0) {
    local_d8 = (float *)0x0;
  }
  else {
    if ((*(char *)(iVar12 + 0x15) != '\0') && (*(char *)(iVar12 + 0x16) == '\0')) {
      uVar11 = 0x2000;
    }
    (**(code **)(*piVar16 + 0x2c))(piVar16,0,0,local_18,uVar11);
    local_d8 = local_18[0];
  }
  iVar12 = param_2[3] - param_2[2] >> 0x1f;
  local_9c = 0;
  if ((param_2[3] - param_2[2]) / 0x48 + iVar12 != iVar12) {
    local_a0 = local_d8 + 0x15;
    local_94 = local_d8 + 0x12;
    local_98 = local_d8 + 0xf;
    local_80 = local_d8 + 0xc;
    local_8c = local_d8 + 9;
    local_84 = local_d8 + 6;
    local_7c = local_d8 + 3;
    local_88 = (short *)(local_78 + 4);
    local_74 = 0;
    do {
      piVar16 = (int *)(param_2[2] + local_74);
      local_70 = piVar16[2];
      if (((local_70 == 0xc) || (local_70 == 0xd)) || (local_70 == 0xe)) {
        if (local_70 == 0xf) goto LAB_00807fa9;
        if (local_70 == 0xe) {
          local_c4 = *piVar16;
          local_d0 = piVar16[1];
          local_d4 = local_c4 + -1;
          local_c0 = local_d0 + 1;
          local_58 = 0.0;
          local_54 = 0.0;
          local_50 = 0.0;
          local_4c = 0.0;
          local_48 = 0.0;
          local_44 = 0.0;
          local_40 = 0.0;
          local_3c = 0.0;
          local_bc = local_d4;
          local_b8 = local_c0;
          local_b4 = local_c4;
          local_b0 = local_d0;
        }
        else if (local_70 == 0xd) {
          local_c0 = piVar16[1];
          local_c4 = *piVar16 + -2;
          local_d4 = *piVar16 + -1;
          local_d0 = local_c0 + -1;
          local_58 = 0.0;
          local_54 = 0.0;
          local_50 = 0.0;
          local_4c = 0.0;
          local_48 = 0.0;
          local_44 = 0.0;
          local_40 = 0.0;
          local_3c = 0.0;
          local_bc = local_c4;
          local_b8 = local_d0;
          local_b4 = local_d4;
          local_b0 = local_c0;
        }
        else if (local_70 == 0xc) {
          local_d4 = *piVar16;
          local_d0 = piVar16[1];
          local_c4 = local_d4 + 1;
          local_c0 = local_d0 + -1;
          local_bc = local_c4;
          local_b8 = local_d0;
          local_b4 = local_d4;
          local_b0 = local_c0;
          goto LAB_008082cf;
        }
LAB_008082d8:
        local_58 = (float)(local_bc - iVar8) + 0.5 + local_58;
        local_54 = (float)(local_b8 - local_6c) + 0.5 + local_54;
        local_50 = (float)(local_c4 - iVar8) + 0.5 + local_50;
        local_4c = (float)(local_c0 - local_6c) + 0.5 + local_4c;
        local_48 = (float)(local_d4 - iVar8) + 0.5 + local_48;
        local_44 = (float)(local_d0 - local_6c) + 0.5 + local_44;
        local_40 = (float)(local_b4 - iVar8) + 0.5 + local_40;
        local_3c = (float)(local_b0 - local_6c) + 0.5 + local_3c;
        fVar6 = local_50 - local_58;
        fVar7 = local_4c - local_54;
        fVar18 = (float10)FUN_00401030(fVar6 * fVar6 + fVar7 * fVar7);
        local_18[0] = (float *)(float)((float10)1 / fVar18);
        fVar6 = fVar6 * (float)local_18[0];
        fVar7 = fVar7 * (float)local_18[0];
        fVar2 = local_48 - local_58;
        fVar3 = local_44 - local_54;
        fVar18 = (float10)FUN_00401030(fVar2 * fVar2 + fVar3 * fVar3);
        local_18[0] = (float *)(float)((float10)1 / fVar18);
        fVar2 = fVar2 * (float)local_18[0];
        fVar3 = fVar3 * (float)local_18[0];
        fVar20 = fVar3;
        FUN_00806ff0(param_3);
        local_38 = local_58 + fVar20 * fVar6;
        fVar20 = fVar7 * fVar20 + local_54;
        local_34 = fVar20;
        FUN_00806ff0(param_3);
        local_30 = local_50 - fVar20 * fVar6;
        fVar6 = local_4c - fVar7 * fVar20;
        local_2c = fVar6;
        FUN_00806ff0(param_3);
        local_28 = local_38 + fVar6 * fVar2;
        fVar6 = fVar3 * fVar6 + local_34;
        local_24 = fVar6;
        FUN_00806ff0(param_3);
        *(short *)(local_78 + 2 + iVar13 * 2) = (short)local_90 + 4;
        *local_88 = (short)local_90 + 2;
        *(short *)(local_78 + iVar13 * 2) = (short)local_90;
        *(short *)(local_78 + 6 + iVar13 * 2) = (short)local_90 + 4;
        *(short *)(local_78 + 8 + iVar13 * 2) = (short)local_90 + 2;
        local_88[3] = (short)local_90 + 6;
        *(short *)(local_78 + 0xc + iVar13 * 2) = (short)local_90 + 6;
        *(short *)(local_78 + 0xe + iVar13 * 2) = (short)local_90 + 2;
        local_88[6] = (short)local_90 + 7;
        *(short *)(local_78 + 0x12 + iVar13 * 2) = (short)local_90 + 7;
        *(short *)(local_78 + 0x14 + iVar13 * 2) = (short)local_90 + 2;
        local_88[9] = (short)local_90 + 3;
        local_18[0] = (float *)((local_90 & 0xffff) + 5);
        *(short *)(local_78 + 0x18 + iVar13 * 2) = (short)local_18[0];
        *(short *)(local_78 + 0x1a + iVar13 * 2) = (short)local_90 + 7;
        local_88[0xc] = (short)local_90 + 3;
        *(short *)(local_78 + 0x1e + iVar13 * 2) = (short)local_90 + 1;
        *(short *)(local_78 + 0x20 + iVar13 * 2) = (short)local_18[0];
        iVar12 = DAT_012588e8;
        local_88[0xf] = (short)local_90 + 3;
        local_88 = local_88 + 0x12;
        uVar9 = piVar16[3];
        iVar13 = iVar13 + 0x12;
        if (*(char *)(*(int *)(*(int *)(*(int *)(iVar12 + 0xacc) + uVar9 * 4) + 0x5c) + 0x2a) ==
            '\0') {
          iVar12 = piVar16[5] + piVar16[1];
          iVar14 = piVar16[4] + *piVar16;
          if (iVar14 < 0) {
            uVar9 = 0;
          }
          else if (iVar12 < 0) {
            uVar9 = 0;
          }
          else {
            iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x212c);
            if (iVar14 < *(int *)(iVar1 + 4)) {
              if (iVar12 < *(int *)(iVar1 + 8)) {
                uVar9 = (uint)*(ushort *)
                               (*(int *)(iVar1 + 0x18) * iVar12 + *(int *)(iVar1 + 0xc) * iVar14 +
                               *(int *)(iVar1 + 0x20));
              }
              else {
                uVar9 = 0;
              }
            }
            else {
              uVar9 = 0;
            }
          }
        }
        fVar7 = (float)((uVar9 & 0xff) << 0x10 | uVar9 & 0xff00);
        *local_d8 = local_58;
        local_d8[1] = local_54;
        *local_7c = local_50;
        local_7c[1] = local_4c;
        *local_84 = local_48;
        local_84[1] = local_44;
        *local_8c = local_40;
        local_8c[1] = local_3c;
        *local_80 = local_38;
        local_80[1] = local_34;
        *local_98 = local_30;
        local_98[1] = local_2c;
        *local_94 = local_28;
        local_94[1] = local_24;
        local_d8[2] = fVar7;
        local_d8[5] = fVar7;
        local_d8[8] = fVar7;
        local_d8[0xb] = fVar7;
        local_d8[0xe] = fVar7;
        local_d8[0x11] = fVar7;
        local_d8[0x14] = fVar7;
        local_d8[0x17] = fVar7;
        *local_a0 = local_30 + fVar6 * fVar2;
        local_a0[1] = fVar3 * fVar6 + local_2c;
        piVar16[6] = local_90 + 5;
        piVar16[9] = (int)local_30;
        piVar16[10] = (int)local_2c;
        piVar16[7] = local_90 + 4;
        piVar16[0xb] = (int)local_38;
        piVar16[0xc] = (int)local_34;
        piVar16[8] = local_90 + 1;
        local_90 = local_90 + 8;
        piVar16[0xd] = (int)local_50;
        iVar12 = 0x60;
        local_98 = local_98 + 0x18;
        piVar16[0xe] = (int)local_4c;
        local_94 = local_94 + 0x18;
        piVar16[0xf] = (int)local_58;
        fVar6 = local_54;
LAB_008089da:
        local_84 = (float *)((int)local_84 + iVar12);
        local_8c = (float *)((int)local_8c + iVar12);
        local_80 = (float *)((int)local_80 + iVar12);
        local_7c = (float *)((int)local_7c + iVar12);
        local_d8 = (float *)((int)local_d8 + iVar12);
        local_a0 = (float *)((int)local_a0 + iVar12);
        piVar16[0x10] = (int)fVar6;
      }
      else {
        if (local_70 == 0xf) {
LAB_00807fa9:
          local_d4 = *piVar16;
          local_c0 = piVar16[1] + -2;
          local_d0 = piVar16[1] + -1;
          local_c4 = local_d4 + -1;
          local_bc = local_d4;
          local_b8 = local_c0;
          local_b4 = local_c4;
          local_b0 = local_d0;
LAB_008082cf:
          local_48 = 0.0;
          local_4c = 0.0;
          local_50 = 0.0;
          local_54 = 0.0;
          local_58 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
          local_44 = 0.0;
          goto LAB_008082d8;
        }
        if (local_70 < 0x10) {
          if (local_70 == 1) {
            local_68 = *piVar16;
            local_5c = piVar16[1];
            local_64 = local_5c + -1;
            local_50 = 0.0;
            local_4c = 0.0;
            local_48 = 0.0;
            local_44 = 0.0;
            local_60 = local_68;
          }
          else if (local_70 == 2) {
            local_64 = piVar16[1];
            local_68 = *piVar16 + -1;
            local_5c = local_64 + -1;
            local_60 = local_68;
LAB_008076fd:
            local_50 = 0.0;
            local_44 = 0.0;
            local_48 = 0.0;
            local_4c = 0.0;
          }
          else if (local_70 == 3) {
            local_68 = *piVar16;
            local_64 = piVar16[1];
            local_60 = local_68 + -1;
            local_50 = 0.0;
            local_4c = 0.0;
            local_48 = 0.0;
            local_44 = 0.0;
            local_5c = local_64;
          }
          else if (local_70 == 4) {
            local_60 = *piVar16;
            local_68 = local_60 + -1;
            local_64 = piVar16[1] + -1;
            local_50 = 0.0;
            local_4c = 0.0;
            local_48 = 0.0;
            local_44 = 0.0;
            local_5c = local_64;
          }
          else {
            if (local_70 == 5) {
              local_5c = piVar16[1];
              local_60 = *piVar16;
              local_64 = local_5c + -1;
              local_68 = local_60 + 1;
              goto LAB_008076fd;
            }
            if (local_70 == 7) {
              local_60 = *piVar16;
              local_68 = local_60 + -1;
              local_64 = piVar16[1] + -2;
              local_5c = piVar16[1] + -1;
              local_50 = 0.0;
              local_4c = 0.0;
              local_48 = 0.0;
              local_44 = 0.0;
            }
            else if (local_70 == 6) {
              local_64 = piVar16[1];
              local_68 = *piVar16 + -1;
              local_60 = *piVar16 + -2;
              local_5c = local_64 + -1;
              local_50 = 0.0;
              local_4c = 0.0;
              local_48 = 0.0;
              local_44 = 0.0;
            }
            else {
              if (local_70 == 8) {
                local_64 = piVar16[1];
                local_68 = *piVar16 + -2;
                local_60 = *piVar16 + -1;
                local_5c = local_64 + -1;
                goto LAB_008076fd;
              }
              if (local_70 == 9) {
                local_60 = *piVar16;
                local_68 = local_60 + -1;
                local_64 = piVar16[1] + -1;
                local_5c = piVar16[1] + -2;
                local_50 = 0.0;
                local_4c = 0.0;
                local_48 = 0.0;
                local_44 = 0.0;
              }
              else if (local_70 == 10) {
                local_60 = *piVar16;
                local_68 = local_60 + -1;
                local_64 = piVar16[1] + -2;
                local_5c = piVar16[1] + -1;
                local_50 = 0.0;
                local_4c = 0.0;
                local_48 = 0.0;
                local_44 = 0.0;
              }
              else if (local_70 == 0xb) {
                local_68 = *piVar16;
                local_64 = piVar16[1];
                local_60 = local_68 + -1;
                local_5c = local_64 + 1;
                goto LAB_008076fd;
              }
            }
          }
          local_50 = (float)(local_68 - iVar8) + 0.5 + local_50;
          local_4c = (float)(local_64 - local_6c) + 0.5 + local_4c;
          local_48 = (float)(local_60 - iVar8) + 0.5 + local_48;
          local_44 = (float)(local_5c - local_6c) + 0.5 + local_44;
          fVar2 = local_44 - local_4c;
          fVar6 = local_48 - local_50;
          fVar18 = (float10)FUN_00401030(fVar2 * fVar2 + fVar6 * fVar6 + 0.0);
          local_18[0] = (float *)(float)((float10)1 / fVar18);
          fVar6 = fVar6 * (float)local_18[0];
          fVar2 = fVar2 * (float)local_18[0];
          fVar7 = fVar2 * DAT_00f0d5fc - (float)local_18[0] * 0.0 * DAT_00f0d5f8;
          fVar20 = fVar6 * DAT_00f0d5f8 - fVar2 * DAT_00f0d5f4;
          fVar3 = (float)local_18[0] * 0.0 * DAT_00f0d5f4 - fVar6 * DAT_00f0d5fc;
          fVar18 = (float10)FUN_00401030(fVar3 * fVar3 + fVar7 * fVar7 + fVar20 * fVar20);
          if (local_70 < 5) {
            local_40 = local_50 + fVar6 * 0.5;
            local_3c = fVar2 * 0.5 + local_4c;
          }
          else {
            if (local_70 == 5) {
              local_40 = (float)(*piVar16 - iVar8) + 0.5 + 0.0;
              fVar20 = (float)((piVar16[1] + -1) - local_6c);
            }
            else {
              if (local_70 == 7) {
                iVar12 = piVar16[1] + -1;
              }
              else if (local_70 == 6) {
                iVar12 = piVar16[1] + -1;
              }
              else {
                if (local_70 != 8) {
                  if (local_70 == 9) {
                    local_40 = (float)(*piVar16 - iVar8) + 0.5 + 0.0;
                    fVar20 = (float)((piVar16[1] + -1) - local_6c);
                    goto LAB_00807c4d;
                  }
                  if (local_70 == 10) {
                    iVar12 = piVar16[1] + -1;
                    goto LAB_00807c17;
                  }
                  if (local_70 != 0xb) goto LAB_00807c6c;
                }
                iVar12 = piVar16[1];
              }
LAB_00807c17:
              local_40 = (float)((*piVar16 + -1) - iVar8) + 0.5 + 0.0;
              fVar20 = (float)(iVar12 - local_6c);
            }
LAB_00807c4d:
            local_3c = fVar20 + 0.5 + 0.0;
          }
LAB_00807c6c:
          local_18[0] = &local_38;
          local_70 = 0;
          do {
            fVar20 = local_50 + fVar6 * (float)local_70 * 0.33333334;
            fVar5 = fVar2 * (float)local_70 * 0.33333334 + local_4c;
            fVar19 = fVar5;
            FUN_00806ff0(param_3);
            local_18[0][1] = fVar19 * fVar3 * (float)((float10)1 / fVar18) * -1.0 + fVar5;
            local_70 = local_70 + 1;
            *local_18[0] = fVar19 * fVar7 * (float)((float10)1 / fVar18) * -1.0 + fVar20;
            local_18[0] = local_18[0] + 2;
          } while (local_70 < 4);
          *(short *)(local_78 + iVar13 * 2) = (short)local_90 + 2;
          *local_88 = (short)local_90 + 3;
          *(short *)(local_78 + 2 + iVar13 * 2) = (short)local_90;
          local_18[0] = (float *)0x0;
          psVar4 = local_88;
          do {
            psVar4[2] = (short)local_90 + 4 + (short)local_18[0];
            psVar4[1] = (short)local_90 + 3 + (short)local_18[0];
            local_18[0] = (float *)((int)local_18[0] + 1);
            psVar4[3] = (short)local_90 + 2;
            psVar4 = psVar4 + 3;
          } while ((int)local_18[0] < 3);
          *(short *)(local_78 + 0x1a + iVar13 * 2) = (short)local_90 + 1;
          local_88[0xc] = (short)local_90 + 2;
          local_88 = local_88 + 0xf;
          *(short *)(local_78 + 0x18 + iVar13 * 2) = (short)local_90 + 6;
          uVar9 = piVar16[3];
          iVar13 = iVar13 + 0xf;
          if (*(char *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + uVar9 * 4) + 0x5c) + 0x2a
                       ) == '\0') {
            iVar12 = piVar16[5] + piVar16[1];
            iVar14 = piVar16[4] + *piVar16;
            if (iVar14 < 0) {
              uVar9 = 0;
            }
            else if (iVar12 < 0) {
              uVar9 = 0;
            }
            else {
              iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x212c);
              if (iVar14 < *(int *)(iVar1 + 4)) {
                if (iVar12 < *(int *)(iVar1 + 8)) {
                  uVar9 = (uint)*(ushort *)
                                 (*(int *)(iVar1 + 0x18) * iVar12 + *(int *)(iVar1 + 0xc) * iVar14 +
                                 *(int *)(iVar1 + 0x20));
                }
                else {
                  uVar9 = 0;
                }
              }
              else {
                uVar9 = 0;
              }
            }
          }
          fVar6 = (float)((uVar9 & 0xff) << 0x10 | uVar9 & 0xff00);
          *local_d8 = local_50;
          local_d8[1] = local_4c;
          *local_7c = local_48;
          local_7c[1] = local_44;
          *local_84 = local_40;
          local_84[1] = local_3c;
          *local_8c = local_38;
          local_8c[1] = local_34;
          *local_80 = local_30;
          local_80[1] = local_2c;
          *local_98 = local_28;
          local_98[1] = local_24;
          local_d8[2] = fVar6;
          local_d8[5] = fVar6;
          local_d8[8] = fVar6;
          local_d8[0xb] = fVar6;
          local_d8[0xe] = fVar6;
          local_d8[0x11] = fVar6;
          local_d8[0x14] = fVar6;
          *local_94 = local_20;
          local_94[1] = local_1c;
          piVar16[6] = local_90 + 3;
          piVar16[9] = (int)local_38;
          piVar16[10] = (int)local_34;
          piVar16[7] = local_90 + 6;
          piVar16[0xb] = (int)local_20;
          piVar16[0xc] = (int)local_1c;
          piVar16[8] = local_90;
          piVar16[0xd] = (int)local_50;
          local_90 = local_90 + 7;
          piVar16[0xe] = (int)local_4c;
          iVar12 = 0x54;
          local_98 = local_98 + 0x15;
          local_94 = local_94 + 0x15;
          piVar16[0xf] = (int)local_40;
          fVar6 = local_3c;
          goto LAB_008089da;
        }
      }
      local_74 = local_74 + 0x48;
      local_9c = local_9c + 1;
    } while (local_9c < (uint)((param_2[3] - param_2[2]) / 0x48));
  }
  local_9c = (param_2[3] - param_2[2]) / 0x48;
  if (local_9c != 0) {
    puVar17 = (undefined2 *)(local_78 + iVar13 * 2);
    param_3 = (undefined2 *)(local_78 + 4 + iVar13 * 2);
    local_74 = 0;
    do {
      iVar13 = param_2[2];
      iVar8 = iVar13 + local_74;
      if (*(int *)(iVar8 + 8) < 0x10) {
        iVar12 = FUN_00806ee0(iVar8);
        if (iVar12 == -1) {
LAB_00808b2f:
          *puVar17 = *(undefined2 *)(iVar8 + 0x20);
          puVar17[1] = *(undefined2 *)(iVar8 + 0x18);
          uVar10 = *(undefined2 *)(iVar8 + 0x18);
        }
        else {
          iVar12 = iVar12 * 0x48;
          fVar6 = *(float *)(iVar13 + 0x2c + iVar12) - *(float *)(iVar8 + 0x24);
          fVar2 = *(float *)(iVar13 + 0x30 + iVar12) - *(float *)(iVar8 + 0x28);
          fVar18 = (float10)FUN_00401030(fVar6 * fVar6 + fVar2 * fVar2);
          if ((float10)1 <= fVar18) goto LAB_00808b2f;
          *puVar17 = *(undefined2 *)(iVar8 + 0x20);
          puVar17[1] = *(undefined2 *)(iVar8 + 0x18);
          uVar10 = *(undefined2 *)(iVar12 + 0x1c + param_2[2]);
        }
        puVar17 = puVar17 + 3;
        *param_3 = uVar10;
        param_3 = param_3 + 3;
      }
      local_74 = local_74 + 0x48;
      local_9c = local_9c + -1;
    } while (local_9c != 0);
  }
  if (local_78 != 0) {
    piVar16 = *(int **)(iVar15 + *(int *)(param_1 + 0x19c) + 0x2e0);
    (**(code **)(*piVar16 + 0x30))(piVar16);
  }
  piVar16 = *(int **)(iVar15 + 0x2b8 + *(int *)(param_1 + 0x19c));
  (**(code **)(*piVar16 + 0x30))(piVar16);
  ExceptionList = local_10;
  return;
}

