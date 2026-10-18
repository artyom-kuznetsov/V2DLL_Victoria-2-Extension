// FUN_008363f0 @ 008363f0 body=[[008363f0, 008365f9] [00836600, 0083676c] [00836770, 0083678c] [00836790, 0083694c] [00836950, 00836e6a]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_008363f0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int **ppiVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int **ppiVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  int iStack_9c;
  longlong lStack_98;
  size_t asStack_90 [2];
  int local_78;
  uint local_74;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  int *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar5 = DAT_012588e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ad6b;
  local_10 = ExceptionList;
  piVar8 = *(int **)(DAT_012588e8 + 0xbe0);
  iVar19 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  iVar3 = *(int *)(DAT_012588e8 + 0xbe4) - (int)piVar8 >> 2;
  local_34 = (int *)0xffffffff;
  piVar12 = (int *)0x0;
  local_28 = iVar19;
  local_20 = DAT_012588e8;
  if (0 < iVar3) {
    do {
      if (*piVar8 == iVar19) {
        local_34 = piVar12;
      }
      piVar12 = (int *)((int)piVar12 + 1);
      piVar8 = piVar8 + 1;
    } while ((int)piVar12 < iVar3);
    if (local_34 != (int *)0xffffffff) {
      iVar18 = (*(int *)(iVar19 + 0x141c) - *(int *)(iVar19 + 0x1418) >> 3) +
               *(int *)(iVar19 + 0x3e4) + *(int *)(iVar19 + 0x470);
      asStack_90[1] = 0x83648e;
      iVar3 = iVar18 * -100;
      asStack_90[iVar18 * -0x19 + 1] = iVar18 * 100;
      asStack_90[iVar18 * -0x19] = 0;
      asStack_90[iVar18 * -0x19 + -1] = (size_t)(local_68 + iVar3 + -0x20);
      local_1c = (int *)(local_68 + iVar3 + -0x20);
      local_18 = 0;
      *(undefined4 *)((int)&lStack_98 + iVar3) = 0x8364a3;
      ExceptionList = &local_10;
      _memset((void *)asStack_90[iVar18 * -0x19 + -1],asStack_90[iVar18 * -0x19],
              asStack_90[iVar18 * -0x19 + 1]);
      puVar17 = local_68 + iVar3 + -0x20;
      local_24 = (int *)(*(int *)(iVar5 + 0xbe4) - *(int *)(iVar5 + 0xbe0) >> 2);
      if (7 < (int)local_24) {
        local_24 = (int *)&DAT_00000008;
      }
      iVar5 = *(int *)(DAT_012586dc + 0x30);
      local_3c = *(int **)(iVar5 + 0x378);
      local_40 = *(int **)(iVar5 + 0x370);
      ppiVar10 = &local_40;
      if ((int)*(int **)(iVar5 + 0x378) <= (int)*(int **)(iVar5 + 0x370)) {
        ppiVar10 = &local_3c;
      }
      local_3c = *ppiVar10;
      local_40 = *(int **)(iVar5 + 0x3a0);
      ppiVar4 = &local_40;
      if ((int)*ppiVar10 <= (int)*(int **)(iVar5 + 0x3a0)) {
        ppiVar4 = &local_3c;
      }
      local_3c = *ppiVar4;
      local_40 = *(int **)(iVar5 + 0x3c0);
      ppiVar10 = &local_40;
      if ((int)*ppiVar4 <= (int)*(int **)(iVar5 + 0x3c0)) {
        ppiVar10 = &local_3c;
      }
      local_3c = *ppiVar10;
      local_40 = *(int **)(iVar5 + 0x3d0);
      ppiVar4 = &local_40;
      if ((int)*ppiVar10 <= (int)*(int **)(iVar5 + 0x3d0)) {
        ppiVar4 = &local_3c;
      }
      local_4c = *ppiVar4;
      local_3c = local_1c;
      local_38 = (int *)((*(int *)(iVar19 + 0x141c) - *(int *)(iVar19 + 0x1418) >> 3) + 500);
      uVar2 = *(uint *)(iVar19 + 0x1418);
      while ((uVar14 = uVar2, piVar8 = local_3c, *(uint *)(iVar19 + 0x1418) <= uVar14 &&
             (uVar14 < *(uint *)(iVar19 + 0x141c)))) {
        local_18 = local_18 + 1;
        iVar5 = *(int *)(uVar14 + 4);
        local_3c = local_3c + 0x19;
        asStack_90[iVar18 * -0x19 + 1] = uVar14;
        piVar8[1] = (int)local_38;
        asStack_90[iVar18 * -0x19] = (size_t)&local_40;
        local_74 = uVar14 + 8;
        *piVar8 = iVar5;
        local_38 = (int *)((int)local_38 + -1);
        asStack_90[iVar18 * -0x19 + -1] = 0x8365ad;
        FUN_008362b0();
        piVar12 = local_40;
        if (0 < (int)local_40) {
          asStack_90[iVar18 * -0x19 + 1] = 0;
          asStack_90[iVar18 * -0x19] = 100000;
          asStack_90[iVar18 * -0x19 + -1] = (int)piVar12 >> 0x1f;
          *(int **)((int)&lStack_98 + iVar3) = piVar12;
          (&iStack_9c)[iVar18 * -0x19] = 0x8365c3;
          uVar20 = __allmul();
          asStack_90[iVar18 * -0x19 + 1] = 0;
          asStack_90[iVar18 * -0x19] = 1000;
          asStack_90[iVar18 * -0x19 + -1] = (int)((ulonglong)uVar20 >> 0x20);
          *(int *)((int)&lStack_98 + iVar3) = (int)uVar20;
          (&iStack_9c)[iVar18 * -0x19] = 0x8365d1;
          iVar5 = __alldiv();
          piVar8[1] = piVar8[1] + iVar5 / 1000;
        }
        local_30 = (int *)0x0;
        uVar2 = uVar14 + 8;
        if (0 < (int)local_24) {
          do {
            piVar12 = (int *)(*(int *)(local_20 + 0xbe0) + (int)local_30 * 4);
            iVar19 = *(int *)(*(int *)(*(int *)(*(int *)(local_20 + 0xbe0) + (int)local_30 * 4) +
                                      0xbe8) + *(int *)(uVar14 + 4) * 4);
            iVar5 = *piVar12;
            asStack_90[iVar18 * -0x19 + 1] = uVar14;
            asStack_90[iVar18 * -0x19] = iVar5 + 0x1c;
            asStack_90[iVar18 * -0x19 + -1] = (size_t)local_50;
            *(int *)((int)&lStack_98 + iVar3) = iVar19;
            (&iStack_9c)[iVar18 * -0x19] = 0x836632;
            piVar6 = (int *)FUN_0092f630();
            asStack_90[iVar18 * -0x19 + 1] = uVar14;
            iVar5 = *piVar12;
            local_2c = piVar6;
            asStack_90[iVar18 * -0x19] = (size_t)local_54;
            asStack_90[iVar18 * -0x19 + -1] = iVar5;
            *(undefined4 *)((int)&lStack_98 + iVar3) = 0x836645;
            piVar12 = (int *)FUN_00532370();
            iVar5 = *piVar12;
            iVar7 = *local_2c;
            asStack_90[iVar18 * -0x19 + 1] = 0;
            asStack_90[iVar18 * -0x19] = 1000;
            *(longlong *)((int)&lStack_98 + iVar3) = (longlong)iVar7 * (longlong)iVar5;
            (&iStack_9c)[iVar18 * -0x19] = 0x83665c;
            iVar7 = __alldiv();
            piVar12 = local_30;
            piVar8[(int)local_30 + 2] = iVar7;
            iVar5 = 100000;
            if (DAT_01258a08 == 0) {
              iVar5 = *(int *)(iVar19 + 0x48);
            }
            piVar8[(int)local_30 + 10] = iVar5;
            if (local_30 == local_34) {
              iVar5 = *(int *)(*(int *)(local_20 + 0xbe0) + (int)local_30 * 4);
              asStack_90[iVar18 * -0x19 + 1] = uVar14;
              asStack_90[iVar18 * -0x19] = iVar5 + 0x1c;
              asStack_90[iVar18 * -0x19 + -1] = (size_t)local_58;
              *(int *)((int)&lStack_98 + iVar3) = iVar19;
              (&iStack_9c)[iVar18 * -0x19] = 0x83671b;
              piVar6 = (int *)FUN_0092f630();
              piVar8[0x15] = *piVar6;
              if (DAT_01258a08 == 0) {
                iVar19 = *(int *)(iVar19 + 0x48);
              }
              else {
                iVar19 = 100000;
              }
              piVar8[0x16] = iVar19;
            }
            else if (((iVar7 != 0) &&
                     (local_6c = *(undefined4 *)(iVar19 + 8),
                     *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar19 + 0xc) * 4) +
                              0x31) == '\0')) && (2 < *(int *)(iVar19 + 0x40))) {
              piVar8[0x12] = piVar8[0x12] + 1;
              iVar5 = (int)local_30 + 2;
              local_2c = (int *)piVar8[iVar5];
              local_30 = (int *)piVar8[0x14];
              ppiVar10 = &local_30;
              if (piVar8[0x14] <= piVar8[iVar5]) {
                ppiVar10 = &local_2c;
              }
              piVar8[0x14] = (int)*ppiVar10;
              local_6c = *(undefined4 *)(iVar19 + 8);
              if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar19 + 0xc) * 4) + 0x31
                           ) == '\0') {
                iVar19 = *(int *)(iVar19 + 0x40);
              }
              else {
                iVar19 = 1;
              }
              iVar5 = piVar8[0x13];
              if (piVar8[0x13] <= iVar19) {
                iVar5 = iVar19;
              }
              piVar8[0x13] = iVar5;
            }
            local_30 = (int *)((int)piVar12 + 1);
            uVar2 = local_74;
            iVar19 = local_28;
          } while ((int)local_30 < (int)local_24);
        }
      }
      local_3c = *(int **)(iVar19 + 0x468);
      if (local_3c != (int *)0x0) {
        local_40 = local_1c + local_18 * 0x19;
        do {
          piVar9 = local_24;
          piVar6 = local_40;
          piVar8 = local_3c + 2;
          piVar12 = (int *)*local_3c;
          iVar19 = 0;
          local_3c = (int *)*piVar8;
          local_30 = piVar12;
          if (0 < local_18) {
            piVar13 = local_1c;
            do {
              if (*piVar13 == piVar12[3]) goto LAB_00836905;
              iVar19 = iVar19 + 1;
              piVar13 = piVar13 + 0x19;
            } while (iVar19 < local_18);
          }
          local_18 = local_18 + 1;
          piVar13 = local_40 + 0x19;
          *local_40 = piVar12[3];
          local_40 = piVar13;
          piVar6[1] = piVar12[4];
          local_38 = (int *)0x0;
          if (0 < (int)piVar9) {
            do {
              piVar9 = local_38;
              iVar7 = (int)local_38 * 4;
              piVar8 = (int *)(iVar7 + *(int *)(local_20 + 0xbe0));
              piVar12 = *(int **)(*(int *)(*piVar8 + 0xbe8) + local_30[3] * 4);
              iVar19 = *piVar8;
              asStack_90[iVar18 * -0x19 + 1] = (size_t)(local_30 + 2);
              asStack_90[iVar18 * -0x19] = iVar19 + 0x1c;
              asStack_90[iVar18 * -0x19 + -1] = (size_t)local_5c;
              *(int **)((int)&lStack_98 + iVar3) = piVar12;
              local_2c = piVar12;
              (&iStack_9c)[iVar18 * -0x19] = 0x83680b;
              local_44 = (int *)FUN_0092f630();
              iVar19 = *piVar8;
              asStack_90[iVar18 * -0x19 + 1] = (size_t)(local_30 + 2);
              asStack_90[iVar18 * -0x19] = (size_t)local_60;
              asStack_90[iVar18 * -0x19 + -1] = iVar19;
              *(undefined4 *)((int)&lStack_98 + iVar3) = 0x836821;
              piVar8 = (int *)FUN_00532370();
              iVar19 = *piVar8;
              iVar5 = *local_44;
              asStack_90[iVar18 * -0x19 + 1] = 0;
              asStack_90[iVar18 * -0x19] = 1000;
              *(longlong *)((int)&lStack_98 + iVar3) = (longlong)iVar19 * (longlong)iVar5;
              (&iStack_9c)[iVar18 * -0x19] = 0x836836;
              iVar19 = __alldiv();
              piVar12 = local_2c;
              piVar8 = local_38;
              piVar6[(int)piVar9 + 2] = iVar19;
              if (DAT_01258a08 == 0) {
                iVar5 = local_2c[0x12];
              }
              else {
                iVar5 = 100000;
              }
              piVar6[(int)piVar9 + 10] = iVar5;
              if (local_38 == local_34) {
                iVar19 = *(int *)(*(int *)(local_20 + 0xbe0) + iVar7);
                asStack_90[iVar18 * -0x19 + 1] = (size_t)(local_30 + 2);
                asStack_90[iVar18 * -0x19] = iVar19 + 0x1c;
                asStack_90[iVar18 * -0x19 + -1] = (size_t)local_64;
                *(int **)((int)&lStack_98 + iVar3) = piVar12;
                (&iStack_9c)[iVar18 * -0x19] = 0x8368dd;
                piVar9 = (int *)FUN_0092f630();
                piVar6[0x15] = *piVar9;
                if (DAT_01258a08 == 0) {
                  iVar19 = piVar12[0x12];
                }
                else {
                  iVar19 = 100000;
                }
                piVar6[0x16] = iVar19;
              }
              else if (iVar19 != 0) {
                piVar6[0x12] = piVar6[0x12] + 1;
                piVar12 = local_2c;
                local_44 = (int *)piVar6[0x14];
                local_38 = (int *)piVar6[(int)piVar9 + 2];
                ppiVar10 = &local_44;
                if (piVar6[0x14] <= piVar6[(int)piVar9 + 2]) {
                  ppiVar10 = &local_38;
                }
                piVar6[0x14] = (int)*ppiVar10;
                if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar12[3] * 4) + 0x31) == '\0')
                {
                  iVar19 = piVar12[0x10];
                }
                else {
                  iVar19 = 1;
                }
                iVar5 = piVar6[0x13];
                if (piVar6[0x13] <= iVar19) {
                  iVar5 = iVar19;
                }
                piVar6[0x13] = iVar5;
              }
              local_38 = (int *)((int)piVar8 + 1);
            } while ((int)local_38 < (int)local_24);
          }
LAB_00836905:
        } while (local_3c != (int *)0x0);
      }
      local_3c = *(int **)(local_28 + 0x3dc);
      if (local_3c != (int *)0x0) {
        local_40 = local_1c + local_18 * 0x19;
        do {
          piVar6 = local_40;
          piVar8 = (int *)local_3c[2];
          piVar12 = (int *)*local_3c;
          iVar19 = 0;
          local_3c = piVar8;
          local_2c = piVar12;
          if (0 < local_18) {
            piVar8 = local_1c;
            do {
              if (*piVar8 == piVar12[3]) goto LAB_00836b20;
              iVar19 = iVar19 + 1;
              piVar8 = piVar8 + 0x19;
            } while (iVar19 < local_18);
          }
          if ((99 < piVar12[4]) &&
             (local_48 = piVar12[2],
             *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + piVar12[3] * 4) + 0x31) == '\0')) {
            local_18 = local_18 + 1;
            *(undefined1 *)(local_40 + 0x17) = 1;
            piVar8 = local_40 + 0x19;
            *local_40 = piVar12[3];
            local_40 = piVar8;
            piVar8 = local_24;
            piVar6[1] = piVar12[4] + -100;
            local_30 = (int *)0x0;
            if (0 < (int)piVar8) {
              do {
                piVar8 = (int *)((int)local_30 * 4 + *(int *)(local_20 + 0xbe0));
                iVar19 = *(int *)(*(int *)(*piVar8 + 0xbe8) + local_2c[3] * 4);
                iVar5 = *piVar8;
                asStack_90[iVar18 * -0x19 + 1] = (size_t)(local_2c + 2);
                asStack_90[iVar18 * -0x19] = iVar5 + 0x1c;
                asStack_90[iVar18 * -0x19 + -1] = (size_t)local_68;
                *(int *)((int)&lStack_98 + iVar3) = iVar19;
                (&iStack_9c)[iVar18 * -0x19] = 0x8369fb;
                local_44 = (int *)FUN_0092f630();
                iVar5 = *piVar8;
                asStack_90[iVar18 * -0x19 + 1] = (size_t)(local_2c + 2);
                asStack_90[iVar18 * -0x19] = (size_t)&local_70;
                asStack_90[iVar18 * -0x19 + -1] = iVar5;
                *(undefined4 *)((int)&lStack_98 + iVar3) = 0x836a11;
                piVar8 = (int *)FUN_00532370();
                iVar5 = *piVar8;
                iVar7 = *local_44;
                asStack_90[iVar18 * -0x19 + 1] = 0;
                asStack_90[iVar18 * -0x19] = 1000;
                *(longlong *)((int)&lStack_98 + iVar3) = (longlong)iVar5 * (longlong)iVar7;
                (&iStack_9c)[iVar18 * -0x19] = 0x836a28;
                iVar7 = __alldiv();
                piVar8 = local_30;
                piVar6[(int)local_30 + 2] = iVar7;
                iVar5 = 100000;
                if (DAT_01258a08 == 0) {
                  iVar5 = *(int *)(iVar19 + 0x48);
                }
                piVar6[(int)local_30 + 10] = iVar5;
                if (local_30 == local_34) {
                  iVar5 = *(int *)(*(int *)(local_20 + 0xbe0) + (int)local_30 * 4);
                  asStack_90[iVar18 * -0x19 + 1] = (size_t)(local_2c + 2);
                  asStack_90[iVar18 * -0x19] = iVar5 + 0x1c;
                  asStack_90[iVar18 * -0x19 + -1] = (size_t)&local_78;
                  *(int *)((int)&lStack_98 + iVar3) = iVar19;
                  (&iStack_9c)[iVar18 * -0x19] = 0x836af5;
                  piVar8 = (int *)FUN_0092f630();
                  piVar6[0x15] = *piVar8;
                  if (DAT_01258a08 == 0) {
                    iVar19 = *(int *)(iVar19 + 0x48);
                  }
                  else {
                    iVar19 = 100000;
                  }
                  piVar6[0x16] = iVar19;
                }
                else if (((iVar7 != 0) &&
                         (local_48 = *(int *)(iVar19 + 8),
                         *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar19 + 0xc) * 4)
                                  + 0x31) == '\0')) && (1 < *(int *)(iVar19 + 0x40))) {
                  piVar6[0x12] = piVar6[0x12] + 1;
                  local_44 = (int *)piVar6[0x14];
                  local_38 = (int *)piVar6[(int)piVar8 + 2];
                  ppiVar10 = &local_44;
                  if (piVar6[0x14] <= piVar6[(int)piVar8 + 2]) {
                    ppiVar10 = &local_38;
                  }
                  piVar6[0x14] = (int)*ppiVar10;
                  local_48 = *(int *)(iVar19 + 8);
                  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar19 + 0xc) * 4) +
                               0x31) == '\0') {
                    iVar19 = *(int *)(iVar19 + 0x40);
                  }
                  else {
                    iVar19 = 1;
                  }
                  iVar5 = piVar6[0x13];
                  if (piVar6[0x13] <= iVar19) {
                    iVar5 = iVar19;
                  }
                  piVar6[0x13] = iVar5;
                }
                local_30 = (int *)((int)local_30 + 1);
              } while ((int)local_30 < (int)local_24);
            }
          }
LAB_00836b20:
        } while (local_3c != (int *)0x0);
      }
      iVar15 = local_18;
      piVar8 = local_1c;
      local_44 = (int *)((uint)local_44 & 0xffffff00);
      asStack_90[iVar18 * -0x19 + 1] = (size_t)local_44;
      asStack_90[iVar18 * -0x19] = ((int)(piVar8 + iVar15 * 0x19) - (int)piVar8) / 100;
      asStack_90[iVar18 * -0x19 + -1] = (size_t)(piVar8 + iVar15 * 0x19);
      *(int **)((int)&lStack_98 + iVar3) = piVar8;
      (&iStack_9c)[iVar18 * -0x19] = 0x836b5c;
      FUN_008486e0();
      iVar19 = *(int *)(*(int *)(local_28 + 0xbcc) + 0x78);
      iVar5 = *(int *)(*(int *)(local_28 + 0xa60) + 0x308);
      iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x5c);
      asStack_90[iVar18 * -0x19 + 1] = 0;
      asStack_90[iVar18 * -0x19] = 1000;
      *(longlong *)((int)&lStack_98 + iVar3) = (longlong)iVar7 * (longlong)(iVar5 + 1000);
      (&iStack_9c)[iVar18 * -0x19] = 0x836b9f;
      iVar5 = __alldiv();
      asStack_90[iVar18 * -0x19 + 1] = 0;
      asStack_90[iVar18 * -0x19] = 1000;
      *(longlong *)((int)&lStack_98 + iVar3) = (longlong)iVar5 * (longlong)(iVar19 + 1000);
      (&iStack_9c)[iVar18 * -0x19] = 0x836baf;
      local_3c = (int *)__alldiv();
      piVar12 = (int *)0x0;
      local_11 = '\0';
      local_30 = (int *)0x0;
      if (0 < iVar15) {
        local_24 = piVar8 + 1;
        do {
          iVar19 = *local_24;
          if ((iVar19 < 500) || ((local_24[0x11] != 0 && (2 < local_24[0x12])))) {
            if ((iVar19 < 0x18b) || (499 < iVar19)) {
              if (local_11 != '\0') break;
            }
            else {
              local_11 = '\x01';
            }
            local_2c = (int *)((int)piVar12 + 1);
            local_24[0x17] = 1;
            local_38 = (int *)0x0;
            piVar12 = local_2c;
            if (-1 < (int)local_30) {
              local_34 = (int *)((int)local_2c * 1000);
              do {
                piVar6 = local_38;
                piVar12 = local_3c;
                if (local_34 == (int *)0x0) {
                  iVar19 = -1;
                }
                else if ((int)local_3c + 0x189373U < 0x39580e) {
                  iVar19 = ((int)local_3c * 1000) / (int)local_34;
                }
                else {
                  iVar19 = (int)local_3c >> 0x1f;
                  asStack_90[iVar18 * -0x19 + 1] = 0;
                  piVar9 = local_34;
                  asStack_90[iVar18 * -0x19] = 1000;
                  asStack_90[iVar18 * -0x19 + -1] = iVar19;
                  *(int **)((int)&lStack_98 + iVar3) = piVar12;
                  local_78 = (int)piVar9 >> 0x1f;
                  (&iStack_9c)[iVar18 * -0x19] = 0x836c84;
                  uVar20 = __allmul();
                  asStack_90[iVar18 * -0x19 + 1] = local_78;
                  asStack_90[iVar18 * -0x19] = (size_t)piVar9;
                  asStack_90[iVar18 * -0x19 + -1] = (int)((ulonglong)uVar20 >> 0x20);
                  *(int *)((int)&lStack_98 + iVar3) = (int)uVar20;
                  (&iStack_9c)[iVar18 * -0x19] = 0x836c90;
                  iVar19 = __alldiv();
                  local_70 = iVar19 >> 0x1f;
                }
                iVar5 = piVar8[(int)piVar6 * 0x19 + 0x18];
                iVar7 = piVar8[(int)piVar6 * 0x19 + 0x15];
                asStack_90[iVar18 * -0x19 + 1] = 0;
                asStack_90[iVar18 * -0x19] = 1000;
                *(longlong *)((int)&lStack_98 + iVar3) = (longlong)(iVar5 * 1000) * (longlong)iVar7;
                (&iStack_9c)[iVar18 * -0x19] = 0x836cb2;
                iVar7 = __alldiv();
                asStack_90[iVar18 * -0x19 + 1] = 0;
                asStack_90[iVar18 * -0x19] = 1000;
                *(longlong *)((int)&lStack_98 + iVar3) = (longlong)iVar7 * (longlong)iVar19;
                (&iStack_9c)[iVar18 * -0x19] = 0x836cc2;
                iVar19 = __alldiv();
                if (iVar19 < piVar8[(int)piVar6 * 0x19 + 0x14]) {
                  if (2 < iVar5) {
                    if (local_30 != (int *)0x0) {
                      local_24[0x17] = 0;
                    }
                    goto LAB_00836d22;
                  }
                  local_2c = (int *)((int)local_2c + 1);
                  local_34 = (int *)((int)local_34 + 1000);
                  piVar8[(int)piVar6 * 0x19 + 0x18] = iVar5 + 1;
                  local_38 = (int *)0xffffffff;
                }
                local_38 = (int *)((int)local_38 + 1);
                piVar12 = local_2c;
                iVar15 = local_18;
                piVar8 = local_1c;
              } while ((int)local_38 <= (int)local_30);
            }
          }
          local_30 = (int *)((int)local_30 + 1);
          local_24 = local_24 + 0x19;
        } while ((int)local_30 < iVar15);
      }
LAB_00836d22:
      local_44 = (int *)(*(int *)(local_28 + 0x13f4) - *(int *)(local_28 + 0x13f0) >> 2);
      local_34 = (int *)0x0;
      iVar19 = local_18;
      if (0 < (int)local_44) {
        do {
          iVar3 = local_20;
          piVar8 = local_34;
          iVar5 = *(int *)(*(int *)(local_20 + 0xadc) + (int)local_34 * 4);
          local_74 = *(uint *)(iVar5 + 0x1c);
          local_70 = *(int *)(iVar5 + 0x20);
          iVar5 = 0;
          iVar18 = 0;
          uVar2 = (uint)local_40 >> 8;
          local_40 = (int *)((uint)local_40 & 0xffffff00);
          if (0 < iVar19) {
            iVar5 = 0;
            piVar12 = local_1c;
            do {
              if ((int *)*piVar12 == local_34) {
                local_40 = (int *)CONCAT31((int3)uVar2,(char)local_1c[iVar18 * 0x19 + 0x17]);
                if ((iVar18 != -1) && (iVar5 = local_1c[iVar18 * 0x19 + 0x18], iVar5 != 0))
                goto LAB_00836dc4;
                break;
              }
              iVar18 = iVar18 + 1;
              piVar12 = piVar12 + 0x19;
            } while (iVar18 < iVar19);
          }
          if (DAT_01258a08 == 0) {
            iVar18 = *(int *)(*(int *)(*(int *)(local_28 + 0xbe8) + local_70 * 4) + 0x48);
          }
          else {
            iVar18 = 100000;
          }
          if ((int)local_4c <= iVar18) {
LAB_00836dc4:
            *(int **)(puVar17 + -4) = local_40;
            *(int *)(puVar17 + -8) = iVar3 + 0xbe0;
            iVar18 = local_28;
            *(int *)(puVar17 + -0xc) = iVar3;
            *(int *)(puVar17 + -0x10) = iVar18;
            *(int *)(puVar17 + -0x14) = param_1;
            *(undefined4 *)(puVar17 + -0x18) = 0x836de3;
            FUN_00837330();
          }
          if (iVar5 != *(int *)(*(int *)(local_28 + 0x13f0) + (int)piVar8 * 4)) {
            *(undefined4 *)(puVar17 + -4) = 0x50;
            *(undefined4 *)(puVar17 + -8) = 0x836df8;
            iVar19 = FUN_00aae9af();
            local_8 = 0;
            local_78 = iVar19;
            if (iVar19 == 0) {
              uVar11 = 0;
            }
            else {
              *(uint **)(puVar17 + -4) = &local_74;
              *(int *)(puVar17 + -8) = param_1 + 0x34;
              *(int *)(puVar17 + -0xc) = iVar19;
              *(undefined4 *)(puVar17 + -0x10) = 0x836e1a;
              uVar11 = FUN_00586bf0();
            }
            local_8 = 0xffffffff;
            pcVar1 = *(code **)(**(int **)(local_20 + 0xb24) + 0x44);
            puVar16 = puVar17 + -4;
            *(undefined4 *)(puVar17 + -4) = 0x836e37;
            iVar19 = (*pcVar1)();
            pcVar1 = *(code **)(**(int **)(iVar19 + 0x38) + 0x18);
            *(undefined4 *)(puVar16 + -4) = uVar11;
            puVar17 = puVar16 + -8;
            *(undefined4 *)(puVar16 + -8) = 0x836e42;
            (*pcVar1)();
            iVar19 = local_18;
          }
          local_34 = (int *)((int)piVar8 + 1);
        } while ((int)local_34 < (int)local_44);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

