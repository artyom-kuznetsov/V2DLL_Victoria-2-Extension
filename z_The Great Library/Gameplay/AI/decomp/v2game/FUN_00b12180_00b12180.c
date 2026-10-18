// FUN_00b12180 @ 00b12180 body=[[00b12180, 00b121b7] [00b121c0, 00b128b5]]


void FUN_00b12180(int param_1)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int in_ECX;
  byte *pbVar18;
  float *pfVar19;
  float local_60;
  int local_5c;
  uint local_58;
  int local_54;
  
  local_54 = *(int *)(in_ECX + 0x10);
  iVar8 = *(int *)(param_1 + 0x1d0);
  if (local_54 != 0) {
    local_5c = 0;
    do {
      uVar9 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + local_5c) + 4);
      iVar12 = *(int *)(*(int *)(param_1 + 0x1ac) + 0xd8) + iVar8 * 8;
      if (*(int *)(iVar12 + 4) != 0) {
        (**(code **)(**(int **)(iVar12 + 4) + 0x10))();
      }
      iVar12 = FUN_00aeb3a0(uVar9);
      if (iVar12 != 0) {
        piVar13 = (int *)FUN_00b0b9d0(*(undefined4 *)(*(int *)(in_ECX + 0xc) + 4 + local_5c));
        local_58 = piVar13[1];
        if (local_58 <= *(uint *)(*(int *)(in_ECX + 4) + 0x18)) {
          iVar14 = FUN_00adfc50(*(undefined4 *)(iVar12 + 4));
          if (iVar14 == -1) {
            iVar14 = 0;
          }
          else {
            iVar14 = *(int *)(param_1 + 0x17c) + iVar14 * 0xc;
          }
          local_60 = *(float *)(iVar14 + 4);
          if (local_60 < *(float *)(iVar12 + 8)) {
            local_60 = *(float *)(iVar12 + 8);
          }
          if (*(float *)(iVar12 + 0xc) < local_60) {
            local_60 = *(float *)(iVar12 + 0xc);
          }
          if (0.0001 <= ABS(local_60)) {
            *(undefined1 *)(*(int *)(in_ECX + 0xc) + 8 + local_5c) = 0;
          }
          else {
            if (*(char *)(*(int *)(in_ECX + 0xc) + 8 + local_5c) != '\0') goto LAB_00b12897;
            *(undefined1 *)(*(int *)(in_ECX + 0xc) + 8 + local_5c) = 1;
          }
          iVar14 = FUN_00add3d0(0,0);
          iVar15 = FUN_00add3d0(1,0);
          iVar16 = FUN_00add3d0(2,0);
          fVar2 = (float)piVar13[3];
          iVar12 = *piVar13;
          fVar3 = (float)piVar13[4];
          if (iVar16 == 0) {
            uVar17 = 0;
            if (3 < (int)local_58) {
              iVar16 = (local_58 - 4 >> 2) + 1;
              fVar10 = (fVar3 - fVar2) * 1.5259022e-05;
              pbVar18 = (byte *)(iVar12 + 8);
              uVar17 = iVar16 * 4;
              do {
                uVar6 = *(ushort *)(pbVar18 + -6);
                uVar7 = *(ushort *)(pbVar18 + -4);
                iVar11 = *(int *)(pbVar18 + 4) * 0xc;
                *(float *)(iVar11 + iVar14) =
                     ((float)*(ushort *)(pbVar18 + -8) * fVar10 + fVar2) * local_60 +
                     *(float *)(iVar11 + iVar14);
                *(float *)(iVar11 + 4 + iVar14) =
                     ((float)uVar6 * fVar10 + fVar2) * local_60 + *(float *)(iVar11 + 4 + iVar14);
                *(float *)(iVar11 + 8 + iVar14) =
                     *(float *)(iVar11 + 8 + iVar14) + ((float)uVar7 * fVar10 + fVar2) * local_60;
                bVar4 = pbVar18[-1];
                bVar5 = *pbVar18;
                *(float *)(iVar11 + iVar15) =
                     ((float)pbVar18[-2] * 0.007843138 - 1.0) * local_60 +
                     *(float *)(iVar11 + iVar15);
                *(float *)(iVar11 + 4 + iVar15) =
                     ((float)bVar4 * 0.007843138 - 1.0) * local_60 + *(float *)(iVar11 + 4 + iVar15)
                ;
                pfVar19 = (float *)(iVar11 + 8 + iVar15);
                *pfVar19 = *pfVar19 + ((float)bVar5 * 0.007843138 - 1.0) * local_60;
                uVar6 = *(ushort *)(pbVar18 + 10);
                uVar7 = *(ushort *)(pbVar18 + 0xc);
                iVar11 = *(int *)(pbVar18 + 0x14) * 0xc;
                *(float *)(iVar11 + iVar14) =
                     ((float)*(ushort *)(pbVar18 + 8) * fVar10 + fVar2) * local_60 +
                     *(float *)(iVar11 + iVar14);
                *(float *)(iVar11 + 4 + iVar14) =
                     ((float)uVar6 * fVar10 + fVar2) * local_60 + *(float *)(iVar11 + 4 + iVar14);
                *(float *)(iVar11 + 8 + iVar14) =
                     *(float *)(iVar11 + 8 + iVar14) + ((float)uVar7 * fVar10 + fVar2) * local_60;
                bVar4 = pbVar18[0xf];
                bVar5 = pbVar18[0x10];
                *(float *)(iVar11 + iVar15) =
                     ((float)pbVar18[0xe] * 0.007843138 - 1.0) * local_60 +
                     *(float *)(iVar11 + iVar15);
                *(float *)(iVar11 + 4 + iVar15) =
                     ((float)bVar4 * 0.007843138 - 1.0) * local_60 + *(float *)(iVar11 + 4 + iVar15)
                ;
                pfVar19 = (float *)(iVar11 + 8 + iVar15);
                *pfVar19 = *pfVar19 + ((float)bVar5 * 0.007843138 - 1.0) * local_60;
                uVar6 = *(ushort *)(pbVar18 + 0x1a);
                uVar7 = *(ushort *)(pbVar18 + 0x1c);
                iVar11 = *(int *)(pbVar18 + 0x24) * 0xc;
                *(float *)(iVar11 + iVar14) =
                     ((float)*(ushort *)(pbVar18 + 0x18) * fVar10 + fVar2) * local_60 +
                     *(float *)(iVar11 + iVar14);
                *(float *)(iVar11 + 4 + iVar14) =
                     ((float)uVar6 * fVar10 + fVar2) * local_60 + *(float *)(iVar11 + 4 + iVar14);
                *(float *)(iVar11 + 8 + iVar14) =
                     *(float *)(iVar11 + 8 + iVar14) + ((float)uVar7 * fVar10 + fVar2) * local_60;
                bVar4 = pbVar18[0x1f];
                bVar5 = pbVar18[0x20];
                *(float *)(iVar11 + iVar15) =
                     ((float)pbVar18[0x1e] * 0.007843138 - 1.0) * local_60 +
                     *(float *)(iVar11 + iVar15);
                *(float *)(iVar11 + 4 + iVar15) =
                     ((float)bVar4 * 0.007843138 - 1.0) * local_60 + *(float *)(iVar11 + 4 + iVar15)
                ;
                pfVar19 = (float *)(iVar11 + 8 + iVar15);
                *pfVar19 = *pfVar19 + ((float)bVar5 * 0.007843138 - 1.0) * local_60;
                uVar6 = *(ushort *)(pbVar18 + 0x2a);
                uVar7 = *(ushort *)(pbVar18 + 0x2c);
                iVar11 = *(int *)(pbVar18 + 0x34) * 0xc;
                *(float *)(iVar11 + iVar14) =
                     ((float)*(ushort *)(pbVar18 + 0x28) * fVar10 + fVar2) * local_60 +
                     *(float *)(iVar11 + iVar14);
                *(float *)(iVar11 + 4 + iVar14) =
                     ((float)uVar6 * fVar10 + fVar2) * local_60 + *(float *)(iVar11 + 4 + iVar14);
                *(float *)(iVar11 + 8 + iVar14) =
                     *(float *)(iVar11 + 8 + iVar14) + ((float)uVar7 * fVar10 + fVar2) * local_60;
                pbVar1 = pbVar18 + 0x2e;
                bVar4 = pbVar18[0x2f];
                bVar5 = pbVar18[0x30];
                pbVar18 = pbVar18 + 0x40;
                iVar16 = iVar16 + -1;
                *(float *)(iVar11 + iVar15) =
                     ((float)*pbVar1 * 0.007843138 - 1.0) * local_60 + *(float *)(iVar11 + iVar15);
                *(float *)(iVar11 + 4 + iVar15) =
                     ((float)bVar4 * 0.007843138 - 1.0) * local_60 + *(float *)(iVar11 + 4 + iVar15)
                ;
                pfVar19 = (float *)(iVar11 + 8 + iVar15);
                *pfVar19 = *pfVar19 + ((float)bVar5 * 0.007843138 - 1.0) * local_60;
              } while (iVar16 != 0);
            }
            if (uVar17 < local_58) {
              fVar3 = (fVar3 - fVar2) * 1.5259022e-05;
              iVar16 = local_58 - uVar17;
              pbVar18 = (byte *)(iVar12 + uVar17 * 0x10 + 8);
              do {
                uVar6 = *(ushort *)(pbVar18 + -6);
                uVar7 = *(ushort *)(pbVar18 + -4);
                iVar12 = *(int *)(pbVar18 + 4) * 0xc;
                iVar16 = iVar16 + -1;
                *(float *)(iVar12 + iVar14) =
                     ((float)*(ushort *)(pbVar18 + -8) * fVar3 + fVar2) * local_60 +
                     *(float *)(iVar12 + iVar14);
                *(float *)(iVar12 + 4 + iVar14) =
                     ((float)uVar6 * fVar3 + fVar2) * local_60 + *(float *)(iVar12 + 4 + iVar14);
                *(float *)(iVar12 + 8 + iVar14) =
                     *(float *)(iVar12 + 8 + iVar14) + ((float)uVar7 * fVar3 + fVar2) * local_60;
                bVar4 = pbVar18[-1];
                bVar5 = *pbVar18;
                *(float *)(iVar12 + iVar15) =
                     ((float)pbVar18[-2] * 0.007843138 - 1.0) * local_60 +
                     *(float *)(iVar12 + iVar15);
                *(float *)(iVar12 + 4 + iVar15) =
                     ((float)bVar4 * 0.007843138 - 1.0) * local_60 + *(float *)(iVar12 + 4 + iVar15)
                ;
                pfVar19 = (float *)(iVar12 + 8 + iVar15);
                *pfVar19 = *pfVar19 + ((float)bVar5 * 0.007843138 - 1.0) * local_60;
                pbVar18 = pbVar18 + 0x10;
              } while (iVar16 != 0);
            }
          }
          else if (local_58 != 0) {
            pbVar18 = (byte *)(iVar12 + 8);
            fVar3 = (fVar3 - fVar2) * 1.5259022e-05;
            do {
              uVar6 = *(ushort *)(pbVar18 + -6);
              iVar12 = *(int *)(pbVar18 + 4);
              uVar7 = *(ushort *)(pbVar18 + -4);
              iVar11 = iVar12 * 0xc;
              *(float *)(iVar11 + iVar14) =
                   ((float)*(ushort *)(pbVar18 + -8) * fVar3 + fVar2) * local_60 +
                   *(float *)(iVar11 + iVar14);
              *(float *)(iVar11 + 4 + iVar14) =
                   ((float)uVar6 * fVar3 + fVar2) * local_60 + *(float *)(iVar11 + 4 + iVar14);
              *(float *)(iVar11 + 8 + iVar14) =
                   local_60 * ((float)uVar7 * fVar3 + fVar2) + *(float *)(iVar11 + 8 + iVar14);
              bVar4 = pbVar18[-1];
              bVar5 = *pbVar18;
              *(float *)(iVar11 + iVar15) =
                   ((float)pbVar18[-2] * 0.007843138 - 1.0) * local_60 + *(float *)(iVar11 + iVar15)
              ;
              *(float *)(iVar11 + 4 + iVar15) =
                   ((float)bVar4 * 0.007843138 - 1.0) * local_60 + *(float *)(iVar11 + 4 + iVar15);
              pfVar19 = (float *)(iVar11 + 8 + iVar15);
              *pfVar19 = ((float)bVar5 * 0.007843138 - 1.0) * local_60 + *pfVar19;
              pbVar1 = pbVar18 + 1;
              bVar4 = pbVar18[2];
              bVar5 = pbVar18[3];
              pfVar19 = (float *)(iVar12 * 0x10 + iVar16);
              pbVar18 = pbVar18 + 0x10;
              local_58 = local_58 - 1;
              *pfVar19 = ((float)*pbVar1 * 0.007843138 - 1.0) * local_60 + *pfVar19;
              pfVar19[1] = ((float)bVar4 * 0.007843138 - 1.0) * local_60 + pfVar19[1];
              pfVar19[2] = ((float)bVar5 * 0.007843138 - 1.0) * local_60 + pfVar19[2];
            } while (local_58 != 0);
          }
        }
      }
LAB_00b12897:
      local_5c = local_5c + 0xc;
      local_54 = local_54 + -1;
    } while (local_54 != 0);
  }
  return;
}

