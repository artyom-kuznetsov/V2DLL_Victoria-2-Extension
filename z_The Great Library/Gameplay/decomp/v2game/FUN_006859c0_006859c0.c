// FUN_006859c0 @ 006859c0  (requested 006859C0, first bytes: 55 8B EC 6A FF 64 A1 00)


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006859c0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  size_t _Size;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  char cVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined *puVar19;
  int iVar20;
  bool bVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  int iStackY_10b0;
  uint local_1090 [1005];
  int local_dc;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint *local_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  LARGE_INTEGER local_90;
  uint local_88;
  void *local_7c;
  void *local_78;
  uint local_74;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  LARGE_INTEGER local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_2d;
  int local_2c;
  undefined8 local_28;
  int *local_20;
  uint *local_1c;
  int *local_18;
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bba790;
  local_10 = ExceptionList;
  uStack_14 = 0x6859e2;
  ExceptionList = &local_10;
  FUN_006840f0();
  iVar16 = *(int *)(param_1 + 0xb3c);
  while (iVar16 != 0) {
    iVar16 = *(int *)(iVar16 + 8);
    FUN_0093c980();
  }
  if (DAT_0131bb34 == 0) {
    local_2c = FUN_00aae9af();
    local_8 = 0;
    if (local_2c != 0) {
      FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700();
  }
  local_18 = (int *)(DAT_0131bb34 + 0xc);
  iVar16 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_1c = (uint *)0x0;
  if (0 < iVar16) {
    do {
      FUN_0096f7c0();
      local_1c = (uint *)((int)local_1c + 1);
    } while ((int)local_1c < iVar16);
  }
  iVar20 = *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2;
  local_40._4_4_ = (-(uint)(DAT_00f09150 != 1) & 0xf) + 1;
  iVar16 = 0;
  DAT_012586f2 = 1;
  local_38._4_4_ = iVar20;
  if (0 < iVar20) {
    do {
      FUN_0051fb60();
      iVar15 = *(int *)(*(int *)(param_1 + 0xadc) + iVar16 * 4);
      *(undefined4 *)(iVar15 + 0xe80) = *(undefined4 *)(iVar15 + 0xe78);
      iVar16 = iVar16 + 1;
      *(undefined4 *)(iVar15 + 0xe84) = *(undefined4 *)(iVar15 + 0xe7c);
    } while (iVar16 < iVar20);
  }
  iVar16 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) & 0xfffffffcU)) {
    do {
      FUN_004b9c60();
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2);
  }
  iVar16 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) & 0xfffffffcU)) {
    do {
      FUN_004b1a10();
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2);
  }
  FUN_00685620();
  iVar16 = 0;
  do {
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    DAT_00f20c14 = DAT_00f20c14 + 1;
    if (DAT_00f0f6b0 == 0) {
      FUN_009b7700();
    }
    uVar14 = *(uint *)(&DAT_00f0ecf0 + DAT_00f0f6b0 * 4) ^
             (int)*(uint *)(&DAT_00f0ecf0 + DAT_00f0f6b0 * 4) >> 0xb;
    uVar14 = uVar14 ^ (uVar14 & 0xff3a58ad) << 7;
    uVar14 = uVar14 ^ (uVar14 & 0xffffdf8c) << 0xf;
    DAT_00f0f6b0 = (DAT_00f0f6b0 + 1) % 0x270;
    local_1090[iVar16] = uVar14 ^ (int)uVar14 >> 0x12;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 1000);
  iVar16 = 1;
  if (4 < (int)(*(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) & 0xfffffffcU)) {
    do {
      FUN_00508590();
      FUN_00685620();
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2);
  }
  local_20 = (int *)((-(uint)(DAT_00f09150 != 1) & 0x1f) + 1);
  local_48._4_4_ = *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2;
  iVar16 = DAT_0131bb34;
  if (DAT_0131bb34 == 0) {
    local_2c = FUN_00aae9af();
    local_8 = 1;
    if (local_2c == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = FUN_0041a160();
    }
    local_8 = 2;
    local_2c = 0;
    if ((iVar16 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  DAT_0131bb34 = iVar16;
  iVar16 = (*(int *)(param_1 + 0xb0c) + -43800000) / 0x18;
  local_1c = (uint *)0x0;
  local_c8 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  for (iVar20 = (iVar16 - (int)((float)(int)((double)iVar16 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar20; iVar20 = iVar20 - (&DAT_00f1027c)[(int)local_1c]) {
    local_1c = (uint *)((int)local_1c + 1);
  }
  iVar15 = 0;
  iVar20 = 0;
  local_28._4_4_ = (uint *)0x0;
  local_18 = (int *)0x0;
  if (1 < (int)local_1c) {
    do {
      local_28._4_4_ = (uint *)((int)local_28._4_4_ + (&DAT_00f10280)[iVar20]);
      iVar15 = iVar15 + (&DAT_00f1027c)[iVar20];
      iVar20 = iVar20 + 2;
    } while (iVar20 < (int)local_1c + -1);
  }
  if (iVar20 < (int)local_1c) {
    iVar20 = (&DAT_00f1027c)[iVar20];
  }
  else {
    iVar20 = 0;
  }
  local_c4 = (iVar16 - (int)((float)(int)((double)iVar16 / 365.0) * 365.0)) -
             (int)((int)local_28._4_4_ + iVar20 + iVar15);
  iVar16 = (*(int *)(param_1 + 0xb0c) + -43800000) / 0x18;
  iVar20 = 0;
  for (iVar16 = (iVar16 - (int)((float)(int)((double)iVar16 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar16; iVar16 = iVar16 - (&DAT_00f1027c)[iVar20]) {
    iVar20 = iVar20 + 1;
  }
  local_c0 = (&DAT_00f1027c)[iVar20];
  local_2d = DAT_01258a66;
  DAT_01258a66 = 1;
  local_8 = 3;
  local_d0 = param_1 + 0xacc;
  local_bc = local_1090;
  local_cc = DAT_012588e8;
  local_70 = local_48._4_4_ / (int)local_20;
  iVar16 = 1;
  if (local_70 < 2) {
    local_70 = 1;
  }
  local_78 = (void *)local_48._4_4_;
  local_74 = 1;
  FUN_0068f3f0();
  local_8 = 0xffffffff;
  DAT_01258a66 = local_2d;
  if (4 < (int)(*(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) & 0xfffffffcU)) {
    do {
      FUN_005091a0();
      FUN_00685620();
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2);
  }
  FUN_00685620();
  iVar16 = 0;
  if (0 < local_38._4_4_) {
    do {
      FUN_004f5bf0();
      iVar16 = iVar16 + 1;
    } while (iVar16 < local_38._4_4_);
  }
  FUN_00685620();
  iVar16 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) & 0xfffffffcU)) {
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0xacc) + iVar16 * 4) + 300) != 0) {
        FUN_004ba780();
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2);
  }
  FUN_00685620();
  iStackY_10b0 = 0x685f83;
  FUN_00489990();
  FUN_00685620();
  FUN_005b5180();
  local_2d = DAT_01258a66;
  DAT_01258a66 = 1;
  local_8 = 4;
  local_78 = (void *)local_38._4_4_;
  local_70 = local_38._4_4_ / local_40._4_4_;
  piVar8 = (int *)(param_1 + 0xadc);
  local_74 = 0;
  local_18 = piVar8;
  FUN_0068f4c0();
  local_8 = 0xffffffff;
  DAT_01258a66 = local_2d;
  FUN_00685620();
  iVar16 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xae0) - *piVar8 & 0xfffffffcU)) {
    do {
      FUN_005417d0();
      iVar16 = iVar16 + 1;
    } while (iVar16 < *(int *)(param_1 + 0xae0) - *piVar8 >> 2);
  }
  FUN_00685620();
  local_1c = (uint *)0x0;
  if (0 < (int)(*(int *)(param_1 + 0xb9c) - *(int *)(param_1 + 0xb98) & 0xfffffff0U)) {
    local_28._4_4_ = (uint *)0x0;
    do {
      piVar8 = *(int **)((int)local_28._4_4_ + *(int *)(param_1 + 0xb98));
      while (piVar8 != (int *)0x0) {
        puVar9 = (undefined4 *)*piVar8;
        piVar8 = (int *)piVar8[2];
        local_18 = piVar8;
        if ((puVar9 != (undefined4 *)0x0) && (FUN_004e1e20(), *(char *)((int)puVar9 + 0x91) != '\0')
           ) {
          iStackY_10b0 = 0x686092;
          FUN_004e5b50();
          piVar17 = (int *)((int)local_28._4_4_ + *(int *)(param_1 + 0xb98));
          for (piVar8 = (int *)*piVar17; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
            if ((undefined4 *)*piVar8 == puVar9) {
              if (piVar8 != (int *)0x0) {
                if ((char)piVar17[3] == '\0') {
                  iVar16 = piVar8[1];
                  iVar20 = piVar8[2];
                  if (iVar16 != 0) {
                    *(int *)(iVar16 + 8) = iVar20;
                  }
                  if (iVar20 != 0) {
                    *(int *)(iVar20 + 4) = iVar16;
                  }
                  if (piVar8 == (int *)*piVar17) {
                    *piVar17 = iVar20;
                  }
                  if (piVar8 == (int *)piVar17[1]) {
                    piVar17[1] = iVar16;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                *(undefined1 *)(piVar8 + 3) = 1;
              }
              break;
            }
          }
          (**(code **)*puVar9)();
          piVar8 = local_18;
        }
      }
      local_28._4_4_ = (uint *)((int)local_28._4_4_ + 0x10);
      local_1c = (uint *)((int)local_1c + 1);
    } while ((int)local_1c < *(int *)(param_1 + 0xb9c) - *(int *)(param_1 + 0xb98) >> 4);
  }
  FUN_00685620();
  if (*(char *)(DAT_012588e8 + 0xd11) == '\0') {
    if (DAT_01319b80 == (int *)0x0) {
      piVar8 = (int *)FUN_00aae9af();
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        *piVar8 = 0;
        piVar8[1] = 0;
        piVar8[2] = 0;
        piVar8[4] = 0;
        piVar8[5] = 0;
        piVar8[6] = 0;
        piVar8[8] = 0;
        piVar8[9] = 0;
        piVar8[10] = 0;
        piVar8[0xc] = 0;
        piVar8[0xd] = 0;
        piVar8[0xe] = 0;
        piVar8[0x280] = 0;
        piVar8[0x281] = 1;
        __time64((__time64_t *)0x0);
        FUN_009b7670();
        piVar8[0x280] = 0;
      }
      local_8 = 5;
      local_2c = 0;
      if ((piVar8 != DAT_01319b80) && (local_18 = DAT_01319b80, DAT_01319b80 != (int *)0x0)) {
        FUN_008a6680();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      DAT_01319b80 = piVar8;
    }
    FUN_008a7cd0();
  }
  iVar16 = 0;
  piVar8 = (int *)(*(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2);
  local_18 = piVar8;
  if (0 < (int)piVar8) {
    do {
      iVar20 = *(int *)(*(int *)(*(int *)(param_1 + 0xadc) + iVar16 * 4) + 0xe44);
      while (iVar20 != 0) {
        iVar20 = *(int *)(iVar20 + 8);
        FUN_004d3bb0();
        piVar8 = local_18;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)piVar8);
  }
  FUN_0042a130();
  FUN_00685620();
  if (*(char *)(DAT_012588e8 + 0xd11) == '\0') {
    local_18 = (int *)(*(int *)(param_1 + 0xb88) - *(int *)(param_1 + 0xb84) >> 4);
    DAT_01258a66 = 1;
    local_1c = (uint *)0x0;
    if (0 < (int)(*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xa4) & 0xfffffffcU)) {
      do {
        piVar8 = (int *)(*(int *)(param_1 + 0xa4) + (int)local_1c * 4);
        local_90.s.LowPart = *(DWORD *)(*piVar8 + 0x30);
        iVar16 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*piVar8 + 0x34) * 4);
        if (0 < (int)(*(int *)(iVar16 + 0x9dc) - *(int *)(iVar16 + 0x9d8) & 0xfffffffcU)) {
          local_90.s.LowPart = *(DWORD *)(*piVar8 + 0x30);
          uVar2 = *(undefined4 *)(*piVar8 + 0x30);
          local_50.s.HighPart = *(undefined4 *)(*piVar8 + 0x34);
          puVar18 = (undefined4 *)
                    ((*(int *)(*piVar8 + 0x34) % (int)local_18) * 0x10 + *(int *)(param_1 + 0xb84));
          local_20 = (int *)puVar18[1];
          puVar9 = (undefined4 *)FUN_00aae9af();
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = uVar2;
            puVar9[1] = local_50._4_4_;
            puVar9[2] = local_20;
            puVar9[3] = 0;
            *(undefined1 *)(puVar9 + 4) = 0;
          }
          iVar16 = puVar18[2];
          puVar18[1] = puVar9;
          puVar18[2] = iVar16 + 1;
          if (iVar16 == 0) {
            *puVar18 = puVar9;
          }
          else {
            *(undefined4 **)((int)local_20 + 0xc) = puVar9;
          }
        }
        local_1c = (uint *)((int)local_1c + 1);
      } while ((int)local_1c < *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xa4) >> 2);
    }
    DAT_01258a66 = 0;
  }
  FUN_0068d250();
  DAT_012586f2 = 0;
  if (DAT_0125899e != '\0') {
    DAT_00f20bfc = DAT_00f20bfc + 1 & 0x80000001;
    if ((int)DAT_00f20bfc < 0) {
      DAT_00f20bfc = (DAT_00f20bfc - 1 | 0xfffffffe) + 1;
    }
    if (DAT_0131bb34 == 0) {
      local_2c = FUN_00aae9af();
      local_8 = 6;
      if (local_2c == 0) {
        iVar16 = 0;
      }
      else {
        iVar16 = FUN_0041a160();
      }
      local_8 = 7;
      local_2c = 0;
      if ((iVar16 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      DAT_0131bb34 = iVar16;
    }
    puVar19 = &DAT_01262498;
    local_38._4_4_ = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    do {
      FUN_0043a880();
      FUN_0043a880();
      puVar19 = puVar19 + 0x70;
    } while ((int)puVar19 < 0x1262578);
    local_b8 = 0;
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)FUN_00aae9af();
      if (DAT_01258728 == (int *)0x0) {
        DAT_01258728 = (int *)0x0;
      }
      else {
        *DAT_01258728 = 0;
        DAT_01258728[1] = 0;
        DAT_01258728[2] = 0;
        *(undefined1 *)(DAT_01258728 + 4) = 0;
      }
    }
    iVar16 = local_38._4_4_;
    _Size = local_38._4_4_ * 8;
    local_28._4_4_ = local_1090 + local_38._4_4_ * -2 + -4;
    local_1090[local_38._4_4_ * -2 + -5] = _Size;
    local_1090[local_38._4_4_ * -2 + -6] = 0;
    local_1090[local_38._4_4_ * -2 + -7] = (uint)(local_1090 + local_38._4_4_ * -2 + -4);
    (&iStackY_10b0)[local_38._4_4_ * -2] = 0x686497;
    _memset((void *)local_1090[local_38._4_4_ * -2 + -7],local_1090[local_38._4_4_ * -2 + -6],
            local_1090[local_38._4_4_ * -2 + -5]);
    local_1090[iVar16 * -2 + -5] = 0x6864a1;
    local_1c = (uint *)&stack0xffffef60;
    iStackY_10b0 = 0x6864af;
    _memset(&stack0xffffef60,0,_Size);
    local_2c = *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2;
    local_68 = 0;
    local_20 = (int *)0x0;
    if (0 < local_2c) {
      do {
        local_18 = *(int **)(*(int *)(param_1 + 0xacc) + (int)local_20 * 4);
        iVar16 = *(int *)(*(int *)((int)local_18 + 0x58) * 0xb0 + *DAT_01258728 + 8);
        if ((((iVar16 != 0) && (DAT_01258734 != 0)) && (iVar16 != DAT_01258734 + 0x10)) &&
           ((iVar16 != 0 && (*(char *)(*(int *)(iVar16 + 0x80) + 0x3c) != '\0')))) {
          iStackY_10b0 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x14) << 0x1e;
          iVar16 = __alldiv();
          FUN_004c1180();
          iStackY_10b0 = iVar16;
          lVar22 = __allmul();
          local_b8 = (lVar22 >> 0xf) + local_b8;
        }
        if (0 < local_38._4_4_) {
          local_40._4_4_ = 0;
          local_48._4_4_ = local_38._4_4_;
          puVar10 = local_1c;
          do {
            iVar16 = *(int *)(*(int *)((int)local_18 + 0x194) + local_40._4_4_);
            while (iVar16 != 0) {
              uVar11 = *(uint *)(iVar16 + 0x180);
              iVar20 = *(int *)(iVar16 + 0x27c);
              iVar15 = *(int *)(iVar16 + 0x184);
              puVar1 = (uint *)(((int)local_28._4_4_ - (int)local_1c) + (int)puVar10);
              uVar14 = *puVar1;
              *puVar1 = *puVar1 + uVar11;
              piVar8 = (int *)(((int)local_28._4_4_ - (int)local_1c) + 4 + (int)puVar10);
              *piVar8 = *piVar8 + iVar15 + (uint)CARRY4(uVar14,uVar11);
              uVar11 = *(uint *)(iVar16 + 0x250);
              iVar16 = *(int *)(iVar16 + 0x254);
              uVar14 = *puVar10;
              *puVar10 = *puVar10 + uVar11;
              puVar10[1] = puVar10[1] + iVar16 + (uint)CARRY4(uVar14,uVar11);
              iVar16 = iVar20;
            }
            local_40._4_4_ = local_40._4_4_ + 0x10;
            puVar10 = puVar10 + 2;
            local_48._4_4_ = local_48._4_4_ + -1;
          } while (local_48._4_4_ != 0);
        }
        piVar8 = *(int **)((int)local_18 + 0xd8);
        if (piVar8 != (int *)0x0) {
          do {
            iVar16 = *(int *)(*piVar8 + 0x54);
            piVar8 = (int *)piVar8[2];
            if (iVar16 != 0) {
              bVar21 = CARRY4((uint)local_68,*(uint *)(iVar16 + 0xb8));
              local_68._0_4_ = (uint)local_68 + *(uint *)(iVar16 + 0xb8);
              local_68._4_4_ = local_68._4_4_ + *(int *)(iVar16 + 0xbc) + (uint)bVar21;
            }
          } while (piVar8 != (int *)0x0);
        }
        local_20 = (int *)((int)local_20 + 1);
      } while ((int)local_20 < local_2c);
    }
    local_b0 = 0;
    local_58 = 0;
    local_98 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_60 = 0;
    local_40._4_4_ = 0;
    if (0 < (int)(*(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) & 0xfffffffcU)) {
      do {
        iVar16 = *(int *)(*(int *)(param_1 + 0xadc) + local_40._4_4_ * 4);
        iVar20 = *(int *)(iVar16 + 0xe88);
        local_98 = CONCAT44(local_98._4_4_ + *(int *)(iVar16 + 0xe7c) +
                            (uint)CARRY4((uint)local_98,*(uint *)(iVar16 + 0xe78)),
                            (uint)local_98 + *(uint *)(iVar16 + 0xe78));
        local_2c = iVar16;
        if ((iVar20 != 0) && (*(int *)(iVar16 + 0x20) != 0)) {
          iStackY_10b0 = *(int *)(*(int *)(iVar16 + 0xa60) + 0x3c0) * 0x40000000;
          __alldiv();
          local_50.s.HighPart = *(undefined4 *)(iVar20 + 0x1c);
          iStackY_10b0 = *(int *)(iVar20 + 0x10) - *(int *)(iVar20 + 0x18);
          lVar22 = __allmul();
          local_b0 = (lVar22 >> 0xf) + local_b0;
        }
        puVar10 = (uint *)FUN_00523880();
        local_58 = CONCAT44(local_58._4_4_ + puVar10[1] + (uint)CARRY4((uint)local_58,*puVar10),
                            (uint)local_58 + *puVar10);
        iVar20 = DAT_0131bb34;
        iVar15 = local_38._4_4_;
        piVar8 = *(int **)(iVar16 + 0xe44);
        while (DAT_0131bb34 = iVar20, local_38._4_4_ = iVar15, piVar8 != (int *)0x0) {
          local_20 = (int *)piVar8[2];
          iVar16 = *piVar8;
          local_a8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
          local_a8 = CONCAT44(local_a8._4_4_ + *(int *)(iVar16 + 0x22c) +
                              (uint)CARRY4((uint)local_a8,*(uint *)(iVar16 + 0x228)),
                              (uint)local_a8 + *(uint *)(iVar16 + 0x228));
          iVar16 = *(int *)(iVar16 + 0x60);
          while (iVar20 = DAT_0131bb34, iVar15 = local_38._4_4_, piVar8 = local_20, iVar16 != 0) {
            iVar20 = *(int *)(iVar16 + 0x224);
            puVar10 = (uint *)FUN_004f5100();
            iStackY_10b0 = *(int *)(iVar16 + 0x210) << 0xf;
            uVar23 = __alldiv();
            uVar14 = (uint)uVar23 + *puVar10;
            iVar15 = *(int *)(iVar16 + 0x1d0);
            local_a0 = CONCAT44(local_a0._4_4_ +
                                (int)((ulonglong)uVar23 >> 0x20) + puVar10[1] +
                                (uint)CARRY4((uint)uVar23,*puVar10) +
                                (uint)CARRY4((uint)local_a0,uVar14),(uint)local_a0 + uVar14);
            iVar16 = iVar20;
            if (iVar15 != 0) {
              local_68 = CONCAT44(local_68._4_4_ + *(int *)(iVar15 + 0xbc) +
                                  (uint)CARRY4((uint)local_68,*(uint *)(iVar15 + 0xb8)),
                                  (uint)local_68 + *(uint *)(iVar15 + 0xb8));
            }
          }
        }
        local_18 = (int *)0x0;
        local_20 = (int *)0x0;
        do {
          piVar8 = local_18;
          if (0 < iVar15) {
            iVar16 = 0;
            do {
              if (iVar20 == 0) {
                iVar20 = FUN_00aae9af();
                local_48 = CONCAT44(iVar20,(uint)local_48);
                local_8 = 8;
                if (iVar20 == 0) {
                  iVar20 = 0;
                }
                else {
                  iVar20 = FUN_0041a160();
                }
                local_8 = 9;
                local_48._4_4_ = 0;
                if ((iVar20 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
                  FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_8 = 0xffffffff;
                iVar15 = local_38._4_4_;
                piVar8 = local_18;
                DAT_0131bb34 = iVar20;
              }
              if (*(int *)(iVar20 + 0x10) - *(int *)(iVar20 + 0xc) >> 2 < iVar16) {
                iVar20 = FUN_0096bb70();
              }
              else {
                iVar20 = *(int *)(*(int *)(iVar20 + 0xc) + iVar16 * 4);
              }
              iVar3 = *(int *)(*(int *)(*(int *)(local_2c + 0xa0) + (int)piVar8) + 0x18);
              uVar14 = *(uint *)(iVar3 + *(int *)(iVar20 + 0x28) * 8);
              local_60 = CONCAT44(local_60._4_4_ + *(int *)(iVar3 + *(int *)(iVar20 + 0x28) * 8 + 4)
                                  + (uint)CARRY4((uint)local_60,uVar14),(uint)local_60 + uVar14);
              iVar16 = iVar16 + 1;
              iVar20 = DAT_0131bb34;
            } while (iVar16 < iVar15);
          }
          local_18 = (int *)((int)piVar8 + 4);
        } while ((int)local_18 < 0xc);
        local_40._4_4_ = local_40._4_4_ + 1;
      } while (local_40._4_4_ < *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2);
    }
    iStackY_10b0 = (uint)local_60 << 0xf;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_60 = __alldiv();
    iVar20 = DAT_00f20bfc * 0x70;
    iVar16 = 0;
    local_50 = (LARGE_INTEGER)0x0;
    *(undefined4 *)(&DAT_012624e8 + iVar20) = 0;
    *(undefined4 *)(&DAT_012624ec + iVar20) = 0;
    if (1 < local_38._4_4_) {
      local_20 = (int *)((int)local_28._4_4_ + -(int)local_1c);
      local_2c = -8 - (int)local_1c;
      puVar10 = local_1c + 2;
      do {
        iStackY_10b0 = *(int *)((int)local_28._4_4_ + iVar16 * 8) << 0xf;
        uVar23 = __alldiv();
        *(int *)((int)local_28._4_4_ + iVar16 * 8) = (int)uVar23;
        *(int *)((int)local_28._4_4_ + iVar16 * 8 + 4) = (int)((ulonglong)uVar23 >> 0x20);
        iStackY_10b0 = puVar10[-2] << 0xf;
        uVar23 = __alldiv();
        *(undefined8 *)(puVar10 + -2) = uVar23;
        uVar14 = *(uint *)((int)local_28._4_4_ + iVar16 * 8);
        iVar15 = *(int *)((int)local_28._4_4_ + iVar16 * 8 + 4);
        bVar21 = CARRY4((uint)local_40,uVar14);
        local_40._0_4_ = (uint)local_40 + uVar14;
        iVar3 = *(int *)(&DAT_01262488 + iVar20);
        local_40._4_4_ = local_40._4_4_ + iVar15 + (uint)bVar21;
        local_18 = (int *)(local_2c + (int)puVar10);
        *(uint *)((int)local_18 + iVar3) = uVar14;
        *(int *)((int)local_18 + 4 + iVar3) = iVar15;
        iVar3 = *(int *)(&DAT_01262498 + iVar20);
        *(uint *)((int)local_18 + iVar3) = puVar10[-2];
        *(uint *)((int)local_18 + 4 + iVar3) = puVar10[-1];
        uVar11 = puVar10[-2];
        puVar1 = (uint *)(&DAT_012624e8 + iVar20);
        uVar14 = *puVar1;
        *puVar1 = *puVar1 + uVar11;
        *(uint *)(&DAT_012624ec + iVar20) =
             *(int *)(&DAT_012624ec + iVar20) + puVar10[-1] + (uint)CARRY4(uVar14,uVar11);
        iStackY_10b0 = *(int *)((int)puVar10 + (int)local_20) << 0xf;
        local_dc = iVar15;
        uVar23 = __alldiv();
        *(int *)((int)(puVar10 + 1) + (int)local_20) = (int)((ulonglong)uVar23 >> 0x20);
        *(int *)((int)puVar10 + (int)local_20) = (int)uVar23;
        iStackY_10b0 = *puVar10 << 0xf;
        uVar23 = __alldiv();
        *(undefined8 *)puVar10 = uVar23;
        uVar14 = *(uint *)((int)puVar10 + (int)local_20);
        local_90.s.HighPart = *(int *)((int)(puVar10 + 1) + (int)local_20);
        bVar21 = CARRY4((uint)local_48,uVar14);
        local_48._0_4_ = (uint)local_48 + uVar14;
        local_48._4_4_ = local_48._4_4_ + local_90.s.HighPart + (uint)bVar21;
        iVar15 = *(int *)(&DAT_01262488 + iVar20);
        *(uint *)(iVar15 + 8 + (int)local_18) = uVar14;
        *(undefined4 *)(iVar15 + 0xc + (int)local_18) = local_90.s.HighPart;
        puVar1 = (uint *)((int)local_18 + 8 + *(int *)(&DAT_01262498 + iVar20));
        *puVar1 = *puVar10;
        puVar1[1] = puVar10[1];
        uVar11 = *puVar10;
        puVar1 = (uint *)(&DAT_012624e8 + iVar20);
        uVar14 = *puVar1;
        *puVar1 = *puVar1 + uVar11;
        *(uint *)(&DAT_012624ec + iVar20) =
             *(int *)(&DAT_012624ec + iVar20) + puVar10[1] + (uint)CARRY4(uVar14,uVar11);
        iVar16 = iVar16 + 2;
        puVar10 = puVar10 + 4;
      } while (iVar16 < local_38._4_4_ + -1);
    }
    iVar15 = local_48._4_4_;
    if (iVar16 < local_38._4_4_) {
      iVar4 = iVar16 * 8;
      iStackY_10b0 = *(int *)((int)local_28._4_4_ + iVar4) << 0xf;
      uVar23 = __alldiv();
      *(int *)((int)local_28._4_4_ + iVar4) = (int)uVar23;
      *(int *)((int)local_28._4_4_ + iVar4 + 4) = (int)((ulonglong)uVar23 >> 0x20);
      iStackY_10b0 = local_1c[iVar16 * 2] << 0xf;
      uVar23 = __alldiv();
      local_1c[iVar16 * 2] = (uint)uVar23;
      local_1c[iVar16 * 2 + 1] = (uint)((ulonglong)uVar23 >> 0x20);
      local_50.s.LowPart = *(undefined4 *)((int)local_28._4_4_ + iVar4);
      local_90.s.HighPart = *(int *)((int)local_28._4_4_ + iVar4 + 4);
      iVar3 = *(int *)(&DAT_01262488 + iVar20);
      *(undefined4 *)(iVar3 + iVar4) = local_50.s.LowPart;
      local_50.s.HighPart = local_90.s.HighPart;
      *(undefined4 *)(iVar3 + 4 + iVar4) = local_90.s.HighPart;
      iVar3 = *(int *)(&DAT_01262498 + iVar20);
      *(uint *)(iVar3 + iVar4) = local_1c[iVar16 * 2];
      *(uint *)(iVar3 + 4 + iVar4) = local_1c[iVar16 * 2 + 1];
      uVar11 = local_1c[iVar16 * 2];
      puVar10 = (uint *)(&DAT_012624e8 + iVar20);
      uVar14 = *puVar10;
      *puVar10 = *puVar10 + uVar11;
      *(uint *)(&DAT_012624ec + iVar20) =
           *(int *)(&DAT_012624ec + iVar20) + local_1c[iVar16 * 2 + 1] + (uint)CARRY4(uVar14,uVar11)
      ;
    }
    iStackY_10b0 = DAT_0125ba88 << 0xf;
    lVar22 = __alldiv();
    uVar14 = (uint)local_48 + (uint)local_60 + (uint)local_a0;
    uVar11 = uVar14 + (uint)local_a8;
    uVar12 = uVar11 + (uint)local_98;
    uVar13 = uVar12 + (uint)local_b0;
    *(uint *)(&DAT_012624a8 + iVar20) = (uint)local_b0;
    *(int *)(&DAT_012624ac + iVar20) = local_b0._4_4_;
    *(uint *)(&DAT_012624b0 + iVar20) = (uint)local_58;
    *(int *)(&DAT_012624b4 + iVar20) = local_58._4_4_;
    *(uint *)(&DAT_012624c8 + iVar20) = (uint)local_98;
    *(int *)(&DAT_012624cc + iVar20) = local_98._4_4_;
    *(uint *)(&DAT_012624c0 + iVar20) = (uint)local_a0;
    *(int *)(&DAT_012624c4 + iVar20) = local_a0._4_4_;
    *(uint *)(&DAT_012624b8 + iVar20) = (uint)local_a8;
    *(int *)(&DAT_012624bc + iVar20) = local_a8._4_4_;
    *(longlong *)(&DAT_012624e0 + iVar20) =
         lVar22 + local_b8 +
         CONCAT44(iVar15 + local_60._4_4_ + (uint)CARRY4((uint)local_48,(uint)local_60) +
                  local_a0._4_4_ + (uint)CARRY4((uint)local_48 + (uint)local_60,(uint)local_a0) +
                  local_a8._4_4_ + (uint)CARRY4(uVar14,(uint)local_a8) + local_98._4_4_ +
                  (uint)CARRY4(uVar11,(uint)local_98) + local_b0._4_4_ +
                  (uint)CARRY4(uVar12,(uint)local_b0) + local_68._4_4_ +
                  (uint)CARRY4(uVar13,(uint)local_68),uVar13 + (uint)local_68) +
         CONCAT44(local_40._4_4_,(uint)local_40) + (longlong)local_50;
    *(longlong *)(&DAT_012624d0 + iVar20) = lVar22 + local_b8;
    *(uint *)(&DAT_012624d8 + iVar20) = (uint)local_68;
    *(int *)(&DAT_012624dc + iVar20) = local_68._4_4_;
    *(uint *)(&DAT_012624f0 + iVar20) = (uint)local_60;
    *(int *)(&DAT_012624f4 + iVar20) = local_60._4_4_;
  }
  iVar16 = DAT_0131bb34;
  local_38 = FUN_00b31c36();
  iStackY_10b0 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x14) << 0x1e;
  local_28 = local_38;
  local_50 = (LARGE_INTEGER)__alldiv();
  if (iVar16 == 0) {
    local_2c = FUN_00aae9af();
    local_8 = 10;
    if (local_2c == 0) {
      iVar16 = 0;
    }
    else {
      iVar16 = FUN_0041a160();
    }
    local_8 = 0xb;
    local_2c = 0;
    if ((iVar16 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    DAT_0131bb34 = iVar16;
  }
  local_1c = (uint *)(*(int *)(iVar16 + 0x10) - *(int *)(iVar16 + 0xc) >> 2);
  local_58 = 0;
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af();
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  local_20 = (int *)0x0;
  iVar16 = *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2;
  local_48 = CONCAT44(iVar16,(uint)local_48);
  if (0 < iVar16) {
    do {
      iVar16 = *(int *)(*(int *)(param_1 + 0xacc) + (int)local_20 * 4);
      iVar20 = *(int *)(*(int *)(iVar16 + 0x58) * 0xb0 + *DAT_01258728 + 8);
      local_2c = iVar16;
      if ((((iVar20 != 0) && (DAT_01258734 != 0)) && (iVar20 != DAT_01258734 + 0x10)) &&
         ((iVar20 != 0 && (*(char *)(*(int *)(iVar20 + 0x80) + 0x3c) != '\0')))) {
        FUN_004c1180();
        iStackY_10b0 = local_50._0_4_;
        lVar22 = __allmul();
        local_58 = (lVar22 >> 0xf) + local_58;
      }
      if (0 < (int)local_1c) {
        piVar8 = *(int **)(iVar16 + 0x194);
        local_18 = (int *)local_1c;
        do {
          for (iVar20 = *piVar8; iVar20 != 0; iVar20 = *(int *)(iVar20 + 0x27c)) {
            local_38 = local_38 + *(longlong *)(iVar20 + 0x180);
            iVar16 = local_2c;
          }
          piVar8 = piVar8 + 4;
          local_18 = (int *)((int)local_18 + -1);
        } while (local_18 != (int *)0x0);
      }
      piVar8 = *(int **)(iVar16 + 0xd8);
      while (piVar8 != (int *)0x0) {
        iVar16 = *piVar8;
        piVar8 = (int *)piVar8[2];
        if (*(int *)(iVar16 + 0x54) != 0) {
          local_28 = local_28 + *(longlong *)(*(int *)(iVar16 + 0x54) + 0xb8);
        }
      }
      local_20 = (int *)((int)local_20 + 1);
    } while ((int)local_20 < local_48._4_4_);
  }
  local_40._4_4_ = 0;
  lVar22 = local_28;
  if (0 < (int)(*(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) & 0xfffffffcU)) {
    do {
      local_28._4_4_ = (uint *)((ulonglong)lVar22 >> 0x20);
      local_28._0_4_ = (uint)lVar22;
      iVar16 = *(int *)(*(int *)(param_1 + 0xadc) + local_40._4_4_ * 4);
      puVar10 = (uint *)(iVar16 + 0xe78);
      bVar21 = CARRY4((uint)local_28,*puVar10);
      local_28._0_4_ = (uint)local_28 + *puVar10;
      iVar20 = *(int *)(iVar16 + 0xe88);
      local_28._4_4_ = (uint *)((int)local_28._4_4_ + *(int *)(iVar16 + 0xe7c) + (uint)bVar21);
      local_2c = iVar16;
      lVar5 = lVar22 + *(longlong *)puVar10;
      if ((iVar20 != 0) && (lVar5 = lVar22 + *(longlong *)puVar10, *(int *)(iVar16 + 0x20) != 0)) {
        iStackY_10b0 = *(int *)(*(int *)(iVar16 + 0xa60) + 0x3c0) * 0x40000000;
        __alldiv();
        local_90.s.HighPart = *(int *)(iVar20 + 0x1c);
        iStackY_10b0 = *(int *)(iVar20 + 0x10) - *(int *)(iVar20 + 0x18);
        lVar22 = __allmul();
        lVar5 = (lVar22 >> 0xf) + CONCAT44(local_28._4_4_,(uint)local_28);
      }
      local_20 = *(int **)(iVar16 + 0xe44);
      iVar16 = DAT_0131bb34;
      puVar10 = local_1c;
      while( true ) {
        DAT_0131bb34 = iVar16;
        local_1c = puVar10;
        if (local_20 == (int *)0x0) break;
        iVar16 = *local_20;
        uVar14 = *(uint *)(iVar16 + 0x228);
        local_28._0_4_ = (uint)lVar5 + uVar14;
        local_28._4_4_ =
             (uint *)((int)((ulonglong)lVar5 >> 0x20) + *(int *)(iVar16 + 0x22c) +
                     (uint)CARRY4((uint)lVar5,uVar14));
        lVar5 = lVar5 + *(longlong *)(iVar16 + 0x228);
        local_20 = (int *)local_20[2];
        iVar20 = *(int *)(iVar16 + 0x60);
        while (iVar16 = DAT_0131bb34, puVar10 = local_1c, iVar20 != 0) {
          iVar16 = *(int *)(iVar20 + 0x224);
          puVar10 = (uint *)FUN_004f5100();
          bVar21 = CARRY4((uint)local_28,*puVar10);
          local_28._0_4_ = (uint)local_28 + *puVar10;
          local_28._4_4_ = (uint *)((int)local_28._4_4_ + puVar10[1] + (uint)bVar21);
          iVar15 = *(int *)(iVar20 + 0x1d0);
          local_38 = local_38 + *(longlong *)(iVar20 + 0x210);
          if (iVar15 != 0) {
            bVar21 = CARRY4((uint)local_28,*(uint *)(iVar15 + 0xb8));
            local_28._0_4_ = (uint)local_28 + *(uint *)(iVar15 + 0xb8);
            local_28._4_4_ = (uint *)((int)local_28._4_4_ + *(int *)(iVar15 + 0xbc) + (uint)bVar21);
          }
          lVar5 = CONCAT44(local_28._4_4_,(uint)local_28);
          iVar20 = iVar16;
        }
      }
      local_18 = (int *)0x0;
      local_20 = (int *)0x0;
      local_28 = lVar5;
      do {
        iVar20 = 0;
        piVar8 = local_18;
        if (0 < (int)puVar10) {
          do {
            if (iVar16 == 0) {
              iVar16 = FUN_00aae9af();
              local_48 = CONCAT44(iVar16,(uint)local_48);
              local_8 = 0xc;
              if (iVar16 == 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = FUN_0041a160();
              }
              local_8 = 0xd;
              local_48 = local_48 & 0xffffffff;
              if ((iVar16 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
                FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_8 = 0xffffffff;
              puVar10 = local_1c;
              piVar8 = local_18;
              DAT_0131bb34 = iVar16;
            }
            if (*(int *)(iVar16 + 0x10) - *(int *)(iVar16 + 0xc) >> 2 < iVar20) {
              iVar16 = FUN_0096bb70();
            }
            else {
              iVar16 = *(int *)(*(int *)(iVar16 + 0xc) + iVar20 * 4);
            }
            iVar15 = *(int *)(*(int *)(*(int *)(local_2c + 0xa0) + (int)piVar8) + 0x18);
            local_38 = local_38 +
                       CONCAT44(*(undefined4 *)(iVar15 + *(int *)(iVar16 + 0x28) * 8 + 4),
                                *(undefined4 *)(iVar15 + *(int *)(iVar16 + 0x28) * 8));
            iVar20 = iVar20 + 1;
            iVar16 = DAT_0131bb34;
          } while (iVar20 < (int)puVar10);
        }
        local_18 = (int *)((int)piVar8 + 4);
      } while ((int)local_18 < 0xc);
      local_40._4_4_ = local_40._4_4_ + 1;
      lVar22 = local_28;
    } while (local_40._4_4_ < *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2);
  }
  iVar16 = DAT_0125ba88;
  iStackY_10b0 = (int)local_38 << 0xf;
  lVar22 = __alldiv();
  iStackY_10b0 = iVar16 << 0xf;
  lVar24 = __alldiv();
  lVar5 = CONCAT44(DAT_0125ba24,DAT_0125ba20);
  _DAT_0125b950 = local_58 + lVar24;
  lVar22 = (lVar22 + lVar24 + local_58 + local_28) - _DAT_0125b950;
  DAT_0125ba20 = (undefined4)lVar22;
  DAT_0125ba24 = (undefined4)((ulonglong)lVar22 >> 0x20);
  lVar22 = lVar22 - lVar5;
  DAT_0125b978 = (undefined4)lVar22;
  DAT_0125b97c = (undefined4)((ulonglong)lVar22 >> 0x20);
  FUN_0068e390();
  FUN_00683ce0();
  lVar22 = _DAT_0125b950;
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    iVar16 = *(int *)(param_1 + 0xcf4);
    cVar7 = FUN_00457a20();
    if ((cVar7 != '\0') ||
       (lVar22 = _DAT_0125b950,
       *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xdc) / 1000 <= *(int *)(iVar16 + 0x3c))) {
      *(undefined4 *)(iVar16 + 0x38) = *(undefined4 *)(param_1 + 0xb0c);
      QueryPerformanceCounter(&local_90);
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xcf4) + 0x3c);
      local_50.s.LowPart = local_90.s.LowPart;
      local_7c = (void *)0x0;
      local_78 = (void *)0x0;
      local_74 = 0;
      local_8 = 0xe;
      iStackY_10b0 = *(int *)(DAT_012586f4 + 8);
      cVar7 = FUN_0046acb0();
      if (cVar7 != '\0') {
        iVar20 = 0;
        iVar16 = (int)local_78 - (int)local_7c >> 2;
        if (0 < iVar16) {
          do {
            FUN_00457b00();
            iVar20 = iVar20 + 1;
          } while (iVar20 < iVar16);
        }
      }
      pvVar6 = local_7c;
      if (local_7c != local_78) {
        iStackY_10b0 = 0x6872ec;
        FID_conflict__memcpy(local_7c,local_78,0);
        local_78 = pvVar6;
      }
      cVar7 = FUN_0046afa0();
      if (cVar7 != '\0') {
        iVar20 = 0;
        iVar16 = (int)local_78 - (int)local_7c >> 2;
        if (0 < iVar16) {
          do {
            FUN_00457b00();
            iVar20 = iVar20 + 1;
          } while (iVar20 < iVar16);
        }
      }
      pvVar6 = local_7c;
      if (local_7c != local_78) {
        iStackY_10b0 = 0x68734b;
        FID_conflict__memcpy(local_7c,local_78,0);
        local_78 = pvVar6;
      }
      cVar7 = FUN_0046b1a0();
      if (cVar7 != '\0') {
        iVar20 = 0;
        iVar16 = (int)local_78 - (int)local_7c >> 2;
        if (0 < iVar16) {
          do {
            FUN_00457b00();
            iVar20 = iVar20 + 1;
          } while (iVar20 < iVar16);
        }
      }
      *(undefined4 *)(*(int *)(param_1 + 0xcf4) + 0x3c) = uVar2;
      local_8 = 0xffffffff;
      if (local_7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = (void *)0x0;
      local_88 = local_88 & 0xffffff00;
      FUN_00409350();
      local_8 = 0xf;
      iStackY_10b0 = 0x6873f7;
      iVar16 = FUN_00459930();
      local_8 = 0xffffffff;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (iVar16 != 0) {
        local_c0 = 0xf;
        local_c4 = 0;
        local_d4 = local_d4 & 0xffffff00;
        FUN_00409350();
        local_8 = 0x10;
        piVar8 = (int *)FUN_009c7290();
        (**(code **)(*piVar8 + 0x60))();
        local_8 = 0xffffffff;
        if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c0 = 0xf;
        local_c4 = 0;
        local_d4 = local_d4 & 0xffffff00;
      }
      local_8 = 0xffffffff;
      FUN_00457ca0();
      lVar22 = _DAT_0125b950;
    }
  }
  _DAT_0125b954 = (undefined4)((ulonglong)lVar22 >> 0x20);
  _DAT_0125b950 = (undefined4)lVar22;
  ExceptionList = local_10;
  return;
}

