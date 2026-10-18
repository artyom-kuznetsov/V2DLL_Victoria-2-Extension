// FUN_0098d860 @ 0098d860 body=[[0098d860, 0098d93d] [0098d940, 0098dd88]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0098d860(void)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  float *pfVar14;
  int iVar15;
  undefined1 *puVar16;
  int unaff_EDI;
  int aiStack_44 [4];
  float local_20;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar15 = *(int *)(unaff_EDI + 0x14c) - *(int *)(unaff_EDI + 0x148) >> 3;
  if (2 < iVar15) {
    aiStack_44[3] = 0x98d88c;
    iVar8 = -(iVar15 * 8 + 8);
    puVar16 = &stack0xffffffd0 + iVar8;
    *(undefined4 *)(&stack0xffffffcc + iVar8) = 0xa110ca7e;
    *(undefined4 *)(puVar16 + iVar15 * 8) = 0xa110ca7e;
    local_1c = puVar16;
    if (*(int *)(unaff_EDI + 0x15c) == -1) {
      local_8 = 1;
    }
    else {
      local_8 = *(int *)(unaff_EDI + 0x15c);
    }
    local_20 = (float)((*(int *)(unaff_EDI + 0x14c) - *(int *)(unaff_EDI + 0x148) >> 3) + -1);
    iVar15 = local_8;
    puVar13 = local_1c;
    if (local_8 < (int)local_20) {
      iVar1 = local_8;
      fVar3 = local_20;
      iVar7 = local_8;
      if (3 < (int)local_20 - local_8) {
        local_18 = 0x10 - (int)puVar16;
        local_14 = 8 - (int)puVar16;
        iVar15 = local_8 * 8 + 0x10;
        pfVar14 = (float *)(puVar16 + iVar15);
        local_c = (((int)local_20 - local_8) - 4U >> 2) + 1;
        iVar1 = local_8 + local_c * 4;
        local_10 = -0x10 - (int)puVar16;
        do {
          iVar12 = local_10;
          iVar7 = *(int *)(unaff_EDI + 0x148);
          fVar3 = *(float *)((int)pfVar14 + iVar7 + 0xc + local_10);
          fVar4 = *(float *)((int)pfVar14 + iVar7 + -4 + local_10);
          fVar5 = *(float *)((int)pfVar14 + iVar7 + 4 + local_10);
          pfVar14[-4] = *(float *)((int)pfVar14 + iVar7 + local_10) * 0.25 +
                        (*(float *)((int)pfVar14 + iVar7 + -8 + local_10) +
                        *(float *)((int)pfVar14 + iVar7 + 8 + local_10)) * 0.5 * 0.75;
          pfVar14[-3] = fVar5 * 0.25 + (fVar4 + fVar3) * 0.5 * 0.75;
          iVar11 = local_14;
          iVar7 = *(int *)(unaff_EDI + 0x148);
          fVar3 = *(float *)(iVar7 + 4 + iVar15);
          fVar4 = *(float *)((int)pfVar14 + iVar7 + 0xc + iVar12);
          fVar5 = *(float *)((int)pfVar14 + iVar7 + 4 + iVar12);
          pfVar14[-2] = *(float *)((int)pfVar14 + iVar7 + 8 + iVar12) * 0.25 +
                        (*(float *)((int)pfVar14 + iVar7 + iVar12) + *(float *)(iVar7 + iVar15)) *
                        0.5 * 0.75;
          pfVar14[-1] = fVar4 * 0.25 + (fVar5 + fVar3) * 0.5 * 0.75;
          iVar10 = local_18;
          iVar7 = *(int *)(unaff_EDI + 0x148);
          fVar3 = *(float *)(iVar7 + 4 + iVar15);
          fVar4 = *(float *)((int)pfVar14 + iVar7 + 4 + iVar11);
          fVar5 = *(float *)((int)pfVar14 + iVar7 + 0xc + iVar12);
          *pfVar14 = *(float *)(iVar7 + iVar15) * 0.25 +
                     (*(float *)((int)pfVar14 + iVar7 + 8 + iVar12) +
                     *(float *)((int)pfVar14 + iVar7 + iVar11)) * 0.5 * 0.75;
          pfVar14[1] = fVar3 * 0.25 + (fVar5 + fVar4) * 0.5 * 0.75;
          iVar7 = *(int *)(unaff_EDI + 0x148);
          fVar3 = *(float *)(iVar10 + iVar7 + 4 + (int)pfVar14);
          fVar4 = *(float *)(iVar7 + 4 + iVar15);
          fVar5 = *(float *)((int)pfVar14 + iVar7 + 4 + iVar11);
          pfVar14[2] = *(float *)((int)pfVar14 + iVar7 + iVar11) * 0.25 +
                       (*(float *)(iVar7 + iVar15) + *(float *)(iVar10 + iVar7 + (int)pfVar14)) *
                       0.5 * 0.75;
          pfVar14[3] = fVar5 * 0.25 + (fVar4 + fVar3) * 0.5 * 0.75;
          iVar15 = iVar15 + 0x20;
          pfVar14 = pfVar14 + 8;
          local_c = local_c + -1;
          fVar3 = local_20;
          puVar13 = local_1c;
          iVar7 = local_8;
        } while (local_c != 0);
      }
      for (; iVar15 = local_8, puVar16 = local_1c, fVar4 = local_20, bVar9 = iVar1 < (int)local_20,
          local_20 = fVar3, local_8 = iVar7, bVar9; iVar1 = iVar1 + 1) {
        iVar7 = *(int *)(unaff_EDI + 0x148);
        fVar3 = *(float *)(iVar7 + 0xc + iVar1 * 8);
        fVar5 = *(float *)(iVar7 + 4 + iVar1 * 8);
        pfVar14 = (float *)(iVar7 + iVar1 * 8);
        fVar6 = pfVar14[-1];
        pfVar2 = (float *)(local_1c + iVar1 * 8);
        local_1c = puVar13;
        *pfVar2 = *pfVar14 * 0.25 +
                  (*(float *)(iVar7 + -8 + iVar1 * 8) + *(float *)(iVar7 + 8 + iVar1 * 8)) * 0.5 *
                  0.75;
        *(float *)(puVar16 + iVar1 * 8 + 4) = fVar5 * 0.25 + (fVar6 + fVar3) * 0.5 * 0.75;
        fVar3 = local_20;
        puVar13 = local_1c;
        iVar7 = local_8;
        local_8 = iVar15;
        local_1c = puVar16;
        local_20 = fVar4;
      }
    }
    local_1c = puVar13;
    iVar1 = *(int *)(unaff_EDI + 0x148);
    *(int *)((int)aiStack_44 + iVar8 + 0xc) =
         ((*(int *)(unaff_EDI + 0x14c) - iVar1 >> 3) - iVar15) * 8 + -8;
    *(undefined1 **)((int)aiStack_44 + iVar8 + 8) = puVar16 + iVar15 * 8;
    *(int *)((int)aiStack_44 + iVar8 + 4) = iVar1 + iVar15 * 8;
    *(undefined4 *)((int)aiStack_44 + iVar8) = 0x98dd77;
    FID_conflict__memcpy
              (*(void **)((int)aiStack_44 + iVar8 + 4),*(void **)((int)aiStack_44 + iVar8 + 8),
               *(size_t *)((int)aiStack_44 + iVar8 + 0xc));
    *(int *)((int)aiStack_44 + iVar8 + 0xc) = unaff_EDI;
    *(undefined4 *)((int)aiStack_44 + iVar8 + 8) = 0x98dd80;
    FUN_0098dd90();
  }
  return;
}

