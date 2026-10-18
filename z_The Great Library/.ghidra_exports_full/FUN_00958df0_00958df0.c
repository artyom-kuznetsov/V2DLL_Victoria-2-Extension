// FUN_00958df0 @ 00958df0 body=[[00958df0, 009593d9] [009593e0, 00959576] [00959580, 00959997]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0095928c) */
/* WARNING: Removing unreachable block (ram,0x009596c0) */
/* WARNING: Removing unreachable block (ram,0x009592a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00958df0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int in_EAX;
  uint *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 *local_38;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  char local_5;
  
  if ((_DAT_013f2a70 & 1) == 0) {
    _DAT_013f2a70 = _DAT_013f2a70 | 1;
    DAT_013f2a68 = 0x8000;
    DAT_013f2a6c = 0;
  }
  local_6c._0_4_ = *(uint *)(*(int *)(in_EAX + 100) + 0x128);
  iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_EAX + 100) + 300) * 4);
  local_c = iVar8;
  puVar6 = (uint *)FUN_009659f0();
  uVar14 = __alldiv(*puVar6 << 0xf,puVar6[1] << 0xf | *puVar6 >> 0x11);
  puVar6 = (uint *)(in_EAX + 0x128);
  uVar1 = *puVar6;
  *puVar6 = *puVar6 + (uint)uVar14;
  local_54._0_4_ = 0x8000;
  local_54._4_4_ = 0;
  local_54 = 0x8000;
  *(int *)(in_EAX + 300) =
       *(int *)(in_EAX + 300) + (int)((ulonglong)uVar14 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar14);
  local_6c._4_4_ = *(int *)(in_EAX + 300);
  local_6c._0_4_ = *(uint *)(in_EAX + 0x128);
  uVar14 = *(undefined8 *)(in_EAX + 0x128);
  local_64._0_4_ = DAT_0131b7f0;
  local_64._4_4_ = DAT_0131b7f4;
  lVar16 = CONCAT44(DAT_0131b7f4,DAT_0131b7f0);
  if ((local_6c._4_4_ < DAT_0131b7f4) ||
     ((local_6c._4_4_ <= DAT_0131b7f4 && ((uint)local_6c <= DAT_0131b7f0)))) {
    puVar6 = (uint *)&local_64;
  }
  else {
    puVar6 = (uint *)&local_6c;
  }
  local_5c._4_4_ = puVar6[1];
  lVar15 = *(longlong *)puVar6;
  local_5c._0_4_ = *puVar6;
  if (((int)local_5c._4_4_ < 1) && (((int)local_5c._4_4_ < 0 || (*puVar6 < 0x8000)))) {
    puVar7 = &local_5c;
  }
  else {
    puVar7 = &local_54;
  }
  uVar10 = *(undefined4 *)((int)puVar7 + 4);
  *(undefined4 *)(in_EAX + 0x128) = *(undefined4 *)puVar7;
  *(undefined4 *)(in_EAX + 300) = uVar10;
  iVar13 = DAT_01258a3c;
  if (0 < (int)(*(int *)(iVar8 + 0x9dc) - *(int *)(iVar8 + 0x9d8) & 0xfffffffcU)) {
    local_2c = DAT_01258a3c;
    local_54 = FUN_00b31c36();
    local_4c = FUN_00b31c36();
    local_6c = FUN_00b31c36();
    if ((_DAT_013f2a70 & 2) == 0) {
      _DAT_013f2a70 = _DAT_013f2a70 | 2;
      DAT_013f2a60 = 0x10000;
      DAT_013f2a64 = 0;
    }
    iVar8 = *(int *)(in_EAX + 100);
    if (iVar8 == 0) {
      local_5 = '\0';
    }
    else {
      local_64._0_4_ = *(uint *)(iVar8 + 0x128);
      local_5 = *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar8 + 300) * 4) + 0x12d0)
      ;
    }
    local_44._4_4_ = (longlong *)(*(int *)(iVar13 + 0x10) - *(int *)(iVar13 + 0xc) >> 2);
    local_18 = 1;
    if (1 < (int)local_44._4_4_) {
      do {
        iVar8 = *(int *)(*(int *)(local_2c + 0xc) + local_18 * 4);
        if ((((int)((double)((*(int *)(iVar8 + 0x1d0) + -43800000) / 0x18) / 365.0) < 2) ||
            (1 < (int)((double)((*(int *)(iVar8 + 0x1d4) + -43800000) / 0x18) / 365.0))) &&
           ((*(char *)(iVar8 + 0x1d8) == '\0' || (local_5 != '\0')))) {
          iVar8 = *(int *)(iVar8 + 0x28);
          iVar13 = *(int *)(*(int *)(in_EAX + 0x68) + 0x80);
          local_30 = iVar13 + iVar8 * 0x1c;
          local_28 = *(uint *)(local_30 + 8);
          local_38 = (undefined1 *)
                     (*(int *)(iVar13 + 0x10 + iVar8 * 0x1c) - *(int *)(iVar13 + 0xc + iVar8 * 0x1c)
                     >> 2);
          if ((local_38 != (undefined1 *)0x0) && (local_10 = 0, 0 < (int)local_38)) {
            do {
              iVar8 = *(int *)(*(int *)(local_30 + 0xc) + local_10 * 4);
              local_20 = 0;
              iVar13 = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8) >> 2;
              if (0 < iVar13) {
                do {
                  cVar5 = (**(code **)(**(int **)(*(int *)(iVar8 + 8) + local_20 * 4) + 0x18))();
                  if (cVar5 == '\0') goto LAB_009590ec;
                  local_20 = local_20 + 1;
                } while (local_20 < iVar13);
              }
              local_28 = __alldiv((longlong)(int)local_28 *
                                  (longlong)
                                  *(int *)(*(int *)(*(int *)(local_30 + 0xc) + local_10 * 4) + 0x20)
                                 );
              if ((int)local_28 < 1) break;
LAB_009590ec:
              local_10 = local_10 + 1;
            } while (local_10 < (int)local_38);
          }
          uVar14 = __alldiv(local_28 << 0x1e,((int)local_28 >> 0x1f) << 0x1e | local_28 >> 2);
          iVar8 = *(int *)(in_EAX + 0xcc);
          *(int *)(iVar8 + local_18 * 8) = (int)uVar14;
          *(int *)(iVar8 + 4 + local_18 * 8) = (int)((ulonglong)uVar14 >> 0x20);
        }
        else {
          iVar8 = *(int *)(in_EAX + 0xcc);
          *(undefined4 *)(iVar8 + local_18 * 8) = DAT_0131b890;
          *(undefined4 *)(iVar8 + 4 + local_18 * 8) = DAT_0131b894;
        }
        local_18 = local_18 + 1;
      } while (local_18 < (int)local_44._4_4_);
    }
    FUN_004be780();
    local_38 = (undefined1 *)(*(int *)(local_2c + 0x10) - *(int *)(local_2c + 0xc) >> 2);
    local_28 = 1;
    if (1 < (int)local_38) {
      do {
        iVar8 = *(int *)(*(int *)(local_2c + 0xc) + local_28 * 4);
        if ((((int)((double)((*(int *)(iVar8 + 0x1d0) + -43800000) / 0x18) / 365.0) < 2) ||
            (1 < (int)((double)((*(int *)(iVar8 + 0x1d4) + -43800000) / 0x18) / 365.0))) &&
           ((*(char *)(iVar8 + 0x1d8) == '\0' || (local_5 != '\0')))) {
          local_34 = *(uint *)(*(int *)(in_EAX + 0xcc) + local_28 * 8);
          local_30 = *(int *)(*(int *)(in_EAX + 0xcc) + 4 + local_28 * 8);
          iVar8 = *(int *)(in_EAX + 0x7c);
          iVar13 = *(int *)(iVar8 + 4 + local_28 * 8);
          uVar1 = *(uint *)(iVar8 + local_28 * 8);
          lVar16 = CONCAT44(iVar13,uVar1);
          local_44._4_4_ = (longlong *)(iVar8 + local_28 * 8);
          uVar11 = iVar13 << 1 | uVar1 >> 0x1f;
          if ((local_30 < (int)uVar11) || ((local_30 <= (int)uVar11 && (local_34 <= uVar1 * 2)))) {
            if ((local_30 < iVar13) || ((local_30 <= iVar13 && (local_34 <= uVar1)))) {
              lVar15 = __alldiv(uVar1 << 0xf,iVar13 << 0xf | uVar1 >> 0x11);
              if (CONCAT44(local_30,local_34) < lVar15) {
                lVar16 = CONCAT44((iVar13 - local_4c._4_4_) - (uint)(uVar1 < (uint)local_4c),
                                  uVar1 - (uint)local_4c);
              }
            }
            else {
              lVar16 = local_54 + lVar16;
            }
          }
          else {
            lVar16 = local_4c + lVar16;
          }
          if (lVar16 < CONCAT44(DAT_0131b894,DAT_0131b890)) {
            lVar16 = CONCAT44(DAT_0131b894,DAT_0131b890);
          }
          *local_44._4_4_ = lVar16;
        }
        local_28 = local_28 + 1;
      } while ((int)local_28 < (int)local_38);
    }
    FUN_004be780();
    iVar8 = *(int *)(local_c + 0xa60);
    uVar1 = *(uint *)(iVar8 + 0x288);
    local_44 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
    uVar10 = DAT_013f2a68;
    local_44 = local_44 + CONCAT44(DAT_013f2a6c,DAT_013f2a68);
    lVar16 = __allmul(local_44);
    local_54 = lVar16 >> 0xf;
    lVar16 = __allmul(local_44);
    local_4c = lVar16 >> 0xf;
    uVar1 = *(uint *)(iVar8 + 0x298);
    local_5c = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
    local_5c = local_5c + CONCAT44(DAT_013f2a6c,uVar10);
    uVar1 = *(uint *)(iVar8 + 0x290);
    local_64 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
    local_64 = local_64 + CONCAT44(DAT_013f2a6c,uVar10);
    if ((_DAT_013f2a70 & 4) == 0) {
      _DAT_013f2a70 = _DAT_013f2a70 | 4;
      DAT_013f2a58 = 0xffff8000;
      DAT_013f2a5c = 0xffffffff;
    }
    iVar8 = 0;
    iVar13 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
    if (0 < iVar13) {
      do {
        iVar2 = *(int *)(in_EAX + 0xf4);
        *(undefined4 *)(iVar2 + iVar8 * 8) = DAT_0131b890;
        *(undefined4 *)(iVar2 + 4 + iVar8 * 8) = DAT_0131b894;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar13);
    }
    local_20 = 1;
    local_10 = *(int *)(local_c + 0x894) - *(int *)(local_c + 0x890) >> 2;
    if (1 < local_10) {
      do {
        local_44._4_4_ = *(longlong **)(*(int *)(*(int *)(local_c + 0x890) + local_20 * 4) + 0x50);
        local_38 = (undefined1 *)
                   (*(int *)(*(int *)(in_EAX + 0x68) + 0x70) + (int)local_44._4_4_ * 0x1c);
        local_28 = *(uint *)((int)local_38 + 8);
        local_30 = *(int *)((int)local_38 + 0x10) - *(int *)((int)local_38 + 0xc) >> 2;
        if ((local_30 != 0) && (local_18 = 0, 0 < local_30)) {
          do {
            iVar8 = *(int *)(*(int *)((int)local_38 + 0xc) + local_18 * 4);
            local_2c = 0;
            iVar13 = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8) >> 2;
            if (0 < iVar13) {
              do {
                cVar5 = (**(code **)(**(int **)(*(int *)(iVar8 + 8) + local_2c * 4) + 0x18))();
                if (cVar5 == '\0') goto LAB_009594e2;
                local_2c = local_2c + 1;
              } while (local_2c < iVar13);
            }
            local_28 = __alldiv((longlong)(int)local_28 *
                                (longlong)
                                *(int *)(*(int *)(*(int *)((int)local_38 + 0xc) + local_18 * 4) +
                                        0x20));
            if ((int)local_28 < 1) break;
LAB_009594e2:
            local_18 = local_18 + 1;
          } while (local_18 < local_30);
        }
        uVar14 = __alldiv(local_28 << 0x1e,((int)local_28 >> 0x1f) << 0x1e | local_28 >> 2);
        iVar8 = *(int *)(in_EAX + 0xf4);
        *(int *)(iVar8 + (int)local_44._4_4_ * 8) = (int)uVar14;
        local_20 = local_20 + 1;
        *(int *)(iVar8 + 4 + (int)local_44._4_4_ * 8) = (int)((ulonglong)uVar14 >> 0x20);
      } while (local_20 < local_10);
    }
    FUN_004be780();
    local_38 = &stack0xffffff7c;
    _memset(&stack0xffffff7c,0,*(int *)(in_EAX + 0xa8) - *(int *)(in_EAX + 0xa4) >> 3);
    iVar13 = 1;
    iVar8 = *(int *)(local_c + 0x8a4) - *(int *)(local_c + 0x8a0) >> 2;
    puVar12 = &stack0xffffff7c;
    if (1 < iVar8) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(local_c + 0x8a0) + iVar13 * 4) + 0x50);
        iVar3 = *(int *)(in_EAX + 0xa4);
        puVar12[iVar2] = 1;
        *(undefined4 *)(iVar3 + iVar2 * 8) = DAT_0131b890;
        iVar13 = iVar13 + 1;
        *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = DAT_0131b894;
        puVar12 = local_38;
      } while (iVar13 < iVar8);
    }
    local_5 = *(char *)(local_c + 0x12d0);
    local_2c = 1;
    local_28 = *(int *)(local_c + 0x894) - *(int *)(local_c + 0x890) >> 2;
    if (1 < (int)local_28) {
      do {
        local_44._4_4_ = *(longlong **)(*(int *)(local_c + 0x890) + local_2c * 4);
        iVar8 = *(int *)((int)local_44._4_4_ + 0x50);
        if ((local_38[iVar8] == '\0') &&
           ((local_5 != '\0' || (*(int *)(*(int *)((int)local_44._4_4_ + 0x54) + 0x5c) == 1)))) {
          local_30 = iVar8 * 8;
          local_14 = *(uint *)(local_30 + *(int *)(in_EAX + 0xa4));
          local_1c = *(uint *)(local_30 + *(int *)(in_EAX + 0xf4));
          local_18 = *(int *)(local_30 + 4 + *(int *)(in_EAX + 0xf4));
          iVar8 = *(int *)(local_30 + 4 + *(int *)(in_EAX + 0xa4));
          local_20 = DAT_013f2a6c;
          uVar10 = DAT_013f2a68;
          if ((local_18 <= iVar8) && ((local_18 < iVar8 || (local_1c < local_14)))) {
            local_20 = DAT_013f2a5c;
            uVar10 = DAT_013f2a58;
          }
          lVar16 = CONCAT44(local_20,uVar10);
          iVar13 = *(int *)(*(int *)((int)local_44._4_4_ + 0x54) + 0x5c);
          if ((iVar13 == 2) || (iVar13 == 3)) {
            lVar16 = __allmul(uVar10,local_20);
            lVar16 = lVar16 >> 0xf;
          }
          local_20 = (int)((ulonglong)lVar16 >> 0x20);
          __allmul(local_14,iVar8);
          lVar16 = __allmul((int)lVar16,local_20);
          uVar11 = (uint)(lVar16 >> 0xf);
          puVar6 = (uint *)(*(int *)(in_EAX + 0xa4) + local_30);
          uVar1 = *puVar6;
          *puVar6 = *puVar6 + uVar11;
          puVar6[1] = puVar6[1] + (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) +
                      (uint)CARRY4(uVar1,uVar11);
          puVar9 = (undefined4 *)(*(int *)(in_EAX + 0xa4) + local_30);
          if (((int)puVar9[1] < 1) && ((int)puVar9[1] < 0)) {
            *puVar9 = 0;
            puVar9[1] = 0;
          }
        }
        else {
          iVar13 = *(int *)(in_EAX + 0xa4);
          *(undefined4 *)(iVar13 + iVar8 * 8) = DAT_0131b890;
          *(undefined4 *)(iVar13 + 4 + iVar8 * 8) = DAT_0131b894;
        }
        local_2c = local_2c + 1;
      } while (local_2c < (int)local_28);
    }
    FUN_004be780();
    local_44._4_4_ = (longlong *)&stack0xffffff74;
    puVar6 = (uint *)FUN_00961170();
    uVar11 = *puVar6;
    *(uint *)(in_EAX + 0x1c8) = uVar11;
    uVar4 = puVar6[1];
    *(uint *)(in_EAX + 0x1cc) = uVar4;
    puVar6 = (uint *)(in_EAX + 0x120);
    uVar1 = *puVar6;
    *puVar6 = *puVar6 + uVar11;
    *(int *)(in_EAX + 0x124) = *(int *)(in_EAX + 0x124) + uVar4 + (uint)CARRY4(uVar1,uVar11);
    if ((*(int *)(in_EAX + 0x124) < 1) && (*(int *)(in_EAX + 0x124) < 0)) {
      *(undefined4 *)(in_EAX + 0x120) = 0;
      *(undefined4 *)(in_EAX + 0x124) = 0;
    }
    if ((-1 < *(int *)(in_EAX + 0x124)) &&
       ((0 < *(int *)(in_EAX + 0x124) || (0x50000 < *(uint *)(in_EAX + 0x120))))) {
      *(undefined4 *)(in_EAX + 0x120) = 0x50000;
      *(undefined4 *)(in_EAX + 0x124) = 0;
    }
    FUN_0095fcb0();
    puVar6 = (uint *)(in_EAX + 0x118);
    uVar1 = *puVar6;
    *puVar6 = *puVar6 + (uint)local_6c;
    *(int *)(in_EAX + 0x11c) =
         *(int *)(in_EAX + 0x11c) + local_6c._4_4_ + (uint)CARRY4(uVar1,(uint)local_6c);
    uVar14 = local_6c;
    lVar16 = local_64;
    lVar15 = local_5c;
    if (*(int *)(in_EAX + 0x11c) < 1) {
      if (*(int *)(in_EAX + 0x11c) < 0) {
        *(undefined4 *)(in_EAX + 0x118) = 0;
        *(undefined4 *)(in_EAX + 0x11c) = 0;
      }
      if ((*(int *)(in_EAX + 0x11c) < 0) ||
         ((*(int *)(in_EAX + 0x11c) < 1 && (*(uint *)(in_EAX + 0x118) < 0x50001))))
      goto LAB_00959862;
    }
    *(undefined4 *)(in_EAX + 0x118) = 0x50000;
    *(undefined4 *)(in_EAX + 0x11c) = 0;
  }
LAB_00959862:
  local_6c = uVar14;
  local_64 = lVar16;
  local_5c = lVar15;
  puVar9 = (undefined4 *)FUN_00957bc0();
  *(undefined4 *)(in_EAX + 0x1b8) = *puVar9;
  *(undefined4 *)(in_EAX + 0x1bc) = puVar9[1];
  puVar9 = (undefined4 *)FUN_00957bc0();
  *(undefined4 *)(in_EAX + 0x1c0) = *puVar9;
  *(undefined4 *)(in_EAX + 0x1c4) = puVar9[1];
  if (*(char *)(*(int *)(in_EAX + 0x68) + 0x3d9) == '\0') {
    iVar8 = FUN_0095a780();
    *(int *)(in_EAX + 400) = *(int *)(in_EAX + 400) + iVar8;
    iVar8 = FUN_0095aa30();
    *(int *)(in_EAX + 0x194) = *(int *)(in_EAX + 0x194) + iVar8;
    if (*(int *)(*(int *)(*(int *)(in_EAX + 100) + 0x188) + 0x84) < 1) {
      uVar10 = FUN_00963e50();
      *(undefined4 *)(in_EAX + 0x1a0) = uVar10;
    }
    iVar8 = local_c;
    if (0 < *(int *)(in_EAX + 0x58)) {
      if (0 < *(int *)(local_c + 0x7d8)) {
        uVar10 = FUN_00964150();
        *(undefined4 *)(in_EAX + 0x1a4) = uVar10;
      }
      if (0 < *(int *)(in_EAX + 0x58)) {
        if (((*(char *)(iVar8 + 0x12d0) != '\0') &&
            (*(int *)(*(int *)(*(int *)(in_EAX + 100) + 0x188) + 0x84) < 1)) &&
           (*(char *)(*(int *)(*(int *)(in_EAX + 0x6c) + 0x50) + 0x18) != '\0')) {
          uVar10 = FUN_00963fa0();
          *(undefined4 *)(in_EAX + 0x1a8) = uVar10;
        }
        if (*(int *)(in_EAX + 0x1a0) == *(int *)(in_EAX + 0x58)) {
          *(undefined4 *)(in_EAX + 0x1a4) = 0;
          *(undefined4 *)(in_EAX + 0x1a8) = 0;
        }
        if (*(char *)(*(int *)(in_EAX + 0x68) + 0x3d9) == '\0') {
          FUN_00967b10();
        }
      }
    }
  }
  return;
}

