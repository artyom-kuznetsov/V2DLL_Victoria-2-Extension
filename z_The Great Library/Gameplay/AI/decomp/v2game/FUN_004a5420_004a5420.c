// FUN_004a5420 @ 004a5420  (requested 004A5420, first bytes: 55 8B EC 6A FF 68 3B B2)


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x004a5a9f) */
/* WARNING: Removing unreachable block (ram,0x004a5832) */
/* WARNING: Removing unreachable block (ram,0x004a594d) */
/* WARNING: Removing unreachable block (ram,0x004a5ab6) */
/* WARNING: Type propagation algorithm not settling */

void FUN_004a5420(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  uint uVar21;
  bool bVar22;
  longlong lVar23;
  undefined8 uVar24;
  int iStack_dc;
  undefined8 uStack_d8;
  uint auStack_d0 [2];
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  int local_78;
  int *local_74;
  int local_70;
  int *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  uint local_38;
  int local_34;
  undefined8 local_30;
  uint local_28;
  uint local_24;
  int local_20;
  int *local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5b23b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  local_48 = in_ECX;
  if (DAT_0125ce80 == 0) {
    auStack_d0[1] = 0x3c;
    auStack_d0[0] = 0x4a5461;
    local_5c = FUN_00aae9af();
    local_8 = 0;
    if (local_5c == 0) {
      auStack_d0[1] = 0;
    }
    else {
      auStack_d0[1] = 0x4a5475;
      auStack_d0[1] = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    auStack_d0[0] = 0x4a5486;
    FUN_004dc340();
  }
  local_68 = (int *)(DAT_0125ce80 + 0xc);
  iVar18 = *(int *)(DAT_0125ce80 + 0x10) - *(int *)(DAT_0125ce80 + 0xc) >> 2;
  auStack_d0[1] = 0x4a54a6;
  iVar10 = iVar18 * -4;
  local_40 = &stack0xffffff38 + iVar10;
  puVar20 = (undefined4 *)(&stack0xffffff38 + iVar10);
  iVar7 = iVar18;
  puVar4 = &stack0xffffff38 + iVar10;
  if (0 < iVar18) {
    for (; puVar4 = local_40, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar20 = 1000;
      puVar20 = puVar20 + 1;
    }
  }
  local_40 = puVar4;
  auStack_d0[1 - iVar18] = 0x4a54c3;
  lVar23 = FUN_00b31c36();
  auStack_d0[1 - iVar18] = extraout_ECX;
  local_80 = lVar23;
  auStack_d0[1 - iVar18] = 0x446da000;
  auStack_d0[-iVar18] = 0x4a54dc;
  FUN_00401000();
  auStack_d0[1 - iVar18] = 0x4a54e4;
  uVar6 = FUN_00b31c00();
  auStack_d0[1 - iVar18] = extraout_ECX_00;
  local_3c = (undefined1 *)uVar6;
  auStack_d0[1 - iVar18] = 0x43fa4001;
  auStack_d0[-iVar18] = 0x4a54fa;
  FUN_00401000();
  auStack_d0[1 - iVar18] = 0x4a5502;
  iVar7 = FUN_00b31c00();
  auStack_d0[1 - iVar18] = extraout_ECX_01;
  local_44 = (uint *)iVar7;
  auStack_d0[1 - iVar18] = 0x41280000;
  auStack_d0[-iVar18] = 0x4a5518;
  FUN_00401000();
  auStack_d0[1 - iVar18] = 0x4a5520;
  local_24 = FUN_00b31c00();
  local_1c = *(int **)(param_1 + 0xe44);
  piVar15 = local_68;
  while (local_68 = piVar15, local_1c != (int *)0x0) {
    iVar7 = *local_1c;
    local_1c = (int *)local_1c[2];
    iVar9 = *(int *)(iVar7 + 0x60);
    while (iVar9 != 0) {
      iVar19 = *(int *)(iVar9 + 0x224);
      if ((((*(int *)(iVar9 + 0x20) < 1) || (10 < *(int *)(iVar9 + 0x184))) ||
          (*(char *)(iVar9 + 0x188) != '\0')) ||
         (((local_28 = (uint)local_3c, *(char *)(iVar9 + 0x180) == '\0' &&
           (uVar6 = *(uint *)(iVar9 + 0x1d8) - *(uint *)(iVar9 + 0x168),
           uVar13 = uVar6 - *(uint *)(iVar9 + 0x158),
           iVar12 = ((((*(int *)(iVar9 + 0x1dc) - *(int *)(iVar9 + 0x16c)) -
                      (uint)(*(uint *)(iVar9 + 0x1d8) < *(uint *)(iVar9 + 0x168))) -
                     *(int *)(iVar9 + 0x15c)) - (uint)(uVar6 < *(uint *)(iVar9 + 0x158))) +
                    *(int *)(iVar9 + 0x174) + (uint)CARRY4(uVar13,*(uint *)(iVar9 + 0x170)) +
                    *(int *)(iVar9 + 0x164) +
                    (uint)CARRY4(uVar13 + *(uint *)(iVar9 + 0x170),*(uint *)(iVar9 + 0x160)),
           local_28 = (uint)local_3c, iVar12 < 1)) && (local_28 = (uint)local_3c, iVar12 < 0)))) {
        local_28 = local_24;
      }
      iVar9 = *(int *)(*(int *)(iVar9 + 0x18) + 0x58);
      iVar12 = *(int *)(local_40 + iVar9 * 4);
      puVar20 = (undefined4 *)(local_40 + iVar9 * 4);
      lVar23 = (longlong)(int)local_28;
      auStack_d0[1 - iVar18] = 0;
      auStack_d0[-iVar18] = 1000;
      *(longlong *)((int)&uStack_d8 + iVar10) = iVar12 * lVar23;
      (&iStack_dc)[-iVar18] = 0x4a55eb;
      uVar8 = __alldiv();
      *puVar20 = uVar8;
      iVar9 = iVar19;
    }
    if ((*(int *)(iVar7 + 0x244) == 0) && (*(int *)(iVar7 + 0x238) != 0)) {
      piVar15 = (int *)(local_40 + *(int *)(*(int *)(iVar7 + 0x238) + 0x58) * 4);
      iVar9 = *piVar15;
      lVar23 = (longlong)(int)local_44;
      auStack_d0[1 - iVar18] = 0;
      auStack_d0[-iVar18] = 1000;
      *(longlong *)((int)&uStack_d8 + iVar10) = iVar9 * lVar23;
      (&iStack_dc)[-iVar18] = 0x4a5624;
      iVar9 = __alldiv();
      *piVar15 = iVar9;
    }
    iVar9 = *(int *)(iVar7 + 0x70);
    iVar19 = 0;
    piVar15 = local_68;
    if (0 < (int)(*(int *)(iVar7 + 0x74) - iVar9 & 0xfffffff8U)) {
      local_34 = (int)local_24 >> 0x1f;
      local_38 = local_24;
      do {
        piVar15 = (int *)(local_40 + *(int *)(iVar9 + iVar19 * 8) * 4);
        iVar9 = *piVar15;
        auStack_d0[1 - iVar18] = local_34;
        auStack_d0[-iVar18] = local_38;
        *(int *)((int)&uStack_d8 + iVar10 + 4) = iVar9 >> 0x1f;
        *(int *)((int)&uStack_d8 + iVar10) = iVar9;
        (&iStack_dc)[-iVar18] = 0x4a565d;
        uVar24 = __allmul();
        auStack_d0[1 - iVar18] = 0;
        auStack_d0[-iVar18] = 1000;
        *(int *)((int)&uStack_d8 + iVar10 + 4) = (int)((ulonglong)uVar24 >> 0x20);
        *(int *)((int)&uStack_d8 + iVar10) = (int)uVar24;
        (&iStack_dc)[-iVar18] = 0x4a566b;
        iVar9 = __alldiv();
        *piVar15 = iVar9;
        iVar9 = *(int *)(iVar7 + 0x70);
        iVar19 = iVar19 + 1;
        piVar15 = local_68;
      } while (iVar19 < *(int *)(iVar7 + 0x74) - iVar9 >> 3);
    }
  }
  iVar7 = piVar15[1] - *piVar15 >> 2;
  auStack_d0[1 - iVar18] = 0x4a569d;
  local_44 = (uint *)(&stack0xffffff38 + iVar7 * -4 + iVar10);
  auStack_d0[(-iVar18 - iVar7) + 1] = 0x4a56a7;
  local_24 = *(int *)(DAT_012588e8 + 0xbcc);
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(param_1 + 0x20) * 0x10) +
                    *(int *)(*(int *)(*(int *)(local_48 + 0x6c) + 0x250) + 0x6c) * 4);
  pcVar2 = *(code **)(*piVar1 + 0x34);
  local_1c = (int *)0x0;
  piVar16 = (int *)(auStack_d0 + (iVar7 * -2 - iVar18) + 1);
  local_74 = piVar1;
  local_3c = &stack0xffffff38 + iVar7 * -8 + iVar10;
  auStack_d0[(iVar7 * -2 - iVar18) + 1] = 0x4a56ee;
  cVar5 = (*pcVar2)();
  if (cVar5 != '\0') {
    iVar7 = 1;
    iVar10 = piVar1[0x36] - piVar1[0x35] >> 3;
    if (1 < iVar10) {
      piVar1 = (int *)piVar1[0x35];
      do {
        if (piVar1[2] != 0 || piVar1[3] != 0) {
          local_15 = '\x01';
          goto LAB_004a572a;
        }
        iVar7 = iVar7 + 1;
        piVar1 = piVar1 + 2;
      } while (iVar7 < iVar10);
    }
  }
  local_15 = '\0';
LAB_004a572a:
  local_78 = DAT_012587f0;
  iVar10 = piVar15[1] - *piVar15 >> 2;
  local_60 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  local_28 = 0;
  if (0 < iVar10) {
    local_70 = (int)local_3c - (int)local_44;
    local_58 = local_44;
    local_5c = iVar10;
    do {
      piVar1 = *(int **)(*piVar15 + local_28 * 4);
      pcVar2 = *(code **)(*piVar1 + 0x24);
      puVar17 = (undefined4 *)((int)piVar16 + -4);
      piVar16 = (int *)((int)piVar16 + -4);
      local_6c = piVar1;
      *puVar17 = 0x4a5779;
      cVar5 = (*pcVar2)();
      if ((cVar5 != '\0') && (*(char *)((int)piVar1 + 0x131) == '\0')) {
        uVar8 = *(undefined4 *)(local_48 + 0x6c);
        *(undefined4 *)((int)piVar16 + -4) = 1;
        *(undefined4 *)((int)piVar16 + -8) = uVar8;
        *(undefined4 *)((int)piVar16 + -0xc) = 0x4a579f;
        cVar5 = FUN_0052ca30();
        uVar6 = local_24;
        if (cVar5 != '\0') {
          iVar10 = piVar1[0x4b];
          iVar7 = local_24 + 0x280;
          *(int *)((int)piVar16 + -4) = iVar7;
          *(int *)((int)piVar16 + -8) = iVar10 + 0x24;
          local_64 = iVar10;
          local_20 = iVar10 + 0x24;
          *(undefined4 *)((int)piVar16 + -0xc) = 0x4a57cc;
          FUN_0047e3e0();
          *(int *)((int)piVar16 + -4) = iVar7;
          *(int *)((int)piVar16 + -8) = iVar10 + 0x90;
          *(undefined4 *)((int)piVar16 + -0xc) = 0x4a57df;
          FUN_0047e3e0();
          uVar13 = (uint)*(byte *)(*(int *)(*(int *)(iVar10 + 0x80) + 8) + 8 + iVar7);
          uVar8 = *(undefined4 *)(iVar10 + 0x88);
          iVar7 = *(int *)(uVar6 + 0x2c8);
          *(undefined4 *)((int)piVar16 + -4) = *(undefined4 *)(iVar10 + 0x8c);
          uVar3 = *(undefined4 *)(iVar7 + 4 + uVar13 * 8);
          *(undefined4 *)((int)piVar16 + -8) = uVar8;
          uVar8 = *(undefined4 *)(iVar7 + uVar13 * 8);
          *(undefined4 *)((int)piVar16 + -0xc) = uVar3;
          *(undefined4 *)((int)piVar16 + -0x10) = uVar8;
          *(undefined4 *)((int)piVar16 + -0x14) = 0x4a580c;
          lVar23 = __allmul();
          lVar23 = ((lVar23 >> 0xf) - CONCAT44(local_ac,local_b0)) - CONCAT44(local_84,local_88);
          if (lVar23 < 0x320000) {
            local_a0 = lVar23;
            puVar11 = (uint *)&local_a0;
          }
          else {
            local_90 = 0x320000;
            local_8c = 0;
            puVar11 = &local_90;
          }
          local_50 = *puVar11;
          local_4c = puVar11[1];
          iVar10 = 0;
          local_30 = 0;
          local_54 = 0;
          if (0 < local_60) {
            local_20 = *(int *)(local_20 + 0x48);
            lVar23 = local_98;
            do {
              uVar6 = (uint)*(byte *)(local_64 + 0x2c + iVar10);
              local_38 = *(uint *)(local_20 + uVar6 * 8);
              local_34 = *(int *)(local_20 + 4 + uVar6 * 8);
              if ((-1 < local_34) && ((0 < local_34 || (local_38 != 0)))) {
                uVar21 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(local_78 + 0xc) + iVar10 * 4) +
                                                 8) + 0x230 + local_24);
                uVar14 = (uint)*(byte *)(local_24 + 0x10 + iVar10);
                uVar6 = *(uint *)(*(int *)(local_24 + 0x50) + uVar14 * 8);
                local_54 = local_54 + 1;
                puVar11 = (uint *)(*(int *)(local_24 + 0x270) + uVar21 * 8);
                uVar13 = uVar6 - *puVar11;
                iVar7 = (*(int *)(*(int *)(local_24 + 0x50) + 4 + uVar14 * 8) -
                        *(int *)(*(int *)(local_24 + 0x270) + 4 + uVar21 * 8)) -
                        (uint)(uVar6 < *puVar11);
                if (iVar7 < 0) {
                  local_50 = 0xffff8000;
                  local_4c = 0xffffffff;
                  local_30 = 0xffffffffffff8000;
                  break;
                }
                if ((local_34 <= iVar7) && ((local_34 < iVar7 || (local_38 < uVar13)))) {
                  local_98 = lVar23;
                  *(int *)((int)piVar16 + -4) = local_34;
                  *(uint *)((int)piVar16 + -8) = local_38;
                  *(uint *)((int)piVar16 + -0xc) = iVar7 * 0x8000 | uVar13 >> 0x11;
                  *(uint *)((int)piVar16 + -0x10) = uVar13 * 0x8000;
                  local_a8 = 0x8000;
                  local_a4 = 0;
                  *(undefined4 *)((int)piVar16 + -0x14) = 0x4a593b;
                  lVar23 = __alldiv();
                  local_98 = lVar23;
                  if (lVar23 < 0x8000) {
                    puVar11 = (uint *)&local_98;
                  }
                  else {
                    puVar11 = &local_a8;
                  }
                  bVar22 = CARRY4((uint)local_30,*puVar11);
                  iVar7 = (uint)local_30 + *puVar11;
                  local_30 = CONCAT44(local_30._4_4_,iVar7);
                  local_30 = CONCAT44(local_30._4_4_ + puVar11[1] + (uint)bVar22,iVar7);
                }
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < local_60);
            uVar6 = local_54;
            local_98 = lVar23;
            if (0 < (int)local_54) {
              uVar21 = (uint)local_30;
              uVar13 = local_30._4_4_ << 0xf;
              uVar14 = (uint)local_30 >> 0x11;
              *(uint *)((int)piVar16 + -4) = ((int)local_54 >> 0x1f) << 0xf | local_54 >> 0x11;
              *(uint *)((int)piVar16 + -8) = uVar6 << 0xf;
              *(uint *)((int)piVar16 + -0xc) = uVar13 | uVar14;
              *(uint *)((int)piVar16 + -0x10) = uVar21 << 0xf;
              *(undefined4 *)((int)piVar16 + -0x14) = 0x4a59b4;
              local_30 = __alldiv();
            }
          }
          uVar6 = local_50;
          lVar23 = CONCAT44(local_4c,local_50);
          if (-1 < (int)local_4c) {
            uVar3 = local_30._4_4_;
            *(uint *)((int)piVar16 + -4) = local_4c;
            *(uint *)((int)piVar16 + -8) = uVar6;
            uVar8 = (uint)local_30;
            *(undefined4 *)((int)piVar16 + -0xc) = uVar3;
            *(undefined4 *)((int)piVar16 + -0x10) = uVar8;
            *(undefined4 *)((int)piVar16 + -0x14) = 0x4a59d9;
            lVar23 = __allmul();
            lVar23 = lVar23 >> 0xf;
          }
          *(undefined4 *)((int)piVar16 + -4) = 0;
          *(undefined4 *)((int)piVar16 + -8) = 0x1f40000;
          *(longlong *)((int)piVar16 + -0x10) = lVar23;
          *(undefined4 *)((int)piVar16 + -0x14) = 0x4a59f0;
          uVar24 = __allmul();
          puVar11 = local_58;
          piVar15 = local_6c;
          iVar18 = local_70;
          *local_58 = (uint)uVar24 >> 0x1e | (int)((ulonglong)uVar24 >> 0x20) << 2;
          iVar10 = *(int *)(local_64 + 0x8c);
          iVar7 = *(int *)(local_64 + 0x80);
          *(int **)(iVar18 + (int)puVar11) = piVar15;
          local_20 = iVar7;
          if ((-1 < iVar10) && ((0 < iVar10 || (*(int *)(local_64 + 0x88) != 0)))) {
            uVar6 = (uint)*(byte *)(local_24 + 0x10 + *(int *)(iVar7 + 8));
            iVar18 = *(int *)(local_24 + 0x50);
            iVar10 = *(int *)(iVar18 + 4 + uVar6 * 8);
            if ((DAT_013f368c <= iVar10) &&
               ((DAT_013f368c < iVar10 || (DAT_013f3688 < *(uint *)(iVar18 + uVar6 * 8))))) {
              local_20 = *(int *)(iVar7 + 8);
              uVar13 = (uint)*(byte *)(local_20 + 0x230 + local_24);
              uVar6 = *(uint *)(*(int *)(local_24 + 0x270) + uVar13 * 8);
              iVar10 = *(int *)(*(int *)(local_24 + 0x270) + 4 + uVar13 * 8);
              uVar13 = (uint)*(byte *)(local_20 + 0x10 + local_24);
              uVar8 = *(undefined4 *)(iVar18 + uVar13 * 8);
              *(undefined4 *)((int)piVar16 + -4) = *(undefined4 *)(iVar18 + 4 + uVar13 * 8);
              *(undefined4 *)((int)piVar16 + -8) = uVar8;
              *(uint *)((int)piVar16 + -0xc) = iVar10 << 0xf | uVar6 >> 0x11;
              *(uint *)((int)piVar16 + -0x10) = uVar6 << 0xf;
              *(undefined4 *)((int)piVar16 + -0x14) = 0x4a5a99;
              lVar23 = __alldiv();
              if (lVar23 < 0x10001) {
                if (lVar23 < local_80) {
                  lVar23 = 0;
                }
              }
              else {
                lVar23 = 0x10000;
              }
              *(undefined4 *)((int)piVar16 + -4) = 0;
              *(undefined4 *)((int)piVar16 + -8) = 0x1f40000;
              *(longlong *)((int)piVar16 + -0x10) = lVar23;
              *(undefined4 *)((int)piVar16 + -0x14) = 0x4a5ae1;
              uVar24 = __allmul();
              uVar6 = *puVar11;
              *(undefined4 *)((int)piVar16 + -4) = 0;
              *(undefined4 *)((int)piVar16 + -8) = 1000;
              *(longlong *)((int)piVar16 + -0x10) =
                   (longlong)(int)uVar6 *
                   (longlong)(int)((uint)uVar24 >> 0x1e | (int)((ulonglong)uVar24 >> 0x20) << 2);
              *(undefined4 *)((int)piVar16 + -0x14) = 0x4a5afc;
              uVar6 = __alldiv();
              piVar15 = local_6c;
              *puVar11 = uVar6;
            }
          }
          if (local_15 != '\0') {
            uVar6 = (uint)*(byte *)(*(int *)(*(int *)(piVar15[0x4b] + 0x80) + 8) + 0x94 +
                                   (int)local_74);
            uVar8 = *(undefined4 *)(local_74[0x35] + 4 + uVar6 * 8);
            uVar3 = *(undefined4 *)(local_74[0x35] + uVar6 * 8);
            *(undefined4 *)((int)piVar16 + -4) = 0;
            *(undefined4 *)((int)piVar16 + -8) = 0x1f40000;
            *(undefined4 *)((int)piVar16 + -0xc) = uVar8;
            *(undefined4 *)((int)piVar16 + -0x10) = uVar3;
            *(undefined4 *)((int)piVar16 + -0x14) = 0x4a5b3c;
            uVar24 = __allmul();
            iVar10 = ((uint)uVar24 >> 0x1e | (int)((ulonglong)uVar24 >> 0x20) << 2) + 1000;
            uVar6 = *puVar11;
            *(undefined4 *)((int)piVar16 + -4) = 0;
            *(undefined4 *)((int)piVar16 + -8) = 1000;
            *(longlong *)((int)piVar16 + -0x10) = (longlong)(int)(uVar6 + iVar10) * (longlong)iVar10
            ;
            *(undefined4 *)((int)piVar16 + -0x14) = 0x4a5b5d;
            uVar6 = __alldiv();
            *puVar11 = uVar6;
          }
          iVar10 = *(int *)(local_40 + piVar15[0x16] * 4);
          uVar6 = *puVar11;
          *(undefined4 *)((int)piVar16 + -4) = 0;
          *(undefined4 *)((int)piVar16 + -8) = 1000;
          *(longlong *)((int)piVar16 + -0x10) = (longlong)(int)uVar6 * (longlong)iVar10;
          *(undefined4 *)((int)piVar16 + -0x14) = 0x4a5b7a;
          uVar6 = __alldiv();
          iVar10 = local_5c;
          piVar15 = local_68;
          local_1c = (int *)((int)local_1c + 1);
          *puVar11 = uVar6;
          local_58 = puVar11 + 1;
        }
      }
      local_28 = local_28 + 1;
    } while ((int)local_28 < iVar10);
    if (local_1c != (int *)0x0) {
      *(undefined4 *)((int)piVar16 + -4) = 0;
      *(undefined4 *)((int)piVar16 + -8) = 0;
      *(undefined4 *)((int)piVar16 + -0xc) = 0x4a5bc0;
      iVar10 = FUN_009b7950();
      piVar15 = local_1c;
      iVar18 = 0;
      iVar7 = 0;
      if (0 < (int)local_1c) {
        do {
          if (0 < (int)local_44[iVar7]) {
            iVar18 = iVar18 + local_44[iVar7];
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)local_1c);
        if (iVar18 != 0) {
          iVar9 = 0;
          iVar7 = 0;
          do {
            if ((0 < (int)local_44[iVar7]) &&
               (iVar9 = iVar9 + local_44[iVar7], iVar10 % iVar18 < iVar9)) goto LAB_004a5c05;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)local_1c);
        }
      }
      iVar7 = -1;
LAB_004a5c05:
      if (iVar7 == -1) {
        *(undefined4 *)((int)piVar16 + -4) = 0;
        *(undefined4 *)((int)piVar16 + -8) = 0;
        *(undefined4 *)((int)piVar16 + -0xc) = 0x4a5c15;
        iVar7 = FUN_009b7950();
        iVar7 = iVar7 % (int)piVar15;
      }
      *(undefined4 *)(local_48 + 0x70) = *(undefined4 *)(local_3c + iVar7 * 4);
      ExceptionList = local_10;
      return;
    }
  }
  *(undefined4 *)(local_48 + 0x7c) = 4;
  *(undefined4 *)(local_48 + 0x70) = 0;
  *(undefined4 *)(local_48 + 0x74) = 0;
  *(undefined4 *)(local_48 + 0x78) = 0;
  ExceptionList = local_10;
  return;
}

