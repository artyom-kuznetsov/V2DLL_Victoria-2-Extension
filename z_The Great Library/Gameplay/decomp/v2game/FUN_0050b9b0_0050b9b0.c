// FUN_0050b9b0 @ 0050b9b0  (requested 0050B9B0, first bytes: 55 8B EC 81 EC 84 00 00)


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0050c0d6) */
/* WARNING: Removing unreachable block (ram,0x0050c186) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050b9b0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  int **ppiVar15;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 uStack_a4;
  size_t asStack_9c [2];
  int *local_74 [2];
  uint local_6c;
  uint local_64;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  uint *local_20;
  undefined1 *local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  char local_5;
  undefined4 *puVar16;
  
  uVar11 = *(uint *)(*(int *)(param_1 + 0xa60) + 0x178);
  uVar1 = *(undefined4 *)(param_1 + 0xe74);
  sVar2 = *(size_t *)(param_1 + 0xe70);
  uStack_a4._4_4_ = (((int)uVar11 >> 0x1f) << 0xf | uVar11 >> 0x11) << 0xf | (uVar11 & 0x1ffff) >> 2
  ;
  asStack_9c[1] = 0;
  asStack_9c[0] = 0x1f40000;
  uStack_a4._0_4_ = uVar11 << 0x1e;
  uStack_a4 = __alldiv();
  asStack_9c[0] = sVar2;
  asStack_9c[1] = uVar1;
  local_34 = __allmul();
  local_34 = local_34 >> 0xf;
  uVar11 = *(uint *)(*(int *)(param_1 + 0xa60) + 0x180);
  uStack_a4._4_4_ = (((int)uVar11 >> 0x1f) << 0xf | uVar11 >> 0x11) << 0xf | (uVar11 & 0x1ffff) >> 2
  ;
  asStack_9c[1] = 0;
  asStack_9c[0] = 0x1f40000;
  uStack_a4._0_4_ = uVar11 << 0x1e;
  uStack_a4 = __alldiv();
  asStack_9c[0] = sVar2;
  asStack_9c[1] = uVar1;
  local_3c = __allmul();
  local_3c = local_3c >> 0xf;
  asStack_9c[1] = 0x50ba58;
  asStack_9c[param_2 * -8 + 1] = param_2 * 0x20;
  asStack_9c[param_2 * -8] = 0;
  asStack_9c[param_2 * -8 + -1] = (size_t)(local_74 + param_2 * -8 + -8);
  local_1c = (undefined1 *)(local_74 + param_2 * -8 + -8);
  *(undefined4 *)(&uStack_a4 + param_2 * -4) = 0x50ba66;
  _memset((void *)asStack_9c[param_2 * -8 + -1],asStack_9c[param_2 * -8],
          asStack_9c[param_2 * -8 + 1]);
  ppiVar15 = local_74 + param_2 * -0xc + -8;
  asStack_9c[param_2 * -8 + 1] = 0x50ba77;
  asStack_9c[param_2 * -10 + 1] = param_2 * 8;
  asStack_9c[param_2 * -10] = 0;
  asStack_9c[param_2 * -10 + -1] = (size_t)(local_74 + param_2 * -10 + -8);
  local_14 = (int *)(local_74 + param_2 * -10 + -8);
  *(undefined4 *)(&uStack_a4 + param_2 * -5) = 0x50ba85;
  _memset((void *)asStack_9c[param_2 * -10 + -1],asStack_9c[param_2 * -10],
          asStack_9c[param_2 * -10 + 1]);
  asStack_9c[param_2 * -10 + 1] = 0x50ba8f;
  asStack_9c[param_2 * -0xc + 1] = param_2 * 8;
  asStack_9c[param_2 * -0xc] = 0;
  asStack_9c[param_2 * -0xc + -1] = (size_t)(local_74 + param_2 * -0xc + -8);
  local_20 = (uint *)(local_74 + param_2 * -0xc + -8);
  *(undefined4 *)(&uStack_a4 + param_2 * -6) = 0x50ba9d;
  _memset((void *)asStack_9c[param_2 * -0xc + -1],asStack_9c[param_2 * -0xc],
          asStack_9c[param_2 * -0xc + 1]);
  local_5 = *(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20);
  if ((bool)local_5) {
    _DAT_0125db28 = 0;
    if (DAT_0125dbc0 != DAT_0125dbc4) {
      DAT_0125dbc4 = DAT_0125dbc0;
    }
    asStack_9c[param_2 * -0xc] = 0;
    asStack_9c[param_2 * -0xc + 1] = 0;
    asStack_9c[param_2 * -0xc + -1] = 0x50baf5;
    FUN_004bea40();
  }
  local_10 = (int *)0x0;
  do {
    local_44 = 0;
    local_c = (int *)0x0;
    if (0 < param_2) {
      puVar12 = (uint *)(local_1c + (int)local_10 * 8);
      do {
        if (*(int *)(param_3 + 0x10) - *(int *)(param_3 + 0xc) >> 2 < (int)local_c) {
          *(undefined4 *)((int)ppiVar15 + -4) = 0x50bb36;
          piVar9 = (int *)FUN_0096bb70();
        }
        else {
          piVar9 = *(int **)(*(int *)(param_3 + 0xc) + (int)local_c * 4);
        }
        pcVar3 = *(code **)(*piVar9 + 0x18);
        puVar16 = (undefined4 *)((int)ppiVar15 + -4);
        ppiVar15 = (int **)((int)ppiVar15 + -4);
        *puVar16 = 0x50bb4e;
        cVar8 = (*pcVar3)();
        if (cVar8 != '\0') {
          uVar11 = *(uint *)(*(int *)(param_1 + 0x1338) + (int)local_c * 4);
          *(undefined4 *)((int)ppiVar15 + -4) = 0;
          *(undefined4 *)((int)ppiVar15 + -8) = 0xc3500000;
          *(uint *)((int)ppiVar15 + -0xc) = uVar11 >> 2;
          *(uint *)((int)ppiVar15 + -0x10) = uVar11 << 0x1e;
          *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bb79;
          uVar23 = __alldiv();
          local_4c = uVar23;
          if ((int *)piVar9[0xd2] == local_10) {
            iVar13 = piVar9[0xc9];
            iVar19 = piVar9[200];
            *(undefined8 *)((int)ppiVar15 + -8) = uVar23;
            *(int *)((int)ppiVar15 + -0xc) = iVar13;
            *(int *)((int)ppiVar15 + -0x10) = iVar19;
            *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bba4;
            lVar24 = __allmul();
            uVar10 = (uint)(lVar24 >> 0xf);
            uVar11 = *puVar12;
            *puVar12 = *puVar12 + uVar10;
            puVar12[1] = puVar12[1] + (int)((ulonglong)(lVar24 >> 0xf) >> 0x20) +
                         (uint)CARRY4(uVar11,uVar10);
          }
          if ((int *)piVar9[0xda] == local_10) {
            iVar13 = piVar9[0xcb];
            iVar19 = piVar9[0xca];
            *(undefined8 *)((int)ppiVar15 + -8) = local_4c;
            *(int *)((int)ppiVar15 + -0xc) = iVar13;
            *(int *)((int)ppiVar15 + -0x10) = iVar19;
            *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bbd6;
            lVar24 = __allmul();
            uVar10 = (uint)(lVar24 >> 0xf);
            uVar11 = *puVar12;
            *puVar12 = *puVar12 + uVar10;
            puVar12[1] = puVar12[1] + (int)((ulonglong)(lVar24 >> 0xf) >> 0x20) +
                         (uint)CARRY4(uVar11,uVar10);
          }
          uVar23 = local_4c;
          if ((int *)piVar9[0xe2] == local_10) {
            iVar13 = piVar9[0xcd];
            iVar19 = piVar9[0xcc];
            *(undefined8 *)((int)ppiVar15 + -8) = local_4c;
            *(int *)((int)ppiVar15 + -0xc) = iVar13;
            *(int *)((int)ppiVar15 + -0x10) = iVar19;
            *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bc08;
            lVar24 = __allmul();
            uVar10 = (uint)(lVar24 >> 0xf);
            uVar11 = *puVar12;
            *puVar12 = *puVar12 + uVar10;
            puVar12[1] = puVar12[1] + (int)((ulonglong)(lVar24 >> 0xf) >> 0x20) +
                         (uint)CARRY4(uVar11,uVar10);
            uVar23 = local_4c;
          }
          local_4c._4_4_ = (uint *)((ulonglong)uVar23 >> 0x20);
          if ((local_5 == '\0') || (local_10 != (int *)0x3)) {
            if (local_10 == (int *)0x2) {
              if (local_3c != 0) {
                iVar13 = piVar9[0xc9];
                iVar19 = piVar9[200];
                *(uint **)((int)ppiVar15 + -4) = local_4c._4_4_;
                local_4c = uVar23;
                *(undefined4 *)((int)ppiVar15 + -8) = (undefined4)local_4c;
                *(int *)((int)ppiVar15 + -0xc) = iVar13;
                *(int *)((int)ppiVar15 + -0x10) = iVar19;
                *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bc69;
                lVar24 = __allmul();
                *(int **)((int)ppiVar15 + -4) = local_3c._4_4_;
                *(undefined4 *)((int)ppiVar15 + -8) = (undefined4)local_3c;
                *(longlong *)((int)ppiVar15 + -0x10) = lVar24 >> 0xf;
                *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bc7f;
                lVar24 = __allmul();
                uVar10 = (uint)(lVar24 >> 0xf);
                uVar11 = *puVar12;
                *puVar12 = *puVar12 + uVar10;
                puVar12[1] = puVar12[1] + (int)((ulonglong)(lVar24 >> 0xf) >> 0x20) +
                             (uint)CARRY4(uVar11,uVar10);
                uVar23 = local_4c;
              }
              uVar11 = *(int *)(*(int *)(param_1 + 0x1338) + (int)local_c * 4) -
                       *(int *)(*(int *)(param_1 + 0x1340) + (int)local_c * 4);
              if ((local_34 != 0) && (uVar11 != 0)) {
                local_6c = piVar9[200];
                iVar13 = piVar9[0xc9];
                if (local_6c != 0 || iVar13 != 0) {
                  local_4c = uVar23;
                  *(undefined4 *)((int)ppiVar15 + -4) = 0;
                  *(undefined4 *)((int)ppiVar15 + -8) = 0xc3500000;
                  *(uint *)((int)ppiVar15 + -0xc) = ((int)uVar11 >> 0x1f) << 0x1e | uVar11 >> 2;
                  *(uint *)((int)ppiVar15 + -0x10) = uVar11 * 0x40000000;
                  *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bce1;
                  uVar23 = __alldiv();
                  uVar11 = local_6c;
                  *(undefined8 *)((int)ppiVar15 + -8) = uVar23;
                  *(int *)((int)ppiVar15 + -0xc) = iVar13;
                  *(uint *)((int)ppiVar15 + -0x10) = uVar11;
                  *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bced;
                  lVar24 = __allmul();
                  *(int *)((int)ppiVar15 + -4) = local_34._4_4_;
                  *(undefined4 *)((int)ppiVar15 + -8) = (undefined4)local_34;
                  *(longlong *)((int)ppiVar15 + -0x10) = lVar24 >> 0xf;
                  *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bd03;
                  uVar25 = __allmul();
                  local_2c = (longlong)uVar25 >> 0xf;
                  iVar13 = (int)(local_2c >> 0x20);
                  uVar11 = *puVar12;
                  *puVar12 = *puVar12 + (uint)local_2c;
                  uVar6 = *puVar12;
                  puVar20 = puVar12 + 1;
                  uVar7 = (uint)CARRY4(uVar11,(uint)local_2c);
                  uVar11 = *puVar20;
                  uVar10 = *puVar20;
                  *puVar20 = uVar10 + iVar13 + uVar7;
                  if (((int)*puVar20 < 0) ||
                     ((*puVar20 == 0 || SCARRY4(uVar11,iVar13) != SCARRY4(uVar10 + iVar13,uVar7) &&
                      (uVar6 == 0)))) {
                    local_14[(int)local_c * 2] = 0;
                    local_14[(int)local_c * 2 + 1] = 0;
                    uVar23 = local_4c;
                  }
                  else {
                    *(uint *)((int)ppiVar15 + -4) = puVar12[1];
                    *(uint *)((int)ppiVar15 + -8) = uVar6;
                    *(uint *)((int)ppiVar15 + -0xc) =
                         iVar13 << 0xf | (uint)((uVar25 & 0x7fffffff8000) >> 0x20);
                    *(int *)((int)ppiVar15 + -0x10) = (int)(uVar25 & 0x7fffffff8000);
                    *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bd32;
                    uVar23 = __alldiv();
                    local_14[(int)local_c * 2] = (int)uVar23;
                    local_14[(int)local_c * 2 + 1] = (int)((ulonglong)uVar23 >> 0x20);
                    uVar23 = local_4c;
                  }
                  if (local_5 != '\0') {
                    _DAT_0125db28 = local_2c + _DAT_0125db28;
                  }
                }
              }
            }
          }
          else {
            puVar20 = (uint *)(DAT_0125dbc0 + (int)local_c * 8);
            uVar10 = *puVar12;
            uVar11 = *puVar20;
            *puVar20 = *puVar20 + uVar10;
            puVar20[1] = puVar20[1] + puVar12[1] + (uint)CARRY4(uVar11,uVar10);
          }
          uVar11 = puVar12[1];
          uVar10 = *(uint *)(param_1 + 0xe70);
          local_4c = uVar23;
          *(uint *)((int)ppiVar15 + -4) =
               -(uint)(0x10000 < *(uint *)(param_1 + 0xe70)) - *(int *)(param_1 + 0xe74);
          *(uint *)((int)ppiVar15 + -8) = 0x10000 - uVar10;
          uVar10 = *puVar12;
          *(uint *)((int)ppiVar15 + -0xc) = uVar11;
          *(uint *)((int)ppiVar15 + -0x10) = uVar10;
          *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bd92;
          lVar24 = __allmul();
          local_44 = (lVar24 >> 0xf) + local_44;
        }
        local_c = (int *)((int)local_c + 1);
        puVar12 = puVar12 + 8;
      } while ((int)local_c < param_2);
    }
    iVar13 = *(int *)(*(int *)(param_1 + 0x1234) + (int)local_10 * 4);
    local_10 = (int *)((int)local_10 + 1);
    *(undefined4 *)(iVar13 + 0x30) = (undefined4)local_44;
    *(int **)(iVar13 + 0x34) = local_44._4_4_;
  } while ((int)local_10 < 4);
  iVar13 = *(int *)(param_1 + 0x1234);
  iVar19 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x1238) - iVar13 & 0xfffffffcU)) {
    do {
      if (*(int *)(iVar13 + iVar19 * 4) != 0) {
        piVar9 = *(int **)(*(int *)(param_1 + 0x1234) + iVar19 * 4);
        *(undefined4 *)((int)ppiVar15 + -4) = 0;
        *(int *)((int)ppiVar15 + -8) = iVar19;
        *(int *)((int)ppiVar15 + -0x10) = piVar9[0xc];
        *(int *)((int)ppiVar15 + -0xc) = piVar9[0xd];
        pcVar3 = *(code **)(*piVar9 + 0x18);
        *(int ***)((int)ppiVar15 + -0x14) = local_74;
        puVar17 = (undefined4 *)((int)ppiVar15 + -0x18);
        ppiVar15 = (int **)((int)ppiVar15 + -0x18);
        *puVar17 = 0x50be23;
        (*pcVar3)();
      }
      iVar13 = *(int *)(param_1 + 0x1234);
      iVar19 = iVar19 + 1;
    } while (iVar19 < *(int *)(param_1 + 0x1238) - iVar13 >> 2);
  }
  if (0 < param_2) {
    puVar20 = (uint *)(local_1c + 0x10);
    local_1c = (undefined1 *)((int)local_14 - (int)local_20);
    local_18 = param_2;
    puVar12 = local_20;
    do {
      iVar13 = **(int **)(param_1 + 0x1234);
      uVar11 = puVar20[-4];
      *(uint *)((int)ppiVar15 + -4) = puVar20[-3];
      uVar1 = *(undefined4 *)(iVar13 + 0xc);
      *(uint *)((int)ppiVar15 + -8) = uVar11;
      uVar4 = *(undefined4 *)(iVar13 + 8);
      *(undefined4 *)((int)ppiVar15 + -0xc) = uVar1;
      *(undefined4 *)((int)ppiVar15 + -0x10) = uVar4;
      *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50be7d;
      lVar24 = __allmul();
      uVar10 = (uint)(lVar24 >> 0xf);
      *(longlong *)(puVar20 + -4) = lVar24 >> 0xf;
      uVar11 = *puVar12;
      *puVar12 = *puVar12 + uVar10;
      puVar12[1] = puVar12[1] + puVar20[-3] + (uint)CARRY4(uVar11,uVar10);
      iVar13 = *(int *)(param_1 + 0x1234);
      uVar11 = puVar20[-2];
      *(uint *)((int)ppiVar15 + -4) = puVar20[-1];
      iVar13 = *(int *)(iVar13 + 4);
      uVar1 = *(undefined4 *)(iVar13 + 0xc);
      uVar4 = *(undefined4 *)(iVar13 + 8);
      *(uint *)((int)ppiVar15 + -8) = uVar11;
      *(undefined4 *)((int)ppiVar15 + -0xc) = uVar1;
      *(undefined4 *)((int)ppiVar15 + -0x10) = uVar4;
      *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50beb0;
      lVar24 = __allmul();
      uVar10 = (uint)(lVar24 >> 0xf);
      *(longlong *)(puVar20 + -2) = lVar24 >> 0xf;
      uVar11 = *puVar12;
      *puVar12 = *puVar12 + uVar10;
      puVar12[1] = puVar12[1] + puVar20[-1] + (uint)CARRY4(uVar11,uVar10);
      iVar13 = *(int *)(*(int *)(param_1 + 0x1234) + 8);
      uVar11 = *puVar20;
      *(uint *)((int)ppiVar15 + -4) = puVar20[1];
      uVar1 = *(undefined4 *)(iVar13 + 0xc);
      *(uint *)((int)ppiVar15 + -8) = uVar11;
      uVar4 = *(undefined4 *)(iVar13 + 8);
      *(undefined4 *)((int)ppiVar15 + -0xc) = uVar1;
      *(undefined4 *)((int)ppiVar15 + -0x10) = uVar4;
      *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bee4;
      lVar24 = __allmul();
      *(longlong *)puVar20 = lVar24 >> 0xf;
      uVar1 = *(undefined4 *)(local_1c + (int)puVar12);
      uVar11 = puVar20[1];
      *(undefined4 *)((int)ppiVar15 + -4) = *(undefined4 *)(local_1c + 4 + (int)puVar12);
      uVar10 = *puVar20;
      *(undefined4 *)((int)ppiVar15 + -8) = uVar1;
      *(uint *)((int)ppiVar15 + -0xc) = uVar11;
      *(uint *)((int)ppiVar15 + -0x10) = uVar10;
      *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bf08;
      lVar24 = __allmul();
      uVar10 = (uint)(lVar24 >> 0xf);
      *(int *)(local_1c + 4 + (int)puVar12) = (int)((ulonglong)(lVar24 >> 0xf) >> 0x20);
      *(uint *)(local_1c + (int)puVar12) = uVar10;
      uVar11 = *puVar20;
      *puVar20 = *puVar20 - uVar10;
      puVar20[1] = (puVar20[1] - *(int *)(local_1c + 4 + (int)puVar12)) - (uint)(uVar11 < uVar10);
      uVar10 = *puVar20;
      uVar11 = *puVar12;
      *puVar12 = *puVar12 + uVar10;
      puVar12[1] = puVar12[1] + puVar20[1] + (uint)CARRY4(uVar11,uVar10);
      uVar11 = puVar20[2];
      iVar13 = *(int *)(param_1 + 0x1234);
      *(uint *)((int)ppiVar15 + -4) = puVar20[3];
      *(uint *)((int)ppiVar15 + -8) = uVar11;
      iVar13 = *(int *)(iVar13 + 0xc);
      uVar1 = *(undefined4 *)(iVar13 + 8);
      *(undefined4 *)((int)ppiVar15 + -0xc) = *(undefined4 *)(iVar13 + 0xc);
      *(undefined4 *)((int)ppiVar15 + -0x10) = uVar1;
      *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50bf4e;
      lVar24 = __allmul();
      uVar10 = (uint)(lVar24 >> 0xf);
      *(longlong *)(puVar20 + 2) = lVar24 >> 0xf;
      uVar11 = *puVar12;
      *puVar12 = *puVar12 + uVar10;
      puVar12[1] = puVar12[1] + puVar20[3] + (uint)CARRY4(uVar11,uVar10);
      puVar12 = puVar12 + 2;
      puVar20 = puVar20 + 8;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  piVar9 = *(int **)(param_1 + 0xe44);
  uVar25 = local_2c;
  while (piVar9 != (int *)0x0) {
    local_4c._4_4_ = (uint *)(*piVar9 + 0x48);
    local_44 = CONCAT44((int *)piVar9[2],(undefined4)local_44);
    piVar14 = *(int **)(*piVar9 + 0x48);
    puVar12 = local_4c._4_4_;
    piVar9 = (int *)piVar9[2];
    while( true ) {
      local_2c._0_4_ = (undefined4)uVar25;
      local_4c = CONCAT44(local_4c._4_4_,(undefined4)local_4c);
      if ((piVar14 < (int *)*puVar12) ||
         (local_4c = CONCAT44(local_4c._4_4_,(undefined4)local_4c), (int *)puVar12[1] <= piVar14))
      break;
      local_34._4_4_ = *(int *)(*(int *)(param_4 + 0xacc) + *piVar14 * 4);
      local_74[0] = piVar14 + 1;
      local_2c._4_4_ = 0;
      uVar25 = uVar25 & 0xffffffff;
      piVar14 = local_74[0];
      if (0 < param_2) {
        local_18 = (int)local_20 - (int)local_14;
        local_1c = (undefined1 *)0x0;
        local_10 = local_14;
        do {
          iVar13 = local_2c._4_4_;
          if (*(int *)(param_3 + 0x10) - *(int *)(param_3 + 0xc) >> 2 < local_2c._4_4_) {
            *(undefined4 *)((int)ppiVar15 + -4) = 0x50bfe9;
            local_c = (int *)FUN_0096bb70();
          }
          else {
            local_c = *(int **)(*(int *)(param_3 + 0xc) + local_2c._4_4_ * 4);
          }
          piVar9 = *(int **)(local_1c + *(int *)(local_34._4_4_ + 0x194));
          pcVar3 = *(code **)(*local_c + 0x18);
          puVar18 = (undefined4 *)((int)ppiVar15 + -4);
          ppiVar15 = (int **)((int)ppiVar15 + -4);
          *puVar18 = 0x50c00d;
          cVar8 = (*pcVar3)();
          if (((cVar8 != '\0') && (piVar9 != (int *)0x0)) &&
             ((local_24 = *(undefined4 *)(*(int *)(param_1 + 0xa0) + local_c[0xf] * 4),
              *(int *)(local_18 + (int)local_10) != 0 || *(int *)(local_18 + 4 + (int)local_10) != 0
              || (*local_10 != 0 || local_10[1] != 0)))) {
            uVar11 = *(uint *)(*(int *)(param_1 + 0x1338) + iVar13 * 4);
            local_50 = uVar11 >> 0x11;
            local_54 = uVar11 << 0xf;
            uVar11 = uVar11 - *(int *)(*(int *)(param_1 + 0x1340) + iVar13 * 4);
            local_58 = uVar11 >> 0x11;
            local_5c = uVar11 * 0x8000;
            do {
              local_3c._4_4_ = (int *)piVar9[0x9f];
              iVar13 = *(int *)(local_18 + 4 + (int)local_10);
              iVar19 = *(int *)(local_18 + (int)local_10);
              local_c = piVar9;
              if (iVar19 != 0 || iVar13 != 0) {
                uVar11 = piVar9[0x16];
                *(uint *)((int)ppiVar15 + -4) = local_50;
                *(int *)((int)ppiVar15 + -8) = local_54;
                *(uint *)((int)ppiVar15 + -0xc) = ((int)uVar11 >> 0x1f) << 0x1e | uVar11 >> 2;
                *(uint *)((int)ppiVar15 + -0x10) = uVar11 << 0x1e;
                *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50c0bb;
                uVar23 = __alldiv();
                *(int *)((int)ppiVar15 + -4) = iVar13;
                *(int *)((int)ppiVar15 + -8) = iVar19;
                *(undefined8 *)((int)ppiVar15 + -0x10) = uVar23;
                *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50c0c4;
                lVar24 = __allmul();
                lVar24 = lVar24 >> 0xf;
                local_6c = (uint)lVar24;
                if (0 < lVar24) {
                  *(longlong *)((int)ppiVar15 + -8) = lVar24;
                  *(int **)((int)ppiVar15 + -0xc) = local_c;
                  *(undefined4 *)((int)ppiVar15 + -0x10) = 0x50c0f6;
                  puVar12 = (uint *)FUN_00439780();
                  bVar22 = local_6c < *puVar12;
                  uVar11 = puVar12[1];
                  *(uint *)((int)ppiVar15 + -8) = local_6c - *puVar12;
                  *(uint *)((int)ppiVar15 + -4) =
                       ((int)((ulonglong)lVar24 >> 0x20) - uVar11) - (uint)bVar22;
                  *(undefined4 *)((int)ppiVar15 + -0xc) = 0x50c115;
                  piVar9 = (int *)FUN_0095a5f0();
                }
              }
              iVar13 = piVar9[0x16];
              iVar19 = iVar13;
              if (*(char *)(piVar9[0x1a] + 0x40) != '\0') {
                iVar19 = piVar9[0x18];
              }
              if (iVar13 != iVar19) {
                iVar19 = *local_10;
                iVar5 = local_10[1];
                if (iVar19 != 0 || iVar5 != 0) {
                  iVar21 = iVar13;
                  if (*(char *)(piVar9[0x1a] + 0x40) != '\0') {
                    iVar21 = piVar9[0x18];
                  }
                  uVar11 = iVar13 - iVar21;
                  *(uint *)((int)ppiVar15 + -4) = local_58;
                  *(int *)((int)ppiVar15 + -8) = local_5c;
                  *(uint *)((int)ppiVar15 + -0xc) = ((int)uVar11 >> 0x1f) << 0x1e | uVar11 >> 2;
                  *(uint *)((int)ppiVar15 + -0x10) = uVar11 * 0x40000000;
                  *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50c16b;
                  uVar23 = __alldiv();
                  *(int *)((int)ppiVar15 + -4) = iVar5;
                  *(int *)((int)ppiVar15 + -8) = iVar19;
                  *(undefined8 *)((int)ppiVar15 + -0x10) = uVar23;
                  *(undefined4 *)((int)ppiVar15 + -0x14) = 0x50c174;
                  lVar24 = __allmul();
                  lVar24 = lVar24 >> 0xf;
                  local_64 = (uint)lVar24;
                  if (0 < lVar24) {
                    *(longlong *)((int)ppiVar15 + -8) = lVar24;
                    *(int **)((int)ppiVar15 + -0xc) = local_c;
                    *(undefined4 *)((int)ppiVar15 + -0x10) = 0x50c1a6;
                    puVar12 = (uint *)FUN_00439780();
                    bVar22 = local_64 < *puVar12;
                    uVar11 = puVar12[1];
                    *(uint *)((int)ppiVar15 + -8) = local_64 - *puVar12;
                    *(uint *)((int)ppiVar15 + -4) =
                         ((int)((ulonglong)lVar24 >> 0x20) - uVar11) - (uint)bVar22;
                    *(undefined4 *)((int)ppiVar15 + -0xc) = 0x50c1c5;
                    FUN_0095a5f0();
                  }
                }
              }
              piVar9 = local_3c._4_4_;
              iVar13 = local_2c._4_4_;
            } while (local_3c._4_4_ != (int *)0x0);
          }
          local_1c = local_1c + 0x10;
          local_10 = local_10 + 2;
          local_2c._4_4_ = iVar13 + 1;
          uVar25 = CONCAT44(local_2c._4_4_,(undefined4)local_2c);
        } while (local_2c._4_4_ < param_2);
        piVar14 = local_74[0];
        puVar12 = local_4c._4_4_;
        piVar9 = local_44._4_4_;
      }
    }
  }
  iVar19 = 0;
  iVar13 = *(int *)(param_1 + 0xea8) - *(int *)(param_1 + 0xea4) >> 2;
  if (0 < iVar13) {
    do {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xbe8) +
                               *(int *)(*(int *)(*(int *)(param_1 + 0xea4) + iVar19 * 4) + 0x20) * 4
                               ) + 0x38);
      local_2c = uVar25;
      *(undefined4 *)((int)ppiVar15 + -8) = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)((int)ppiVar15 + -4) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)((int)ppiVar15 + -0xc) = 9;
      *(undefined4 *)((int)ppiVar15 + -0x10) = 0x50c254;
      puVar12 = (uint *)FUN_00525770();
      uVar10 = *puVar12;
      uVar6 = puVar12[1];
      iVar5 = *(int *)(*(int *)(param_1 + 0xea4) + iVar19 * 4);
      puVar12 = (uint *)(iVar5 + 0xe78);
      uVar11 = *puVar12;
      *puVar12 = *puVar12 + uVar10;
      *(int *)(iVar5 + 0xe7c) = *(int *)(iVar5 + 0xe7c) + uVar6 + (uint)CARRY4(uVar11,uVar10);
      iVar5 = *(int *)(iVar5 + (DAT_01258738 + 0xd) * 0x10);
      puVar12 = (uint *)(iVar5 + 0x30);
      uVar11 = *puVar12;
      *puVar12 = *puVar12 + uVar10;
      piVar9 = (int *)(iVar5 + 0x34);
      *piVar9 = *piVar9 + uVar6 + (uint)CARRY4(uVar11,uVar10);
      iVar19 = iVar19 + 1;
      uVar25 = local_2c;
    } while (iVar19 < iVar13);
  }
  return;
}

