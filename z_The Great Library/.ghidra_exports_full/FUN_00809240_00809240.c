// FUN_00809240 @ 00809240 body=[[00809240, 0080939c] [008093a0, 00809bc8] [00809bd0, 00809c7c] [00809c83, 00809c97] [00809c9b, 00809cae] [00809cb2, 00809f50] [00809f54, 00809f60] [00809f64, 00809f73] [00809f77, 00809f86] [00809f8a, 00809f9c]]


void FUN_00809240(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  int local_c8 [4];
  int local_b8 [4];
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  void *local_7c;
  int local_78;
  undefined4 local_74;
  int *local_6c;
  int *local_68;
  undefined4 local_64;
  int local_5c;
  int local_58;
  int *local_54;
  int local_50;
  void *local_4c;
  int *local_48;
  float local_44;
  void *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c [3];
  int *local_20;
  uint local_1c;
  void *local_18 [4];
  undefined4 local_8;
  
  piVar13 = param_3;
  local_18[3] = &LAB_00b6a957;
  local_18[2] = ExceptionList;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_90 = 0;
  local_8 = 0;
  local_30 = (param_2 % *(int *)(param_1 + 0x18c)) * *(int *)(param_1 + 0x194) +
             *(int *)(param_1 + 0x194) / 2;
  local_1c = (param_2 / *(int *)(param_1 + 0x18c)) * *(int *)(param_1 + 0x198) +
             *(int *)(param_1 + 0x198) / 2;
  if ((param_3[1] - *param_3 & 0xfffffffcU) != 0) {
    local_20 = (int *)(param_2 * 0x3c0 + *(int *)(param_1 + 0x19c));
    ExceptionList = local_18 + 2;
    FUN_00804430();
    iVar12 = piVar13[1] - *piVar13 >> 2;
    local_38 = (int *)FUN_00aad56b();
    local_8._0_1_ = 1;
    if (local_38 == (int *)0x0) {
      local_3c = (int *)0x0;
    }
    else {
      piVar4 = local_38 + 1;
      *local_38 = iVar12;
      _eh_vector_constructor_iterator_
                (piVar4,0x6c,iVar12,(_func_void_void_ptr *)&LAB_007ec3c0,FUN_007f62f0);
      local_3c = piVar4;
    }
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_7c = (void *)0x0;
    local_78 = 0;
    local_74 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_8 = CONCAT31(local_8._1_3_,4);
    local_2c[2] = 0;
    if (piVar13[1] - *piVar13 >> 2 != 0) {
      piVar4 = local_3c + 0x17;
      do {
        piVar14 = local_20;
        piVar5 = (int *)local_20[9];
        local_2c[0] = local_78 - (int)local_7c >> 1;
        if (local_2c < piVar5) {
          if (local_2c < (int *)local_20[8]) goto LAB_008093f5;
          local_2c[1] = (int)local_2c - local_20[8] >> 2;
          if (piVar5 == (int *)local_20[10]) {
            FUN_007b94a0();
          }
          if ((undefined4 *)piVar14[9] != (undefined4 *)0x0) {
            *(undefined4 *)piVar14[9] = *(undefined4 *)(piVar14[8] + local_2c[1] * 4);
          }
        }
        else {
LAB_008093f5:
          if (piVar5 == (int *)local_20[10]) {
            FUN_007b94a0();
          }
          if ((int *)piVar14[9] != (int *)0x0) {
            *(int *)piVar14[9] = local_2c[0];
          }
        }
        piVar14[9] = piVar14[9] + 4;
        iVar12 = *(int *)(*(int *)(*piVar13 + local_2c[2] * 4) + 8);
        if (*(char *)(iVar12 + 0x2a) == '\0') {
          iVar12 = (*(int *)(iVar12 + 0xcc) - *(int *)(iVar12 + 200)) / 0x24;
          if (0 < iVar12) {
            iVar9 = 0;
            local_34 = iVar12;
            do {
              iVar12 = *(int *)(*(int *)(*piVar13 + local_2c[2] * 4) + 8);
              iVar10 = *(int *)(*(int *)(iVar12 + 200) + 4 + iVar9);
              if ((iVar10 != 0) &&
                 (*(char *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar10 * 4) + 8) + 0x2a) !=
                  '\0')) {
                if (*(char *)(iVar12 + 0x2a) == '\0') {
                  *(undefined1 *)(iVar12 + 0xd9) = 1;
                }
                else {
                  *(undefined1 *)(iVar12 + 0xd8) = 1;
                }
              }
              iVar9 = iVar9 + 0x24;
              local_34 = local_34 + -1;
            } while (local_34 != 0);
            local_34 = 0;
          }
        }
        else {
          iVar12 = *(int *)(*(int *)(*piVar13 + local_2c[2] * 4) + 8);
          local_48 = *(int **)(iVar12 + 0xb4);
          local_50 = *(int *)(iVar12 + 0x34);
          local_38 = (int *)&stack0xffffff20;
          piVar13 = (int *)(iVar12 + 0xa4);
          local_4c = *(void **)(iVar12 + 0x38);
          local_54 = piVar13;
          FUN_007e7130(piVar13,local_48,*(undefined4 *)(param_1 + 0x15a8),&local_8c,&local_7c,
                       local_b8);
          iVar9 = *piVar13;
          local_18[0] = (void *)0x0;
          if (0 < (int)(*(int *)(iVar12 + 0xa8) - iVar9 & 0xfffffff8U)) {
            iVar12 = (local_9c - local_a0) / 0x48;
            do {
              local_5c = *(int *)((int)local_18[0] * 8 + iVar9);
              local_2c[1] = *(int *)((int)local_18[0] * 8 + 4 + iVar9);
              local_38 = (int *)&stack0xffffff18;
              FUN_007f2b60(param_1,piVar4 + -0x13,piVar4 + -0x17,piVar4 + -0xf,piVar4 + -8,piVar4);
              local_5c = local_5c + local_50;
              local_58 = local_2c[1] + (int)local_4c;
              local_2c[1] = iVar12;
              FUN_00805560();
              iVar12 = (local_9c - local_a0) / 0x48;
              if (local_2c[1] != iVar12) {
                iVar9 = *(int *)(*(int *)(*param_3 + local_2c[2] * 4) + 8);
                if (*(char *)(iVar9 + 0x2a) == '\0') {
                  *(undefined1 *)(iVar9 + 0xd9) = 1;
                }
                else {
                  *(undefined1 *)(iVar9 + 0xd8) = 1;
                }
              }
              iVar9 = *local_54;
              local_18[0] = (void *)((int)local_18[0] + 1);
            } while ((int)local_18[0] < local_54[1] - iVar9 >> 3);
          }
          iVar12 = *(int *)(*(int *)(*param_3 + local_2c[2] * 4) + 8);
          iVar9 = *(int *)(iVar12 + 0x38);
          local_44 = (float)*(int *)(iVar12 + 0x34) - (float)local_30;
          piVar4[-0xb] = (int)local_44;
          local_40 = (void *)((float)iVar9 - (float)(int)local_1c);
          piVar4[-10] = (int)local_40;
          piVar4[-9] = *(int *)(*(int *)(*(int *)(*param_3 + local_2c[2] * 4) + 8) + 0xb4);
          piVar13 = param_3;
        }
        local_2c[2] = local_2c[2] + 1;
        piVar4 = piVar4 + 0x1b;
      } while ((uint)local_2c[2] < (uint)(piVar13[1] - *piVar13 >> 2));
    }
    piVar4 = local_20;
    pvVar3 = (void *)(local_78 - (int)local_7c >> 1);
    ppvVar1 = (void **)local_20[9];
    local_54 = pvVar3;
    local_18[0] = pvVar3;
    if ((local_18 < ppvVar1) && (ppvVar2 = (void **)local_20[8], ppvVar2 <= local_18)) {
      if (ppvVar1 == (void **)local_20[10]) {
        FUN_007b94a0();
      }
      if ((undefined4 *)piVar4[9] != (undefined4 *)0x0) {
        *(undefined4 *)piVar4[9] =
             *(undefined4 *)(piVar4[8] + ((int)local_18 - (int)ppvVar2 >> 2) * 4);
      }
    }
    else {
      if (ppvVar1 == (void **)local_20[10]) {
        FUN_007b94a0();
      }
      if ((int *)piVar4[9] != (int *)0x0) {
        *(int *)piVar4[9] = (int)pvVar3;
      }
    }
    piVar4[9] = piVar4[9] + 4;
    iVar12 = 0;
    iVar9 = piVar13[1] - *piVar13 >> 2;
    iVar10 = 0;
    local_18[0] = (void *)0x0;
    local_40 = (void *)0x0;
    if (1 < iVar9) {
      local_34 = (iVar9 - 2U >> 1) + 1;
      iVar12 = local_34 * 2;
      piVar4 = local_3c + 1;
      do {
        local_18[0] = (void *)((int)local_18[0] + (*piVar4 - piVar4[-1] >> 3));
        local_40 = (void *)((int)local_40 + (piVar4[0x1b] - piVar4[0x1a] >> 3));
        local_34 = local_34 + -1;
        piVar4 = piVar4 + 0x36;
      } while (local_34 != 0);
      local_34 = 0;
      local_2c[1] = iVar12;
    }
    if (iVar12 < iVar9) {
      iVar10 = local_3c[iVar12 * 0x1b + 1] - local_3c[iVar12 * 0x1b] >> 3;
    }
    if ((iVar10 + (int)local_18[0] + (int)local_40 & 0x3fffffffU) != 0) {
      local_40 = (void *)FUN_00aad56b();
      local_18[0] = (void *)FUN_00aad56b();
      local_2c[2] = 0;
      local_34 = 0;
      uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 100);
      local_2c[0] = local_88 - local_8c >> 3;
      piVar4 = local_20 + 0x9c;
      local_20[0x9e] = 0;
      local_38 = piVar4;
      FUN_009f9630(piVar4,uVar8);
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*piVar4 + 0x2c))(piVar4);
        local_30 = local_58;
      }
      local_2c[1] = FUN_00aad56b();
      local_58 = 0;
      FUN_007f8a90();
      *(undefined1 *)(local_20 + 0x98) = 1;
      local_48 = local_20 + 0x93;
      FUN_009f99d0();
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_c8[2] = 0;
      local_8._0_1_ = 5;
      FUN_007d85d0();
      local_6c = (int *)0x0;
      local_68 = (int *)0x0;
      local_64 = 0;
      local_8 = CONCAT31(local_8._1_3_,6);
      iVar12 = piVar13[1] - *piVar13 >> 2;
      if (iVar12 != 0) {
        if (iVar12 != 0) {
          FUN_004c9df0();
        }
        piVar4 = local_68;
        iVar9 = (int)local_68 - (int)local_6c;
        FUN_0080ded0();
        local_68 = piVar4 + (iVar12 - (iVar9 >> 4)) * 4;
      }
      local_1c = 0;
      piVar4 = local_6c;
      if (piVar13[1] - *piVar13 >> 2 != 0) {
        do {
          FUN_0080ddc0();
          iVar12 = 0;
          if (0 < *(int *)(param_1 + 0x90)) {
            do {
              *(undefined4 *)(*piVar4 + iVar12 * 8) = 0xffffffff;
              *(undefined4 *)(*piVar4 + 4 + iVar12 * 8) = 0;
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)(param_1 + 0x90));
          }
          local_1c = local_1c + 1;
          piVar4 = piVar4 + 4;
        } while (local_1c < (uint)(param_3[1] - *param_3 >> 2));
      }
      piVar13 = local_6c;
      local_1c = 0;
      (**(code **)(*(int *)local_48[1] + 0x2c))((int *)local_48[1]);
      iVar12 = param_3[1] - *param_3 >> 2;
      piVar4 = local_3c;
      if (0 < iVar12) {
        do {
          FUN_0080bce0(param_1,local_c8,&local_1c,piVar13,local_2c[1],&local_58,piVar4,local_40,
                       local_2c + 2,local_18[0],&local_34);
          iVar12 = iVar12 + -1;
          piVar13 = piVar13 + 4;
          piVar4 = piVar4 + 0x1b;
        } while (iVar12 != 0);
      }
      local_1c = 0;
      if (3 < local_2c[0]) {
        param_3 = (int *)((local_2c[0] - 4U >> 2) + 1);
        puVar15 = (uint *)(local_b8[0] + 8);
        piVar13 = (int *)(local_8c + 8);
        puVar6 = (undefined2 *)(local_30 + 8);
        local_1c = (int)param_3 * 4;
        do {
          *(float *)(puVar6 + -4) = (float)piVar13[-2] + 0.5;
          *(float *)(puVar6 + -2) = (float)piVar13[-1] + 0.5;
          uVar7 = puVar15[-2];
          uVar11 = uVar7 & 0x800000ff;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
          }
          puVar6[1] = (short)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU) >> 8);
          *puVar6 = (short)uVar11;
          *(float *)(puVar6 + 2) = (float)*piVar13 + 0.5;
          *(float *)(puVar6 + 4) = (float)piVar13[1] + 0.5;
          uVar7 = puVar15[-1];
          uVar11 = uVar7 & 0x800000ff;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
          }
          puVar6[7] = (short)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU) >> 8);
          puVar6[6] = (short)uVar11;
          *(float *)(puVar6 + 8) = (float)piVar13[2] + 0.5;
          *(float *)(puVar6 + 10) = (float)piVar13[3] + 0.5;
          uVar7 = *puVar15;
          uVar11 = uVar7 & 0x800000ff;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
          }
          puVar6[0xc] = (short)uVar11;
          puVar6[0xd] = (short)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU) >> 8);
          *(float *)(puVar6 + 0xe) = (float)piVar13[4] + 0.5;
          *(float *)(puVar6 + 0x10) = (float)piVar13[5] + 0.5;
          uVar7 = puVar15[1];
          uVar11 = uVar7 & 0x800000ff;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xffffff00) + 1;
          }
          puVar6[0x12] = (short)uVar11;
          puVar6[0x13] = (short)(uVar7 + ((int)uVar7 >> 0x1f & 0xffU) >> 8);
          puVar15 = puVar15 + 4;
          piVar13 = piVar13 + 8;
          puVar6 = puVar6 + 0x18;
          param_3 = (int *)((int)param_3 + -1);
        } while (param_3 != (int *)0x0);
      }
      if ((int)local_1c < local_2c[0]) {
        puVar6 = (undefined2 *)(local_30 + 8 + local_1c * 0xc);
        uVar7 = local_1c;
        do {
          *(float *)(puVar6 + -4) = (float)*(int *)(local_8c + uVar7 * 8) + 0.5;
          *(float *)(puVar6 + -2) = (float)*(int *)(local_8c + 4 + uVar7 * 8) + 0.5;
          uVar11 = *(uint *)(local_b8[0] + uVar7 * 4);
          uVar16 = uVar11 & 0x800000ff;
          if ((int)uVar16 < 0) {
            uVar16 = (uVar16 - 1 | 0xffffff00) + 1;
          }
          *puVar6 = (short)uVar16;
          puVar6[1] = (short)(uVar11 + ((int)uVar11 >> 0x1f & 0xffU) >> 8);
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 6;
        } while ((int)uVar7 < local_2c[0]);
      }
      FID_conflict__memcpy(local_4c,local_7c,(int)local_54 * 2);
      (**(code **)(*(int *)local_48[1] + 0x30))((int *)local_48[1]);
      uVar7 = 0;
      piVar13 = local_6c;
      if (local_6c != (int *)0x0) {
        while( true ) {
          if (piVar13 == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_6c);
          }
          if (*piVar13 != 0) break;
          *piVar13 = 0;
          piVar13[1] = 0;
          piVar13[2] = 0;
          piVar13 = piVar13 + 4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar13);
      }
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_c8[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c8[0]);
      }
      (**(code **)(*(int *)*local_38 + 0x30))((int *)*local_38);
      FUN_00aaea59(local_2c[1]);
      iVar12 = local_20[5] - local_20[4] >> 0x1f;
      if ((local_20[5] - local_20[4]) / 0x24 + iVar12 != iVar12) {
        local_30 = 0;
        do {
          local_38 = (int *)(local_20[1] - *local_20 >> 2);
          piVar13 = (int *)0x0;
          if (local_38 != (int *)0x0) {
            param_3 = (int *)*local_20;
            do {
              if (*(int *)(*(int *)(*param_3 + 8) + 0xb4) == *(int *)(param_1 + 0x15b4 + uVar7 * 4))
              break;
              param_3 = param_3 + 1;
              piVar13 = (int *)((int)piVar13 + 1);
            } while (piVar13 < (int *)(local_20[1] - *local_20 >> 2));
          }
          if (piVar13 == local_38) break;
          iVar12 = (int)piVar13 * 0x24;
          *(undefined1 *)(iVar12 + 0x14 + local_20[4]) = 1;
          *(undefined1 *)(iVar12 + 0x14 + local_20[4]) = 1;
          FUN_009f99d0(local_20[4] + iVar12,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),
                       *(undefined4 *)(*(int *)(param_1 + 0x15b0) + uVar7 * 4));
          piVar13 = *(int **)(local_20[4] + 4 + iVar12);
          (**(code **)(*piVar13 + 0x2c))(piVar13,0,0,&local_4c,0);
          FID_conflict__memcpy
                    (local_4c,*(void **)(*(int *)(param_1 + 0x15ac) + local_30),
                     *(int *)(*(int *)(param_1 + 0x15b0) + uVar7 * 4) * 2);
          piVar13 = *(int **)(local_20[4] + 4 + iVar12);
          (**(code **)(*piVar13 + 0x30))(piVar13);
          local_30 = local_30 + 0x10;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)((local_20[5] - local_20[4]) / 0x24));
      }
      if ((0 < local_2c[2]) &&
         (FUN_00808fd0(local_18[0],local_40,local_2c + 2), piVar13 = local_20, iVar12 = local_2c[2],
         0 < local_2c[2])) {
        *(undefined1 *)(local_20 + 0xaa) = 1;
        piVar14 = local_20 + 0xa5;
        FUN_009f99d0(piVar14,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),local_2c[2]);
        (**(code **)(*(int *)piVar13[0xa6] + 0x2c))((int *)piVar13[0xa6],0,0,&param_3,0);
        FID_conflict__memcpy(param_3,local_40,iVar12 * 2);
        (**(code **)(*(int *)piVar13[0xa6] + 0x30))((int *)piVar13[0xa6]);
        iVar12 = local_34;
        FUN_009f9630(piVar14,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 100),local_34,0x18,0,0);
        piVar4 = (int *)*piVar14;
        piVar5 = (int *)0x0;
        if (piVar4 != (int *)0x0) {
          uVar8 = 0;
          if ((*(char *)((int)piVar13 + 0x2a9) != '\0') && (*(char *)((int)piVar13 + 0x2aa) == '\0')
             ) {
            uVar8 = 0x2000;
          }
          (**(code **)(*piVar4 + 0x2c))(piVar4,0,0,&param_3,uVar8);
          piVar5 = param_3;
        }
        FID_conflict__memcpy(piVar5,local_18[0],iVar12 * 0x18);
        (**(code **)(*(int *)*piVar14 + 0x30))((int *)*piVar14);
      }
      FUN_00aaea59(local_40);
      FUN_00aaea59(local_18[0]);
    }
    piVar13 = local_3c;
    if (local_a8 != 0) {
      FUN_008070f0();
    }
    FUN_00803bc0();
    if (piVar13 != (int *)0x0) {
      _eh_vector_destructor_iterator_(piVar13,0x6c,piVar13[-1],FUN_007f62f0);
      FUN_00aaea59();
    }
    if (local_b8[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_8c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_a0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_18[2];
  return;
}

