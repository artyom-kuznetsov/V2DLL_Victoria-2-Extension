// FUN_00487410 @ 00487410  (requested 00487410, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x00487988) */
/* WARNING: Removing unreachable block (ram,0x004876f1) */
/* WARNING: Removing unreachable block (ram,0x00487744) */
/* WARNING: Removing unreachable block (ram,0x0048792f) */
/* WARNING: Removing unreachable block (ram,0x00487c21) */
/* WARNING: Removing unreachable block (ram,0x00487c7a) */

void FUN_00487410(int param_1,int param_2,char param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  uint local_190;
  int local_18c;
  uint local_180;
  uint local_17c;
  int local_174;
  uint local_160;
  int local_15c;
  uint local_140;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  uint local_e8;
  uint local_e4;
  undefined8 local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  uint local_88;
  int local_84;
  undefined8 local_80;
  uint local_78;
  int local_74;
  undefined8 local_70;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b733c0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_3 != '\0') {
    ExceptionList = &local_14;
    FUN_00561c40();
  }
  bVar17 = *(char *)(DAT_012588e8 + 0xd1c) == '\0';
  iVar3 = *(int *)(param_2 + 0x20);
  FUN_00561c40();
  FUN_00522cf0();
  iVar8 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  local_174 = 0;
  if (0 < iVar8) {
    do {
      iVar11 = *(int *)(param_2 + 0x12a0) + local_174 * 0x18;
      if (*(char *)(*(int *)(param_2 + 0x12a0) + 0x10 + local_174 * 0x18) == '\0') {
        local_68 = DAT_0125ba10;
        local_64 = DAT_0125ba14;
        puVar10 = &local_68;
      }
      else {
        local_d4 = *(undefined4 *)(iVar11 + 0xc);
        local_d8 = *(uint *)(iVar11 + 8);
        puVar10 = &local_d8;
      }
      uVar13 = *puVar10;
      uVar4 = puVar10[1];
      if ((DAT_0125ba14 <= (int)uVar4) && ((DAT_0125ba14 < (int)uVar4 || (DAT_0125ba10 < uVar13))))
      {
        local_88 = DAT_0125ba10;
        uVar15 = (uint)*(byte *)(param_2 + 0x118c + local_174);
        local_84 = DAT_0125ba14;
        puVar10 = (uint *)(*(int *)(param_2 + 0x11cc) + uVar15 * 8);
        local_f8 = uVar13 - *puVar10;
        local_f4 = (uVar4 - *(int *)(*(int *)(param_2 + 0x11cc) + 4 + uVar15 * 8)) -
                   (uint)(uVar13 < *puVar10);
        if ((local_f4 < DAT_0125ba14) || ((local_f4 <= DAT_0125ba14 && (local_f8 <= DAT_0125ba10))))
        {
          puVar10 = &local_88;
        }
        else {
          puVar10 = &local_f8;
        }
        uVar13 = puVar10[1];
        uVar4 = *puVar10;
        lVar20 = *(longlong *)puVar10;
        uVar15 = *(uint *)(DAT_013f2548 + (uint)(byte)(&DAT_013f2508)[local_174] * 8);
        iVar11 = *(int *)(DAT_013f2548 + 4 + (uint)(byte)(&DAT_013f2508)[local_174] * 8);
        uVar5 = *(uint *)(DAT_013f2498 + (uint)(byte)(&DAT_013f2458)[local_174] * 8);
        iVar14 = *(int *)(DAT_013f2498 + 4 + (uint)(byte)(&DAT_013f2458)[local_174] * 8);
        local_54 = iVar14 + iVar11 + (uint)CARRY4(uVar5,uVar15);
        local_58 = uVar5 + uVar15;
        local_e8 = uVar4;
        local_e4 = uVar13;
        if ((local_54 < (int)uVar13) || ((local_54 <= (int)uVar13 && (uVar5 + uVar15 <= uVar4)))) {
          puVar10 = &local_58;
        }
        else {
          puVar10 = &local_e8;
        }
        uVar6 = *puVar10;
        uVar7 = puVar10[1];
        iVar9 = *(int *)(param_1 + 0x5a4) + iVar3 * 0x58;
        bVar2 = *(byte *)(iVar9 + 8 + local_174);
        if (bVar2 == 0) {
          *(char *)(iVar9 + 8 + local_174) =
               (char)(*(int *)(iVar9 + 0x4c) - *(int *)(iVar9 + 0x48) >> 3);
          FUN_00423920();
        }
        else {
          puVar10 = (uint *)(*(int *)(iVar9 + 0x48) + (uint)bVar2 * 8);
          uVar12 = *puVar10;
          *puVar10 = *puVar10 + uVar6;
          puVar10[1] = puVar10[1] + uVar7 + (uint)CARRY4(uVar12,uVar6);
        }
        if ((DAT_0125ba14 <= (int)uVar13) &&
           ((DAT_0125ba14 < (int)uVar13 || (DAT_0125ba10 < uVar4)))) {
          uVar12 = (uint)*(byte *)(param_1 + 0x288 + local_174);
          lVar18 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x2c8) + uVar12 * 8),
                            *(undefined4 *)(*(int *)(param_1 + 0x2c8) + 4 + uVar12 * 8));
          uVar12 = *(uint *)(param_2 + 0xe78) + local_60;
          local_c8 = (int)(lVar18 >> 0xf);
          if (0 < lVar18 >> 0xf) {
            local_b8 = DAT_00f0ae10;
            local_b4 = DAT_00f0ae14;
            uVar19 = __alldiv(uVar12 * 0x8000,
                              (*(int *)(param_2 + 0xe7c) + local_5c +
                              (uint)CARRY4(*(uint *)(param_2 + 0xe78),local_60)) * 0x8000 |
                              uVar12 >> 0x11);
            local_70 = uVar19;
            lVar20 = __allmul(uVar4,uVar13);
            lVar20 = lVar20 >> 0xf;
          }
          local_140 = (uint)lVar20;
          bVar2 = *(byte *)(param_1 + 0x1d8 + local_174);
          local_80 = lVar20;
          if (bVar2 == 0) {
            *(char *)(param_1 + 0x1d8 + local_174) =
                 (char)(*(int *)(param_1 + 0x21c) - *(int *)(param_1 + 0x218) >> 3);
            FUN_00423920();
          }
          else {
            iVar9 = *(int *)(param_1 + 0x218);
            puVar10 = (uint *)(iVar9 + (uint)bVar2 * 8);
            uVar13 = *puVar10;
            *puVar10 = *puVar10 + local_140;
            piVar1 = (int *)(iVar9 + (uint)bVar2 * 8 + 4);
            *piVar1 = *piVar1 + (int)((ulonglong)lVar20 >> 0x20) + (uint)CARRY4(uVar13,local_140);
          }
        }
        uVar13 = (uint)*(byte *)(param_2 + 0xf7c + local_174);
        local_78 = *(uint *)(*(int *)(param_2 + 0xfbc) + uVar13 * 8);
        local_74 = *(int *)(*(int *)(param_2 + 0xfbc) + 4 + uVar13 * 8);
        local_a8 = uVar6;
        local_a4 = uVar7;
        if (((int)uVar7 < local_74) || (((int)uVar7 <= local_74 && (uVar6 <= local_78)))) {
          puVar10 = &local_78;
        }
        else {
          puVar10 = &local_a8;
        }
        local_104 = puVar10[1];
        local_108 = *puVar10;
        local_98 = uVar6;
        local_94 = uVar7;
        if (((int)local_104 < (int)uVar7) || (((int)local_104 <= (int)uVar7 && (*puVar10 <= uVar6)))
           ) {
          puVar10 = &local_108;
        }
        else {
          puVar10 = &local_98;
        }
        local_180 = *puVar10;
        local_17c = puVar10[1];
        local_f0 = uVar15;
        local_ec = iVar11;
        local_100 = local_180;
        local_fc = local_17c;
        if ((iVar11 < (int)local_17c) || ((iVar11 <= (int)local_17c && (uVar15 <= local_180)))) {
          puVar10 = &local_f0;
        }
        else {
          puVar10 = &local_100;
        }
        lVar20 = *(longlong *)puVar10;
        if ((DAT_0125ba14 <= (int)puVar10[1]) &&
           ((DAT_0125ba14 < (int)puVar10[1] || (DAT_0125ba10 < *puVar10)))) {
          uVar13 = (uint)*(byte *)(param_1 + 0x288 + local_174);
          lVar18 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x2c8) + uVar13 * 8),
                            *(undefined4 *)(*(int *)(param_1 + 0x2c8) + 4 + uVar13 * 8));
          lVar18 = lVar18 >> 0xf;
          if (*(longlong *)(param_2 + 0xe78) < lVar18) {
            if (bVar17) {
              *(longlong *)(param_2 + 0xe78) = lVar18;
            }
            else {
              FUN_00522910(param_2,0);
            }
            uVar13 = *(uint *)(param_2 + 0xe78);
            if (lVar18 <= *(longlong *)(param_2 + 0xe78)) goto LAB_004879f6;
            uVar19 = __alldiv(uVar13 << 0xf,*(int *)(param_2 + 0xe7c) << 0xf | uVar13 >> 0x11);
            lVar20 = __allmul(uVar19);
            lVar20 = lVar20 >> 0xf;
            FUN_00525770(6);
            *(undefined1 *)(param_2 + 0x1568) = 1;
          }
          else {
LAB_004879f6:
            FUN_00525770(6);
            *(undefined1 *)(param_2 + 0x1568) = 0;
          }
          local_18c = (int)((ulonglong)lVar20 >> 0x20);
          local_190 = (uint)lVar20;
          if ((&DAT_013f2508)[local_174] == 0) {
            (&DAT_013f2508)[local_174] = (char)(DAT_013f254c - DAT_013f2548 >> 3);
            FUN_00423920();
          }
          else {
            puVar10 = (uint *)(DAT_013f2548 + (uint)(byte)(&DAT_013f2508)[local_174] * 8);
            uVar13 = *puVar10;
            *puVar10 = *puVar10 + -local_190;
            puVar10[1] = (puVar10[1] - (local_18c + (uint)(local_190 != 0))) +
                         (uint)CARRY4(uVar13,-local_190);
          }
          bVar2 = *(byte *)(param_2 + 0x118c + local_174);
          local_e0 = lVar20;
          if (bVar2 == 0) {
            *(char *)(param_2 + 0x118c + local_174) =
                 (char)(*(int *)(param_2 + 0x11d0) - *(int *)(param_2 + 0x11cc) >> 3);
            FUN_00423920();
          }
          else {
            iVar11 = *(int *)(param_2 + 0x11cc);
            puVar10 = (uint *)(iVar11 + (uint)bVar2 * 8);
            uVar13 = *puVar10;
            *puVar10 = *puVar10 + local_190;
            piVar1 = (int *)(iVar11 + (uint)bVar2 * 8 + 4);
            *piVar1 = *piVar1 + local_18c + (uint)CARRY4(uVar13,local_190);
          }
          bVar16 = local_180 < local_190;
          local_180 = local_180 - local_190;
          local_17c = (local_17c - local_18c) - (uint)bVar16;
          if (param_3 != '\0') {
            FUN_0047da90(local_174);
            bVar2 = *(byte *)(param_1 + 0x614 + local_174);
            local_d0 = lVar20;
            if (bVar2 == 0) {
              *(char *)(param_1 + 0x614 + local_174) =
                   (char)(*(int *)(param_1 + 0x658) - *(int *)(param_1 + 0x654) >> 3);
              FUN_00423920();
            }
            else {
              iVar11 = *(int *)(param_1 + 0x654);
              puVar10 = (uint *)(iVar11 + (uint)bVar2 * 8);
              uVar13 = *puVar10;
              *puVar10 = *puVar10 + local_190;
              piVar1 = (int *)(iVar11 + (uint)bVar2 * 8 + 4);
              *piVar1 = *piVar1 + local_18c + (uint)CARRY4(uVar13,local_190);
            }
          }
        }
        local_b0 = uVar5;
        local_ac = iVar14;
        local_c0 = local_180;
        local_bc = local_17c;
        if ((iVar14 < (int)local_17c) || ((iVar14 <= (int)local_17c && (uVar5 <= local_180)))) {
          puVar10 = &local_b0;
        }
        else {
          puVar10 = &local_c0;
        }
        lVar18 = *(longlong *)puVar10;
        lVar20 = *(longlong *)puVar10;
        if ((DAT_0125ba14 <= (int)puVar10[1]) &&
           ((DAT_0125ba14 < (int)puVar10[1] || (DAT_0125ba10 < *puVar10)))) {
          uVar13 = (uint)*(byte *)(param_1 + 0x288 + local_174);
          lVar21 = __allmul(*(undefined4 *)(*(int *)(param_1 + 0x2c8) + uVar13 * 8),
                            *(undefined4 *)(*(int *)(param_1 + 0x2c8) + 4 + uVar13 * 8));
          lVar21 = lVar21 >> 0xf;
          if (*(longlong *)(param_2 + 0xe78) < lVar21) {
            if (bVar17) {
              *(longlong *)(param_2 + 0xe78) = lVar21;
            }
            else {
              FUN_00522910(param_2,0);
            }
            uVar13 = *(uint *)(param_2 + 0xe78);
            lVar20 = lVar18;
            if (*(longlong *)(param_2 + 0xe78) < lVar21) {
              uVar19 = __alldiv(uVar13 << 0xf,*(int *)(param_2 + 0xe7c) << 0xf | uVar13 >> 0x11);
              lVar20 = __allmul(uVar19);
              lVar20 = lVar20 >> 0xf;
            }
          }
          local_18c = (int)((ulonglong)lVar20 >> 0x20);
          local_190 = (uint)lVar20;
          FUN_00525770(6);
          if ((&DAT_013f2458)[local_174] == 0) {
            (&DAT_013f2458)[local_174] = (char)(DAT_013f249c - DAT_013f2498 >> 3);
            FUN_00423920();
          }
          else {
            puVar10 = (uint *)(DAT_013f2498 + (uint)(byte)(&DAT_013f2458)[local_174] * 8);
            uVar13 = *puVar10;
            *puVar10 = *puVar10 + -local_190;
            puVar10[1] = (puVar10[1] - (local_18c + (uint)(local_190 != 0))) +
                         (uint)CARRY4(uVar13,-local_190);
          }
          bVar2 = *(byte *)(param_2 + 0x118c + local_174);
          local_a0 = lVar20;
          if (bVar2 == 0) {
            *(char *)(param_2 + 0x118c + local_174) =
                 (char)(*(int *)(param_2 + 0x11d0) - *(int *)(param_2 + 0x11cc) >> 3);
            FUN_00423920();
          }
          else {
            iVar11 = *(int *)(param_2 + 0x11cc);
            puVar10 = (uint *)(iVar11 + (uint)bVar2 * 8);
            uVar13 = *puVar10;
            *puVar10 = *puVar10 + local_190;
            piVar1 = (int *)(iVar11 + (uint)bVar2 * 8 + 4);
            *piVar1 = *piVar1 + local_18c + (uint)CARRY4(uVar13,local_190);
          }
          if (param_3 != '\0') {
            FUN_0047da90(local_174);
            bVar2 = *(byte *)(param_1 + 0x614 + local_174);
            local_90 = lVar20;
            if (bVar2 == 0) {
              *(char *)(param_1 + 0x614 + local_174) =
                   (char)(*(int *)(param_1 + 0x658) - *(int *)(param_1 + 0x654) >> 3);
              FUN_00423920();
            }
            else {
              iVar11 = *(int *)(param_1 + 0x654);
              puVar10 = (uint *)(iVar11 + (uint)bVar2 * 8);
              uVar13 = *puVar10;
              *puVar10 = *puVar10 + local_190;
              piVar1 = (int *)(iVar11 + (uint)bVar2 * 8 + 4);
              *piVar1 = *piVar1 + local_18c + (uint)CARRY4(uVar13,local_190);
            }
          }
        }
        iVar14 = 1;
        iVar11 = *(int *)(param_2 + 0x1290) - *(int *)(param_2 + 0x128c) >> 3;
        if (1 < iVar11) {
          piVar1 = *(int **)(param_2 + 0x128c);
          do {
            if (piVar1[2] != 0 || piVar1[3] != 0) {
              FUN_0047dbb0();
              FUN_0047dd30();
              FUN_0047e3e0();
              local_4c = *(int *)(param_2 + 0xe7c);
              uVar13 = *(uint *)(param_2 + 0xe78);
              if ((local_15c < local_4c) || ((local_15c <= local_4c && (local_160 <= uVar13)))) {
                FUN_0047dbb0();
                FUN_0047dd30();
                FUN_0047dc20();
                if (param_3 != '\0') {
                  FUN_0047dca0();
                  FUN_0047dc20();
                }
                FUN_0047dca0();
                FUN_00525770(6);
              }
              else {
                FUN_0047dbb0();
                FUN_0047dd30();
                __alldiv(uVar13 << 0xf,local_4c << 0xf | uVar13 >> 0x11,local_160,local_15c);
                FUN_0047de60(&DAT_013f24a8);
                FUN_0047dc20();
                FUN_00525770(6);
                FUN_0047dca0();
                FUN_0047dca0();
                if (param_3 != '\0') {
                  FUN_0047dca0();
                  FUN_0047dc20();
                }
              }
              break;
            }
            iVar14 = iVar14 + 1;
            piVar1 = piVar1 + 2;
          } while (iVar14 < iVar11);
        }
      }
      local_174 = local_174 + 1;
    } while (local_174 < iVar8);
  }
  ExceptionList = local_14;
  return;
}

