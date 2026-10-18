// FUN_0080ef40 @ 0080ef40 body=[[0080ef40, 0080f11e] [0080f122, 0080f30b] [0080f30f, 0080fa48] [0080fa4c, 0080fa62]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0080ef40(int param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int **ppiVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  float10 fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  int local_188 [12];
  undefined4 local_158;
  undefined1 local_144 [64];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  double local_e4;
  undefined4 local_d8;
  float local_d4;
  uint local_d0;
  undefined4 local_cc;
  int local_c8;
  int *local_c4;
  int local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  uint local_9c [3];
  undefined4 local_90;
  float local_8c;
  uint local_88;
  undefined4 local_84;
  float local_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  int local_68;
  undefined8 local_64;
  int local_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b6a906;
  local_10 = ExceptionList;
  piVar12 = (int *)0x0;
  DAT_012589f8 = 0;
  DAT_012589fc = 0;
  uVar19 = 0xa110ca7e;
  local_18 = local_188;
  local_158 = 0xa110ca7e;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_8 = 0;
  uStack_7 = 0;
  iVar3 = *param_2;
  local_14 = (int *)0x0;
  ExceptionList = &local_10;
  ppvVar2 = &local_10;
  if (0 < (int)(param_2[1] - iVar3 & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar3 + (int)local_14 * 4) + 0xc);
      if ((*(int *)(iVar3 + 300) != 0) &&
         (((*(char *)(iVar3 + 0x128) != 'R' || (*(char *)(iVar3 + 0x129) != 'E')) ||
          (*(char *)(iVar3 + 0x12a) != 'B')))) {
        local_e4 = (double)CONCAT44(local_e4._4_4_,*(undefined4 *)(iVar3 + 0x128));
        iVar3 = FUN_005459a0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 300) * 4)
                             ,local_18,0xc);
        piVar9 = local_18;
        if (0 < iVar3) {
          do {
            local_1c = iVar3;
            if (local_2c != piVar12) {
              piVar4 = local_2c;
              do {
                if (*piVar4 == *piVar9) {
                  if (piVar4 != piVar12) goto LAB_0080f093;
                  break;
                }
                piVar4 = piVar4 + 1;
              } while (piVar4 != piVar12);
            }
            if ((piVar9 < piVar12) && (local_2c <= piVar9)) {
              iVar3 = (int)piVar9 - (int)local_2c;
              if (piVar12 == local_24) {
                FUN_00a513f0();
                piVar12 = local_28;
              }
              if (piVar12 != (int *)0x0) {
                *piVar12 = local_2c[iVar3 >> 2];
              }
            }
            else {
              if (piVar12 == local_24) {
                FUN_00a513f0();
                piVar12 = local_28;
              }
              if (piVar12 != (int *)0x0) {
                *piVar12 = *piVar9;
              }
            }
            piVar12 = piVar12 + 1;
            local_28 = piVar12;
LAB_0080f093:
            local_1c = local_1c + -1;
            piVar9 = piVar9 + 1;
            iVar3 = local_1c;
          } while (local_1c != 0);
        }
      }
      iVar3 = *param_2;
      local_14 = (int *)((int)local_14 + 1);
      ppvVar2 = ExceptionList;
    } while ((int)local_14 < param_2[1] - iVar3 >> 2);
  }
  ExceptionList = ppvVar2;
  DAT_012589fc = (int)piVar12 - (int)local_2c >> 2;
  local_5c = DAT_012589fc;
  if (0 < DAT_012589fc) {
    if (DAT_0125ce80 == 0) {
      param_2 = (int *)FUN_00aae9af(0x3c,uVar19);
      local_8 = 1;
      if (param_2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004dada0();
      }
      iVar8 = DAT_0125ce80;
      _local_8 = CONCAT31(uStack_7,2);
      param_2 = (int *)0x0;
      if ((iVar3 != DAT_0125ce80) && (DAT_0125ce80 != 0)) {
        FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar8);
      }
      local_8 = 0;
      DAT_0125ce80 = iVar3;
    }
    piVar12 = *(int **)(DAT_0125ce80 + 0x1c);
    iVar3 = *(int *)(DAT_0125ce80 + 0x20) - (int)piVar12 >> 2;
    iVar8 = 0;
    if (0 < iVar3) {
      do {
        local_c8 = *piVar12;
        if (*(char *)(local_c8 + 0x139) != '\0') {
          FUN_0080ec30(param_1);
          local_c0 = DAT_012588e8;
          if (DAT_012589f4 == 0) {
            piVar12 = (int *)0x0;
          }
          else {
            piVar12 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + DAT_012589f4 * 4);
          }
          (**(code **)(*piVar12 + 0xe8))(piVar12,"railroad");
          iVar3 = *(int *)(param_1 + 0x6bc88);
          uVar19 = (**(code **)(*(int *)(iVar3 + 0x1c) + 0x16c))();
          uVar5 = (**(code **)(*(int *)(iVar3 + 0x1c) + 0x174))();
          D3DXMatrixMultiply(local_144,uVar19,uVar5);
          uVar19 = (**(code **)(*piVar12 + 0x24))(piVar12,0,"ViewProjectionMatrix");
          (**(code **)(*piVar12 + 0x98))(piVar12,uVar19,local_144);
          local_88 = 0xf;
          local_8c = 0.0;
          local_9c[0] = local_9c[0] & 0xffffff00;
          FUN_00409350("gfx/anims/railroad.dds",0x16);
          _local_8 = CONCAT31(uStack_7,3);
          param_2 = (int *)FUN_00462500(local_9c);
          piVar9 = *(int **)(param_1 + 0x6b820);
          if (param_2 == piVar9) {
LAB_0080f2be:
            local_30 = piVar9;
            ppiVar7 = &local_30;
          }
          else {
            fVar17 = (float)param_2[7];
            fVar16 = local_8c;
            if ((uint)fVar17 <= (uint)local_8c) {
              fVar16 = fVar17;
            }
            uVar6 = FUN_00414bd0(fVar16);
            if (uVar6 == 0) {
              if ((uint)local_8c < (uint)fVar17) {
                uVar6 = 0xffffffff;
              }
              else {
                uVar6 = (uint)(local_8c != fVar17);
              }
            }
            if ((int)uVar6 < 0) goto LAB_0080f2be;
            ppiVar7 = &param_2;
          }
          if (*ppiVar7 == *(int **)(param_1 + 0x6b820)) {
            uVar19 = 0;
          }
          else {
            uVar19 = *(undefined4 *)((*ppiVar7)[10] * 0x2c + 0x15c + param_1);
          }
          (**(code **)(*piVar12 + 0xd0))(piVar12,&DAT_00e0bce4,uVar19);
          local_8 = 0;
          if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_9c[0]);
          }
          local_40 = (**(code **)(*piVar12 + 0x24))(piVar12,0,"ControlPoints");
          local_3c = (**(code **)(*piVar12 + 0x24))(piVar12,0,"TotalVertices_Length_Pos");
          local_18 = (int *)0x0;
          (**(code **)(*piVar12 + 0xfc))(piVar12,&local_18,0);
          local_30 = (int *)0x0;
          if (local_18 != (int *)0x0) {
            do {
              piVar9 = local_30;
              (**(code **)(*piVar12 + 0x100))(piVar12,local_30);
              local_1c = 0;
              if (0 < local_5c) {
                do {
                  iVar3 = local_2c[local_1c];
                  local_c4 = (int *)(iVar3 + 8);
                  local_68 = (*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2) + -1;
                  local_34 = 0;
                  if (0 < local_68) {
LAB_0080f3a0:
                    piVar9 = (int *)(*local_c4 + local_34 * 4);
                    param_2 = *(int **)(*(int *)(local_c0 + 0xacc) + *piVar9 * 4);
                    local_14 = *(int **)(*(int *)(local_c0 + 0xacc) + piVar9[1] * 4);
                    iVar3 = param_2[0x17];
                    iVar8 = local_14[0x16];
                    local_64 = (double)CONCAT44(iVar8,(undefined4)local_64);
                    iVar11 = (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24;
                    iVar10 = 0;
                    if (0 < iVar11) {
                      piVar9 = (int *)(*(int *)(iVar3 + 200) + 4);
                      do {
                        if (iVar8 == *piVar9) {
                          if (((-1 < iVar10) && (iVar10 < iVar11)) &&
                             ((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94) <= iVar10 ||
                              (*(char *)(iVar10 + *(int *)(iVar3 + 0x94)) != '\0')))) {
                            piVar9 = param_2;
                            if (param_2[0x16] < iVar8) {
                              piVar9 = local_14;
                              local_14 = param_2;
                            }
                            param_2 = piVar9;
                            iVar3 = param_2[0x17];
                            iVar8 = local_14[0x17];
                            param_2 = *(int **)(iVar8 + 0xb4);
                            local_64 = (double)CONCAT44(iVar8,(undefined4)local_64);
                            iVar11 = (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24;
                            iVar10 = 0;
                            if (iVar11 < 1) goto LAB_0080f4b1;
                            piVar9 = (int *)(*(int *)(iVar3 + 200) + 4);
                            goto LAB_0080f4a5;
                          }
                          break;
                        }
                        iVar10 = iVar10 + 1;
                        piVar9 = piVar9 + 9;
                      } while (iVar10 < iVar11);
                    }
                    goto LAB_0080f9f4;
                  }
LAB_0080fa04:
                  local_1c = local_1c + 1;
                  piVar9 = local_30;
                } while (local_1c < local_5c);
              }
              (**(code **)(*piVar12 + 0x108))(piVar12);
              local_30 = (int *)((int)piVar9 + 1);
            } while (local_30 < local_18);
          }
          (**(code **)(*piVar12 + 0x10c))(piVar12);
          break;
        }
        iVar8 = iVar8 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar8 < iVar3);
    }
  }
  if (local_2c == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c);
  while( true ) {
    iVar10 = iVar10 + 1;
    piVar9 = piVar9 + 9;
    if (iVar11 <= iVar10) break;
LAB_0080f4a5:
    if (param_2 == (int *)*piVar9) goto LAB_0080f4b4;
  }
LAB_0080f4b1:
  iVar10 = -1;
LAB_0080f4b4:
  iVar1 = *(int *)(local_c8 + 0x58);
  local_74 = *(float *)(*(int *)(iVar3 + 0x330) + 8 + iVar1 * 0x10);
  local_6c = *(float *)(*(int *)(iVar3 + 0x330) + 0xc + iVar1 * 0x10);
  local_80 = *(float *)(*(int *)(iVar8 + 0x330) + 8 + iVar1 * 0x10);
  local_78 = *(float *)(*(int *)(iVar8 + 0x330) + 0xc + iVar1 * 0x10);
  uStack_70 = 0x3f051eb8;
  uStack_7c = 0x3f051eb8;
  fVar17 = local_74 - local_80;
  local_58 = CONCAT44(local_58._4_4_,fVar17);
  local_50 = local_6c - local_78;
  fVar16 = -local_50;
  if (((iVar10 < iVar11) &&
      (iVar8 = *(int *)(iVar3 + 0x84), iVar10 < *(int *)(iVar3 + 0x88) - iVar8 >> 4)) &&
     (((iVar11 = iVar10 * 0x10 + iVar8, *(float *)(iVar10 * 0x10 + 8 + iVar8) != 0.0 ||
       (*(float *)(iVar11 + 0xc) != 0.0)) && (iVar11 != 0)))) {
    local_f4 = *(undefined4 *)(iVar11 + 8);
    local_f0 = *(undefined4 *)(iVar11 + 0xc);
    local_104 = local_74;
    local_100 = local_6c;
    local_fc = local_74;
    local_f8 = local_6c;
    local_ec = local_80;
    local_e8 = local_78;
    (**(code **)(*piVar12 + 0x80))(piVar12,local_40,&local_104,8);
    local_58 = CONCAT44(uStack_70,local_74);
    fVar17 = local_74 - *(float *)(iVar11 + 8);
    local_50 = local_6c;
    fVar16 = local_6c - *(float *)(iVar11 + 0xc);
    local_d8 = 0x41700000;
    local_e4 = 0.0;
    fVar13 = (float10)FUN_00401030(fVar17 * fVar17 + 0.0 + fVar16 * fVar16);
    local_d4 = (float)fVar13;
    local_d0 = param_3;
    local_cc = param_4;
    (**(code **)(*piVar12 + 0x80))(piVar12,local_3c,&local_d8,4);
    (**(code **)(*piVar12 + 0x104))(piVar12);
    FUN_009f9d50();
    local_bc = local_74;
    local_b8 = local_6c;
    local_b4 = *(float *)(iVar11 + 8);
    local_b0 = *(float *)(iVar11 + 0xc);
    local_ac = local_80;
    local_a8 = local_78;
    local_a4 = local_80;
    local_a0 = local_78;
    (**(code **)(*piVar12 + 0x80))(piVar12,local_40,&local_bc,8);
    local_58 = CONCAT44(uStack_7c,local_80);
    local_50 = local_78;
    dVar14 = (double)(local_80 - *(float *)(iVar11 + 8));
    dVar15 = (double)(local_78 - *(float *)(iVar11 + 0xc));
    fVar13 = (float10)FUN_00401030((float)(dVar14 * dVar14 + local_e4 + dVar15 * dVar15));
    local_d4 = (float)fVar13;
    (**(code **)(*piVar12 + 0x80))(piVar12,local_3c,&local_d8,4);
    (**(code **)(*piVar12 + 0x104))(piVar12);
    goto LAB_0080f9e4;
  }
  iVar8 = *(int *)(iVar3 + 0xb4) % 3;
  fVar18 = fVar17;
  if ((iVar8 == 0) || (fVar18 = fVar16, iVar8 == 1)) {
    local_4c = 0.0;
    local_48 = fVar18;
  }
  else if (iVar8 == 2) {
    local_4c = -0.0;
    local_48 = -fVar16;
  }
  iVar8 = *(int *)(iVar3 + 0xb4) % 9;
  iVar3 = iVar8 >> 0x1f;
  iVar11 = iVar8 / 3 + iVar3;
  iVar8 = iVar11 - iVar3;
  if (iVar11 == iVar3) {
LAB_0080f878:
    local_44 = -0.0;
    local_38 = -fVar17;
  }
  else if (iVar8 == 1) {
    local_44 = 0.0;
    local_38 = fVar16;
  }
  else {
    fVar17 = fVar16;
    if (iVar8 == 2) goto LAB_0080f878;
  }
  local_bc = local_48 + local_74;
  local_a4 = local_38 + local_80;
  local_b8 = local_4c + local_6c;
  local_a0 = local_44 + local_78;
  local_b4 = local_74;
  local_b0 = local_6c;
  local_ac = local_80;
  local_a8 = local_78;
  (**(code **)(*piVar12 + 0x80))(piVar12,local_40,&local_bc,8);
  local_90 = 0x41700000;
  local_64 = (double)(float)local_58 * (double)(float)local_58;
  fVar13 = (float10)FUN_00401030((float)(local_64 + 0.0 + (double)local_50 * (double)local_50));
  local_8c = (float)fVar13;
  local_88 = param_3;
  local_84 = param_4;
  (**(code **)(*piVar12 + 0x80))(piVar12,local_3c,&local_90,4);
  (**(code **)(*piVar12 + 0x104))(piVar12);
LAB_0080f9e4:
  FUN_009f9d50();
  DAT_012589f8 = DAT_012589f8 + 1;
LAB_0080f9f4:
  local_34 = local_34 + 1;
  if (local_68 <= local_34) goto LAB_0080fa04;
  goto LAB_0080f3a0;
}

