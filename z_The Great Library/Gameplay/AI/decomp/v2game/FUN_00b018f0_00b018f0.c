// FUN_00b018f0 @ 00b018f0 body=[[00b018f0, 00b01dbf]]


undefined1 FUN_00b018f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int in_ECX;
  int *piVar23;
  undefined1 local_c1;
  uint local_bc;
  
  uVar11 = *(uint *)(in_ECX + 0x48);
  local_c1 = 1;
  local_bc = 0;
  uVar18 = 1;
  if (uVar11 != 0) {
    do {
      iVar12 = *(int *)(*(int *)(in_ECX + 0x44) + local_bc * 4);
      uVar19 = 0;
      if (*(uint *)(param_1 + 0x84) != 0) {
        piVar23 = *(int **)(param_1 + 0x80);
        do {
          if (*(int *)(*piVar23 + 0x10) == *(int *)(iVar12 + 100)) {
            piVar23 = *(int **)(*(int *)(param_1 + 0x80) + uVar19 * 4);
            if (piVar23 != (int *)0x0) {
              iVar13 = *piVar23 * 0x38;
              fVar1 = *(float *)(iVar13 + 0x2c + *(int *)(param_1 + 0x1c));
              iVar22 = iVar13 + 0x2c + *(int *)(param_1 + 0x1c);
              fVar2 = *(float *)(iVar22 + 4);
              fVar3 = *(float *)(iVar22 + 8);
              fVar4 = *(float *)(iVar12 + 0x1c);
              fVar5 = *(float *)(iVar12 + 0x20);
              fVar6 = *(float *)(iVar12 + 0x24);
              fVar14 = fVar4 - fVar1;
              fVar16 = fVar5 - fVar2;
              fVar15 = fVar6 - fVar3;
              fVar14 = fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14;
              if (fVar14 < 1e-05 == (fVar14 == 1e-05)) {
                puVar20 = (undefined4 *)FUN_00b15770();
                puVar21 = (undefined1 *)*puVar20;
                if (puVar21 == (undefined1 *)0x0) {
                  puVar21 = &DAT_00ded94d;
                }
                FUN_00b15da0("Bind pose translation of the node \'%s\' (%f, %f, %f) does not match the skeletal submotion bind pose translation (%f, %f, %f)."
                             ,puVar21,(double)fVar1,(double)fVar2,(double)fVar3,(double)fVar4,
                             (double)fVar5,(double)fVar6);
                local_c1 = 0;
              }
              fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + iVar13);
              sVar7 = *(short *)(iVar12 + 0x2a);
              iVar22 = *(int *)(param_1 + 0x1c) + iVar13;
              sVar8 = *(short *)(iVar12 + 0x2c);
              fVar2 = *(float *)(iVar22 + 4);
              fVar3 = *(float *)(iVar22 + 8);
              fVar4 = *(float *)(iVar22 + 0xc);
              sVar9 = *(short *)(iVar12 + 0x28);
              sVar10 = *(short *)(iVar12 + 0x2e);
              cVar17 = FUN_00ad87c0();
              if (cVar17 == '\0') {
                puVar20 = (undefined4 *)FUN_00b15770();
                puVar21 = (undefined1 *)*puVar20;
                if (puVar21 == (undefined1 *)0x0) {
                  puVar21 = &DAT_00ded94d;
                }
                FUN_00b15da0("Bind pose rotation of the node \'%s\' (%f, %f, %f, %f) does not match the skeletal submotion bind pose rotation (%f, %f, %f, %f)."
                             ,puVar21,(double)fVar1,(double)fVar2,(double)fVar3,(double)fVar4,
                             (double)((float)(int)sVar9 * 3.051851e-05),
                             (double)((float)(int)sVar7 * 3.051851e-05),
                             (double)((float)(int)sVar8 * 3.051851e-05),
                             (double)((float)(int)sVar10 * 3.051851e-05));
                local_c1 = 0;
              }
              fVar1 = *(float *)(iVar13 + 0x20 + *(int *)(param_1 + 0x1c));
              iVar22 = iVar13 + 0x20 + *(int *)(param_1 + 0x1c);
              fVar2 = *(float *)(iVar22 + 4);
              fVar3 = *(float *)(iVar22 + 8);
              fVar4 = *(float *)(iVar12 + 0x4c);
              fVar5 = *(float *)(iVar12 + 0x50);
              fVar6 = *(float *)(iVar12 + 0x54);
              fVar14 = fVar4 - fVar1;
              fVar16 = fVar5 - fVar2;
              fVar15 = fVar6 - fVar3;
              fVar14 = fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14;
              if (fVar14 < 1e-05 == (fVar14 == 1e-05)) {
                puVar20 = (undefined4 *)FUN_00b15770();
                puVar21 = (undefined1 *)*puVar20;
                if (puVar21 == (undefined1 *)0x0) {
                  puVar21 = &DAT_00ded94d;
                }
                FUN_00b15da0("Bind pose scale of the node \'%s\' (%f, %f, %f) does not match the skeletal submotion bind pose scale (%f, %f, %f)."
                             ,puVar21,(double)fVar1,(double)fVar2,(double)fVar3,(double)fVar4,
                             (double)fVar5,(double)fVar6);
                local_c1 = 0;
              }
              fVar1 = *(float *)(iVar13 + 0x10 + *(int *)(param_1 + 0x1c));
              sVar7 = *(short *)(iVar12 + 0x3a);
              iVar22 = iVar13 + 0x10 + *(int *)(param_1 + 0x1c);
              sVar8 = *(short *)(iVar12 + 0x3c);
              fVar2 = *(float *)(iVar22 + 4);
              fVar3 = *(float *)(iVar22 + 8);
              fVar4 = *(float *)(iVar22 + 0xc);
              sVar9 = *(short *)(iVar12 + 0x38);
              sVar10 = *(short *)(iVar12 + 0x3e);
              cVar17 = FUN_00ad87c0();
              if (cVar17 == '\0') {
                puVar20 = (undefined4 *)FUN_00b15770();
                puVar21 = (undefined1 *)*puVar20;
                if (puVar21 == (undefined1 *)0x0) {
                  puVar21 = &DAT_00ded94d;
                }
                FUN_00b15da0("Bind pose scale rotation of the node \'%s\' (%f, %f, %f, %f) does not match the skeletal submotion bind pose scale rotation (%f, %f, %f, %f)."
                             ,puVar21,(double)fVar1,(double)fVar2,(double)fVar3,(double)fVar4,
                             (double)((float)(int)sVar9 * 3.051851e-05),
                             (double)((float)(int)sVar7 * 3.051851e-05),
                             (double)((float)(int)sVar8 * 3.051851e-05),
                             (double)((float)(int)sVar10 * 3.051851e-05));
                local_c1 = 0;
              }
            }
            break;
          }
          uVar19 = uVar19 + 1;
          piVar23 = piVar23 + 1;
        } while (uVar19 < *(uint *)(param_1 + 0x84));
      }
      local_bc = local_bc + 1;
      uVar18 = local_c1;
    } while (local_bc < uVar11);
  }
  return uVar18;
}

