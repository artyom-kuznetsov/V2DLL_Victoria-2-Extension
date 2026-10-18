// FUN_0051f4d0 @ 0051f4d0 body=[[0051f4d0, 0051f6c6] [0051f6ca, 0051f7f4] [0051f7f8, 0051f8bb]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0051f4d0(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int aiStack_48 [4];
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar11 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ced1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  if (DAT_0125ce80 == 0) {
    aiStack_48[3] = 0x3c;
    aiStack_48[2] = 0x51f50e;
    iVar8 = FUN_00aae9af();
    local_8 = 0;
    if (iVar8 == 0) {
      aiStack_48[3] = 0;
    }
    else {
      aiStack_48[3] = 0x51f522;
      aiStack_48[3] = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    aiStack_48[2] = 0x51f533;
    FUN_004dc340();
  }
  iVar8 = *(int *)(*(int *)(DAT_0125ce80 + 0x30) + 0xc4);
  iVar19 = iVar8 + 1;
  aiStack_48[3] = 0x51f551;
  iVar5 = -(iVar19 * 4 + 8);
  puVar18 = &stack0xffffffc8 + iVar5;
  *(int *)((int)aiStack_48 + iVar5 + 0xc) = iVar19 * 4;
  puVar1 = &stack0xffffffcc + iVar5;
  *(undefined4 *)((int)aiStack_48 + iVar5 + 8) = 0;
  *(undefined4 *)(&stack0xffffffc8 + iVar5) = 0xa110ca7e;
  *(undefined1 **)((int)aiStack_48 + iVar5 + 4) = puVar1;
  *(undefined4 *)(&stack0xffffffcc + iVar19 * 4 + iVar5) = 0xa110ca7e;
  *(undefined4 *)((int)aiStack_48 + iVar5) = 0x51f576;
  _memset(*(void **)((int)aiStack_48 + iVar5 + 4),*(int *)((int)aiStack_48 + iVar5 + 8),
          *(size_t *)((int)aiStack_48 + iVar5 + 0xc));
  *(undefined4 *)((int)aiStack_48 + iVar5 + 0xc) = 0x51f580;
  uVar9 = FUN_0050e450();
  piVar2 = *(int **)(iVar11 + 0xe44);
  iVar12 = param_1;
  while (param_1 = iVar12, piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[2];
    iVar21 = *piVar2;
    iVar14 = *(int *)(iVar21 + 0x48);
    bVar6 = false;
    iVar16 = -1;
    local_1c = 0;
    local_18 = 0;
    piVar2 = piVar3;
    iVar11 = iVar12;
    if (0 < (int)(*(int *)(iVar21 + 0x4c) - iVar14 & 0xfffffffcU)) {
      do {
        iVar14 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar14 + local_18 * 4) * 4);
        if (*(int *)(iVar14 + 0x158) != 0) {
          iVar4 = *(int *)(*(int *)(iVar14 + 0x118) + DAT_01258720 * 4);
          iVar10 = 0;
          if (0 < *(int *)(iVar4 + 0x20)) {
            iVar10 = *(int *)(iVar4 + 0x24) / 1000;
          }
          *(int *)(puVar1 + iVar10 * 4) = *(int *)(puVar1 + iVar10 * 4) + 1;
          bVar6 = true;
          if (iVar16 < iVar10) {
            iVar16 = iVar10;
            local_1c = iVar14;
          }
        }
        iVar14 = *(int *)(iVar21 + 0x48);
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(iVar21 + 0x4c) - iVar14 >> 2);
      if (((bVar6) && (-1 < iVar16)) && (local_1c != 0)) {
        *(undefined4 *)((int)aiStack_48 + iVar5 + 0xc) = uVar9;
        *(int *)((int)aiStack_48 + iVar5 + 8) = iVar12;
        *(undefined4 *)((int)aiStack_48 + iVar5 + 4) = 0x51f64d;
        iVar11 = FUN_0051f2e0();
        *(int *)(iVar12 + 0x160) = *(int *)(iVar12 + 0x160) + iVar11;
        *(int *)((int)aiStack_48 + iVar5 + 0xc) = iVar16;
        *(undefined4 *)((int)aiStack_48 + iVar5 + 8) = uVar9;
        *(int *)((int)aiStack_48 + iVar5 + 4) = iVar12;
        *(undefined4 *)((int)aiStack_48 + iVar5) = 0x51f660;
        iVar11 = FUN_0051f3d0();
        *(int *)(iVar12 + 0x16c) = *(int *)(iVar12 + 0x16c) + iVar11;
        iVar12 = param_1;
        iVar11 = param_1;
      }
    }
  }
  if (DAT_0125fdd8 == (undefined4 *)0x0) {
    *(undefined4 *)((int)aiStack_48 + iVar5 + 0xc) = 0x1c;
    *(undefined4 *)((int)aiStack_48 + iVar5 + 8) = 0x51f684;
    iVar12 = FUN_00aae9af();
    local_8 = 1;
    if (iVar12 == 0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      *(undefined4 *)((int)aiStack_48 + iVar5 + 0xc) = 0x51f69c;
      puVar13 = (undefined4 *)FUN_008b0060();
    }
    puVar7 = DAT_0125fdd8;
    local_8 = 2;
    if ((puVar13 != DAT_0125fdd8) && (iVar11 = param_1, DAT_0125fdd8 != (undefined4 *)0x0)) {
      *(undefined4 **)((int)aiStack_48 + iVar5 + 0xc) = DAT_0125fdd8;
      *(undefined4 *)((int)aiStack_48 + iVar5 + 8) = 0x51f6c1;
      FUN_005c1a70();
      *(undefined4 **)((int)aiStack_48 + iVar5 + 0xc) = puVar7;
                    /* WARNING: Subroutine does not return */
      *(undefined **)((int)aiStack_48 + iVar5 + 8) = &UNK_0051f6c7;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    DAT_0125fdd8 = puVar13;
  }
  piVar2 = (int *)(iVar11 + 0x150);
  uVar20 = (int)(DAT_0125fdd8[4] - DAT_0125fdd8[3]) >> 2;
  if (*(int *)(iVar11 + 0x154) - *(int *)(iVar11 + 0x150) >> 2 < (int)uVar20) {
    iVar12 = *(int *)(iVar11 + 0x154);
    uVar15 = iVar12 - *piVar2 >> 2;
    param_1 = 0;
    if (uVar15 < uVar20) {
      *(int **)((int)aiStack_48 + iVar5 + 0xc) = &param_1;
      *(int *)((int)aiStack_48 + iVar5 + 8) = iVar12;
      *(int **)((int)aiStack_48 + iVar5 + 4) = piVar2;
      *(undefined4 *)((int)aiStack_48 + iVar5) = 0x51f727;
      FUN_0043cb20();
    }
    else if ((uVar20 < uVar15) && (iVar21 = *piVar2 + uVar20 * 4, iVar21 != iVar12)) {
      *(undefined4 *)((int)aiStack_48 + iVar5 + 0xc) = 0;
      *(int *)((int)aiStack_48 + iVar5 + 8) = iVar12;
      *(int *)((int)aiStack_48 + iVar5 + 4) = iVar21;
      param_1 = 0;
      *(undefined4 *)((int)aiStack_48 + iVar5) = 0x51f748;
      FID_conflict__memcpy
                (*(void **)((int)aiStack_48 + iVar5 + 4),*(void **)((int)aiStack_48 + iVar5 + 8),
                 *(size_t *)((int)aiStack_48 + iVar5 + 0xc));
      *(int *)(iVar11 + 0x154) = iVar21 + param_1;
    }
  }
  param_1 = 0;
  if (0 < (int)uVar20) {
    do {
      if (DAT_0125fdd8 == (undefined4 *)0x0) {
        *(undefined4 *)(puVar18 + -4) = 0x1c;
        *(undefined4 *)(puVar18 + -8) = 0x51f777;
        puVar13 = (undefined4 *)FUN_00aae9af();
        local_8 = 3;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13[1] = 0x1ff;
          *puVar13 = 0;
          *(undefined4 *)(puVar18 + -4) = 0x7fc;
          puVar17 = puVar18 + -8;
          *(undefined4 *)(puVar18 + -8) = 0x51f7aa;
          uVar9 = FUN_00aad56b();
          *(int *)(puVar17 + -4) = puVar13[1] * 4;
          *(undefined4 *)(puVar17 + -8) = 0;
          *(undefined4 *)(puVar17 + -0xc) = uVar9;
          puVar13[2] = uVar9;
          *(undefined4 *)(puVar17 + -0x10) = 0x51f7bc;
          _memset(*(void **)(puVar17 + -0xc),*(int *)(puVar17 + -8),*(size_t *)(puVar17 + -4));
          puVar18 = puVar17 + 4;
          puVar13[3] = 0;
          puVar13[4] = 0;
          puVar13[5] = 0;
        }
        puVar7 = DAT_0125fdd8;
        local_8 = 4;
        if ((puVar13 != DAT_0125fdd8) && (DAT_0125fdd8 != (undefined4 *)0x0)) {
          *(undefined4 **)(puVar18 + -4) = DAT_0125fdd8;
          *(undefined4 *)(puVar18 + -8) = 0x51f7ec;
          FUN_005c1a70();
          *(undefined4 **)(puVar18 + -4) = puVar7;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar18 + -8) = &UNK_0051f7f5;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        DAT_0125fdd8 = puVar13;
      }
      iVar11 = *(int *)(DAT_0125fdd8[3] + param_1 * 4);
      if (*(char *)(iVar11 + 0x3a) != '\0') {
        if (*(int *)(iVar11 + 0xa4) < 0) {
          *(undefined4 *)(*piVar2 + *(int *)(iVar11 + 0x24) * 4) = 0xffffffff;
        }
        else {
          iVar12 = *(int *)(iVar11 + 0xa0);
          if ((iVar12 < 0) || (iVar19 <= iVar12)) {
            *(undefined4 *)(*piVar2 + *(int *)(iVar11 + 0x24) * 4) = 0;
          }
          else {
            iVar14 = 0;
            iVar16 = 0;
            iVar21 = 0;
            if (1 < iVar19 - iVar12) {
              do {
                iVar14 = iVar14 + *(int *)(puVar1 + iVar12 * 4);
                iVar16 = iVar16 + *(int *)(&stack0xffffffd0 + iVar12 * 4 + iVar5);
                iVar12 = iVar12 + 2;
              } while (iVar12 < iVar8);
            }
            if (iVar12 < iVar19) {
              iVar21 = *(int *)(puVar1 + iVar12 * 4);
            }
            *(int *)(*piVar2 + *(int *)(iVar11 + 0x24) * 4) =
                 *(int *)(iVar11 + 0xa4) * (iVar21 + iVar14 + iVar16);
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < (int)uVar20);
  }
  ExceptionList = local_10;
  return;
}

