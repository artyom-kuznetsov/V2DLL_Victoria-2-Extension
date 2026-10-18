// FUN_00b063e0 @ 00b063e0 body=[[00b063e0, 00b06d21]]


void FUN_00b063e0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined2 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  short sVar18;
  int in_ECX;
  int iVar19;
  uint uVar20;
  int local_3c;
  undefined8 local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b38df4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b04e30(DAT_00ef259c ^ (uint)&stack0xffffff94);
  local_18 = 0x42c80000;
  local_14 = 0x42c80000;
  local_10 = 0x42c80000;
  local_24 = 0;
  local_20 = 8;
  local_1c = 0xc;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &local_24;
  }
  fVar3 = (float)param_2[4];
  fVar4 = 1.0;
  if (1.0 <= fVar3) {
    if (100.0 < fVar3) {
      fVar3 = 100.0;
    }
  }
  else {
    fVar3 = 1.0;
  }
  param_2[4] = fVar3;
  fVar3 = (float)param_2[3];
  if ((1.0 <= fVar3) && (fVar4 = fVar3, 100.0 < fVar3)) {
    fVar4 = 100.0;
  }
  param_2[3] = fVar4;
  fVar3 = (float)param_2[5];
  if (1.0 <= fVar3) {
    if (100.0 < fVar3) {
      fVar3 = 100.0;
    }
  }
  else {
    fVar3 = 1.0;
  }
  param_2[5] = fVar3;
  *(undefined4 *)(in_ECX + 0x6c) = *param_2;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  uVar14 = param_2[1] - 1 | param_2[1] - 1 >> 1;
  uVar14 = uVar14 | uVar14 >> 2;
  uVar14 = uVar14 | uVar14 >> 4;
  uVar14 = uVar14 | uVar14 >> 8;
  uVar14 = uVar14 >> 0x10 | uVar14;
  iVar19 = uVar14 + 1;
  fVar3 = (float)iVar19;
  local_34 = CONCAT44(local_34._4_4_,iVar19);
  if (iVar19 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar4 = (float)(int)param_2[2];
  if ((int)param_2[2] < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fVar3 = fVar3 / fVar4;
  fVar4 = *(float *)(param_1 + 0x28);
  local_3c = (int)(longlong)ROUND(fVar4 / fVar3);
  if (*(uint *)(in_ECX + 0x5c) < local_3c + 1U) {
    FUN_00aeb6c0(local_3c + 1U);
  }
  *(int *)(in_ECX + 0xa0) = iVar19;
  *(float *)(in_ECX + 0x8c) = fVar3;
  fVar8 = (float)(int)uVar14;
  if ((int)uVar14 < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  sVar9 = 0;
  sVar10 = 0;
  sVar11 = 0;
  sVar12 = 0;
  piVar1 = (int *)(in_ECX + 0x44);
  *(float *)(in_ECX + 0x90) = fVar3 / fVar8;
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar14 = *(uint *)(param_1 + 0x48);
  uVar20 = *(uint *)(in_ECX + 0x48);
  if (((uVar14 != uVar20) && (*(uint *)(in_ECX + 0x48) = uVar14, uVar20 < uVar14)) &&
     (*(uint *)(in_ECX + 0x4c) < uVar14)) {
    FUN_00aeb6c0(uVar14);
  }
  uVar5 = *(ushort *)(in_ECX + 0x68);
  *(ushort *)(in_ECX + 0x68) = (ushort)uVar14;
  if (uVar5 < (ushort)uVar14) {
    FUN_00adca40(uVar14);
  }
  uVar20 = 0;
  if (uVar14 != 0) {
    do {
      piVar6 = *(int **)(*(int *)(param_1 + 0x44) + uVar20 * 4);
      iVar19 = (*(code *)PTR_FUN_00f01b08)(0x68,0x12f,4,0,0,0xffffffff);
      uVar15 = 0;
      uStack_4 = 0;
      if (iVar19 != 0) {
        puVar16 = (undefined4 *)FUN_00b15770(piVar6[0x19]);
        puVar17 = (undefined1 *)*puVar16;
        if (puVar17 == (undefined1 *)0x0) {
          puVar17 = &DAT_00ded94d;
        }
        uVar15 = FUN_00b11180(puVar17);
      }
      iVar19 = piVar6[7];
      *(undefined4 *)(*piVar1 + uVar20 * 4) = uVar15;
      iVar7 = *(int *)(*piVar1 + uVar20 * 4);
      *(int *)(iVar7 + 0x1c) = iVar19;
      uStack_4 = 0xffffffff;
      *(int *)(iVar7 + 0x20) = piVar6[8];
      *(int *)(iVar7 + 0x24) = piVar6[9];
      iVar19 = *(int *)(*piVar1 + uVar20 * 4);
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x28) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x2a) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x2c) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x2e) = uVar13;
      iVar19 = *(int *)(*piVar1 + uVar20 * 4);
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x38) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x3a) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x3c) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x3e) = uVar13;
      iVar19 = *(int *)(*piVar1 + uVar20 * 4);
      *(int *)(iVar19 + 0x4c) = piVar6[0x13];
      *(int *)(iVar19 + 0x50) = piVar6[0x14];
      *(int *)(iVar19 + 0x54) = piVar6[0x15];
      iVar19 = *(int *)(*piVar1 + uVar20 * 4);
      *(int *)(iVar19 + 0x10) = piVar6[4];
      *(int *)(iVar19 + 0x14) = piVar6[5];
      *(int *)(iVar19 + 0x18) = piVar6[6];
      iVar19 = *(int *)(*piVar1 + uVar20 * 4);
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 8) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 10) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0xc) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0xe) = uVar13;
      iVar19 = *(int *)(*piVar1 + uVar20 * 4);
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x30) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x32) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x34) = uVar13;
      uVar13 = FUN_00b31c00();
      *(undefined2 *)(iVar19 + 0x36) = uVar13;
      iVar19 = *(int *)(*piVar1 + uVar20 * 4);
      *(int *)(iVar19 + 0x40) = piVar6[0x10];
      *(int *)(iVar19 + 0x44) = piVar6[0x11];
      *(int *)(iVar19 + 0x48) = piVar6[0x12];
      *(int *)(*(int *)(*piVar1 + uVar20 * 4) + 0x60) = piVar6[0x18];
      if (piVar6[1] == 0) {
        sVar18 = -1;
      }
      else {
        sVar18 = sVar9;
        sVar9 = sVar9 + 1;
      }
      *(short *)(*(int *)(in_ECX + 100) + uVar20 * 8) = sVar18;
      if (*piVar6 == 0) {
        sVar18 = -1;
      }
      else {
        sVar18 = sVar10;
        sVar10 = sVar10 + 1;
      }
      *(short *)(*(int *)(in_ECX + 100) + 2 + uVar20 * 8) = sVar18;
      if (piVar6[0x16] == 0) {
        sVar18 = -1;
      }
      else {
        sVar18 = sVar11;
        sVar11 = sVar11 + 1;
      }
      *(short *)(*(int *)(in_ECX + 100) + 4 + uVar20 * 8) = sVar18;
      if (piVar6[0x17] == 0) {
        sVar18 = -1;
      }
      else {
        sVar18 = sVar12;
        sVar12 = sVar12 + 1;
      }
      *(short *)(*(int *)(in_ECX + 100) + 6 + uVar20 * 8) = sVar18;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar14);
  }
  iVar19 = uVar14 * (int)local_34;
  uVar15 = (*(code *)PTR_FUN_00f01b08)(iVar19 * 0x10,0,4,0,0,0);
  local_34 = CONCAT44(local_34._4_4_,uVar15);
  uVar15 = (*(code *)PTR_FUN_00f01b08)(iVar19 * 0xc,0,4,0,0,0);
  local_34 = CONCAT44(uVar15,(int)local_34);
  uStack_2c = (*(code *)PTR_FUN_00f01b08)(iVar19 * 0x20,0,4,0,0,0);
  uStack_28 = (*(code *)PTR_FUN_00f01b08)(iVar19 * 0x10,0,4,0,0,0);
  *(float *)(in_ECX + 0x94) = (100.0 - (float)param_2[4]) * 0.4 + 1.0;
  *(float *)(in_ECX + 0x98) = (100.0 - (float)param_2[3]) * 0.4 + 1.0;
  *(float *)(in_ECX + 0x9c) = (100.0 - (float)param_2[5]) * 0.4 + 1.0;
  param_2 = (undefined4 *)0x0;
  if (0.0 < fVar4) {
    do {
      puVar16 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0x34,0x136,4,0,0,0xffffffff);
      if (puVar16 == (undefined4 *)0x0) {
        puVar16 = (undefined4 *)0x0;
      }
      else {
        *puVar16 = 0;
        puVar16[3] = 0x3f800000;
        puVar16[1] = 0;
        puVar16[4] = 0x3f800000;
        puVar16[7] = 0;
        puVar16[5] = 0x3f800000;
        puVar16[8] = 0;
        puVar16[0xb] = 0;
        puVar16[10] = 0;
        puVar16[9] = 0;
        puVar16[0xc] = 0;
        puVar16[2] = 0;
      }
      iVar19 = *(int *)(in_ECX + 0x58);
      uVar20 = iVar19 + 1;
      *(uint *)(in_ECX + 0x58) = uVar20;
      if (*(uint *)(in_ECX + 0x5c) < uVar20) {
        iVar19 = iVar19 + 2;
        if (iVar19 == 0) {
          *(undefined4 *)(in_ECX + 0x58) = 0;
          *(undefined4 *)(in_ECX + 0x5c) = 0;
          if (*(int *)(in_ECX + 0x54) != 0) {
            (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x54));
            *(undefined4 *)(in_ECX + 0x54) = 0;
          }
        }
        else {
          if (*(int *)(in_ECX + 0x54) == 0) {
            uVar15 = (*(code *)PTR_FUN_00f01b08)
                               (iVar19 * 4,*(undefined2 *)(in_ECX + 0x60),4,2,0,0xffffffff);
          }
          else {
            uVar15 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(in_ECX + 0x54),iVar19 * 4);
          }
          *(undefined4 *)(in_ECX + 0x54) = uVar15;
          *(int *)(in_ECX + 0x5c) = iVar19;
        }
      }
      puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x54) + -4 + *(int *)(in_ECX + 0x58) * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = puVar16;
      }
      FUN_00b057b0(puVar16,param_1,param_2,fVar3,&local_34);
      param_2 = (undefined4 *)((float)param_2 + fVar3);
    } while ((float)param_2 < fVar4);
  }
  (*(code *)PTR__free_00f01b10)((int)local_34);
  (*(code *)PTR__free_00f01b10)(local_34._4_4_);
  (*(code *)PTR__free_00f01b10)(uStack_2c);
  (*(code *)PTR__free_00f01b10)(uStack_28);
  uVar20 = 0;
  if (uVar14 != 0) {
    do {
      if (**(int **)(*(int *)(param_1 + 0x44) + uVar20 * 4) != 0) {
        fVar3 = (float)*(int *)(in_ECX + 0x58);
        if (*(int *)(in_ECX + 0x58) < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        local_34 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) * 30.0 * fVar3 * 20.0);
        *(int *)(in_ECX + 0xb0) = *(int *)(in_ECX + 0xb0) + (int)local_34;
        *(int *)(in_ECX + 0xac) =
             *(int *)(in_ECX + 0xac) +
             (uint)*(ushort *)(**(int **)(*(int *)(param_1 + 0x44) + uVar20 * 4) + 4) * 0xc;
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x44) + uVar20 * 4) + 4) != 0) {
        fVar3 = (float)*(int *)(in_ECX + 0x58);
        if (*(int *)(in_ECX + 0x58) < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        local_34 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) * 30.0 * fVar3 * 16.0);
        *(int *)(in_ECX + 0xb0) = *(int *)(in_ECX + 0xb0) + (int)local_34;
        *(int *)(in_ECX + 0xac) =
             *(int *)(in_ECX + 0xac) +
             (uint)*(ushort *)(*(int *)(*(int *)(*(int *)(param_1 + 0x44) + uVar20 * 4) + 4) + 4) *
             0x10;
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x44) + uVar20 * 4) + 0x58) != 0) {
        fVar3 = (float)*(int *)(in_ECX + 0x58);
        if (*(int *)(in_ECX + 0x58) < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        local_34 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) * 30.0 * fVar3 * 20.0);
        *(int *)(in_ECX + 0xb0) = *(int *)(in_ECX + 0xb0) + (int)local_34;
        *(int *)(in_ECX + 0xac) =
             *(int *)(in_ECX + 0xac) +
             (uint)*(ushort *)(*(int *)(*(int *)(*(int *)(param_1 + 0x44) + uVar20 * 4) + 0x58) + 4)
             * 0xc;
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x44) + uVar20 * 4) + 0x5c) != 0) {
        fVar3 = (float)*(int *)(in_ECX + 0x58);
        if (*(int *)(in_ECX + 0x58) < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        local_34 = (longlong)ROUND(*(float *)(in_ECX + 0x8c) * 30.0 * fVar3 * 16.0);
        *(int *)(in_ECX + 0xb0) = *(int *)(in_ECX + 0xb0) + (int)local_34;
        *(int *)(in_ECX + 0xac) =
             *(int *)(in_ECX + 0xac) +
             (uint)*(ushort *)(*(int *)(*(int *)(*(int *)(param_1 + 0x44) + uVar20 * 4) + 0x5c) + 4)
             * 0x10;
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar14);
  }
  iVar19 = *(int *)(in_ECX + 0x58) * 0x34;
  *(int *)(in_ECX + 0xa4) = iVar19;
  *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + iVar19 + (uint)*(ushort *)(in_ECX + 0x68) * 8;
  FUN_00b106f0(in_ECX + 0x14,in_ECX);
  ExceptionList = local_c;
  return;
}

