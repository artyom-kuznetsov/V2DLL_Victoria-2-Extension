// FUN_00a25cd0 @ 00a25cd0 body=[[00a25cd0, 00a25d72] [00a25d76, 00a25ec1] [00a25ec5, 00a25f80] [00a25f89, 00a26263] [00a26270, 00a26c86] [00a26c8a, 00a26cb9] [00a26cbd, 00a26cdf] [00a26ce3, 00a26cf9]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00a25cd0(undefined4 param_1,undefined4 param_2,int param_3,float *param_4,float *param_5,
                 float *param_6,float param_7,float param_8,undefined4 param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  undefined4 uVar12;
  byte *******pppppppbVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *in_ECX;
  byte *pbVar17;
  float fVar18;
  undefined4 *******pppppppuVar19;
  uint *puVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  int iVar25;
  int iStack_1d8;
  int *piVar26;
  int iVar27;
  float fVar28;
  int local_190;
  int local_18c;
  int local_188;
  undefined4 *******local_178;
  undefined4 local_174;
  int iStack_168;
  uint local_164;
  byte *******local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float local_14c;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  uint local_128;
  undefined4 local_118;
  uint local_114;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  uint local_cc;
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4e678;
  local_14 = ExceptionList;
  local_14c = 2.10195e-44;
  local_150 = 0.0;
  local_160 = (byte *******)((uint)local_160 & 0xffffff00);
  ExceptionList = &local_14;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  if (99 < (int)local_150) {
    uVar12 = FUN_009895f0(99);
    local_c._0_1_ = 1;
    FUN_00408ed0(uVar12,0,0xffffffff);
    local_c._0_1_ = 0;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e0);
    }
  }
  local_c._0_1_ = 0;
  local_164 = 0;
  pppppppbVar13 = local_160;
  if ((uint)local_14c < 0x10) {
    pppppppbVar13 = (byte *******)&local_160;
  }
  pbVar17 = &DAT_00ded94d;
  do {
    bVar4 = *(byte *)pppppppbVar13;
    bVar24 = bVar4 < *pbVar17;
    if (bVar4 != *pbVar17) {
LAB_00a25db2:
      iVar14 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
      goto LAB_00a25db7;
    }
    if (bVar4 == 0) break;
    bVar4 = *(byte *)((int)pppppppbVar13 + 1);
    bVar24 = bVar4 < pbVar17[1];
    if (bVar4 != pbVar17[1]) goto LAB_00a25db2;
    pppppppbVar13 = (byte *******)((int)pppppppbVar13 + 2);
    pbVar17 = pbVar17 + 2;
  } while (bVar4 != 0);
  iVar14 = 0;
LAB_00a25db7:
  if (iVar14 != 0) {
    iVar14 = 0;
    local_114 = 0xf;
    local_118 = 0;
    local_128 = local_128 & 0xffffff00;
    iVar22 = 0;
    local_188 = 0;
    if (param_3 == 0) {
      param_3 = 0x140;
    }
    local_b0 = 2.10195e-44;
    local_b4 = 0.0;
    local_c4 = (float)((uint)local_c4 & 0xffffff00);
    local_c._0_1_ = 3;
    local_18c = 0;
    if (0 < (int)local_150) {
      local_190 = 1;
      do {
        pppppppbVar13 = local_160;
        if ((uint)local_14c < 0x10) {
          pppppppbVar13 = (byte *******)&local_160;
        }
        local_178 = (undefined4 *******)
                    CONCAT31(local_178._1_3_,*(byte *)((int)pppppppbVar13 + local_18c));
        local_cc = 0xf;
        local_d0 = 0.0;
        local_e0 = (float)((uint)local_e0 & 0xffffff00);
        local_c._0_1_ = 4;
        FUN_00448860(1,local_178);
        local_c._0_1_ = 5;
        FUN_00448aa0(&local_e0,0,0xffffffff);
        local_c._0_1_ = 3;
        if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_e0);
        }
        pppppppbVar13 = local_160;
        if ((uint)local_14c < 0x10) {
          pppppppbVar13 = (byte *******)&local_160;
        }
        if (*(byte *)((int)pppppppbVar13 + local_18c) == 0xa7) {
          local_190 = local_190 + 1;
          local_18c = local_18c + 1;
          pppppppbVar13 = local_160;
          if ((uint)local_14c < 0x10) {
            pppppppbVar13 = (byte *******)&local_160;
          }
          local_174 = CONCAT31(local_174._1_3_,*(byte *)((int)pppppppbVar13 + local_18c));
          local_cc = 0xf;
          local_d0 = 0.0;
          local_e0 = (float)((uint)local_e0 & 0xffffff00);
          local_c._0_1_ = 6;
          FUN_00448860(1,local_174);
          local_c._0_1_ = 7;
          FUN_00448aa0(&local_e0,0,0xffffffff);
          local_c._0_1_ = 3;
          if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_e0);
          }
        }
        else {
          pppppppbVar13 = local_160;
          if ((uint)local_14c < 0x10) {
            pppppppbVar13 = (byte *******)&local_160;
          }
          iVar25 = in_ECX[*(byte *)((int)pppppppbVar13 + local_18c) + 0x25];
          if (iVar25 == 0) {
            pppppppbVar13 = local_160;
            if ((uint)local_14c < 0x10) {
              pppppppbVar13 = (byte *******)&local_160;
            }
            if (*(byte *)((int)pppppppbVar13 + local_18c) != 10) {
              pppppppbVar13 = local_160;
              if ((uint)local_14c < 0x10) {
                pppppppbVar13 = (byte *******)&local_160;
              }
              if (*(byte *)((int)pppppppbVar13 + local_18c) != 0xd) goto LAB_00a260f5;
            }
            if (local_188 < iVar14) {
              local_188 = iVar14;
            }
            FUN_00448aa0(&local_c4,0,0xffffffff);
            FUN_00409350(&DAT_00ded94d,0);
            iVar22 = 0;
            iVar14 = 0;
          }
          else {
            iVar23 = *(int *)(iVar25 + 0x81c);
            iVar14 = iVar14 + *(int *)(iVar25 + 0x18);
            iVar22 = iVar22 + *(int *)(iVar25 + 0x18);
            if (((iVar23 != 0) && (local_190 < (int)local_150)) && (iVar15 = 0, 0 < iVar23)) {
              puVar20 = (uint *)(iVar25 + 0x1c);
              do {
                pppppppbVar13 = local_160;
                if ((uint)local_14c < 0x10) {
                  pppppppbVar13 = (byte *******)&local_160;
                }
                if (*puVar20 == (uint)*(byte *)((int)pppppppbVar13 + local_190)) {
                  iVar23 = *(int *)(iVar25 + 0x20 + iVar15 * 8);
                  iVar14 = iVar14 + iVar23;
                  iVar22 = iVar22 + iVar23;
                  break;
                }
                iVar15 = iVar15 + 1;
                puVar20 = puVar20 + 2;
              } while (iVar15 < iVar23);
            }
            if (*(int *)(iVar25 + 0xc) == 0) {
              if (param_3 < iVar14) {
                FUN_00448740(&DAT_00dee2cc,1);
                FUN_00448aa0(&local_c4,0,0xffffffff);
                FUN_00409350(&DAT_00ded94d,0);
                iVar14 = iVar22;
              }
              else {
                FUN_00448aa0(&local_c4,0,0xffffffff);
                FUN_00409350(&DAT_00ded94d,0);
              }
              iVar22 = 0;
              if (local_188 < iVar14) {
                local_188 = iVar14;
              }
            }
          }
        }
LAB_00a260f5:
        local_190 = local_190 + 1;
        local_18c = local_18c + 1;
      } while (local_18c < (int)local_150);
    }
    FUN_00448aa0(&local_c4,0,0xffffffff);
    uVar16 = in_ECX[0x127];
    piVar26 = *(int **)(in_ECX[0xb] + 100);
    if ((uVar16 == 0xffffffff) || (9999 < uVar16)) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(uVar16 * 0x2c + 0x15c + in_ECX[0xb]);
    }
    (**(code **)(*piVar26 + 0x104))(piVar26,0,uVar12);
    iVar14 = 0x89;
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe8))(*(int **)(in_ECX[0xb] + 100),0x89,&local_b4)
    ;
    fVar28 = 0.0;
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x89,0);
    piVar26 = *(int **)(in_ECX[0xb] + 100);
    (**(code **)(*piVar26 + 0x10c))(piVar26,0,3,0);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,6);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x1b,1);
    uStack_148 = (longlong)ROUND(param_8 * 255.0);
    lVar11 = uStack_148;
    uStack_148._0_4_ = (int)(longlong)ROUND(param_8 * 255.0);
    fVar18 = (float)(in_ECX[0xe] & 0xffffffU | (int)uStack_148 << 0x18);
    local_cc = (int)uStack_148 << 0x18;
    iVar22 = 0;
    iVar23 = 0;
    iVar25 = 0;
    uStack_148 = lVar11;
    if (0 < iStack_168) {
      iStack_1d8 = 1;
      pfVar21 = (float *)&DAT_013295a8;
      do {
        pppppppuVar19 = local_178;
        if (local_164 < 0x10) {
          pppppppuVar19 = &local_178;
        }
        if (*(char *)((int)pppppppuVar19 + iVar25) == -0x59) {
          iStack_1d8 = iStack_1d8 + 1;
          iVar25 = iVar25 + 1;
          pppppppuVar19 = local_178;
          if (local_164 < 0x10) {
            pppppppuVar19 = &local_178;
          }
          cVar5 = *(char *)((int)pppppppuVar19 + iVar25);
          if (cVar5 == '!') {
            fVar18 = (float)(in_ECX[0xe] & 0xffffffU | local_cc);
          }
          else if ((char)in_ECX[cVar5 * 8 + 0x12a] == -0x59) {
            if ((&DAT_01327598)[cVar5 * 0x20] != -0x59) {
              uVar16 = FUN_009b6df0();
              fVar18 = (float)(uVar16 & 0xffffff | local_cc);
            }
          }
          else {
            uVar16 = FUN_009b6df0();
            fVar18 = (float)(uVar16 & 0xffffff | local_cc);
          }
        }
        else {
          pppppppuVar19 = local_178;
          if (local_164 < 0x10) {
            pppppppuVar19 = &local_178;
          }
          piVar6 = (int *)in_ECX[*(byte *)((int)pppppppuVar19 + iVar25) + 0x25];
          if (piVar6 != (int *)0x0) {
            in_ECX = piVar26;
            if (piVar6[3] < 1) {
              iVar23 = iVar23 + piVar6[6];
              iVar22 = iVar23;
            }
            else {
              local_c4 = (float)*piVar6 / (float)piVar26[0x128];
              fStack_b8 = (float)(*piVar6 + piVar6[2]) / (float)piVar26[0x128];
              fStack_c0 = (float)(piVar6[3] + piVar6[1]) / (float)piVar26[0x129];
              local_d0 = (float)piVar6[1] / (float)piVar26[0x129];
              fVar9 = (float)(piVar6[4] + iVar23) * 0.05 * param_7;
              fVar8 = (float)(piVar6[2] + piVar6[4] + iVar23) * 0.05 * param_7;
              fStack_bc = (float)((param_10 - piVar6[5]) - piVar6[3]) * 0.05 * param_7;
              fVar7 = (float)(param_10 - piVar6[5]) * 0.05 * param_7;
              fStack_140 = *param_4;
              fStack_13c = param_4[1];
              fStack_138 = param_4[2];
              fVar1 = *param_6;
              fVar2 = param_6[1];
              fVar3 = param_6[2];
              fStack_154 = param_5[1];
              fStack_158 = *param_5;
              local_150 = param_5[2] * fStack_bc;
              fVar28 = fStack_154 * fVar7;
              fVar10 = param_5[2] * fVar7;
              fStack_15c = fVar1 * fVar9 + fStack_140;
              fStack_134 = param_6[1] * fVar9 + fStack_13c;
              local_14c = fVar3 * fVar9 + fStack_138;
              pfVar21[-1] = fVar18;
              local_b0 = fStack_158 * fStack_bc + fStack_15c;
              fStack_ac = fStack_134 + fStack_154 * fStack_bc;
              fStack_a8 = local_14c + local_150;
              *(ulonglong *)(pfVar21 + -4) = CONCAT44(fStack_ac,local_b0);
              pfVar21[-2] = local_14c + local_150;
              fStack_8c = fVar1 * fVar8 + fStack_140;
              *pfVar21 = local_c4;
              pfVar21[1] = fStack_c0;
              fStack_88 = fVar2 * fVar8 + fStack_13c;
              fStack_84 = fVar3 * fVar8 + fStack_138;
              fStack_80 = fStack_158 * fStack_bc + fStack_8c;
              local_e0 = fStack_88 + fStack_154 * fStack_bc;
              fStack_7c = local_e0;
              fStack_78 = fStack_84 + local_150;
              fStack_c8 = fStack_78;
              *(ulonglong *)(pfVar21 + 2) = CONCAT44(local_e0,fStack_80);
              fStack_f4 = fStack_158 * fVar7 + fStack_15c;
              fStack_a4 = fStack_f4;
              fStack_f0 = fStack_134 + fVar28;
              fStack_a0 = fStack_f0;
              pfVar21[4] = fStack_78;
              pfVar21[6] = fStack_b8;
              fStack_9c = local_14c + fVar10;
              local_b4 = fStack_c0;
              pfVar21[7] = fStack_c0;
              fStack_e4 = fStack_9c;
              *(ulonglong *)(pfVar21 + 8) = CONCAT44(fStack_f0,fStack_f4);
              pfVar21[10] = fStack_9c;
              fStack_d4 = local_c4;
              pfVar21[0xc] = local_c4;
              pfVar21[5] = fVar18;
              pfVar21[0xd] = local_d0;
              pfVar21[0xb] = fVar18;
              fStack_8c = fStack_158 * fVar7 + fStack_8c;
              fStack_88 = fStack_88 + fVar28;
              fStack_84 = fStack_84 + fVar10;
              *(ulonglong *)(pfVar21 + 0xe) = CONCAT44(fStack_88,fStack_8c);
              pfVar21[0x10] = fStack_84;
              iVar14 = iVar14 + 6;
              fStack_dc = fStack_b8;
              pfVar21[0x12] = fStack_b8;
              fStack_d8 = local_d0;
              pfVar21[0x13] = local_d0;
              fStack_70 = local_e0;
              fStack_6c = fStack_78;
              fStack_ec = fStack_b8;
              fStack_74 = fStack_80;
              pfVar21[0x14] = fStack_80;
              pfVar21[0x15] = local_e0;
              pfVar21[0x16] = fStack_78;
              pfVar21[0x18] = fStack_b8;
              fStack_98 = fStack_f4;
              fStack_e8 = fStack_c0;
              pfVar21[0x19] = fStack_c0;
              fStack_94 = fStack_f0;
              fStack_90 = fStack_9c;
              *(ulonglong *)(pfVar21 + 0x1a) = CONCAT44(fStack_f0,fStack_f4);
              pfVar21[0x1c] = fStack_9c;
              pfVar21[0x1e] = local_c4;
              uStack_148 = CONCAT44(local_d0,local_c4);
              pfVar21[0x11] = fVar18;
              pfVar21[0x17] = fVar18;
              pfVar21[0x1f] = local_d0;
              pfVar21[0x1d] = fVar18;
              iVar23 = iVar22 + piVar6[6];
              iVar15 = piVar6[0x207];
              pfVar21 = pfVar21 + 0x24;
              iVar22 = iVar23;
              if (((iVar15 != 0) && (iStack_1d8 < iStack_168)) && (iVar27 = 0, 0 < iVar15)) {
                puVar20 = (uint *)(piVar6 + 7);
                do {
                  pppppppuVar19 = local_178;
                  if (local_164 < 0x10) {
                    pppppppuVar19 = &local_178;
                  }
                  if (*puVar20 == (uint)*(byte *)((int)pppppppuVar19 + iStack_1d8)) {
                    iVar23 = iVar23 + piVar6[iVar27 * 2 + 8];
                    iVar22 = iVar23;
                    break;
                  }
                  puVar20 = puVar20 + 2;
                  iVar27 = iVar27 + 1;
                } while (iVar27 < iVar15);
              }
            }
          }
        }
        iStack_1d8 = iStack_1d8 + 1;
        iVar25 = iVar25 + 1;
      } while (iVar25 < iStack_168);
      if (iVar14 != 0) {
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x164))(*(int **)(in_ECX[0xb] + 100),0x142);
        (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x14c))
                  (*(int **)(in_ECX[0xb] + 100),4,(int)fVar28 / 3,&DAT_01329598,0x18);
      }
    }
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,3,1);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,6,1);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0x10c))(*(int **)(in_ECX[0xb] + 100),0,4,4);
    (**(code **)(**(int **)(in_ECX[0xb] + 100) + 0xe4))(*(int **)(in_ECX[0xb] + 100),0x89,local_128)
    ;
    if (0xf < (uint)local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c4);
    }
    local_b0 = 2.10195e-44;
    local_b4 = 0.0;
    local_c4 = (float)((uint)local_c4 & 0xffffff00);
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_128);
    }
    local_114 = 0xf;
    local_118 = 0;
    local_128 = local_128 & 0xffffff00;
  }
  if ((uint)local_14c < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_160);
}

