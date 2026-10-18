// FUN_00855ed0 @ 00855ed0 body=[[00855ed0, 0085613b] [00856140, 0085646c]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0085629e) */
/* WARNING: Removing unreachable block (ram,0x008562ba) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00855ed0(int param_1,int *param_2,char param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  int iStack_88;
  uint auStack_84 [2];
  uint *puStack_7c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba3b67;
  local_10 = ExceptionList;
  iVar16 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  ExceptionList = &local_10;
  if (DAT_01258a40 == (int *)0x0) {
    puStack_7c = (uint *)0x1d8;
    auStack_84[1] = 0x855f1c;
    ExceptionList = &local_10;
    iVar13 = FUN_00aae9af();
    local_8 = 0;
    if (iVar13 == 0) {
      DAT_01258a40 = (int *)0x0;
    }
    else {
      puStack_7c = (uint *)0x855f34;
      DAT_01258a40 = (int *)FUN_009747a0();
    }
  }
  local_20 = DAT_01258a40;
  local_8 = 0xffffffff;
  uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x60);
  auStack_84[0] = (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2;
  puStack_7c = (uint *)0x0;
  auStack_84[1] = 0x1f40000;
  iStack_88 = uVar1 << 0x1e;
  lVar30 = __alldiv();
  auStack_84[1] = 0x855f87;
  puStack_7c = (uint *)(iVar16 + 0x12e8);
  FUN_00969f90();
  if ((-1 < local_4c) && ((0 < local_4c || (0x20000 < local_50)))) {
    puStack_7c = (uint *)0x855fa3;
    lVar30 = FUN_00b31c36();
  }
  iVar13 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
  puStack_7c = (uint *)0x855fc1;
  iVar11 = iVar13 * -4;
  puVar21 = &stack0xffffff88 + iVar11;
  puVar22 = &stack0xffffff88 + iVar11;
  (&puStack_7c)[-iVar13] =
       (uint *)((*(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2) * 4);
  *(undefined4 *)((int)auStack_84 + (1 - iVar13) * 4) = 0;
  *(undefined1 **)((int)auStack_84 + iVar13 * -4) = &stack0xffffff88 + iVar11;
  (&iStack_88)[-iVar13] = 0x855fd9;
  _memset(*(void **)((int)auStack_84 + iVar13 * -4),*(int *)((int)auStack_84 + (1 - iVar13) * 4),
          (size_t)(&puStack_7c)[-iVar13]);
  iVar13 = *(int *)(iVar16 + 0x1310);
  uVar1 = *(uint *)(iVar16 + 0x12e8);
  uVar19 = ((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11;
  if (uVar1 == 0) {
    ExceptionList = local_10;
    return;
  }
  iVar14 = param_2[1] - *param_2 >> 2;
  local_24 = 0;
  if (0 < iVar14) {
    do {
      pcVar2 = *(code **)(**(int **)(*param_2 + local_24 * 4) + 0x34);
      puVar22 = puVar21 + -4;
      *(undefined4 *)(puVar21 + -4) = 0x85602c;
      cVar12 = (*pcVar2)();
      if (cVar12 != '\0') {
        pcVar2 = *(code **)(**(int **)(*(int *)(*param_2 + local_24 * 4) + 0x54) + 0x18);
        puVar23 = (undefined4 *)(puVar22 + -4);
        puVar22 = puVar22 + -4;
        *puVar23 = 0x856043;
        cVar12 = (*pcVar2)();
        if (cVar12 != '\0') {
          iVar17 = *(int *)(*(int *)(*param_2 + local_24 * 4) + 0x54);
          iVar3 = *(int *)(*(int *)(*(int *)(iVar16 + 0x860) + *(int *)(iVar17 + 0x50) * 4) + 0x50);
          if (param_3 != '\0') {
            iVar3 = *(int *)(*(int *)(*(int *)(iVar16 + 0x850) + *(int *)(iVar17 + 0x50) * 4) + 0x50
                            );
          }
          iVar15 = *(int *)(iVar17 + 0xc) - *(int *)(iVar17 + 8) >> 2;
          local_38 = 0;
          if (0 < iVar15) {
            do {
              iVar4 = *(int *)(*(int *)(*(int *)(iVar17 + 8) + local_38 * 4) + 0x50);
              *(int *)(&stack0xffffff88 + iVar4 * 4 + iVar11) =
                   *(int *)(&stack0xffffff88 + iVar4 * 4 + iVar11) + *(int *)(iVar13 + iVar4 * 4);
              iVar20 = *(int *)(iVar17 + 0xc) - *(int *)(iVar17 + 8) >> 2;
              local_34 = 0;
              if (0 < iVar20) {
                do {
                  iVar5 = *(int *)(*(int *)(*(int *)(iVar17 + 8) + local_34 * 4) + 0x50);
                  iVar6 = *(int *)(iVar13 + iVar5 * 4);
                  if (iVar4 < iVar3) {
                    if (iVar5 < iVar4) {
LAB_008560ef:
                      *(int *)(&stack0xffffff88 + iVar4 * 4 + iVar11) =
                           *(int *)(&stack0xffffff88 + iVar4 * 4 + iVar11) + iVar6;
                    }
                    else {
                      if (iVar5 <= iVar4) goto LAB_008560df;
                      *(int *)(&stack0xffffff88 + iVar4 * 4 + iVar11) =
                           *(int *)(&stack0xffffff88 + iVar4 * 4 + iVar11) - iVar6;
                    }
                  }
                  else {
LAB_008560df:
                    if (iVar3 < iVar4) {
                      if (iVar5 < iVar4) {
                        *(int *)(&stack0xffffff88 + iVar4 * 4 + iVar11) =
                             *(int *)(&stack0xffffff88 + iVar4 * 4 + iVar11) - iVar6;
                      }
                      else if (iVar4 < iVar5) goto LAB_008560ef;
                    }
                  }
                  local_34 = local_34 + 1;
                } while (local_34 < iVar20);
              }
              local_38 = local_38 + 1;
            } while (local_38 < iVar15);
          }
        }
      }
      local_24 = local_24 + 1;
      puVar21 = puVar22;
    } while (local_24 < iVar14);
  }
  iVar14 = 0;
  iVar13 = *(int *)(iVar16 + 0x1594) - *(int *)(iVar16 + 0x1590) >> 2;
  if (0 < iVar13) {
    do {
      iVar17 = *(int *)(*(int *)(iVar16 + 0x1590) + iVar14 * 4);
      iVar3 = *(int *)(iVar17 + 0xc);
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x50);
        iVar15 = *(int *)(&stack0xffffff88 + iVar3 * 4 + iVar11);
        *(int *)(&stack0xffffff88 + iVar3 * 4 + iVar11) = iVar15 * 2;
        *(int *)(&stack0xffffff88 + iVar3 * 4 + iVar11) = iVar15 * 2 + *(int *)(iVar17 + 0x28) * 2;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar13);
  }
  iVar16 = param_2[1] - *param_2 >> 2;
  local_28 = 0;
  if (0 < iVar16) {
    do {
      pcVar2 = *(code **)(**(int **)(*param_2 + local_28 * 4) + 0x34);
      puVar24 = (undefined4 *)(puVar22 + -4);
      puVar22 = puVar22 + -4;
      *puVar24 = 0x856193;
      cVar12 = (*pcVar2)();
      if (cVar12 != '\0') {
        pcVar2 = *(code **)(**(int **)(*(int *)(*param_2 + local_28 * 4) + 0x54) + 0x18);
        puVar25 = (undefined4 *)(puVar22 + -4);
        puVar22 = puVar22 + -4;
        *puVar25 = 0x8561aa;
        cVar12 = (*pcVar2)();
        if (cVar12 != '\0') {
          iVar13 = *(int *)(*(int *)(*param_2 + local_28 * 4) + 0x54);
          iVar14 = *(int *)(iVar13 + 0xc) - *(int *)(iVar13 + 8) >> 2;
          local_1c = 0;
          if (0 < iVar14) {
            do {
              piVar7 = *(int **)(*(int *)(iVar13 + 8) + local_1c * 4);
              pcVar2 = *(code **)(*piVar7 + 0x34);
              puVar26 = (undefined4 *)(puVar22 + -4);
              puVar22 = puVar22 + -4;
              *puVar26 = 0x8561eb;
              cVar12 = (*pcVar2)();
              if (cVar12 != '\0') {
                uVar8 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
                if (param_3 == '\0') {
                  *(int **)(puVar22 + -4) = piVar7;
                  *(int *)(puVar22 + -8) = iVar13;
                  *(undefined4 *)(puVar22 + -0xc) = uVar8;
                  *(undefined4 *)(puVar22 + -0x10) = 0x856243;
                  cVar12 = FUN_00525be0();
                  if (cVar12 != '\0') {
                    iVar17 = piVar7[0x14];
                    goto LAB_00856251;
                  }
                }
                else {
                  *(int **)(puVar22 + -4) = piVar7;
                  *(int *)(puVar22 + -8) = iVar13;
                  *(undefined4 *)(puVar22 + -0xc) = uVar8;
                  *(undefined4 *)(puVar22 + -0x10) = 0x856228;
                  cVar12 = FUN_00525a20();
                  if (cVar12 != '\0') {
                    iVar17 = piVar7[0x14];
LAB_00856251:
                    uVar9 = *(uint *)(&stack0xffffff88 + iVar17 * 4 + iVar11);
                    uVar10 = *(uint *)(&stack0xffffff88 + local_20[0x14] * 4 + iVar11);
                    *(uint *)(puVar22 + -4) = uVar19;
                    *(uint *)(puVar22 + -8) = uVar1 << 0xf;
                    *(uint *)(puVar22 + -0xc) = ((int)uVar9 >> 0x1f) << 0x1e | uVar9 >> 2;
                    *(uint *)(puVar22 + -0x10) = uVar9 << 0x1e;
                    *(undefined4 *)(puVar22 + -0x14) = 0x856274;
                    lVar31 = __alldiv();
                    *(uint *)(puVar22 + -4) = uVar19;
                    *(uint *)(puVar22 + -8) = uVar1 << 0xf;
                    *(uint *)(puVar22 + -0xc) = ((int)uVar10 >> 0x1f) << 0x1e | uVar10 >> 2;
                    *(uint *)(puVar22 + -0x10) = uVar10 << 0x1e;
                    *(undefined4 *)(puVar22 + -0x14) = 0x856292;
                    lVar32 = __alldiv();
                    if (lVar30 < lVar31) {
                      pcVar2 = *(code **)(*local_20 + 0x34);
                      puVar27 = (undefined4 *)(puVar22 + -4);
                      puVar22 = puVar22 + -4;
                      *puVar27 = 0x8562b0;
                      cVar12 = (*pcVar2)();
                      if ((cVar12 == '\0') || (lVar32 < lVar31)) {
                        local_20 = piVar7;
                      }
                    }
                  }
                }
              }
              local_1c = local_1c + 1;
            } while (local_1c < iVar14);
          }
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < iVar16);
  }
  pcVar2 = *(code **)(*local_20 + 0x34);
  puVar28 = puVar22 + -4;
  *(undefined4 *)(puVar22 + -4) = 0x8562fc;
  cVar12 = (*pcVar2)();
  if (cVar12 == '\0') {
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(puVar28 + -4) = 0x4c;
  *(undefined4 *)(puVar28 + -8) = 0x85630b;
  puVar18 = (undefined4 *)FUN_00aae9af();
  if (param_3 == '\0') {
    if (puVar18 == (undefined4 *)0x0) goto LAB_00856422;
    local_58 = *(undefined4 *)(param_1 + 0x34);
    _param_3 = local_20[0x15];
    local_54 = *(undefined4 *)(param_1 + 0x38);
    puVar18[1] = 0x18d;
    *puVar18 = CCommand::vftable;
    puVar18[7] = 0xf;
    puVar18[6] = 0;
    *(undefined1 *)(puVar18 + 2) = 0;
    local_8 = 4;
    puVar18[0xb] = 0x639;
    puVar18[0xc] = 0x639;
    *(undefined4 *)(puVar28 + -4) = 0;
    *(undefined1 **)(puVar28 + -8) = &DAT_00ded94d;
    *(undefined2 *)(puVar18 + 0xd) = 0xffff;
    *(undefined4 *)(puVar28 + -0xc) = 0x8563f3;
    FUN_00409350();
    *puVar18 = CSetPoliticalReformCommand::vftable;
  }
  else {
    if (puVar18 == (undefined4 *)0x0) {
LAB_00856422:
      puVar18 = (undefined4 *)0x0;
      goto LAB_00856424;
    }
    _param_3 = local_20[0x15];
    local_58 = *(undefined4 *)(param_1 + 0x34);
    local_54 = *(undefined4 *)(param_1 + 0x38);
    puVar18[1] = 0x18d;
    *puVar18 = CCommand::vftable;
    puVar18[7] = 0xf;
    puVar18[6] = 0;
    *(undefined1 *)(puVar18 + 2) = 0;
    local_8 = 2;
    *(undefined4 *)(puVar28 + -4) = 0;
    puVar18[0xb] = 0x63a;
    puVar18[0xc] = 0x63a;
    *(undefined1 **)(puVar28 + -8) = &DAT_00ded94d;
    *(undefined2 *)(puVar18 + 0xd) = 0xffff;
    *(undefined4 *)(puVar28 + -0xc) = 0x856382;
    FUN_00409350();
    *puVar18 = CSetSocialReformCommand::vftable;
  }
  puVar18[0xe] = 0;
  *(undefined2 *)((int)puVar18 + 0x36) = 0;
  *(undefined2 *)(puVar18 + 10) = 0;
  puVar18[9] = 0;
  puVar18[0xf] = local_58;
  puVar18[0x10] = local_54;
  puVar18[0x11] = _param_3;
  puVar18[0x12] = local_20;
LAB_00856424:
  local_8 = 0xffffffff;
  pcVar2 = *(code **)(**(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4)
                                + 0xcdc) + 0x44);
  puVar29 = puVar28 + -4;
  *(undefined4 *)(puVar28 + -4) = 0x85644c;
  iVar16 = (*pcVar2)();
  pcVar2 = *(code **)(**(int **)(iVar16 + 0x38) + 0x18);
  *(undefined4 **)(puVar29 + -4) = puVar18;
  *(undefined4 *)(puVar29 + -8) = 0x856457;
  (*pcVar2)();
  ExceptionList = local_10;
  return;
}

