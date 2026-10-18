// FUN_00415ac0 @ 00415ac0 body=[[00415ac0, 004160a4] [004160b0, 00416389] [00416390, 00416980] [004169da, 004169fc] [00416a00, 00416dad]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00416885) */
/* WARNING: Removing unreachable block (ram,0x00416587) */

void FUN_00415ac0(int param_1,int *param_2,int param_3,size_t param_4)

{
  short sVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 *puVar18;
  float10 fVar19;
  float fVar20;
  undefined8 uStack_16c;
  int *piStack_164;
  size_t local_160;
  undefined4 local_14c [17];
  float local_108;
  float local_104;
  float local_fc;
  float local_f4;
  float local_ec;
  float local_e4;
  int local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 uStack_bc;
  float local_b8;
  int local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  short local_98 [8];
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  float local_74;
  float local_70;
  int local_6c;
  float local_68;
  int local_64;
  undefined1 *local_60;
  int local_5c;
  int *local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  short local_44 [6];
  undefined4 local_38;
  int *local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  char local_5;
  
  local_160 = 0x415ada;
  iVar5 = FUN_00475500();
  local_48 = *(int *)(iVar5 + 0x104);
  local_5 = *(int *)(param_1 + 0x24) != local_48;
  if ((bool)local_5) {
    *(int *)(param_1 + 0x24) = local_48;
  }
  local_160 = param_4;
  piStack_164 = &local_2c;
  uStack_16c = CONCAT44(0x415afd,(undefined4)uStack_16c);
  FUN_004153b0();
  local_160 = 0x415b04;
  local_18 = FUN_00415790();
  local_160 = 0x415b0f;
  FUN_00415330();
  iVar5 = local_2c;
  local_160 = (size_t)((float)(local_2c - *(int *)(param_1 + 0x18)) / 1000.0);
  piStack_164 = (int *)0x415b3d;
  fVar19 = (float10)FUN_0040b340();
  if (((((float10)0.009 <= fVar19) || (local_18 != *(uint *)(param_1 + 0x20))) || (local_5 != '\0'))
     || ((DAT_012586da != '\0' || (*(undefined4 **)(param_1 + 0x28) != local_c)))) {
    *(int *)(param_1 + 0x18) = iVar5;
    *(uint *)(param_1 + 0x20) = local_18;
    *(undefined4 **)(param_1 + 0x28) = local_c;
    local_14 = 0;
    if (*(int *)(*(int *)(param_4 + 0x5c) + 0xc0) == 0) {
      return;
    }
    if (*(int *)(*(int *)(param_4 + 0x5c) + 0xc4) == 0) {
      return;
    }
    if ((iVar5 < 1) && (local_18 == 0)) {
      return;
    }
    local_160 = param_4;
    piStack_164 = (int *)0x415bbe;
    local_2c = FUN_004158d0();
    if ((local_2c < 0) && (local_18 == 0)) {
      return;
    }
    local_80 = param_2[0xd];
    local_34 = (int *)param_2[0xc];
    piVar10 = *(int **)(DAT_012586dc + 0x70);
    local_24 = piVar10[1] / 1000;
    iVar7 = piVar10[2] / 1000;
    local_64 = *piVar10 / 1000;
    uStack_16c = (longlong)((piVar10[3] / 1000) * 1000) * (longlong)local_48;
    local_160 = 0;
    piStack_164 = (int *)0x3e8;
    iVar6 = __alldiv();
    iVar16 = iVar7 * local_24;
    local_5c = DAT_0125870c;
    local_84 = *(uint *)(param_4 + 0x58);
    local_7c = *(uint *)(param_4 + 0x58);
    local_b0 = *(int *)(DAT_0125870c + 0x2ac0) + -1;
    local_dc = iVar7 + -1;
    local_b4 = *(int *)(DAT_0125870c + 0x2abc) + -1;
    local_160 = 0x415ca2;
    iVar5 = -(iVar16 + 8);
    *(undefined4 *)((int)local_14c + iVar5 + -0x10) = 0xa110ca7e;
    iVar15 = (int)local_14c + iVar5 + -0xc;
    *(int *)((int)&local_160 + iVar5) = iVar16;
    *(undefined4 *)((int)&piStack_164 + iVar5) = 0;
    *(int *)((int)&uStack_16c + iVar5 + 4) = iVar15;
    local_4c = iVar15;
    *(undefined4 *)(iVar15 + iVar16) = 0xa110ca7e;
    *(undefined4 *)((int)&uStack_16c + iVar5) = 0x415cc0;
    _memset(*(void **)((int)&uStack_16c + iVar5 + 4),*(int *)((int)&piStack_164 + iVar5),
            *(size_t *)((int)&local_160 + iVar5));
    *(undefined4 *)((int)&local_160 + iVar5) = 0x415ccf;
    local_60 = &stack0xfffffea4;
    local_14c[iVar16 + -3] = 0xa110ca7e;
    iVar5 = *(int *)(param_4 + 0x5c);
    local_a4 = *(float *)(iVar5 + 100) - (float)*(int *)(iVar5 + 0x74);
    local_20 = 0;
    local_9c = *(float *)(iVar5 + 0x68) - (float)*(int *)(iVar5 + 0x78);
    local_ec = (float)*(int *)(iVar5 + 0x74);
    local_e4 = (float)*(int *)(iVar5 + 0x78);
    local_160 = (size_t)((float)((int)local_84 % 100) * 0.02 * 3.1415927);
    piStack_164 = (int *)0x415d9e;
    local_28 = (float)local_160;
    fVar19 = (float10)FUN_00414c50();
    local_74 = (float)fVar19;
    local_160 = (size_t)local_28;
    piStack_164 = (int *)0x415db0;
    fVar19 = (float10)FUN_00414c70();
    local_70 = (float)fVar19;
    local_104 = -local_70;
    local_68 = (float)local_64;
    local_ac = (float)local_64 * local_74;
    iVar5 = local_24 / 2;
    local_a8 = (float)local_64 * local_70;
    local_f4 = -((float)local_64 * local_70);
    local_48 = iVar5;
    iVar7 = iVar7 / 2;
    *(undefined1 *)(iVar5 * local_24 + local_4c + iVar7) = 0xff;
    sVar1 = (short)iVar7;
    local_44[1] = sVar1 + 1;
    *(undefined1 *)(iVar7 * local_24 + local_4c + iVar5) = 1;
    local_44[0] = (short)iVar5;
    local_44[2] = local_44[0];
    local_44[3] = sVar1 + -1;
    local_88 = iVar7;
    local_44[4] = local_44[0] + 1;
    local_44[5] = sVar1;
    local_38 = (float)CONCAT22(sVar1,local_44[0] + -1);
    iVar5 = 0;
    do {
      iVar15 = (int)local_44[iVar5 * 2];
      iVar7 = (int)local_44[iVar5 * 2 + 1];
      if ((((-1 < iVar15) && (iVar15 <= local_24 + -1)) && (-1 < iVar7)) &&
         ((iVar7 <= local_dc &&
          (pcVar8 = (char *)(iVar7 * local_24 + local_4c + iVar15), *pcVar8 == '\0')))) {
        puVar9 = (undefined4 *)(local_20 * 4);
        local_20 = local_20 + 1;
        *(short *)(local_60 + (int)(puVar9 + 1)) = local_44[iVar5 * 2];
        local_10 = puVar9;
        *(short *)(local_60 + (int)puVar9 + 6) = local_44[iVar5 * 2 + 1];
        *pcVar8 = -1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    local_160 = 0;
    piStack_164 = (int *)0x1f40;
    local_30 = (int)(((float)*(int *)(param_1 + 0x18) / 1000.0) * (float)(iVar6 / 1000));
    uStack_16c = (longlong)(int)local_c;
    local_10 = (undefined4 *)0x0;
    uStack_16c = __allmul();
    local_160 = 0;
    piStack_164 = (int *)0x3e8;
    iVar5 = __alldiv();
    local_6c = iVar5 / 1000;
    if (0 < local_20) {
      do {
        iVar5 = local_30;
        if ((local_30 < 1) && (local_18 == 0)) goto LAB_004168e8;
        iVar7 = (int)local_10 * 4;
        iVar6 = (int)local_10 * 4;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar9 = (undefined4 *)(int)(short)(*(short *)(local_60 + iVar6 + 6) - (short)local_88);
        local_1c = puVar9;
        piVar10 = (int *)(int)(short)(*(short *)(local_60 + iVar7 + 4) - (short)local_48);
        local_58 = piVar10;
        local_5 = '\0';
        fVar20 = (float)(int)piVar10 * local_ac + local_a4 + (float)(int)puVar9 * local_f4;
        fVar4 = (float)(int)puVar9 * local_ac + local_9c + (float)(int)piVar10 * local_a8;
        local_54 = fVar20;
        local_50 = fVar4;
        local_c = (undefined4 *)0x0;
        if (-1 < local_64) {
          local_fc = local_f4 * 0.5;
          local_108 = local_a8 * 0.5;
          do {
            iVar7 = 0;
            do {
              iVar6 = (int)(local_ec +
                           ((((float)iVar7 * local_74 + fVar20 + (float)(int)local_c * local_104) -
                            local_ac * 0.5) - local_f4 * 0.5));
              iVar15 = (int)(local_e4 +
                            ((((float)iVar7 * local_70 + fVar4 + (float)(int)local_c * local_74) -
                             local_a8 * 0.5) - local_ac * 0.5));
              if ((((iVar6 < 0) || (local_b4 < iVar6)) || (iVar15 < 0)) ||
                 (((local_b0 < iVar15 ||
                   (*(int *)(local_5c + 0x2ae4) - *(int *)(local_5c + 0x2ae0) >> 4 <= iVar6)) ||
                  ((piVar11 = (int *)(*(int *)(local_5c + 0x2ae0) + iVar6 * 0x10),
                   piVar11[1] - *piVar11 <= iVar15 || (*(char *)(iVar15 + *piVar11) == '\0')))))) {
LAB_004162a2:
                local_5 = '\x01';
                goto LAB_004162a6;
              }
              iVar16 = *(int *)(local_5c + 0x212c);
              if (iVar6 < *(int *)(iVar16 + 4)) {
                if (iVar15 < *(int *)(iVar16 + 8)) {
                  uVar13 = (uint)*(ushort *)
                                  (*(int *)(iVar16 + 0x18) * iVar15 + *(int *)(iVar16 + 0xc) * iVar6
                                  + *(int *)(iVar16 + 0x20));
                }
                else {
                  uVar13 = 0;
                }
              }
              else {
                uVar13 = 0;
              }
              if (uVar13 != local_84) goto LAB_004162a2;
              iVar7 = iVar7 + 1;
            } while (iVar7 <= local_64);
            local_c = (undefined4 *)((int)local_c + 1);
          } while ((int)local_c <= local_64);
        }
LAB_004162a6:
        *(undefined1 *)((local_88 + (int)puVar9) * local_24 + (int)piVar10 + local_48 + local_4c) =
             1;
        local_98[5] = (short)(local_88 + (int)puVar9);
        local_98[1] = local_98[5] + 1;
        local_98[3] = local_98[5] + -1;
        local_98[0] = (short)((int)piVar10 + local_48);
        local_98[2] = local_98[0];
        local_98[4] = local_98[0] + 1;
        local_98[6] = local_98[0] + -1;
        local_98[7] = local_98[5];
        iVar7 = 0;
        do {
          sVar1 = local_98[iVar7 * 2 + 1];
          iVar15 = (int)local_98[iVar7 * 2];
          iVar6 = (int)sVar1;
          if (((-1 < iVar15) && (iVar15 <= local_24 + -1)) &&
             ((-1 < iVar6 &&
              ((iVar6 <= local_dc &&
               (pcVar8 = (char *)(iVar6 * local_24 + iVar15 + local_4c), *pcVar8 == '\0')))))) {
            iVar6 = local_20 * 4;
            local_20 = local_20 + 1;
            *(short *)(local_60 + iVar6 + 4) = local_98[iVar7 * 2];
            *(short *)(local_60 + iVar6 + 6) = sVar1;
            *pcVar8 = -1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 4);
        if (local_5 == '\0') {
          if (local_30 < 1) {
            if (local_18 != 0) {
              puVar9 = (undefined4 *)0x0;
LAB_00416390:
              uVar13 = 1 << ((byte)puVar9 & 0x1f) & local_18;
              if (uVar13 == 0) goto code_r0x0041639d;
              local_18 = local_18 - uVar13;
              local_1c = puVar9;
              if (puVar9 != (undefined4 *)0xffffffff) {
                if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 <= local_14) {
                  local_160 = 0x24;
                  piStack_164 = (int *)0x4163d5;
                  puVar12 = (undefined4 *)FUN_00aae9af();
                  local_d8 = 0;
                  uStack_d4 = 0;
                  local_d0 = 0;
                  *(undefined8 *)(puVar12 + 1) = 0;
                  puVar12[3] = 0;
                  *puVar12 = 0;
                  puVar12[4] = 0;
                  puVar12[5] = 0xffffffff;
                  puVar12[6] = 0xffffffff;
                  puVar12[7] = 0xffffffff;
                  puVar12[8] = 0xffffffff;
                  ppuVar2 = *(undefined4 ***)(param_1 + 0xc);
                  local_c = puVar12;
                  if (&local_c < ppuVar2) {
                    ppuVar3 = *(undefined4 ***)(param_1 + 8);
                    if (&local_c < ppuVar3) goto LAB_00416461;
                    if (ppuVar2 == *(undefined4 ***)(param_1 + 0x10)) {
                      local_160 = 0x416450;
                      FUN_00a513f0();
                    }
                    if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
                      **(undefined4 **)(param_1 + 0xc) =
                           *(undefined4 *)
                            (*(int *)(param_1 + 8) + ((int)&local_c - (int)ppuVar3 >> 2) * 4);
                    }
                  }
                  else {
LAB_00416461:
                    if (ppuVar2 == *(undefined4 ***)(param_1 + 0x10)) {
                      local_160 = 0x41646e;
                      FUN_00a513f0();
                    }
                    if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
                      **(undefined4 **)(param_1 + 0xc) = puVar12;
                    }
                  }
                  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
                }
                piVar10 = *(int **)(*(int *)(param_1 + 8) + local_14 * 4);
                piVar11 = (int *)*piVar10;
                local_14 = local_14 + 1;
                if ((piVar11 != (int *)0x0) && (puVar9 != (undefined4 *)piVar10[8])) {
                  piVar11[1] = 0;
                  if ((int *)*piVar11 != (int *)0x0) {
                    local_160 = 0x4164b4;
                    (**(code **)(*(int *)*piVar11 + 0x80))();
                    local_160 = 0x4164bd;
                    (**(code **)(*(int *)*piVar11 + 0x38))();
                    local_160 = 0x4164c8;
                    FUN_00408b00();
                    local_160 = 0x4164d3;
                    FUN_00408b00();
                    local_160 = (size_t)local_14c;
                    piStack_164 = (int *)0x4164e6;
                    (**(code **)(*(int *)*piVar11 + 0xa4))();
                    puVar12 = local_14c;
                    puVar18 = (undefined4 *)(*piVar11 + 0x94);
                    for (iVar5 = 0x10; puVar9 = local_1c, iVar5 != 0; iVar5 = iVar5 + -1) {
                      *puVar18 = *puVar12;
                      puVar12 = puVar12 + 1;
                      puVar18 = puVar18 + 1;
                    }
                  }
                  *piVar10 = 0;
                }
                piVar10[5] = -1;
                piVar10[7] = -1;
                piVar10[6] = -1;
                local_c0 = local_54;
                uStack_bc = 0;
                local_b8 = local_50;
                *(ulonglong *)(piVar10 + 1) = (ulonglong)(uint)local_54;
                piVar10[3] = (int)local_50;
                uVar13 = local_7c * 0x343fd + 0x269ec3;
                local_7c = uVar13 * 0x343fd + 0x269ec3;
                piVar10[8] = (int)puVar9;
                piVar10[4] = (int)((float)((local_7c >> 0x10 & 0x7fff) * (uVar13 >> 0x10 & 0x7fff) &
                                          0x80000003) * 1.5707964 + local_28);
              }
            }
          }
          else {
            fVar20 = (fVar20 - local_a4) / local_68;
            fVar4 = (fVar4 - local_9c) / local_68;
            local_160 = (size_t)(fVar20 * fVar20 + fVar4 * fVar4);
            piStack_164 = (int *)0x416627;
            fVar19 = (float10)FUN_00401030();
            fVar20 = (float)fVar19;
            if (0.1 <= fVar20) {
              if (3.4028235e+38 < fVar20) {
                fVar20 = 3.4028235e+38;
              }
            }
            else {
              fVar20 = 0.1;
            }
            local_c = (undefined4 *)(local_80 + -1);
            puVar9 = (undefined4 *)(int)((float)iVar5 / fVar20);
            if ((int)puVar9 < 0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              if ((int)local_c < (int)puVar9) {
                puVar9 = local_c;
              }
              if (puVar9 != (undefined4 *)0x0) {
                iVar7 = (int)puVar9 * 3 + 3;
                do {
                  if (iVar7 < iVar5) break;
                  iVar7 = iVar7 + -3;
                  puVar9 = (undefined4 *)((int)puVar9 + -1);
                } while (puVar9 != (undefined4 *)0x0);
              }
            }
            local_30 = iVar5 + (-1 - (int)puVar9);
            if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 <= local_14) {
              local_160 = 0x24;
              piStack_164 = (int *)0x4166c1;
              puVar12 = (undefined4 *)FUN_00aae9af();
              local_cc = 0;
              uStack_c8 = 0;
              local_c4 = 0;
              *(undefined8 *)(puVar12 + 1) = 0;
              *puVar12 = 0;
              puVar12[3] = 0;
              puVar12[4] = 0;
              puVar12[5] = 0xffffffff;
              puVar12[6] = 0xffffffff;
              puVar12[7] = 0xffffffff;
              puVar12[8] = 0xffffffff;
              ppuVar2 = *(undefined4 ***)(param_1 + 0xc);
              local_1c = puVar12;
              if ((&local_1c < ppuVar2) &&
                 (ppuVar3 = *(undefined4 ***)(param_1 + 8), ppuVar3 <= &local_1c)) {
                if (ppuVar2 == *(undefined4 ***)(param_1 + 0x10)) {
                  local_160 = 0x416739;
                  FUN_00a513f0();
                }
                if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0xc) =
                       *(undefined4 *)
                        (*(int *)(param_1 + 8) + ((int)&local_1c - (int)ppuVar3 >> 2) * 4);
                }
              }
              else {
                if (ppuVar2 == *(undefined4 ***)(param_1 + 0x10)) {
                  local_160 = 0x416757;
                  FUN_00a513f0();
                }
                if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0xc) = puVar12;
                }
              }
              *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
            }
            puVar9 = (undefined4 *)((local_80 - (int)puVar9) + -1);
            if ((int)puVar9 < 0) {
              local_c = (undefined4 *)0x0;
              puVar9 = local_c;
            }
            else if ((int)local_c < (int)puVar9) {
              puVar9 = local_c;
            }
            local_c = puVar9;
            if ((local_6c < 1) || ((int)local_c < 1)) {
              if ((int)local_34 + -1 < 1) {
                iVar5 = 0;
              }
              else {
                uVar13 = local_7c * 0x343fd + 0x269ec3;
                local_7c = uVar13 * 0x343fd + 0x269ec3;
                iVar5 = (int)((longlong)
                              (ulonglong)((local_7c >> 0x10 & 0x7fff) * (uVar13 >> 0x10 & 0x7fff)) %
                             (longlong)((int)local_34 + -1)) + 1;
              }
            }
            else {
              iVar5 = 0;
              local_6c = local_6c + -1;
            }
            piVar10 = *(int **)(*(int *)(param_1 + 8) + local_14 * 4);
            local_14 = local_14 + 1;
            if ((*piVar10 != 0) &&
               (((local_2c != piVar10[5] || (local_c != (undefined4 *)piVar10[7])) ||
                (iVar5 != piVar10[6])))) {
              local_160 = 0x416804;
              FUN_00418a30();
              *piVar10 = 0;
            }
            piVar10[5] = local_2c;
            uVar13 = local_7c * 0x343fd + 0x269ec3;
            piVar10[7] = (int)local_c;
            local_7c = uVar13 * 0x343fd + 0x269ec3;
            local_44[2] = SUB42(local_54,0);
            local_44[3] = (short)((uint)local_54 >> 0x10);
            local_44[4] = 0;
            local_44[5] = 0;
            local_38 = local_50;
            *(ulonglong *)(piVar10 + 1) = (ulonglong)(uint)local_54;
            piVar10[6] = iVar5;
            piVar10[8] = -1;
            piVar10[3] = (int)local_50;
            piVar10[4] = (int)((float)((local_7c >> 0x10 & 0x7fff) * (uVar13 >> 0x10 & 0x7fff) &
                                      0x80000003) * 1.5707964 + local_28);
          }
        }
LAB_004168b1:
      } while ((int)local_10 < local_20);
    }
    while (local_18 != 0) {
      local_28 = 0.0;
      while (uVar13 = 1 << (SUB41(local_28,0) & 0x1f) & local_18, uVar13 == 0) {
        local_28 = (float)((int)local_28 + 1);
        if (3 < (int)local_28) goto LAB_004168e8;
      }
      local_18 = local_18 - uVar13;
      if (local_28 == -NAN) break;
      puVar17 = (uint *)(param_1 + 8);
      if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 <= local_14) {
        local_160 = 0x24;
        piStack_164 = (int *)0x416aac;
        puVar9 = (undefined4 *)FUN_00aae9af();
        local_44[2] = 0;
        local_44[3] = 0;
        local_44[4] = 0;
        local_44[5] = 0;
        local_38 = 0.0;
        *(undefined8 *)(puVar9 + 1) = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0xffffffff;
        puVar9[6] = 0xffffffff;
        puVar9[7] = 0xffffffff;
        puVar9[8] = 0xffffffff;
        ppuVar2 = *(undefined4 ***)(param_1 + 0xc);
        local_10 = puVar9;
        if (&local_10 < ppuVar2) {
          ppuVar3 = (undefined4 **)*puVar17;
          if (&local_10 < ppuVar3) goto LAB_00416b58;
          if (ppuVar2 == *(undefined4 ***)(param_1 + 0x10)) {
            uVar13 = (int)ppuVar2 - (int)ppuVar3 >> 2;
            if (0x3ffffffe < uVar13) goto LAB_00416c55;
            uVar13 = uVar13 + 1;
            uVar14 = (int)*(undefined4 ***)(param_1 + 0x10) - (int)ppuVar3 >> 2;
            if (uVar14 < uVar13) {
              if (0x3fffffff - (uVar14 >> 1) < uVar14) {
                local_160 = 0;
              }
              else {
                local_160 = uVar14 + (uVar14 >> 1);
              }
              if (local_160 < uVar13) {
                local_160 = uVar13;
              }
              piStack_164 = (int *)0x416b48;
              FUN_004bf300();
            }
          }
          if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xc) =
                 *(undefined4 *)(*puVar17 + ((int)&local_10 - (int)ppuVar3 >> 2) * 4);
          }
        }
        else {
LAB_00416b58:
          if (ppuVar2 == *(undefined4 ***)(param_1 + 0x10)) {
            uVar13 = (int)((int)ppuVar2 - *puVar17) >> 2;
            if (0x3ffffffe < uVar13) {
LAB_00416c55:
              local_160 = 0xdeda30;
                    /* WARNING: Subroutine does not return */
              piStack_164 = (int *)0x416c5f;
              FUN_00aad3ad();
            }
            uVar13 = uVar13 + 1;
            uVar14 = (int)((int)*(undefined4 ***)(param_1 + 0x10) - *puVar17) >> 2;
            if (uVar14 < uVar13) {
              if (0x3fffffff - (uVar14 >> 1) < uVar14) {
                local_160 = 0;
              }
              else {
                local_160 = uVar14 + (uVar14 >> 1);
              }
              if (local_160 < uVar13) {
                local_160 = uVar13;
              }
              piStack_164 = (int *)0x416b9b;
              FUN_004bf300();
            }
          }
          if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0xc) = puVar9;
          }
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
      }
      piVar10 = *(int **)(*puVar17 + local_14 * 4);
      piVar11 = (int *)*piVar10;
      local_14 = local_14 + 1;
      if ((piVar11 != (int *)0x0) && (local_28 != (float)piVar10[8])) {
        piVar11[1] = 0;
        if ((int *)*piVar11 != (int *)0x0) {
          local_160 = 0x416bd9;
          (**(code **)(*(int *)*piVar11 + 0x80))();
          local_160 = 0x416be2;
          (**(code **)(*(int *)*piVar11 + 0x38))();
          local_160 = 0x416bed;
          FUN_00408b00();
          local_160 = 0x416bf8;
          FUN_00408b00();
          local_160 = (size_t)local_14c;
          piStack_164 = (int *)0x416c0b;
          (**(code **)(*(int *)*piVar11 + 0xa4))();
          puVar9 = local_14c;
          puVar12 = (undefined4 *)(*piVar11 + 0x94);
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        *piVar10 = 0;
      }
      piVar10[5] = -1;
      piVar10[7] = -1;
      piVar10[6] = -1;
      local_160 = param_4;
      piVar10[8] = (int)local_28;
      piStack_164 = (int *)0x416c43;
      FUN_00415620();
    }
LAB_004168e8:
    if (local_14 < *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2) {
      local_2c = local_14;
      local_34 = *(int **)(*(int *)(param_1 + 8) + local_14 * 4);
      piVar10 = (int *)*local_34;
      if (piVar10 != (int *)0x0) {
        piVar10[1] = 0;
        if ((int *)*piVar10 != (int *)0x0) {
          local_160 = 0x416928;
          (**(code **)(*(int *)*piVar10 + 0x80))();
          local_160 = 0x416931;
          (**(code **)(*(int *)*piVar10 + 0x38))();
          local_160 = 0x41693c;
          FUN_00408b00();
          local_160 = 0x416947;
          FUN_00408b00();
          local_160 = (size_t)local_14c;
          piStack_164 = (int *)0x41695a;
          (**(code **)(*(int *)*piVar10 + 0xa4))();
          puVar9 = local_14c;
          puVar12 = (undefined4 *)(*piVar10 + 0x94);
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        *local_34 = 0;
      }
                    /* WARNING: Subroutine does not return */
      piStack_164 = (int *)&UNK_00416981;
      local_160 = (size_t)local_34;
      FUN_00aae91b();
    }
  }
  local_10 = (undefined4 *)0x0;
  local_5c = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  if (0 < local_5c) {
    do {
      piVar10 = *(int **)(*(int *)(param_1 + 8) + (int)local_10 * 4);
      piVar11 = (int *)*piVar10;
      local_34 = piVar10;
      if (piVar11 == (int *)0x0) {
        uVar13 = piVar10[8];
        local_160 = piVar10[4];
        if (uVar13 == 0xffffffff) {
          iVar5 = piVar10[5];
          if ((iVar5 < 0) || (param_2[1] - *param_2 >> 4 <= iVar5)) {
LAB_00416c95:
            *piVar10 = 0;
          }
          else {
            piStack_164 = piVar10 + 1;
            uStack_16c = CONCAT44(param_4,param_1);
            iVar5 = FUN_00418910(*(int *)(*(int *)(*param_2 + iVar5 * 0x10) + piVar10[7] * 0x10) +
                                 piVar10[6] * 0x14,param_3);
            *piVar10 = iVar5;
          }
        }
        else {
          if ((3 < uVar13) || (*(int *)(param_2[4] + uVar13 * 4) == 0)) goto LAB_00416c95;
          piStack_164 = piVar10 + 1;
          uStack_16c = CONCAT44(param_4,param_1);
          iVar5 = FUN_00418910(*(undefined4 *)(param_2[4] + uVar13 * 4),param_3);
          *piVar10 = iVar5;
        }
      }
      else if (DAT_012586da != '\0') {
        local_68 = (float)piVar11[1];
        local_58 = (int *)piVar10[4];
        piVar11[1] = 0;
        if ((int *)*piVar11 != (int *)0x0) {
          local_160 = 0x416cd2;
          (**(code **)(*(int *)*piVar11 + 0x80))();
          local_160 = 0x416cdb;
          (**(code **)(*(int *)*piVar11 + 0x38))();
          local_160 = 0x416ce6;
          FUN_00408b00();
          local_160 = 0x416cf1;
          FUN_00408b00();
          local_160 = (size_t)local_14c;
          piStack_164 = (int *)0x416d04;
          (**(code **)(*(int *)*piVar11 + 0xa4))();
          puVar9 = local_14c;
          puVar12 = (undefined4 *)(*piVar11 + 0x94);
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        piVar10 = local_34;
        piVar11[1] = (int)local_68;
        local_160 = 0x416d2e;
        (**(code **)(*(int *)*piVar11 + 0x34))();
        local_160 = (size_t)(piVar10 + 1);
        piStack_164 = (int *)0x416d3e;
        (**(code **)(*(int *)*piVar11 + 0x84))();
        piStack_164 = local_58;
        uStack_16c = CONCAT44(0x416d55,(undefined4)uStack_16c);
        (**(code **)(*(int *)*piVar11 + 0x94))();
        if (*(int *)(*(int *)(param_3 + 0x20d8) + *(int *)(param_4 + 0x58) * 4) != 0) {
          uStack_16c = CONCAT44(1,*piVar11);
          FUN_00644a70(param_3);
        }
        uStack_16c = CONCAT44(0x416d7f,(undefined4)uStack_16c);
        (**(code **)(*(int *)*piVar11 + 0xb0))();
        uStack_16c = 0x100416d8f;
        (**(code **)(*(int *)*piVar11 + 0x144))();
      }
      local_10 = (undefined4 *)((int)local_10 + 1);
    } while ((int)local_10 < local_5c);
  }
  return;
code_r0x0041639d:
  puVar9 = (undefined4 *)((int)puVar9 + 1);
  if (3 < (int)puVar9) goto LAB_004168b1;
  goto LAB_00416390;
}

